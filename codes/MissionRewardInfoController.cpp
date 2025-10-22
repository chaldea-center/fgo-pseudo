void MissionRewardInfoController___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct MissionRewardInfoController_StaticFields *static_fields; // x8
  struct System_Single_array *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int max_length; // w8
  struct System_Single_array *v9; // x1
  struct MissionRewardInfoController_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int v13; // w8
  struct MissionRewardInfoController_StaticFields *v14; // x0

  if ( (byte_4C59F48 & 1) == 0 )
  {
    sub_1C3E564(&MissionRewardInfoController_TypeInfo);
    sub_1C3E564(&float___TypeInfo);
    sub_1C3E564(&StringLiteral_20620/*"img_title_mission_"*/);
    byte_4C59F48 = 1;
  }
  MissionRewardInfoController_TypeInfo->static_fields->TitleImgNamePrefix = (struct System_String_o *)StringLiteral_20620/*"img_title_mission_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)MissionRewardInfoController_TypeInfo->static_fields, StringLiteral_20620/*"img_title_mission_"*/, v1, v2);
  static_fields = MissionRewardInfoController_TypeInfo->static_fields;
  static_fields->FadeTime = 0.3;
  static_fields->ScopeItemInfoPosition = (struct UnityEngine_Vector2_o)0x4204000040800000LL;
  v4 = (struct System_Single_array *)sub_1C3E60C(float___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_11;
  max_length = v4->max_length;
  v9 = v4;
  if ( !max_length || (v4->m_Items[0] = -100.0, max_length == 1) )
LABEL_10:
    sub_1C3E7C8(v4, v9);
  v4->m_Items[1] = 100.0;
  v10 = MissionRewardInfoController_TypeInfo->static_fields;
  v10->XNormalPositions = v9;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->XNormalPositions, (int32_t)v9, v6, v7);
  v4 = (struct System_Single_array *)sub_1C3E60C(float___TypeInfo, 2);
  if ( !v4 )
LABEL_11:
    sub_1C3E7C0(v4, v5);
  v13 = v4->max_length;
  v9 = v4;
  if ( !v13 )
    goto LABEL_10;
  v4->m_Items[0] = 72.0;
  if ( v13 == 1 )
    goto LABEL_10;
  v4->m_Items[1] = 30.0;
  v14 = MissionRewardInfoController_TypeInfo->static_fields;
  v14->YNormalPositions = v9;
  sub_1C3E508((CGThumbnailListItem_o *)&v14->YNormalPositions, (int32_t)v9, v11, v12);
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
  float v13; // s0
  float v14; // s1
  float v15; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C59F47 & 1) == 0 )
  {
    sub_1C3E564(&MissionRewardInfoController_TypeInfo);
    byte_4C59F47 = 1;
  }
  v4 = MissionRewardInfoController_TypeInfo;
  if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
    v4 = MissionRewardInfoController_TypeInfo;
  }
  MaxColumnsNormal = v4->static_fields->MaxColumnsNormal;
  if ( !byte_4C506A0 )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C506A0 = 1;
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
    sub_1C3E7C0(v7, *(_QWORD *)&index);
  if ( v11 >= LODWORD(YNormalPositions->max_length) )
LABEL_18:
    sub_1C3E7C8(v7, *(_QWORD *)&index);
  v13 = XNormalPositions->m_Items[index % MaxColumnsNormal];
  v14 = YNormalPositions->m_Items[v11];
  v15 = 0.0;
  result.fields.z = v15;
  result.fields.y = v14;
  result.fields.x = v13;
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

  if ( (byte_4C59F46 & 1) == 0 )
  {
    sub_1C3E564(&FSUtility_TypeInfo);
    sub_1C3E564(&MissionRewardInfoController_TypeInfo);
    byte_4C59F46 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0) )
  {
    if ( !byte_4C5059A )
    {
      sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
      byte_4C5059A = 1;
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
  GameObjectExtensions__SetLocalPosition_36176188(panelObject, v8, 0);
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
  __int64 v25; // x1
  __int64 v26; // x0
  const MethodInfo *v27; // x1
  Il2CppClass *klass; // x22
  struct MissionRewardItemComponent_array *v29; // x8
  MissionRewardItemComponent_o *v30; // x0
  __int64 v31; // x0
  const MethodInfo *v32; // x1
  struct MissionRewardItemComponent_array *v33; // x8
  MissionRewardItemComponent_o *v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  int data; // w8
  float v38; // s0
  struct MissionRewardItemComponent_array *v39; // x8
  MissionRewardItemComponent_o *v40; // x8
  ItemIconComponent_o *itemIcon; // x0
  const MethodInfo *v42; // x2
  struct MissionRewardItemComponent_array *v43; // x8
  signed __int64 v44; // x21
  unsigned __int64 max_length_low; // x9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Vector3_o EventItemPosition; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C59F45 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Value__);
    this = (MissionRewardInfoController_o *)sub_1C3E564(&MissionRewardInfoController_TypeInfo);
    byte_4C59F45 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  if ( !itemIdAndInfoDic )
    goto LABEL_50;
  this = (MissionRewardInfoController_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                            (System_Collections_Generic_Dictionary_int__object__o *)itemIdAndInfoDic,
                                            (const MethodInfo_340C0EC *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__);
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
    (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
  v10 = 0;
  v47 = v46;
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v47,
            (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    if ( !v11 )
      break;
    missionRewardItemDrawList = v6->fields.missionRewardItemDrawList;
    if ( !missionRewardItemDrawList )
      sub_1C3E7C0(v11, v12);
    max_length = missionRewardItemDrawList->max_length;
    if ( v10 < (int)max_length )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C3E7C8(v11, v12);
      value = v47.fields._current.fields.value;
      if ( !v47.fields._current.fields.value )
        sub_1C3E7C0(v11, v12);
      v17 = missionRewardItemDrawList->m_Items[v10];
      if ( !v17 )
        sub_1C3E7C0(0, v12);
      MissionRewardItemComponent__Set(
        v17,
        (int32_t)v47.fields._current.fields.key,
        (int32_t)v47.fields._current.fields.value[1].monitor,
        v13);
      v20 = v6->fields.missionRewardItemDrawList;
      if ( !v20 )
        sub_1C3E7C0(v18, v19);
      if ( (unsigned int)v10 >= LODWORD(v20->max_length) )
        sub_1C3E7C8(v18, v19);
      v21 = (UnityEngine_Component_o *)v20->m_Items[v10];
      if ( !v21 )
        sub_1C3E7C0(0, v19);
      transform = (MissionRewardInfoController_o *)UnityEngine_Component__get_transform(v21, 0);
      EventItemPosition = MissionRewardInfoController__GetEventItemPosition(transform, v10, v23);
      if ( !transform )
        sub_1C3E7C0(v24, v25);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, EventItemPosition, 0);
      klass = value[1].klass;
      if ( klass )
      {
        v29 = v6->fields.missionRewardItemDrawList;
        if ( !v29 )
          sub_1C3E7C0(v26, v27);
        if ( (unsigned int)v10 >= LODWORD(v29->max_length) )
          sub_1C3E7C8(v26, v27);
        v30 = v29->m_Items[v10];
        if ( !v30 )
          sub_1C3E7C0(0, v27);
        MissionRewardItemComponent__SetItemIconOffsetX(v30, (float)SHIDWORD(klass->_1.byval_arg.data), v27);
        v33 = v6->fields.missionRewardItemDrawList;
        if ( !v33 )
          sub_1C3E7C0(v31, v32);
        if ( (unsigned int)v10 >= LODWORD(v33->max_length) )
          sub_1C3E7C8(v31, v32);
        v34 = v33->m_Items[v10];
        if ( !v34 )
          sub_1C3E7C0(0, v32);
        MissionRewardItemComponent__SetItemIconOffsetY(v34, (float)(int)klass->_1.byval_arg.bits, v32);
        data = (int)klass->_1.byval_arg.data;
        if ( data <= 0 )
          v38 = 1.0;
        else
          v38 = (float)data / 1000.0;
        v39 = v6->fields.missionRewardItemDrawList;
        if ( !v39 )
          sub_1C3E7C0(v35, v36);
        if ( (unsigned int)v10 >= LODWORD(v39->max_length) )
          sub_1C3E7C8(v35, v36);
        v40 = v39->m_Items[v10];
        if ( !v40 )
          sub_1C3E7C0(v35, v36);
        itemIcon = v40->fields.itemIcon;
        if ( !itemIcon )
          sub_1C3E7C0(0, v36);
        ItemIconComponent__setLocalScaleIconSprite(itemIcon, v38, 0);
      }
      ++v10;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v47,
    (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
  v43 = v6->fields.missionRewardItemDrawList;
  if ( !v43 )
LABEL_50:
    sub_1C3E7C0(this, itemIdAndInfoDic);
  v44 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v43->max_length);
    if ( v44 >= (int)max_length_low )
      break;
    if ( v44 >= v7 )
    {
      if ( v44 >= max_length_low )
        sub_1C3E7C8(this, itemIdAndInfoDic);
      this = (MissionRewardInfoController_o *)v43->m_Items[v44];
      if ( !this )
        goto LABEL_50;
      MissionRewardItemComponent__Clear((MissionRewardItemComponent_o *)this, (const MethodInfo *)itemIdAndInfoDic);
      v43 = v6->fields.missionRewardItemDrawList;
    }
    ++v44;
    if ( !v43 )
      goto LABEL_50;
  }
  MissionRewardInfoController__ModifyPanelPosition(this, v6->fields.rewardItemPanelObject, v42);
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

  if ( (byte_4C59F44 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&MissionRewardInfoController_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_18464/*"daily"*/);
    sub_1C3E564(&StringLiteral_21257/*"limited"*/);
    sub_1C3E564(&StringLiteral_19361/*"extra"*/);
    sub_1C3E564(&StringLiteral_24822/*"weekly"*/);
    byte_4C59F44 = 1;
  }
  v5 = MissionRewardInfoController_TypeInfo;
  if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
    v5 = MissionRewardInfoController_TypeInfo;
  }
  TitleImgNamePrefix = v5->static_fields->TitleImgNamePrefix;
  if ( (unsigned int)(missionType - 2) <= 3 )
    TitleImgNamePrefix = System_String__Concat_63636468(
                           v5->static_fields->TitleImgNamePrefix,
                           *(System_String_o **)*(&off_467CDF0 + missionType - 2),
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
      sub_1C3E7C0(0, v9);
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

  if ( (byte_4C59F43 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_20441/*"img_itembg_mission"*/);
    byte_4C59F43 = 1;
  }
  rewardItemWindow = (UnityEngine_Object_o *)this->fields.rewardItemWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rewardItemWindow, 0, 0) )
  {
    v4 = this->fields.rewardItemWindow;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v4, (System_String_o *)StringLiteral_20441/*"img_itembg_mission"*/, 0);
    v6 = this->fields.rewardItemWindow;
    if ( !v6 )
      sub_1C3E7C0(0, v5);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v6,
      v6->klass->vtable._33_MakePixelPerfect.method);
  }
}