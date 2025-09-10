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
  UnityEngine_GameObject_o *v7; // x20
  System_String_o *sendmessage; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t val; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2A9DB & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A9DB = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    v7 = this->fields.target;
    sendmessage = this->fields.sendmessage;
    val = this->fields.val;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &val, v4, v5, v6);
    if ( !v7 )
      sub_1C2D6EC(v9, v10);
    UnityEngine_GameObject__SendMessage_71145492(v7, sendmessage, v9, 0);
  }
}


void BattleValueButtonComponent__SetActive(BattleValueButtonComponent_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *boxCollider; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C2A9DD & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A9DD = 1;
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
      sub_1C2D6EC(gameObject, v6);
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
  GameObjectExtensions__SetLocalPosition_35918496(gameObject, defaultPositionX, defaultPositionY, 0);
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
  GameObjectExtensions__SetLocalPosition_35918496(
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
  GameObjectExtensions__SetLocalPosition_35918496(gameObject, posX, posY, 0);
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
  __int64 v8; // x1
  UnityEngine_BoxCollider_o *v9; // x0
  UnityEngine_Object_o *sprite; // x20
  int32_t v11; // w1
  int32_t v12; // w1
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2A9DC & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A9DC = 1;
  }
  boxCollider = (UnityEngine_Object_o *)this->fields.boxCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boxCollider, 0, 0) )
  {
    v9 = this->fields.boxCollider;
    if ( !v9 )
      goto LABEL_21;
    v13.fields.z = 0.0;
    v13.fields.x = width;
    v13.fields.y = height;
    UnityEngine_BoxCollider__set_size(v9, v13, 0);
  }
  sprite = (UnityEngine_Object_o *)this->fields.sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sprite, 0, 0) )
  {
    v9 = (UnityEngine_BoxCollider_o *)this->fields.sprite;
    if ( v9 )
    {
      v11 = width == INFINITY ? 0x80000000 : (int)width;
      UIWidget__set_width((UIWidget_o *)v9, v11, 0);
      v9 = (UnityEngine_BoxCollider_o *)this->fields.sprite;
      if ( v9 )
      {
        if ( height == INFINITY )
          v12 = 0x80000000;
        else
          v12 = (int)height;
        UIWidget__set_height((UIWidget_o *)v9, v12, 0);
        return;
      }
    }
LABEL_21:
    sub_1C2D6EC(v9, v8);
  }
}