void MissionRewardInfoController___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct MissionRewardInfoController_StaticFields *static_fields; // x8
  struct System_Single_array *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int max_length; // w8
  struct System_Single_array *v17; // x1
  struct MissionRewardInfoController_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int v25; // w8
  struct System_Single_array *v26; // x1
  struct MissionRewardInfoController_StaticFields *v27; // x0

  if ( (byte_4D343DF & 1) == 0 )
  {
    sub_1C93AD4(&MissionRewardInfoController_TypeInfo);
    sub_1C93AD4(&float___TypeInfo);
    sub_1C93AD4(&StringLiteral_20835/*"img_title_mission_"*/);
    byte_4D343DF = 1;
  }
  MissionRewardInfoController_TypeInfo->static_fields->TitleImgNamePrefix = (struct System_String_o *)StringLiteral_20835/*"img_title_mission_"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)MissionRewardInfoController_TypeInfo->static_fields,
    StringLiteral_20835/*"img_title_mission_"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  static_fields = MissionRewardInfoController_TypeInfo->static_fields;
  static_fields->FadeTime = 0.3;
  static_fields->ScopeItemInfoPosition = (struct UnityEngine_Vector2_o)0x4204000040800000LL;
  v8 = (struct System_Single_array *)sub_1C93B7C(float___TypeInfo, 2);
  if ( !v8 )
    goto LABEL_11;
  max_length = v8->max_length;
  v17 = v8;
  if ( !max_length || (v8->m_Items[0] = -100.0, max_length == 1) )
LABEL_10:
    sub_1C93D34(v8);
  v8->m_Items[1] = 100.0;
  v18 = MissionRewardInfoController_TypeInfo->static_fields;
  v18->XNormalPositions = v17;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v18->XNormalPositions, (int32_t)v17, v10, v11, v12, v13, v14, v15);
  v8 = (struct System_Single_array *)sub_1C93B7C(float___TypeInfo, 2);
  if ( !v8 )
LABEL_11:
    sub_1C93D2C(v8, v9);
  v25 = v8->max_length;
  v26 = v8;
  if ( !v25 )
    goto LABEL_10;
  v8->m_Items[0] = 72.0;
  if ( v25 == 1 )
    goto LABEL_10;
  v8->m_Items[1] = 30.0;
  v27 = MissionRewardInfoController_TypeInfo->static_fields;
  v27->YNormalPositions = v26;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v27->YNormalPositions, (int32_t)v26, v19, v20, v21, v22, v23, v24);
  MissionRewardInfoController_TypeInfo->static_fields->MaxColumnsNormal = 2;
}


void MissionRewardInfoController___ctor(MissionRewardInfoController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MissionRewardInfoController__Awake(MissionRewardInfoController_o *this, const MethodInfo *method)
{
  ;
}


void MissionRewardInfoController__CheckSerializeFieldAssertion(
        MissionRewardInfoController_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o MissionRewardInfoController__GetEventItemPosition(
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
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D343DE & 1) == 0 )
  {
    sub_1C93AD4(&MissionRewardInfoController_TypeInfo);
    byte_4D343DE = 1;
  }
  v4 = MissionRewardInfoController_TypeInfo;
  if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
    v4 = MissionRewardInfoController_TypeInfo;
  }
  MaxColumnsNormal = v4->static_fields->MaxColumnsNormal;
  if ( !byte_4D2A138 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A138 = 1;
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
  if ( (unsigned int)(index % MaxColumnsNormal) >= LODWORD(XNormalPositions->max_length) )
    goto LABEL_18;
  YNormalPositions = static_fields->YNormalPositions;
  if ( !YNormalPositions )
LABEL_17:
    sub_1C93D2C(v7, *(_QWORD *)&index);
  if ( v11 >= LODWORD(YNormalPositions->max_length) )
LABEL_18:
    sub_1C93D34(v7);
  result.fields.x = XNormalPositions->m_Items[index % MaxColumnsNormal];
  result.fields.y = YNormalPositions->m_Items[v11];
  result.fields.z = 0.0;
  return result;
}


void MissionRewardInfoController__ModifyPanelPosition(
        MissionRewardInfoController_o *this,
        UnityEngine_GameObject_o *panelObject,
        const MethodInfo *method)
{
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float *p_y; // x9
  MissionRewardInfoController_c *v6; // x0
  struct MissionRewardInfoController_StaticFields *v7; // x9
  UnityEngine_Vector2_o v8; // 0:s0.4,4:s1.4

  if ( (byte_4D343DD & 1) == 0 )
  {
    sub_1C93AD4(&FSUtility_TypeInfo);
    sub_1C93AD4(&MissionRewardInfoController_TypeInfo);
    byte_4D343DD = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0) )
  {
    if ( !byte_4D2A019 )
    {
      sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
      byte_4D2A019 = 1;
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
  GameObjectExtensions__SetLocalPosition_36745064(panelObject, v8, 0);
}


void MissionRewardInfoController__RefreshMissionRewardItemInfo(
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
  il2cpp_array_size_t max_length; // x9
  Il2CppObject *value; // x27
  MissionRewardItemComponent_o *v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  struct MissionRewardItemComponent_array *v20; // x8
  UnityEngine_Component_o *v21; // x0
  MissionRewardInfoController_o *transform; // x22
  const MethodInfo *v23; // x2
  __int64 v24; // x0
  const MethodInfo *v25; // x1
  Il2CppClass *klass; // x22
  struct MissionRewardItemComponent_array *v27; // x8
  MissionRewardItemComponent_o *v28; // x0
  __int64 v29; // x0
  const MethodInfo *v30; // x1
  struct MissionRewardItemComponent_array *v31; // x8
  MissionRewardItemComponent_o *v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  int data; // w8
  float v36; // s0
  struct MissionRewardItemComponent_array *v37; // x8
  MissionRewardItemComponent_o *v38; // x8
  ItemIconComponent_o *itemIcon; // x0
  const MethodInfo *v40; // x2
  struct MissionRewardItemComponent_array *v41; // x8
  signed __int64 v42; // x21
  unsigned __int64 max_length_low; // x9
  __int64 v44; // x0
  __int64 v45; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Vector3_o EventItemPosition; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4D343DC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Value__);
    this = (MissionRewardInfoController_o *)sub_1C93AD4(&MissionRewardInfoController_TypeInfo);
    byte_4D343DC = 1;
  }
  memset(&v47, 0, sizeof(v47));
  if ( !itemIdAndInfoDic )
    goto LABEL_50;
  this = (MissionRewardInfoController_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                            (System_Collections_Generic_Dictionary_int__object__o *)itemIdAndInfoDic,
                                            (const MethodInfo_34BCA34 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__);
  if ( !v6->fields.rewardItemWindow )
    goto LABEL_50;
  v7 = (int)this;
  this = (MissionRewardInfoController_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)v6->fields.rewardItemWindow,
                                            0);
  if ( !this )
    goto LABEL_50;
  if ( v7 <= 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  if ( !isMissionRewardGet )
  {
    this = (MissionRewardInfoController_o *)v6->fields.rewardItemWindow;
    if ( !this )
      goto LABEL_50;
    this = (MissionRewardInfoController_o *)UIRect__get_parent((UIRect_o *)this, 0);
    if ( !this )
      goto LABEL_50;
    ((void (__fastcall *)(MissionRewardInfoController_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
      this,
      this->klass[1]._1.castClass,
      0.0);
    this = (MissionRewardInfoController_o *)v6->fields.rewardItemWindow;
    if ( !this )
      goto LABEL_50;
    this = (MissionRewardInfoController_o *)UIRect__get_parent((UIRect_o *)this, 0);
    if ( !this )
      goto LABEL_50;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v9 = MissionRewardInfoController_TypeInfo;
    if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
      v9 = MissionRewardInfoController_TypeInfo;
    }
    TweenAlpha__Begin(gameObject, v9->static_fields->FadeTime, 1.0, 0);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v46,
    (System_Collections_Generic_Dictionary_int__object__o *)itemIdAndInfoDic,
    (const MethodInfo_34BD1BC *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
  v10 = 0;
  v47 = v46;
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v47,
            (const MethodInfo_361DC10 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    if ( !v11 )
      break;
    missionRewardItemDrawList = v6->fields.missionRewardItemDrawList;
    if ( !missionRewardItemDrawList )
      sub_1C93D2C(v11, v12);
    max_length = missionRewardItemDrawList->max_length;
    if ( v10 < (int)max_length )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C93D34(v11);
      value = v47.fields._current.fields.value;
      if ( !v47.fields._current.fields.value )
        sub_1C93D2C(v11, v12);
      v17 = missionRewardItemDrawList->m_Items[v10];
      if ( !v17 )
        sub_1C93D2C(0, v12);
      MissionRewardItemComponent__Set(
        v17,
        (int32_t)v47.fields._current.fields.key,
        (int32_t)v47.fields._current.fields.value[1].monitor,
        v13);
      v20 = v6->fields.missionRewardItemDrawList;
      if ( !v20 )
        sub_1C93D2C(v18, v19);
      if ( (unsigned int)v10 >= LODWORD(v20->max_length) )
        sub_1C93D34(v18);
      v21 = (UnityEngine_Component_o *)v20->m_Items[v10];
      if ( !v21 )
        sub_1C93D2C(0, v19);
      transform = (MissionRewardInfoController_o *)UnityEngine_Component__get_transform(v21, 0);
      EventItemPosition = MissionRewardInfoController__GetEventItemPosition(transform, v10, v23);
      if ( !transform )
        sub_1C93D2C(v44, v45);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, EventItemPosition, 0);
      klass = value[1].klass;
      if ( klass )
      {
        v27 = v6->fields.missionRewardItemDrawList;
        if ( !v27 )
          sub_1C93D2C(v24, v25);
        if ( (unsigned int)v10 >= LODWORD(v27->max_length) )
          sub_1C93D34(v24);
        v28 = v27->m_Items[v10];
        if ( !v28 )
          sub_1C93D2C(0, v25);
        MissionRewardItemComponent__SetItemIconOffsetX(v28, (float)SHIDWORD(klass->_1.byval_arg.data), v25);
        v31 = v6->fields.missionRewardItemDrawList;
        if ( !v31 )
          sub_1C93D2C(v29, v30);
        if ( (unsigned int)v10 >= LODWORD(v31->max_length) )
          sub_1C93D34(v29);
        v32 = v31->m_Items[v10];
        if ( !v32 )
          sub_1C93D2C(0, v30);
        MissionRewardItemComponent__SetItemIconOffsetY(v32, (float)(int)klass->_1.byval_arg.bits, v30);
        data = (int)klass->_1.byval_arg.data;
        if ( data <= 0 )
          v36 = 1.0;
        else
          v36 = (float)data / 1000.0;
        v37 = v6->fields.missionRewardItemDrawList;
        if ( !v37 )
          sub_1C93D2C(v33, v34);
        if ( (unsigned int)v10 >= LODWORD(v37->max_length) )
          sub_1C93D34(v33);
        v38 = v37->m_Items[v10];
        if ( !v38 )
          sub_1C93D2C(v33, v34);
        itemIcon = v38->fields.itemIcon;
        if ( !itemIcon )
          sub_1C93D2C(0, v34);
        ItemIconComponent__setLocalScaleIconSprite(itemIcon, v36, 0);
      }
      ++v10;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v47,
    (const MethodInfo_361DD34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
  v41 = v6->fields.missionRewardItemDrawList;
  if ( !v41 )
LABEL_50:
    sub_1C93D2C(this, itemIdAndInfoDic);
  v42 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v41->max_length);
    if ( v42 >= (int)max_length_low )
      break;
    if ( v42 >= v7 )
    {
      if ( v42 >= max_length_low )
        sub_1C93D34(this);
      this = (MissionRewardInfoController_o *)v41->m_Items[v42];
      if ( !this )
        goto LABEL_50;
      MissionRewardItemComponent__Clear((MissionRewardItemComponent_o *)this, (const MethodInfo *)itemIdAndInfoDic);
      v41 = v6->fields.missionRewardItemDrawList;
    }
    ++v42;
    if ( !v41 )
      goto LABEL_50;
  }
  MissionRewardInfoController__ModifyPanelPosition(this, v6->fields.rewardItemPanelObject, v40);
}


void MissionRewardInfoController__SetRewardItemTitle(
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

  if ( (byte_4D343DB & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&MissionRewardInfoController_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_18605/*"daily"*/);
    sub_1C93AD4(&StringLiteral_21500/*"limited"*/);
    sub_1C93AD4(&StringLiteral_19540/*"extra"*/);
    sub_1C93AD4(&StringLiteral_25126/*"weekly"*/);
    byte_4D343DB = 1;
  }
  v5 = MissionRewardInfoController_TypeInfo;
  if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
    v5 = MissionRewardInfoController_TypeInfo;
  }
  TitleImgNamePrefix = v5->static_fields->TitleImgNamePrefix;
  if ( (unsigned int)(missionType - 2) <= 3 )
    TitleImgNamePrefix = System_String__Concat_64425724(
                           v5->static_fields->TitleImgNamePrefix,
                           *(System_String_o **)*(&off_4741A68 + missionType - 2),
                           0);
  rewardItemTitle = (UnityEngine_Object_o *)this->fields.rewardItemTitle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rewardItemTitle, 0, 0) )
  {
    v8 = this->fields.rewardItemTitle;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v8, TitleImgNamePrefix, 0);
    v10 = this->fields.rewardItemTitle;
    if ( !v10 )
      sub_1C93D2C(0, v9);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v10->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v10,
      v10->klass->vtable._33_MakePixelPerfect.method);
  }
}


void MissionRewardInfoController__SetupWindow(MissionRewardInfoController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rewardItemWindow; // x20
  UISprite_o *v4; // x20
  __int64 v5; // x1
  struct UISprite_o *v6; // x0

  if ( (byte_4D343DA & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_20650/*"img_itembg_mission"*/);
    byte_4D343DA = 1;
  }
  rewardItemWindow = (UnityEngine_Object_o *)this->fields.rewardItemWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rewardItemWindow, 0, 0) )
  {
    v4 = this->fields.rewardItemWindow;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v4, (System_String_o *)StringLiteral_20650/*"img_itembg_mission"*/, 0);
    v6 = this->fields.rewardItemWindow;
    if ( !v6 )
      sub_1C93D2C(0, v5);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v6,
      v6->klass->vtable._33_MakePixelPerfect.method);
  }
}