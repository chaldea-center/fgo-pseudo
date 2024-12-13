void __fastcall BattleFieldEffectComponent___ctor(BattleFieldEffectComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall BattleFieldEffectComponent__getAmbientColors(
        BattleFieldEffectComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Color_array *ambientlist; // x8

  ambientlist = this->fields.ambientlist;
  if ( !ambientlist )
    sub_1BD36B4(this, method);
  return ambientlist->max_length;
}


System_String_array *__fastcall BattleFieldEffectComponent__getFieldEffects(
        BattleFieldEffectComponent_o *this,
        const MethodInfo *method)
{
  BattleFieldEffectComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *fieldeffect; // x8
  System_String_array *v4; // x20
  il2cpp_array_size_t v5; // w21
  struct UnityEngine_GameObject_array *v6; // x8
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  BattleFieldEffectComponent_o *v13; // x1
  Il2CppClass **v14; // x0

  v2 = this;
  if ( (byte_4B397EB & 1) == 0 )
  {
    this = (BattleFieldEffectComponent_o *)sub_1BD3458(&string___TypeInfo, method);
    byte_4B397EB = 1;
  }
  fieldeffect = v2->fields.fieldeffect;
  if ( !fieldeffect )
    goto LABEL_13;
  this = (BattleFieldEffectComponent_o *)sub_1BD3500(string___TypeInfo, fieldeffect->max_length);
  if ( !this )
    goto LABEL_13;
  v4 = (System_String_array *)this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = v2->fields.fieldeffect;
      if ( !v6 )
        break;
      if ( v5 >= v6->max_length )
        goto LABEL_14;
      this = (BattleFieldEffectComponent_o *)v6->m_Items[v5];
      if ( !this )
        break;
      this = (BattleFieldEffectComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      if ( v5 >= v4->max_length )
LABEL_14:
        sub_1BD36BC(this, method);
      v13 = this;
      v14 = &v4->obj.klass + (int)v5;
      v14[4] = (Il2CppClass *)v13;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)v13, v7, v8, v9, v10, v11, v12);
      if ( (signed int)++v5 >= (signed int)v4->max_length )
        return v4;
    }
LABEL_13:
    sub_1BD36B4(this, method);
  }
  return v4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEffectComponent__setAmbientColor(
        BattleFieldEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Color_array *ambientlist; // x8

  ambientlist = this->fields.ambientlist;
  if ( !ambientlist )
    sub_1BD36B4(this, index);
  if ( ambientlist->max_length <= index )
    sub_1BD36BC(this, *(_QWORD *)&index);
  UnityEngine_RenderSettings__set_ambientLight(*(UnityEngine_Color_o *)&ambientlist->m_Items[index].fields.g, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEffectComponent__setFieldEffect(
        BattleFieldEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewobject; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x22
  struct UnityEngine_GameObject_array *fieldeffect; // x8
  int32_t max_length; // w9
  struct UnityEngine_GameObject_o *Object; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B397EC & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4B397EC = 1;
  }
  viewobject = (UnityEngine_Object_o *)this->fields.viewobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(viewobject, 0LL, 0LL);
  if ( v6 )
  {
    v8 = (UnityEngine_Object_o *)this->fields.viewobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70278272(v8, 0LL);
  }
  if ( (index & 0x80000000) == 0 )
  {
    fieldeffect = this->fields.fieldeffect;
    if ( !fieldeffect )
      sub_1BD36B4(v6, v7);
    max_length = fieldeffect->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
        sub_1BD36BC(v6, v7);
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 fieldeffect->m_Items[index],
                 this->fields.root2D,
                 0LL,
                 0LL);
      this->fields.viewobject = Object;
      sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.viewobject, (int64_t)Object, v12, v13, v14, v15, v16, v17);
    }
  }
}