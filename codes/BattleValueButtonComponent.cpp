void BattleValueButtonComponent___ctor(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleValueButtonComponent__OnClickTarget(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  UnityEngine_GameObject_o *v10; // x20
  System_String_o *sendmessage; // x21
  Il2CppObject *v12; // x0
  int32_t val; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3B0FA & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B0FA = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    v10 = this->fields.target;
    sendmessage = this->fields.sendmessage;
    val = this->fields.val;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &val, v4, v5, v6, v7, v8, v9);
    if ( !v10 )
      sub_1C32E7C(v12);
    UnityEngine_GameObject__SendMessage_71205428(v10, sendmessage, v12, 0);
  }
}


void BattleValueButtonComponent__SetActive(BattleValueButtonComponent_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *boxCollider; // x21
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C3B0FC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B0FC = 1;
  }
  boxCollider = (UnityEngine_Object_o *)this->fields.boxCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boxCollider, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.boxCollider;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C32E7C(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0);
  }
}


void BattleValueButtonComponent__SetDefaultPosition(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  float defaultPositionX; // s8
  float defaultPositionY; // s9
  UnityEngine_GameObject_o *gameObject; // x0

  defaultPositionX = this->fields.defaultPositionX;
  defaultPositionY = this->fields.defaultPositionY;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition_36036760(gameObject, defaultPositionX, defaultPositionY, 0);
}


void BattleValueButtonComponent__SetDefaultSize(BattleValueButtonComponent_o *this, const MethodInfo *method)
{
  BattleValueButtonComponent__SetSize(this, this->fields.defaultWidth, this->fields.defaultHeight, method);
}


void BattleValueButtonComponent__SetOffsetPosition(
        BattleValueButtonComponent_o *this,
        float offsetX,
        float offsetY,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition_36036760(
    gameObject,
    this->fields.defaultPositionX + offsetX,
    this->fields.defaultPositionY + offsetY,
    0);
}


void BattleValueButtonComponent__SetPosition(
        BattleValueButtonComponent_o *this,
        float posX,
        float posY,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition_36036760(gameObject, posX, posY, 0);
}


void BattleValueButtonComponent__SetPositionZ(BattleValueButtonComponent_o *this, float posZ, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionZ(gameObject, posZ, 0);
}


void BattleValueButtonComponent__SetSize(
        BattleValueButtonComponent_o *this,
        float width,
        float height,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boxCollider; // x20
  UnityEngine_BoxCollider_o *v8; // x0
  UnityEngine_Object_o *sprite; // x20
  int32_t v10; // w1
  int32_t v11; // w1
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3B0FB & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B0FB = 1;
  }
  boxCollider = (UnityEngine_Object_o *)this->fields.boxCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boxCollider, 0, 0) )
  {
    v8 = this->fields.boxCollider;
    if ( !v8 )
      goto LABEL_21;
    v12.fields.z = 0.0;
    v12.fields.x = width;
    v12.fields.y = height;
    UnityEngine_BoxCollider__set_size(v8, v12, 0);
  }
  sprite = (UnityEngine_Object_o *)this->fields.sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sprite, 0, 0) )
  {
    v8 = (UnityEngine_BoxCollider_o *)this->fields.sprite;
    if ( v8 )
    {
      v10 = width == INFINITY ? 0x80000000 : (int)width;
      UIWidget__set_width((UIWidget_o *)v8, v10, 0);
      v8 = (UnityEngine_BoxCollider_o *)this->fields.sprite;
      if ( v8 )
      {
        if ( height == INFINITY )
          v11 = 0x80000000;
        else
          v11 = (int)height;
        UIWidget__set_height((UIWidget_o *)v8, v11, 0);
        return;
      }
    }
LABEL_21:
    sub_1C32E7C(v8);
  }
}