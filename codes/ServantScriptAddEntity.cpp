void __fastcall ServantScriptAddEntity___ctor(ServantScriptAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189BF3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4189BF3 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantScriptAddEntity__CreatePrimaryKey(ServantScriptAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


UnityEngine_Vector2_o __fastcall ServantScriptAddEntity__getOffset(
        ServantScriptAddEntity_o *this,
        int32_t offsetKind,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v4; // x9
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v3 = 28LL;
  if ( offsetKind == 4 )
    v3 = 36LL;
  if ( offsetKind == 4 )
    v4 = 32LL;
  else
    v4 = 24LL;
  v5 = (float)*(int *)((char *)&this->klass + v4);
  v6 = (float)*(int *)((char *)&this->klass + v3);
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}