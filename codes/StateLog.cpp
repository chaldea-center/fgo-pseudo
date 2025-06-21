void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4B1DE4F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_4B1DE4F = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38F8EF0 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}