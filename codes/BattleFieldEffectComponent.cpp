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
    sub_1BCAA3C(this, method);
  return ambientlist->max_length;
}


System_String_array *__fastcall BattleFieldEffectComponent__getFieldEffects(
        BattleFieldEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleFieldEffectComponent_o *v3; // x19
  struct UnityEngine_GameObject_array *fieldeffect; // x8
  System_String_array *v5; // x20
  il2cpp_array_size_t v6; // w21
  struct UnityEngine_GameObject_array *v7; // x8
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  BattleFieldEffectComponent_o *v14; // x1
  Il2CppClass **v15; // x0

  v3 = this;
  if ( (byte_4B18811 & 1) == 0 )
  {
    this = (BattleFieldEffectComponent_o *)sub_1BCA7E0(&string___TypeInfo, method, v2);
    byte_4B18811 = 1;
  }
  fieldeffect = v3->fields.fieldeffect;
  if ( !fieldeffect )
    goto LABEL_13;
  this = (BattleFieldEffectComponent_o *)sub_1BCA888(string___TypeInfo, fieldeffect->max_length);
  if ( !this )
    goto LABEL_13;
  v5 = (System_String_array *)this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = v3->fields.fieldeffect;
      if ( !v7 )
        break;
      if ( v6 >= v7->max_length )
        goto LABEL_14;
      this = (BattleFieldEffectComponent_o *)v7->m_Items[v6];
      if ( !this )
        break;
      this = (BattleFieldEffectComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      if ( v6 >= v5->max_length )
LABEL_14:
        sub_1BCAA44(this, method);
      v14 = this;
      v15 = &v5->obj.klass + (int)v6;
      v15[4] = (Il2CppClass *)v14;
      sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 4), (int64_t)v14, v8, v9, v10, v11, v12, v13);
      if ( (signed int)++v6 >= (signed int)v5->max_length )
        return v5;
    }
LABEL_13:
    sub_1BCAA3C(this, method);
  }
  return v5;
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
    sub_1BCAA3C(this, *(_QWORD *)&index);
  if ( ambientlist->max_length <= index )
    sub_1BCAA44(this, index);
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

  if ( (byte_4B18812 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index, method);
    byte_4B18812 = 1;
  }
  viewobject = (UnityEngine_Object_o *)this->fields.viewobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
  v6 = UnityEngine_Object__op_Inequality(viewobject, 0LL, 0LL);
  if ( v6 )
  {
    v8 = (UnityEngine_Object_o *)this->fields.viewobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(v8, 0LL);
  }
  if ( (index & 0x80000000) == 0 )
  {
    fieldeffect = this->fields.fieldeffect;
    if ( !fieldeffect )
      sub_1BCAA3C(v6, v7);
    max_length = fieldeffect->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
        sub_1BCAA44(v6, v7);
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 fieldeffect->m_Items[index],
                 this->fields.root2D,
                 0LL,
                 0LL);
      this->fields.viewobject = Object;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.viewobject, (int64_t)Object, v12, v13, v14, v15, v16, v17);
    }
  }
}