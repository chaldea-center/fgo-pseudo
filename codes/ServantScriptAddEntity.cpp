void __fastcall ServantScriptAddEntity___ctor(ServantScriptAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CEEB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_long___ctor__, method);
    byte_4B1CEEB = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_32C5964 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall ServantScriptAddEntity__CreatePrimaryKey(ServantScriptAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


UnityEngine_Vector2_o __fastcall ServantScriptAddEntity__getOffset(
        ServantScriptAddEntity_o *this,
        int32_t offsetKind,
        const MethodInfo *method)
{
  int32_t *p_offsetXEventShop; // x8
  int32_t *p_offsetYEventShop; // x9
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  switch ( offsetKind )
  {
    case 4:
      p_offsetXEventShop = &this->fields.offsetXEventShop;
      p_offsetYEventShop = &this->fields.offsetYEventShop;
      break;
    case 9:
      p_offsetXEventShop = &this->fields.offsetXGrandBoard;
      p_offsetYEventShop = &this->fields.offsetYGrandBoard;
      break;
    case 8:
      p_offsetXEventShop = &this->fields.offsetXGrandSelect;
      p_offsetYEventShop = &this->fields.offsetYGrandSelect;
      break;
    default:
      p_offsetXEventShop = &this->fields.offsetXEventReward;
      p_offsetYEventShop = &this->fields.offsetYEventReward;
      break;
  }
  v5 = (float)*p_offsetXEventShop;
  v6 = (float)*p_offsetYEventShop;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}