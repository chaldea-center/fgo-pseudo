void __fastcall UIScriptEquip___ctor(UIScriptEquip_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UIEquipGraphM_array *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1

  if ( (byte_4B17F0C & 1) == 0 )
  {
    sub_1BCA7E0(&UIEquipGraphM___TypeInfo, method, v2);
    sub_1BCA7E0(&UIScriptChara_TypeInfo, v4, v5);
    byte_4B17F0C = 1;
  }
  v6 = (struct UIEquipGraphM_array *)sub_1BCA888(UIEquipGraphM___TypeInfo, 2LL);
  this->fields.equipGraphList = v6;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipGraphList, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  if ( !UIScriptChara_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo, v13);
  this->fields.backIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__ChangeCharacter(
        UIScriptEquip_o *this,
        int32_t kind,
        float speed,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x0
  __int64 v16; // x1
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  UIEquipGraphRender_o *v21; // x22
  UIEquipGraphRender_o *v22; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x23

  if ( (byte_4B17F07 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, imageName);
    sub_1BCA7E0(&Method_UIScriptEquip_UpdateChange__, v13, v14);
    byte_4B17F07 = 1;
  }
  UIScriptChara__ChangeCharacter_42483600((UIScriptChara_o *)this, kind, speed, imageName, faceType, callback, method);
  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_9;
  mainIndex = this->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_1BCAA44(v15, v16);
  }
  v21 = (UIEquipGraphRender_o *)equipGraphList->m_Items[mainIndex];
  v22 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex];
  this->fields.isDisp = 0;
  if ( !v21
    || (UIEquipGraphRender__SetActive(v21, 1, 0LL),
        UIEquipGraphRender__SetAlpha(v21, 0.0, 0LL),
        UIEquipGraphRender__SetDepth(v21, 0.1, 0LL),
        !v22) )
  {
LABEL_9:
    sub_1BCAA3C(v15, v16);
  }
  UIEquipGraphRender__SetDepth(v22, 0.0, 0LL);
  UIEquipGraphRender__SetShadow(v21, this->fields.isShadow, 0LL);
  v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_UIScriptEquip_UpdateChange__, 0LL);
  UIEquipGraphM__SetCharacter((UIEquipGraphM_o *)v21, imageName, faceType, v26, 0LL);
}


void __fastcall UIScriptEquip__ContinueChangeFade(UIScriptEquip_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17F09 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15346/*"UpdateChange"*/, method, v2);
    byte_4B17F09 = 1;
  }
  UIScriptEquip__SetOverlap(this, 1.0, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15346/*"UpdateChange"*/,
    this->fields.changeStep,
    0LL);
}


void __fastcall UIScriptEquip__EndChange(UIScriptEquip_o *this, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  UIScriptEquip_o *v5; // x19
  __int64 backIndex; // x10
  UIEquipGraphRender_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  PartyOrganizationUtility_o *p_changeCallback; // x19
  struct System_Action_o *v15; // x20
  struct System_Action_o *changeCallback; // t1

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_9;
  mainIndex = this->fields.mainIndex;
  max_length = equipGraphList->max_length;
  v5 = this;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_1BCAA44(this, method);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this
    || (v7 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex],
        UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, 1.0, 0LL),
        !v7) )
  {
LABEL_9:
    sub_1BCAA3C(this, method);
  }
  UIEquipGraphRender__SetAlpha(v7, 0.0, 0LL);
  UIEquipGraphM__ReleaseCharacter((UIEquipGraphM_o *)v7, 0LL);
  changeCallback = v5->fields.changeCallback;
  p_changeCallback = (PartyOrganizationUtility_o *)&v5->fields.changeCallback;
  v15 = changeCallback;
  p_changeCallback[-1].fields._WaveBattleRestartWave_k__BackingField = 0;
  if ( changeCallback )
  {
    p_changeCallback->klass = 0LL;
    sub_1BCA784(p_changeCallback, 0LL, v8, v9, v10, v11, v12, v13);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v15->fields.m_target)(
      v15->fields.original_method_info,
      *(_QWORD *)&v15->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__EndSet(UIScriptEquip_o *this, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptEquip_o *v4; // x19
  Il2CppClass **v5; // x8
  UIEquipGraphRender_o *v6; // x20
  UnityEngine_Vector2_o CenterOffset; // kr00_8
  float v8; // s2
  float v9; // s10
  float v10; // s2
  float v11; // s10
  float v12; // s2
  float v13; // s10
  float v14; // s2
  float v15; // s10
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  PartyOrganizationUtility_o *p_setCallback; // x19
  struct System_Action_o *v23; // x20
  struct System_Action_o *setCallback; // t1
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_23;
  mainIndex = this->fields.mainIndex;
  v4 = this;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
    sub_1BCAA44(this, method);
  v5 = &equipGraphList->obj.klass + mainIndex;
  v6 = (UIEquipGraphRender_o *)v5[4];
  if ( !v6 )
    goto LABEL_23;
  UIEquipGraphM__SetDispOffset((UIEquipGraphM_o *)v5[4], 0LL);
  CenterOffset = UIEquipGraphRender__GetCenterOffset(v6, 0LL);
  this = (UIScriptEquip_o *)v4->fields.baseSpecialEffect;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  *(UnityEngine_Vector3_o *)(&v8 - 2) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (UIScriptEquip_o *)v4->fields.baseSpecialEffect;
  if ( !this )
    goto LABEL_23;
  v9 = v8;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  v25.fields.x = CenterOffset.fields.x;
  v25.fields.y = CenterOffset.fields.y;
  v25.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0LL);
  this = (UIScriptEquip_o *)v4->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  *(UnityEngine_Vector3_o *)(&v10 - 2) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (UIScriptEquip_o *)v4->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  v11 = v10;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  v26.fields.x = CenterOffset.fields.x;
  v26.fields.y = CenterOffset.fields.y;
  v26.fields.z = v11;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v26, 0LL);
  this = (UIScriptEquip_o *)v4->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  *(UnityEngine_Vector3_o *)(&v12 - 2) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (UIScriptEquip_o *)v4->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  v13 = v12;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  v27.fields.x = CenterOffset.fields.x;
  v27.fields.y = CenterOffset.fields.y;
  v27.fields.z = v13;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v27, 0LL);
  this = (UIScriptEquip_o *)v4->fields.baseShadowEffect;
  if ( !this
    || (this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v14 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL),
        (this = (UIScriptEquip_o *)v4->fields.baseShadowEffect) == 0LL)
    || (v15 = v14,
        (this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL)) == 0LL) )
  {
LABEL_23:
    sub_1BCAA3C(this, method);
  }
  v28.fields.x = CenterOffset.fields.x;
  v28.fields.y = CenterOffset.fields.y;
  v28.fields.z = v15;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v28, 0LL);
  setCallback = v4->fields.setCallback;
  p_setCallback = (PartyOrganizationUtility_o *)&v4->fields.setCallback;
  v23 = setCallback;
  if ( setCallback )
  {
    p_setCallback->klass = 0LL;
    sub_1BCA784(p_setCallback, 0LL, v16, v17, v18, v19, v20, v21);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v23->fields.m_target)(
      v23->fields.original_method_info,
      *(_QWORD *)&v23->fields.extra_arg);
  }
}


bool __fastcall UIScriptEquip__IsBusyMoveAlpha(UIScriptEquip_o *this, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIEquipGraphM_o *v4; // x8

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
    sub_1BCAA44(this, method);
  v4 = equipGraphList->m_Items[mainIndex];
  if ( !v4 )
LABEL_5:
    sub_1BCAA3C(this, method);
  return v4->fields.isBusyMoveAlpha;
}


void __fastcall UIScriptEquip__MoveAlpha(UIScriptEquip_o *this, float duration, float a, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v6; // x19
  const MethodInfo *v7; // x2

  equipGraphList = this->fields.equipGraphList;
  this->fields.isDisp = a > 0.0;
  if ( !equipGraphList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v6 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
    sub_1BCAA44(this, method);
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, method);
  UIEquipGraphRender__MoveAlpha((UIEquipGraphRender_o *)this, duration, a, 0LL, 0LL, 0LL);
  UIScriptChara__RecoverShadowEffect(v6, 0, v7);
}


void __fastcall UIScriptEquip__MoveAlphaSpeed(UIScriptEquip_o *this, float speed, float a, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v6; // x19
  const MethodInfo *v7; // x2

  equipGraphList = this->fields.equipGraphList;
  this->fields.isDisp = a > 0.0;
  if ( !equipGraphList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v6 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
    sub_1BCAA44(this, method);
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, method);
  UIEquipGraphRender__MoveAlphaSpeed((UIEquipGraphRender_o *)this, speed, a, 0LL, 0LL, 0LL);
  UIScriptChara__RecoverShadowEffect(v6, 0, v7);
}


void __fastcall UIScriptEquip__SetAlpha(UIScriptEquip_o *this, float a, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v5; // x19
  const MethodInfo *v6; // x2

  equipGraphList = this->fields.equipGraphList;
  this->fields.isDisp = a > 0.0;
  if ( !equipGraphList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v5 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
    sub_1BCAA44(this, method);
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, method);
  UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, a, 0LL);
  UIScriptChara__RecoverShadowEffect(v5, 0, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__SetCharacter(
        UIScriptEquip_o *this,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  Il2CppClass **v16; // x8
  UIEquipGraphM_o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x23

  if ( (byte_4B17F0A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, imageName, *(_QWORD *)&faceType);
    byte_4B17F0A = 1;
  }
  this->fields.setCallback = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.setCallback,
    (int64_t)callback,
    *(int64_t *)&faceType,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
    sub_1BCAA44(v12, v13);
  v16 = &equipGraphList->obj.klass + mainIndex;
  v17 = (UIEquipGraphM_o *)v16[4];
  if ( !v17 )
LABEL_7:
    sub_1BCAA3C(v12, v13);
  UIEquipGraphRender__SetFilter((UIEquipGraphRender_o *)v16[4], this->fields.filterName, this->fields.filterColor, 0LL);
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)this, (intptr_t)this->klass->vtable._13_SetFace.methodPtr, 0LL);
  UIEquipGraphM__SetCharacter(v17, imageName, faceType, v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__SetDepth(UIScriptEquip_o *this, int32_t d, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptEquip_o *v5; // x21
  UIEquipGraphRender_o *v6; // x19
  int v8; // s0
  float v10; // s2

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  v5 = this;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
    sub_1BCAA44(this, d);
  this = (UIScriptEquip_o *)this->fields.baseDepth;
  if ( !this
    || (v6 = (UIEquipGraphRender_o *)equipGraphList->m_Items[mainIndex],
        *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL),
        (this = (UIScriptEquip_o *)v5->fields.baseDepth) == 0LL)
    || (v10 = (float)-d * 10.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v8, 0LL),
        !v6) )
  {
LABEL_7:
    sub_1BCAA3C(this, *(_QWORD *)&d);
  }
  UIEquipGraphRender__SetDepth(v6, 0.1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__SetFilter(
        UIScriptEquip_o *this,
        System_String_o *filterName,
        UnityEngine_Color_o filterColor,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_String_o **p_filterName; // x19
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UIEquipGraphRender_o *v14; // x0
  __int64 v15; // x1
  struct System_String_o *v16; // x8
  __int64 v17; // x9
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  this->fields.filterName = filterName;
  p_filterName = &this->fields.filterName;
  a = filterColor.fields.a;
  b = filterColor.fields.b;
  g = filterColor.fields.g;
  r = filterColor.fields.r;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.filterName,
    (int64_t)filterName,
    (int64_t)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  v16 = p_filterName[13];
  *((float *)p_filterName + 2) = r;
  *((float *)p_filterName + 3) = g;
  *((float *)p_filterName + 4) = b;
  *((float *)p_filterName + 5) = a;
  if ( !v16 )
    goto LABEL_5;
  v17 = *((int *)p_filterName + 16);
  if ( (unsigned int)v17 >= LODWORD(v16[1].klass) )
    sub_1BCAA44(v14, v15);
  v14 = (UIEquipGraphRender_o *)*((_QWORD *)&v16[1].monitor + v17);
  if ( !v14 )
LABEL_5:
    sub_1BCAA3C(v14, v15);
  v18.fields.b = b;
  v18.fields.a = a;
  v18.fields.r = r;
  v18.fields.g = g;
  UIEquipGraphRender__SetFilter(v14, *p_filterName, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__SetMaskInteraction(
        UIScriptEquip_o *this,
        int32_t maskInteraction,
        const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x20
  int max_length; // w8
  unsigned int v6; // w21

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_9;
  max_length = equipGraphList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1BCAA44(this, *(_QWORD *)&maskInteraction);
      this = (UIScriptEquip_o *)equipGraphList->m_Items[v6];
      if ( !this )
        break;
      UIEquipGraphRender__SetMaskInteraction((UIEquipGraphRender_o *)this, maskInteraction, 0LL);
      max_length = equipGraphList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCAA3C(this, *(_QWORD *)&maskInteraction);
  }
}


void __fastcall UIScriptEquip__SetOverlap(UIScriptEquip_o *this, float a, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  UIEquipGraphRender_o *v7; // x19

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_1BCAA44(this, method);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this
    || (v7 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex],
        UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, a, 0LL),
        !v7) )
  {
LABEL_7:
    sub_1BCAA3C(this, method);
  }
  UIEquipGraphRender__SetAlpha(v7, 1.0 - a, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__SetShadow(UIScriptEquip_o *this, bool isShadow, bool isSkip, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  UIScriptChara_o *v5; // x19
  __int64 mainIndex; // x9
  const MethodInfo *v9; // x2
  __int64 backIndex; // x8
  UIScriptChara_c *klass; // x9

  if ( this->fields.isShadow != isShadow )
  {
    equipGraphList = this->fields.equipGraphList;
    v5 = (UIScriptChara_o *)this;
    this->fields.isShadow = isShadow;
    if ( !equipGraphList )
      goto LABEL_11;
    mainIndex = this->fields.mainIndex;
    if ( (unsigned int)mainIndex < equipGraphList->max_length )
    {
      this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
      if ( !this )
        goto LABEL_11;
      UIEquipGraphRender__SetShadow((UIEquipGraphRender_o *)this, isShadow, 0LL);
      backIndex = (unsigned int)v5->fields.backIndex;
      if ( (backIndex & 0x80000000) != 0 )
      {
LABEL_10:
        UIScriptChara__RecoverShadowEffect(v5, isSkip, v9);
        return;
      }
      klass = v5[1].klass;
      if ( !klass )
LABEL_11:
        sub_1BCAA3C(this, isShadow);
      if ( (unsigned int)backIndex < LODWORD(klass->_1.namespaze) )
      {
        this = (UIScriptEquip_o *)*((_QWORD *)&klass->_1.byval_arg.data + backIndex);
        if ( this )
        {
          UIEquipGraphRender__SetShadow((UIEquipGraphRender_o *)this, isShadow, 0LL);
          goto LABEL_10;
        }
        goto LABEL_11;
      }
    }
    sub_1BCAA44(this, isShadow);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__SetSortingOrder(UIScriptEquip_o *this, int32_t order, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x20
  int max_length; // w8
  unsigned int v6; // w21

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_9;
  max_length = equipGraphList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1BCAA44(this, *(_QWORD *)&order);
      this = (UIScriptEquip_o *)equipGraphList->m_Items[v6];
      if ( !this )
        break;
      UIEquipGraphRender__SetSortingOrder((UIEquipGraphRender_o *)this, order, 0LL);
      max_length = equipGraphList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCAA3C(this, *(_QWORD *)&order);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__SetSpecialEffect(
        UIScriptEquip_o *this,
        System_String_o *n,
        UnityEngine_Vector3_o pos,
        float time,
        UnityEngine_Color_o color,
        float range,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float r; // s11
  float z; // s13
  float y; // s14
  float x; // s15
  int v20; // s7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  int v43; // s7
  __int64 v44; // x1
  UnityEngine_Object_o *CharaEffect; // x22
  _BOOL8 v46; // x0
  __int64 v47; // x1
  struct UIEquipGraphM_array *equipGraphList; // x8
  uint32_t v49; // w0
  __int64 *v50; // x8
  const MethodInfo *v51; // x2
  int colora; // [xsp+5Ch] [xbp-34h]
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v54; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4B17F0B & 1) == 0 )
  {
    colora = v20;
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, n, isSkip);
    sub_1BCA7E0(&StringLiteral_24967/*"wipe"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_16988/*"appearanceReverse"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_18626/*"darkEnemyErasure"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_24973/*"wipeTimeRe"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_18627/*"darkWipe"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_19663/*"flashErasure"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_16987/*"appearance"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_19247/*"erasure"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_19248/*"erasureReverse"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_19214/*"enemyErasure"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_24972/*"wipeTime"*/, v41, v42);
    v43 = colora;
    byte_4B17F0B = 1;
  }
  v53.fields.x = x;
  v53.fields.y = y;
  v53.fields.z = z;
  v54.fields.r = r;
  v54.fields.g = g;
  v54.fields.b = b;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          this->fields.baseSpecialEffect,
                                          n,
                                          v53,
                                          time,
                                          v54,
                                          range,
                                          isSkip,
                                          isPause,
                                          0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
  v46 = UnityEngine_Object__op_Equality(CharaEffect, 0LL, 0LL);
  if ( !v46 )
  {
    equipGraphList = this->fields.equipGraphList;
    if ( !equipGraphList )
      sub_1BCAA3C(v46, v47);
    if ( this->fields.mainIndex >= equipGraphList->max_length )
      sub_1BCAA44(v46, v47);
    v49 = PrivateImplementationDetails___ComputeStringHash(n, 0LL);
    if ( v49 > 0x8D759330 )
    {
      if ( v49 > 0xD4B34506 )
      {
        switch ( v49 )
        {
          case 0xE7555186:
            v50 = &StringLiteral_24967/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v50 = &StringLiteral_18627/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v50 = &StringLiteral_16987/*"appearance"*/;
            break;
          default:
            return;
        }
      }
      else
      {
        switch ( v49 )
        {
          case 0x8DA714B6:
            v50 = &StringLiteral_24973/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v50 = &StringLiteral_19663/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v50 = &StringLiteral_19248/*"erasureReverse"*/;
            break;
          default:
            return;
        }
      }
    }
    else if ( v49 > 0x4A1132BE )
    {
      switch ( v49 )
      {
        case 0x8D759330:
          v50 = &StringLiteral_19247/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v50 = &StringLiteral_19214/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v50 = &StringLiteral_16988/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v49 == 242689791 )
    {
      v50 = &StringLiteral_24972/*"wipeTime"*/;
    }
    else
    {
      if ( v49 != 1242641086 )
        return;
      v50 = &StringLiteral_18626/*"darkEnemyErasure"*/;
    }
    if ( System_String__op_Equality(n, (System_String_o *)*v50, 0LL) )
      UIScriptChara__StopShadowEffect((UIScriptChara_o *)this, isSkip, v51);
  }
}


void __fastcall UIScriptEquip__UpdateChange(UIScriptEquip_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIScriptEquip_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  int32_t changeKind; // w11
  float v13; // s0
  float v14; // s8
  __int64 v15; // x1
  float changeRange; // s0
  UIScriptChara_c *v17; // x0
  float v18; // s2
  float v19; // s8
  float v20; // s9
  float v21; // s0
  UIEquipGraphRender_o *v22; // x20
  float changeSpeed; // s8
  UIScriptChara_c *v24; // x0
  float changeTotal; // s9
  float v26; // s8
  float UNIT_SPEED; // s0

  v3 = this;
  if ( (byte_4B17F08 & 1) == 0 )
  {
    sub_1BCA7E0(&UIScriptChara_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6062/*"EndChange"*/, v4, v5);
    this = (UIScriptEquip_o *)sub_1BCA7E0(&StringLiteral_4803/*"ContinueChangeFade"*/, v6, v7);
    byte_4B17F08 = 1;
  }
  equipGraphList = v3->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_25;
  mainIndex = v3->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = v3->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_1BCAA44(this, method);
  }
  changeKind = v3->fields.changeKind;
  if ( changeKind != 3 )
  {
    if ( changeKind != 2 )
    {
      if ( changeKind != 1 )
        return;
LABEL_16:
      UIScriptEquip__EndChange(v3, method);
      return;
    }
    this = (UIScriptEquip_o *)equipGraphList->m_Items[backIndex];
    if ( this )
    {
      v22 = (UIEquipGraphRender_o *)equipGraphList->m_Items[mainIndex];
      UIEquipGraphRender__MoveAlpha((UIEquipGraphRender_o *)this, v3->fields.changeSpeed, 0.0, 0LL, 0LL, 0LL);
      changeSpeed = v3->fields.changeSpeed;
      this = (UIScriptEquip_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
      if ( v22 )
      {
        UIEquipGraphRender__MoveAlpha(
          v22,
          changeSpeed,
          1.0,
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_6062/*"EndChange"*/,
          0LL);
        return;
      }
    }
LABEL_25:
    sub_1BCAA3C(this, method);
  }
  v13 = v3->fields.changeSpeed;
  if ( v13 <= 0.0 )
    goto LABEL_16;
  v14 = v3->fields.changeTotal / v13;
  if ( v14 >= 1.0 )
    goto LABEL_16;
  UIScriptEquip__SetOverlap(v3, 0.0, method);
  changeRange = v3->fields.changeRange;
  if ( v14 <= 0.5 )
  {
    v24 = UIScriptChara_TypeInfo;
    changeTotal = v3->fields.changeTotal;
    v26 = fminf((float)(0.5 - v14) * changeRange, 1.0);
    if ( !UIScriptChara_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo, v15);
      v24 = UIScriptChara_TypeInfo;
    }
    UNIT_SPEED = v24->static_fields->UNIT_SPEED;
    v3->fields.changeTotal = changeTotal + (float)(v26 + (float)(UNIT_SPEED + UNIT_SPEED));
    v3->fields.changeStep = UNIT_SPEED;
    v21 = v26 + UNIT_SPEED;
  }
  else
  {
    v17 = UIScriptChara_TypeInfo;
    v18 = v14 + -1.0;
    v19 = v3->fields.changeTotal;
    v20 = fminf((float)(v18 + 0.5) * changeRange, 1.0);
    if ( !UIScriptChara_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo, v15);
      v17 = UIScriptChara_TypeInfo;
    }
    v21 = v17->static_fields->UNIT_SPEED;
    v3->fields.changeTotal = v19 + (float)(v20 + (float)(v21 + v21));
    v3->fields.changeStep = v20 + v21;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v3, (System_String_o *)StringLiteral_4803/*"ContinueChangeFade"*/, v21, 0LL);
}