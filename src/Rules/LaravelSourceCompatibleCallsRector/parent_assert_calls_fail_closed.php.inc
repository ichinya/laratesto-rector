<?php

declare(strict_types=1);

namespace Tests\Feature;

use Illuminate\Foundation\Testing\TestCase;

final class ParentAssertTest extends TestCase
{
    public function test_parent_asserts(): void
    {
        parent::assertTrue(true);
        parent::assertEquals(1, 1);
        PARENT::assertFalse(false);
        $method = 'assertSee';
        parent::{$method}('/x');
        parent::setUpBeforeClass();
    }
}
-----
<?php

declare(strict_types=1);

namespace Tests\Feature;

use Illuminate\Foundation\Testing\TestCase;

/* laratesto-residual(code=HTTP_UNSUPPORTED_SIGNATURE, rule=Laratesto\Rector\Rules\LaravelSourceCompatibleCallsRector, severity=manual): parent::assertTrue() lands on the converted Laratesto base, which provides no such method and no supported rewrite was found - migrate manually; parent::assertEquals() lands on the converted Laratesto base, which provides no such method and no supported rewrite was found - migrate manually; parent::assertFalse() lands on the converted Laratesto base, which provides no such method and no supported rewrite was found - migrate manually; dynamic parent:: method call cannot be classified, so the call would survive onto the converted base; parent::setUpBeforeClass() lands on the converted Laratesto base, which provides no such method and no supported rewrite was found - migrate manually */
final class ParentAssertTest extends TestCase
{
    public function test_parent_asserts(): void
    {
        parent::assertTrue(true);
        parent::assertEquals(1, 1);
        PARENT::assertFalse(false);
        $method = 'assertSee';
        parent::{$method}('/x');
        parent::setUpBeforeClass();
    }
}
