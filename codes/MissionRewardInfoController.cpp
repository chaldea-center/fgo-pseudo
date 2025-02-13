void __fastcall MissionRewardInfoController___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct MissionRewardInfoController_StaticFields *static_fields; // x8
  _DWORD *v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int v16; // w8
  int64_t v17; // x1
  struct MissionRewardInfoController_StaticFields *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int v25; // w8
  struct MissionRewardInfoController_StaticFields *v26; // x0

  if ( (byte_4BDF7F1 & 1) == 0 )
  {
    sub_1C21E38(&MissionRewardInfoController_TypeInfo);
    sub_1C21E38(&float___TypeInfo);
    sub_1C21E38(&StringLiteral_20854/*"img_title_mission_"*/);
    byte_4BDF7F1 = 1;
  }
  MissionRewardInfoController_TypeInfo->static_fields->TitleImgNamePrefix = (struct System_String_o *)StringLiteral_20854/*"img_title_mission_"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)MissionRewardInfoController_TypeInfo->static_fields,
    StringLiteral_20854/*"img_title_mission_"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  static_fields = MissionRewardInfoController_TypeInfo->static_fields;
  static_fields->FadeTime = 0.3;
  *(_OWORD *)&static_fields->PanelWidth = xmmword_BFE750;
  v8 = (_DWORD *)sub_1C21EE0(float___TypeInfo, 2LL);
  if ( !v8 )
    goto LABEL_11;
  v16 = v8[6];
  v17 = (int64_t)v8;
  if ( !v16 || (v8[8] = -1027080192, v16 == 1) )
LABEL_10:
    sub_1C2209C(v8, v17);
  v8[9] = 1120403456;
  v18 = MissionRewardInfoController_TypeInfo->static_fields;
  v18->XNormalPositions = (struct System_Single_array *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v18->XNormalPositions, v17, v10, v11, v12, v13, v14, v15);
  v8 = (_DWORD *)sub_1C21EE0(float___TypeInfo, 2LL);
  if ( !v8 )
LABEL_11:
    sub_1C22094(v8, v9);
  v25 = v8[6];
  v17 = (int64_t)v8;
  if ( !v25 )
    goto LABEL_10;
  v8[8] = 1116733440;
  if ( v25 == 1 )
    goto LABEL_10;
  v8[9] = 1106247680;
  v26 = MissionRewardInfoController_TypeInfo->static_fields;
  v26->YNormalPositions = (struct System_Single_array *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v26->YNormalPositions, v17, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_4BDF7F0 & 1) == 0 )
  {
    sub_1C21E38(&MissionRewardInfoController_TypeInfo);
    byte_4BDF7F0 = 1;
  }
  v4 = MissionRewardInfoController_TypeInfo;
  if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
    v4 = MissionRewardInfoController_TypeInfo;
  }
  MaxColumnsNormal = v4->static_fields->MaxColumnsNormal;
  if ( !byte_4BD6BB0 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD6BB0 = 1;
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
    sub_1C22094(v7, *(_QWORD *)&index);
  if ( v11 >= YNormalPositions->max_length )
LABEL_18:
    sub_1C2209C(v7, *(_QWORD *)&index);
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
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float *p_y; // x9
  MissionRewardInfoController_c *v6; // x0
  struct MissionRewardInfoController_StaticFields *v7; // x9
  UnityEngine_Vector2_o v8; // 0:s0.4,4:s1.4

  if ( (byte_4BDF7EF & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&MissionRewardInfoController_TypeInfo);
    byte_4BDF7EF = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_4BD6AAA )
    {
      sub_1C21E38(&UnityEngine_Vector2_TypeInfo);
      byte_4BD6AAA = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    p_y = &static_fields->zeroVector.fields.y;
  }
  else
  {
    v6 = MissionRewardInfoController_TypeInfo;
    if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
      v6 = MissionRewardInfoController_TypeInfo;
    }
    v7 = v6->static_fields;
    static_fields = (struct UnityEngine_Vector2_StaticFields *)&v7->ScopeItemInfoPosition;
    p_y = &v7->ScopeItemInfoPosition.fields.y;
  }
  v8.fields.x = static_fields->zeroVector.fields.x;
  v8.fields.y = *p_y;
  GameObjectExtensions__SetLocalPosition_34797564(panelObject, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionRewardInfoController__RefreshMissionRewardItemInfo(
        MissionRewardInfoController_o *this,
        System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__o *itemIdAndInfoDic,
        bool isMissionRewardGet,
        const MethodInfo *method)
{
  MissionRewardInfoController_o *v6; // x19
  int v7; // w20
  UnityEngine_GameObject_o *gameObject; // x22
  MissionRewardInfoController_c *v9; // x8
  int32_t v10; // w21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  struct MissionRewardItemComponent_array *missionRewardItemDrawList; // x8
  __int64 v15; // x9
  Il2CppObject *value; // x27
  MissionRewardItemComponent_o *v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  struct MissionRewardItemComponent_array *v20; // x8
  UnityEngine_Component_o *v21; // x0
  MissionRewardInfoController_o *transform; // x22
  const MethodInfo *v23; // x2
  __int64 v24; // x0
  __int64 v25; // x1
  int v26; // s0
  __int64 v29; // x0
  const MethodInfo *v30; // x1
  Il2CppClass *klass; // x22
  struct MissionRewardItemComponent_array *v32; // x8
  MissionRewardItemComponent_o *v33; // x0
  __int64 v34; // x0
  const MethodInfo *v35; // x1
  struct MissionRewardItemComponent_array *v36; // x8
  MissionRewardItemComponent_o *v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  int data; // w8
  float v41; // s0
  struct MissionRewardItemComponent_array *v42; // x8
  MissionRewardItemComponent_o *v43; // x8
  ItemIconComponent_o *itemIcon; // x0
  const MethodInfo *v45; // x2
  struct MissionRewardItemComponent_array *v46; // x8
  signed __int64 v47; // x21
  unsigned __int64 max_length; // x9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v49; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v50; // [xsp+30h] [xbp-80h] BYREF

  v6 = this;
  if ( (byte_4BDF7EE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Value__);
    this = (MissionRewardInfoController_o *)sub_1C21E38(&MissionRewardInfoController_TypeInfo);
    byte_4BDF7EE = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( !itemIdAndInfoDic )
    goto LABEL_50;
  this = (MissionRewardInfoController_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                            (System_Collections_Generic_Dictionary_int__object__o *)itemIdAndInfoDic,
                                            (const MethodInfo_32B56FC *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__);
  if ( !v6->fields.rewardItemWindow )
    goto LABEL_50;
  v7 = (int)this;
  this = (MissionRewardInfoController_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)v6->fields.rewardItemWindow,
                                            0LL);
  if ( !this )
    goto LABEL_50;
  if ( v7 <= 0 )
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
    v9 = MissionRewardInfoController_TypeInfo;
    if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
      v9 = MissionRewardInfoController_TypeInfo;
    }
    TweenAlpha__Begin(gameObject, v9->static_fields->FadeTime, 1.0, 0LL);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v49,
    (System_Collections_Generic_Dictionary_int__object__o *)itemIdAndInfoDic,
    (const MethodInfo_32B5E84 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
  v10 = 0;
  v50 = v49;
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v50,
            (const MethodInfo_3404840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    if ( !v11 )
      break;
    missionRewardItemDrawList = v6->fields.missionRewardItemDrawList;
    if ( !missionRewardItemDrawList )
      sub_1C22094(v11, v12);
    v15 = *(_QWORD *)&missionRewardItemDrawList->max_length;
    if ( v10 < (int)v15 )
    {
      if ( v10 >= (unsigned int)v15 )
        sub_1C2209C(v11, v12);
      value = v50.fields._current.fields.value;
      if ( !v50.fields._current.fields.value )
        sub_1C22094(v11, v12);
      v17 = missionRewardItemDrawList->m_Items[v10];
      if ( !v17 )
        sub_1C22094(0LL, v12);
      MissionRewardItemComponent__Set(
        v17,
        (int32_t)v50.fields._current.fields.key,
        (int32_t)v50.fields._current.fields.value[1].monitor,
        v13);
      v20 = v6->fields.missionRewardItemDrawList;
      if ( !v20 )
        sub_1C22094(v18, v19);
      if ( v10 >= v20->max_length )
        sub_1C2209C(v18, v19);
      v21 = (UnityEngine_Component_o *)v20->m_Items[v10];
      if ( !v21 )
        sub_1C22094(0LL, v19);
      transform = (MissionRewardInfoController_o *)UnityEngine_Component__get_transform(v21, 0LL);
      *(UnityEngine_Vector3_o *)&v26 = MissionRewardInfoController__GetEventItemPosition(transform, v10, v23);
      if ( !transform )
        sub_1C22094(v24, v25);
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)&v26,
        0LL);
      klass = value[1].klass;
      if ( klass )
      {
        v32 = v6->fields.missionRewardItemDrawList;
        if ( !v32 )
          sub_1C22094(v29, v30);
        if ( v10 >= v32->max_length )
          sub_1C2209C(v29, v30);
        v33 = v32->m_Items[v10];
        if ( !v33 )
          sub_1C22094(0LL, v30);
        MissionRewardItemComponent__SetItemIconOffsetX(v33, (float)SHIDWORD(klass->_1.byval_arg.data), v30);
        v36 = v6->fields.missionRewardItemDrawList;
        if ( !v36 )
          sub_1C22094(v34, v35);
        if ( v10 >= v36->max_length )
          sub_1C2209C(v34, v35);
        v37 = v36->m_Items[v10];
        if ( !v37 )
          sub_1C22094(0LL, v35);
        MissionRewardItemComponent__SetItemIconOffsetY(v37, (float)(int)klass->_1.byval_arg.bits, v35);
        data = (int)klass->_1.byval_arg.data;
        if ( data <= 0 )
          v41 = 1.0;
        else
          v41 = (float)data / 1000.0;
        v42 = v6->fields.missionRewardItemDrawList;
        if ( !v42 )
          sub_1C22094(v38, v39);
        if ( v10 >= v42->max_length )
          sub_1C2209C(v38, v39);
        v43 = v42->m_Items[v10];
        if ( !v43 )
          sub_1C22094(v38, v39);
        itemIcon = v43->fields.itemIcon;
        if ( !itemIcon )
          sub_1C22094(0LL, v39);
        ItemIconComponent__setLocalScaleIconSprite(itemIcon, v41, 0LL);
      }
      ++v10;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v50,
    (const MethodInfo_3404964 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
  v46 = v6->fields.missionRewardItemDrawList;
  if ( !v46 )
LABEL_50:
    sub_1C22094(this, itemIdAndInfoDic);
  v47 = 0LL;
  while ( 1 )
  {
    max_length = v46->max_length;
    if ( v47 >= (int)max_length )
      break;
    if ( v47 >= v7 )
    {
      if ( v47 >= max_length )
        sub_1C2209C(this, itemIdAndInfoDic);
      this = (MissionRewardInfoController_o *)v46->m_Items[v47];
      if ( !this )
        goto LABEL_50;
      MissionRewardItemComponent__Clear((MissionRewardItemComponent_o *)this, (const MethodInfo *)itemIdAndInfoDic);
      v46 = v6->fields.missionRewardItemDrawList;
    }
    ++v47;
    if ( !v46 )
      goto LABEL_50;
  }
  MissionRewardInfoController__ModifyPanelPosition(this, v6->fields.rewardItemPanelObject, v45);
}


void __fastcall MissionRewardInfoController__SetRewardItemTitle(
        MissionRewardInfoController_o *this,
        int32_t missionType,
        const MethodInfo *method)
{
  MissionRewardInfoController_c *v5; // x0
  System_String_o *TitleImgNamePrefix; // x21
  UnityEngine_Object_o *rewardItemTitle; // x20
  UISprite_o *v8; // x20
  __int64 v9; // x1
  struct UISprite_o *v10; // x0

  if ( (byte_4BDF7ED & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&MissionRewardInfoController_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_18749/*"daily"*/);
    sub_1C21E38(&StringLiteral_21485/*"limited"*/);
    sub_1C21E38(&StringLiteral_19656/*"extra"*/);
    sub_1C21E38(&StringLiteral_25121/*"weekly"*/);
    byte_4BDF7ED = 1;
  }
  v5 = MissionRewardInfoController_TypeInfo;
  if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
    v5 = MissionRewardInfoController_TypeInfo;
  }
  TitleImgNamePrefix = v5->static_fields->TitleImgNamePrefix;
  if ( (unsigned int)(missionType - 2) <= 3 )
    TitleImgNamePrefix = System_String__Concat_63115476(
                           v5->static_fields->TitleImgNamePrefix,
                           *(System_String_o **)*(&off_460A0C0 + missionType - 2),
                           0LL);
  rewardItemTitle = (UnityEngine_Object_o *)this->fields.rewardItemTitle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rewardItemTitle, 0LL, 0LL) )
  {
    v8 = this->fields.rewardItemTitle;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v8, TitleImgNamePrefix, 0LL);
    v10 = this->fields.rewardItemTitle;
    if ( !v10 )
      sub_1C22094(0LL, v9);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v10->klass->vtable._33_MakePixelPerfect.method)(
      v10,
      v10->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall MissionRewardInfoController__SetupWindow(MissionRewardInfoController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rewardItemWindow; // x20
  UISprite_o *v4; // x20
  __int64 v5; // x1
  UIWidget_o *v6; // x0
  UIWidget_o *v7; // x20

  if ( (byte_4BDF7EC & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&MissionRewardInfoController_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_20694/*"img_itembg_mission"*/);
    byte_4BDF7EC = 1;
  }
  rewardItemWindow = (UnityEngine_Object_o *)this->fields.rewardItemWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rewardItemWindow, 0LL, 0LL) )
  {
    v4 = this->fields.rewardItemWindow;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v4, (System_String_o *)StringLiteral_20694/*"img_itembg_mission"*/, 0LL);
    v6 = (UIWidget_o *)MissionRewardInfoController_TypeInfo;
    v7 = (UIWidget_o *)this->fields.rewardItemWindow;
    if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
    if ( !v7
      || (UIWidget__set_width(v7, MissionRewardInfoController_TypeInfo->static_fields->PanelWidth, 0LL),
          (v6 = (UIWidget_o *)this->fields.rewardItemWindow) == 0LL) )
    {
      sub_1C22094(v6, v5);
    }
    UIWidget__set_height(v6, MissionRewardInfoController_TypeInfo->static_fields->PanelHeight, 0LL);
  }
}