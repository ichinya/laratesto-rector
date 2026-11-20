<?php

declare(strict_types=1);

namespace Tests\Feature;

use Illuminate\Foundation\Testing\TestCase;

final class HookTest extends TestCase
{
    public function testManualSetup(): void
    {
        parent::setUp();
    }
}
-----
<?php

declare(strict_types=1);

namespace Tests\Feature;

use Illuminate\Foundation\Testing\TestCase;

/* laratesto-residual(code=HTTP_UNSUPPORTED_SIGNATURE, rule=Laratesto\Rector\Rules\LaravelSourceCompatibleCallsRector, severity=manual): parent::setUp() lands on the converted Laratesto base, which provides no such method and no supported rewrite was found - migrate manually */
final class HookTest extends TestCase
{
    public function testManualSetup(): void
    {
        parent::setUp();
    }
}
