void ServantScriptAddEntity___ctor(ServantScriptAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59712C8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_long___ctor__);
    byte_59712C8 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3F0E560 *)Method_DataEntityBase_long___ctor__);
}


int64_t ServantScriptAddEntity__CreatePrimaryKey(ServantScriptAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


UnityEngine_Vector2_o ServantScriptAddEntity__getOffset(
        ServantScriptAddEntity_o *this,
        int32_t offsetKind,
        const MethodInfo *method)
{
  int32_t *p_offsetXEventReward; // x12
  int32_t *p_offsetYEventReward; // x13
  int32_t *p_offsetXGrandBoard; // x10
  int32_t *p_offsetYGrandBoard; // x11
  int32_t *p_offsetXEventShop; // x8
  int32_t *p_offsetYEventShop; // x9
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  p_offsetXEventReward = &this->fields.offsetXEventReward;
  p_offsetYEventReward = &this->fields.offsetYEventReward;
  p_offsetXGrandBoard = &this->fields.offsetXGrandBoard;
  p_offsetYGrandBoard = &this->fields.offsetYGrandBoard;
  if ( offsetKind == 8 )
  {
    p_offsetYEventReward = &this->fields.offsetYGrandSelect;
    p_offsetXEventReward = &this->fields.offsetXGrandSelect;
  }
  p_offsetXEventShop = &this->fields.offsetXEventShop;
  p_offsetYEventShop = &this->fields.offsetYEventShop;
  if ( offsetKind != 9 )
  {
    p_offsetYGrandBoard = p_offsetYEventReward;
    p_offsetXGrandBoard = p_offsetXEventReward;
  }
  if ( offsetKind != 4 )
  {
    p_offsetYEventShop = p_offsetYGrandBoard;
    p_offsetXEventShop = p_offsetXGrandBoard;
  }
  result.fields.x = (float)*p_offsetXEventShop;
  result.fields.y = (float)*p_offsetYEventShop;
  return result;
}