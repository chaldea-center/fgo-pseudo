void __fastcall MissionRewardInfoController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  struct MissionRewardInfoController_StaticFields *static_fields; // x8
  _DWORD *v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int v19; // w8
  int64_t v20; // x1
  struct MissionRewardInfoController_StaticFields *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int v28; // w8
  struct MissionRewardInfoController_StaticFields *v29; // x0

  if ( (byte_4C00A39 & 1) == 0 )
  {
    sub_1C2E12C(&MissionRewardInfoController_TypeInfo, v1);
    sub_1C2E12C(&float___TypeInfo, v8);
    sub_1C2E12C(&StringLiteral_20865/*"img_title_mission_"*/, v9);
    byte_4C00A39 = 1;
  }
  MissionRewardInfoController_TypeInfo->static_fields->TitleImgNamePrefix = (struct System_String_o *)StringLiteral_20865/*"img_title_mission_"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)MissionRewardInfoController_TypeInfo->static_fields,
    StringLiteral_20865/*"img_title_mission_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  static_fields = MissionRewardInfoController_TypeInfo->static_fields;
  static_fields->FadeTime = 0.3;
  static_fields->ScopeItemInfoPosition = (struct UnityEngine_Vector2_o)0x4204000040800000LL;
  v11 = (_DWORD *)sub_1C2E1D4(float___TypeInfo, 2LL);
  if ( !v11 )
    goto LABEL_11;
  v19 = v11[6];
  v20 = (int64_t)v11;
  if ( !v19 || (v11[8] = -1027080192, v19 == 1) )
LABEL_10:
    sub_1C2E390(v11, v20);
  v11[9] = 1120403456;
  v21 = MissionRewardInfoController_TypeInfo->static_fields;
  v21->XNormalPositions = (struct System_Single_array *)v20;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v21->XNormalPositions, v20, v13, v14, v15, v16, v17, v18);
  v11 = (_DWORD *)sub_1C2E1D4(float___TypeInfo, 2LL);
  if ( !v11 )
LABEL_11:
    sub_1C2E388(v11, v12);
  v28 = v11[6];
  v20 = (int64_t)v11;
  if ( !v28 )
    goto LABEL_10;
  v11[8] = 1116733440;
  if ( v28 == 1 )
    goto LABEL_10;
  v11[9] = 1106247680;
  v29 = MissionRewardInfoController_TypeInfo->static_fields;
  v29->YNormalPositions = (struct System_Single_array *)v20;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v29->YNormalPositions, v20, v22, v23, v24, v25, v26, v27);
  MissionRewardInfoController_TypeInfo->static_fields->MaxColumnsNormal = 2;
}


void __fastcall MissionRewardInfoController___ctor(MissionRewardInfoController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MissionRewardInfoController__Awake(MissionRewardInfoController_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall MissionRewardInfoController__CheckSerializeFieldAssertion(
        MissionRewardInfoController_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall MissionRewardInfoController__GetEventItemPosition(
        MissionRewardInfoController_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MissionRewardInfoController_c *v4; // x0
  int MaxColumnsNormal; // w21
  float v6; // s8
  System_Math_c *v7; // x0
  struct MissionRewardInfoController_StaticFields *static_fields; // x11
  unsigned int v9; // w10
  struct System_Single_array *XNormalPositions; // x8
  unsigned int v11; // w9
  struct System_Single_array *YNormalPositions; // x11
  float v13; // s0
  float v14; // s1
  float v15; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C00A38 & 1) == 0 )
  {
    sub_1C2E12C(&MissionRewardInfoController_TypeInfo, *(_QWORD *)&index);
    byte_4C00A38 = 1;
  }
  v4 = MissionRewardInfoController_TypeInfo;
  if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
    v4 = MissionRewardInfoController_TypeInfo;
  }
  MaxColumnsNormal = v4->static_fields->MaxColumnsNormal;
  if ( !byte_4BF7D90 )
  {
    sub_1C2E12C(&System_Math_TypeInfo, *(_QWORD *)&index);
    byte_4BF7D90 = 1;
  }
  v6 = (float)index / (float)MaxColumnsNormal;
  v7 = System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  static_fields = MissionRewardInfoController_TypeInfo->static_fields;
  v9 = vcvtms_s32_f32(v6);
  XNormalPositions = static_fields->XNormalPositions;
  if ( floorf(v6) == INFINITY )
    v11 = 0x80000000;
  else
    v11 = v9;
  if ( !XNormalPositions )
    goto LABEL_17;
  if ( index % MaxColumnsNormal >= XNormalPositions->max_length )
    goto LABEL_18;
  YNormalPositions = static_fields->YNormalPositions;
  if ( !YNormalPositions )
LABEL_17:
    sub_1C2E388(v7, *(_QWORD *)&index);
  if ( v11 >= YNormalPositions->max_length )
LABEL_18:
    sub_1C2E390(v7, *(_QWORD *)&index);
  v13 = XNormalPositions->m_Items[index % MaxColumnsNormal + 1];
  v14 = YNormalPositions->m_Items[v11 + 1];
  v15 = 0.0;
  result.fields.z = v15;
  result.fields.y = v14;
  result.fields.x = v13;
  return result;
}


void __fastcall MissionRewardInfoController__ModifyPanelPosition(
        MissionRewardInfoController_o *this,
        UnityEngine_GameObject_o *panelObject,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float *p_y; // x9
  MissionRewardInfoController_c *v8; // x0
  struct MissionRewardInfoController_StaticFields *v9; // x9
  UnityEngine_Vector2_o v10; // 0:s0.4,4:s1.4

  if ( (byte_4C00A37 & 1) == 0 )
  {
    sub_1C2E12C(&FSUtility_TypeInfo, panelObject);
    sub_1C2E12C(&MissionRewardInfoController_TypeInfo, v4);
    byte_4C00A37 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_4BF7C8A )
    {
      sub_1C2E12C(&UnityEngine_Vector2_TypeInfo, v5);
      byte_4BF7C8A = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    p_y = &static_fields->zeroVector.fields.y;
  }
  else
  {
    v8 = MissionRewardInfoController_TypeInfo;
    if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
      v8 = MissionRewardInfoController_TypeInfo;
    }
    v9 = v8->static_fields;
    static_fields = (struct UnityEngine_Vector2_StaticFields *)&v9->ScopeItemInfoPosition;
    p_y = &v9->ScopeItemInfoPosition.fields.y;
  }
  v10.fields.x = static_fields->zeroVector.fields.x;
  v10.fields.y = *p_y;
  GameObjectExtensions__SetLocalPosition_34857684(panelObject, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionRewardInfoController__RefreshMissionRewardItemInfo(
        MissionRewardInfoController_o *this,
        System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__o *itemIdAndInfoDic,
        bool isMissionRewardGet,
        const MethodInfo *method)
{
  MissionRewardInfoController_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int v14; // w20
  UnityEngine_GameObject_o *gameObject; // x22
  MissionRewardInfoController_c *v16; // x8
  int32_t v17; // w21
  _BOOL8 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  struct MissionRewardItemComponent_array *missionRewardItemDrawList; // x8
  __int64 v22; // x9
  Il2CppObject *value; // x27
  MissionRewardItemComponent_o *v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  struct MissionRewardItemComponent_array *v27; // x8
  UnityEngine_Component_o *v28; // x0
  MissionRewardInfoController_o *transform; // x22
  const MethodInfo *v30; // x2
  __int64 v31; // x0
  __int64 v32; // x1
  int v33; // s0
  __int64 v36; // x0
  const MethodInfo *v37; // x1
  Il2CppClass *klass; // x22
  struct MissionRewardItemComponent_array *v39; // x8
  MissionRewardItemComponent_o *v40; // x0
  __int64 v41; // x0
  const MethodInfo *v42; // x1
  struct MissionRewardItemComponent_array *v43; // x8
  MissionRewardItemComponent_o *v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  int data; // w8
  float v48; // s0
  struct MissionRewardItemComponent_array *v49; // x8
  MissionRewardItemComponent_o *v50; // x8
  ItemIconComponent_o *itemIcon; // x0
  const MethodInfo *v52; // x2
  struct MissionRewardItemComponent_array *v53; // x8
  signed __int64 v54; // x21
  unsigned __int64 max_length; // x9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v56; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v57; // [xsp+30h] [xbp-80h] BYREF

  v6 = this;
  if ( (byte_4C00A36 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__,
      itemIdAndInfoDic);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__, v9);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__get_Current__,
      v10);
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Key__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Value__, v12);
    this = (MissionRewardInfoController_o *)sub_1C2E12C(&MissionRewardInfoController_TypeInfo, v13);
    byte_4C00A36 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  if ( !itemIdAndInfoDic )
    goto LABEL_50;
  this = (MissionRewardInfoController_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                            (System_Collections_Generic_Dictionary_int__object__o *)itemIdAndInfoDic,
                                            (const MethodInfo_32D4B84 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__);
  if ( !v6->fields.rewardItemWindow )
    goto LABEL_50;
  v14 = (int)this;
  this = (MissionRewardInfoController_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)v6->fields.rewardItemWindow,
                                            0LL);
  if ( !this )
    goto LABEL_50;
  if ( v14 <= 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !isMissionRewardGet )
  {
    this = (MissionRewardInfoController_o *)v6->fields.rewardItemWindow;
    if ( !this )
      goto LABEL_50;
    this = (MissionRewardInfoController_o *)UIRect__get_parent((UIRect_o *)this, 0LL);
    if ( !this )
      goto LABEL_50;
    ((void (__fastcall *)(MissionRewardInfoController_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
      this,
      this->klass[1]._1.declaringType,
      0.0);
    this = (MissionRewardInfoController_o *)v6->fields.rewardItemWindow;
    if ( !this )
      goto LABEL_50;
    this = (MissionRewardInfoController_o *)UIRect__get_parent((UIRect_o *)this, 0LL);
    if ( !this )
      goto LABEL_50;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v16 = MissionRewardInfoController_TypeInfo;
    if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
      v16 = MissionRewardInfoController_TypeInfo;
    }
    TweenAlpha__Begin(gameObject, v16->static_fields->FadeTime, 1.0, 0LL);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v56,
    (System_Collections_Generic_Dictionary_int__object__o *)itemIdAndInfoDic,
    (const MethodInfo_32D530C *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
  v17 = 0;
  v57 = v56;
  while ( 1 )
  {
    v18 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v57,
            (const MethodInfo_3423768 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    if ( !v18 )
      break;
    missionRewardItemDrawList = v6->fields.missionRewardItemDrawList;
    if ( !missionRewardItemDrawList )
      sub_1C2E388(v18, v19);
    v22 = *(_QWORD *)&missionRewardItemDrawList->max_length;
    if ( v17 < (int)v22 )
    {
      if ( v17 >= (unsigned int)v22 )
        sub_1C2E390(v18, v19);
      value = v57.fields._current.fields.value;
      if ( !v57.fields._current.fields.value )
        sub_1C2E388(v18, v19);
      v24 = missionRewardItemDrawList->m_Items[v17];
      if ( !v24 )
        sub_1C2E388(0LL, v19);
      MissionRewardItemComponent__Set(
        v24,
        (int32_t)v57.fields._current.fields.key,
        (int32_t)v57.fields._current.fields.value[1].monitor,
        v20);
      v27 = v6->fields.missionRewardItemDrawList;
      if ( !v27 )
        sub_1C2E388(v25, v26);
      if ( v17 >= v27->max_length )
        sub_1C2E390(v25, v26);
      v28 = (UnityEngine_Component_o *)v27->m_Items[v17];
      if ( !v28 )
        sub_1C2E388(0LL, v26);
      transform = (MissionRewardInfoController_o *)UnityEngine_Component__get_transform(v28, 0LL);
      *(UnityEngine_Vector3_o *)&v33 = MissionRewardInfoController__GetEventItemPosition(transform, v17, v30);
      if ( !transform )
        sub_1C2E388(v31, v32);
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)&v33,
        0LL);
      klass = value[1].klass;
      if ( klass )
      {
        v39 = v6->fields.missionRewardItemDrawList;
        if ( !v39 )
          sub_1C2E388(v36, v37);
        if ( v17 >= v39->max_length )
          sub_1C2E390(v36, v37);
        v40 = v39->m_Items[v17];
        if ( !v40 )
          sub_1C2E388(0LL, v37);
        MissionRewardItemComponent__SetItemIconOffsetX(v40, (float)SHIDWORD(klass->_1.byval_arg.data), v37);
        v43 = v6->fields.missionRewardItemDrawList;
        if ( !v43 )
          sub_1C2E388(v41, v42);
        if ( v17 >= v43->max_length )
          sub_1C2E390(v41, v42);
        v44 = v43->m_Items[v17];
        if ( !v44 )
          sub_1C2E388(0LL, v42);
        MissionRewardItemComponent__SetItemIconOffsetY(v44, (float)(int)klass->_1.byval_arg.bits, v42);
        data = (int)klass->_1.byval_arg.data;
        if ( data <= 0 )
          v48 = 1.0;
        else
          v48 = (float)data / 1000.0;
        v49 = v6->fields.missionRewardItemDrawList;
        if ( !v49 )
          sub_1C2E388(v45, v46);
        if ( v17 >= v49->max_length )
          sub_1C2E390(v45, v46);
        v50 = v49->m_Items[v17];
        if ( !v50 )
          sub_1C2E388(v45, v46);
        itemIcon = v50->fields.itemIcon;
        if ( !itemIcon )
          sub_1C2E388(0LL, v46);
        ItemIconComponent__setLocalScaleIconSprite(itemIcon, v48, 0LL);
      }
      ++v17;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v57,
    (const MethodInfo_342388C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
  v53 = v6->fields.missionRewardItemDrawList;
  if ( !v53 )
LABEL_50:
    sub_1C2E388(this, itemIdAndInfoDic);
  v54 = 0LL;
  while ( 1 )
  {
    max_length = v53->max_length;
    if ( v54 >= (int)max_length )
      break;
    if ( v54 >= v14 )
    {
      if ( v54 >= max_length )
        sub_1C2E390(this, itemIdAndInfoDic);
      this = (MissionRewardInfoController_o *)v53->m_Items[v54];
      if ( !this )
        goto LABEL_50;
      MissionRewardItemComponent__Clear((MissionRewardItemComponent_o *)this, (const MethodInfo *)itemIdAndInfoDic);
      v53 = v6->fields.missionRewardItemDrawList;
    }
    ++v54;
    if ( !v53 )
      goto LABEL_50;
  }
  MissionRewardInfoController__ModifyPanelPosition(this, v6->fields.rewardItemPanelObject, v52);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionRewardInfoController__SetRewardItemTitle(
        MissionRewardInfoController_o *this,
        int32_t missionType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  MissionRewardInfoController_c *v11; // x0
  System_String_o *TitleImgNamePrefix; // x21
  UnityEngine_Object_o *rewardItemTitle; // x20
  UISprite_o *v14; // x20
  __int64 v15; // x1
  struct UISprite_o *v16; // x0

  if ( (byte_4C00A35 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, *(_QWORD *)&missionType);
    sub_1C2E12C(&MissionRewardInfoController_TypeInfo, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_18761/*"daily"*/, v7);
    sub_1C2E12C(&StringLiteral_21496/*"limited"*/, v8);
    sub_1C2E12C(&StringLiteral_19669/*"extra"*/, v9);
    sub_1C2E12C(&StringLiteral_25147/*"weekly"*/, v10);
    byte_4C00A35 = 1;
  }
  v11 = MissionRewardInfoController_TypeInfo;
  if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
    v11 = MissionRewardInfoController_TypeInfo;
  }
  TitleImgNamePrefix = v11->static_fields->TitleImgNamePrefix;
  if ( (unsigned int)(missionType - 2) <= 3 )
    TitleImgNamePrefix = System_String__Concat_63235584(
                           v11->static_fields->TitleImgNamePrefix,
                           *(System_String_o **)*(&off_4627110 + missionType - 2),
                           0LL);
  rewardItemTitle = (UnityEngine_Object_o *)this->fields.rewardItemTitle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rewardItemTitle, 0LL, 0LL) )
  {
    v14 = this->fields.rewardItemTitle;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v14, TitleImgNamePrefix, 0LL);
    v16 = this->fields.rewardItemTitle;
    if ( !v16 )
      sub_1C2E388(0LL, v15);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v16->klass->vtable._33_MakePixelPerfect.method)(
      v16,
      v16->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall MissionRewardInfoController__SetupWindow(MissionRewardInfoController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *rewardItemWindow; // x20
  UISprite_o *v6; // x20
  __int64 v7; // x1
  struct UISprite_o *v8; // x0

  if ( (byte_4C00A34 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_20705/*"img_itembg_mission"*/, v4);
    byte_4C00A34 = 1;
  }
  rewardItemWindow = (UnityEngine_Object_o *)this->fields.rewardItemWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rewardItemWindow, 0LL, 0LL) )
  {
    v6 = this->fields.rewardItemWindow;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v6, (System_String_o *)StringLiteral_20705/*"img_itembg_mission"*/, 0LL);
    v8 = this->fields.rewardItemWindow;
    if ( !v8 )
      sub_1C2E388(0LL, v7);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
      v8,
      v8->klass->vtable._34_get_minWidth.methodPtr);
  }
}