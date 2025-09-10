void MissionRewardInfoController___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct MissionRewardInfoController_StaticFields *static_fields; // x8
  struct System_Single_array *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  int max_length; // w8
  struct System_Single_array *v9; // x1
  struct MissionRewardInfoController_StaticFields *v10; // x0
  const MethodInfo *v11; // x3
  int v12; // w8
  struct MissionRewardInfoController_StaticFields *v13; // x0

  if ( (byte_4C2A533 & 1) == 0 )
  {
    sub_1C2D490(&MissionRewardInfoController_TypeInfo);
    sub_1C2D490(&float___TypeInfo);
    sub_1C2D490(&StringLiteral_20587/*"img_title_mission_"*/);
    byte_4C2A533 = 1;
  }
  MissionRewardInfoController_TypeInfo->static_fields->TitleImgNamePrefix = (struct System_String_o *)StringLiteral_20587/*"img_title_mission_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)MissionRewardInfoController_TypeInfo->static_fields, StringLiteral_20587/*"img_title_mission_"*/, v1, v2);
  static_fields = MissionRewardInfoController_TypeInfo->static_fields;
  static_fields->FadeTime = 0.3;
  static_fields->ScopeItemInfoPosition = (struct UnityEngine_Vector2_o)0x4204000040800000LL;
  v4 = (struct System_Single_array *)sub_1C2D538(float___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_11;
  max_length = v4->max_length;
  v9 = v4;
  if ( !max_length || (v4->m_Items[0] = -100.0, max_length == 1) )
LABEL_10:
    sub_1C2D6F4(v4, v9, v6);
  v4->m_Items[1] = 100.0;
  v10 = MissionRewardInfoController_TypeInfo->static_fields;
  v10->XNormalPositions = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->XNormalPositions, (int32_t)v9, v6, v7);
  v4 = (struct System_Single_array *)sub_1C2D538(float___TypeInfo, 2);
  if ( !v4 )
LABEL_11:
    sub_1C2D6EC(v4, v5);
  v12 = v4->max_length;
  v9 = v4;
  if ( !v12 )
    goto LABEL_10;
  v4->m_Items[0] = 72.0;
  if ( v12 == 1 )
    goto LABEL_10;
  v4->m_Items[1] = 30.0;
  v13 = MissionRewardInfoController_TypeInfo->static_fields;
  v13->YNormalPositions = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v13->YNormalPositions, (int32_t)v9, v6, v11);
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

  if ( (byte_4C2A532 & 1) == 0 )
  {
    sub_1C2D490(&MissionRewardInfoController_TypeInfo);
    byte_4C2A532 = 1;
  }
  v4 = MissionRewardInfoController_TypeInfo;
  if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
    v4 = MissionRewardInfoController_TypeInfo;
  }
  MaxColumnsNormal = v4->static_fields->MaxColumnsNormal;
  if ( !byte_4C20DA0 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C20DA0 = 1;
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
    sub_1C2D6EC(v7, *(_QWORD *)&index);
  if ( v11 >= LODWORD(YNormalPositions->max_length) )
LABEL_18:
    sub_1C2D6F4(v7, *(_QWORD *)&index, method);
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

  if ( (byte_4C2A531 & 1) == 0 )
  {
    sub_1C2D490(&FSUtility_TypeInfo);
    sub_1C2D490(&MissionRewardInfoController_TypeInfo);
    byte_4C2A531 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0) )
  {
    if ( !byte_4C20C9A )
    {
      sub_1C2D490(&UnityEngine_Vector2_TypeInfo);
      byte_4C20C9A = 1;
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
  GameObjectExtensions__SetLocalPosition_35918392(panelObject, v8, 0);
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
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  struct MissionRewardItemComponent_array *missionRewardItemDrawList; // x8
  il2cpp_array_size_t max_length; // x9
  Il2CppObject *value; // x27
  MissionRewardItemComponent_o *v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct MissionRewardItemComponent_array *v22; // x8
  UnityEngine_Component_o *v23; // x0
  MissionRewardInfoController_o *transform; // x22
  const MethodInfo *v25; // x2
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  const MethodInfo *v29; // x1
  __int64 v30; // x2
  Il2CppClass *klass; // x22
  struct MissionRewardItemComponent_array *v32; // x8
  MissionRewardItemComponent_o *v33; // x0
  __int64 v34; // x0
  const MethodInfo *v35; // x1
  __int64 v36; // x2
  struct MissionRewardItemComponent_array *v37; // x8
  MissionRewardItemComponent_o *v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  int data; // w8
  float v43; // s0
  struct MissionRewardItemComponent_array *v44; // x8
  MissionRewardItemComponent_o *v45; // x8
  ItemIconComponent_o *itemIcon; // x0
  const MethodInfo *v47; // x2
  struct MissionRewardItemComponent_array *v48; // x8
  signed __int64 v49; // x21
  unsigned __int64 max_length_low; // x9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v51; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v52; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Vector3_o EventItemPosition; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C2A530 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Value__);
    this = (MissionRewardInfoController_o *)sub_1C2D490(&MissionRewardInfoController_TypeInfo);
    byte_4C2A530 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  if ( !itemIdAndInfoDic )
    goto LABEL_50;
  this = (MissionRewardInfoController_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                            (System_Collections_Generic_Dictionary_int__object__o *)itemIdAndInfoDic,
                                            (const MethodInfo_33E0F2C *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__);
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
    &v51,
    (System_Collections_Generic_Dictionary_int__object__o *)itemIdAndInfoDic,
    (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
  v10 = 0;
  v52 = v51;
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v52,
            (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    if ( !v11 )
      break;
    missionRewardItemDrawList = v6->fields.missionRewardItemDrawList;
    if ( !missionRewardItemDrawList )
      sub_1C2D6EC(v11, v12);
    max_length = missionRewardItemDrawList->max_length;
    if ( v10 < (int)max_length )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C2D6F4(v11, v12, v13);
      value = v52.fields._current.fields.value;
      if ( !v52.fields._current.fields.value )
        sub_1C2D6EC(v11, v12);
      v18 = missionRewardItemDrawList->m_Items[v10];
      if ( !v18 )
        sub_1C2D6EC(0, v12);
      MissionRewardItemComponent__Set(
        v18,
        (int32_t)v52.fields._current.fields.key,
        (int32_t)v52.fields._current.fields.value[1].monitor,
        v14);
      v22 = v6->fields.missionRewardItemDrawList;
      if ( !v22 )
        sub_1C2D6EC(v19, v20);
      if ( (unsigned int)v10 >= LODWORD(v22->max_length) )
        sub_1C2D6F4(v19, v20, v21);
      v23 = (UnityEngine_Component_o *)v22->m_Items[v10];
      if ( !v23 )
        sub_1C2D6EC(0, v20);
      transform = (MissionRewardInfoController_o *)UnityEngine_Component__get_transform(v23, 0);
      EventItemPosition = MissionRewardInfoController__GetEventItemPosition(transform, v10, v25);
      if ( !transform )
        sub_1C2D6EC(v26, v27);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, EventItemPosition, 0);
      klass = value[1].klass;
      if ( klass )
      {
        v32 = v6->fields.missionRewardItemDrawList;
        if ( !v32 )
          sub_1C2D6EC(v28, v29);
        if ( (unsigned int)v10 >= LODWORD(v32->max_length) )
          sub_1C2D6F4(v28, v29, v30);
        v33 = v32->m_Items[v10];
        if ( !v33 )
          sub_1C2D6EC(0, v29);
        MissionRewardItemComponent__SetItemIconOffsetX(v33, (float)SHIDWORD(klass->_1.byval_arg.data), v29);
        v37 = v6->fields.missionRewardItemDrawList;
        if ( !v37 )
          sub_1C2D6EC(v34, v35);
        if ( (unsigned int)v10 >= LODWORD(v37->max_length) )
          sub_1C2D6F4(v34, v35, v36);
        v38 = v37->m_Items[v10];
        if ( !v38 )
          sub_1C2D6EC(0, v35);
        MissionRewardItemComponent__SetItemIconOffsetY(v38, (float)(int)klass->_1.byval_arg.bits, v35);
        data = (int)klass->_1.byval_arg.data;
        if ( data <= 0 )
          v43 = 1.0;
        else
          v43 = (float)data / 1000.0;
        v44 = v6->fields.missionRewardItemDrawList;
        if ( !v44 )
          sub_1C2D6EC(v39, v40);
        if ( (unsigned int)v10 >= LODWORD(v44->max_length) )
          sub_1C2D6F4(v39, v40, v41);
        v45 = v44->m_Items[v10];
        if ( !v45 )
          sub_1C2D6EC(v39, v40);
        itemIcon = v45->fields.itemIcon;
        if ( !itemIcon )
          sub_1C2D6EC(0, v40);
        ItemIconComponent__setLocalScaleIconSprite(itemIcon, v43, 0);
      }
      ++v10;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v52,
    (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
  v48 = v6->fields.missionRewardItemDrawList;
  if ( !v48 )
LABEL_50:
    sub_1C2D6EC(this, itemIdAndInfoDic);
  v49 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v48->max_length);
    if ( v49 >= (int)max_length_low )
      break;
    if ( v49 >= v7 )
    {
      if ( v49 >= max_length_low )
        sub_1C2D6F4(this, itemIdAndInfoDic, v47);
      this = (MissionRewardInfoController_o *)v48->m_Items[v49];
      if ( !this )
        goto LABEL_50;
      MissionRewardItemComponent__Clear((MissionRewardItemComponent_o *)this, (const MethodInfo *)itemIdAndInfoDic);
      v48 = v6->fields.missionRewardItemDrawList;
    }
    ++v49;
    if ( !v48 )
      goto LABEL_50;
  }
  MissionRewardInfoController__ModifyPanelPosition(this, v6->fields.rewardItemPanelObject, v47);
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

  if ( (byte_4C2A52F & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&MissionRewardInfoController_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_18438/*"daily"*/);
    sub_1C2D490(&StringLiteral_21224/*"limited"*/);
    sub_1C2D490(&StringLiteral_19329/*"extra"*/);
    sub_1C2D490(&StringLiteral_24779/*"weekly"*/);
    byte_4C2A52F = 1;
  }
  v5 = MissionRewardInfoController_TypeInfo;
  if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
    v5 = MissionRewardInfoController_TypeInfo;
  }
  TitleImgNamePrefix = v5->static_fields->TitleImgNamePrefix;
  if ( (unsigned int)(missionType - 2) <= 3 )
    TitleImgNamePrefix = System_String__Concat_63457864(
                           v5->static_fields->TitleImgNamePrefix,
                           *(System_String_o **)*(&off_4651760 + missionType - 2),
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
      sub_1C2D6EC(0, v9);
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

  if ( (byte_4C2A52E & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_20408/*"img_itembg_mission"*/);
    byte_4C2A52E = 1;
  }
  rewardItemWindow = (UnityEngine_Object_o *)this->fields.rewardItemWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rewardItemWindow, 0, 0) )
  {
    v4 = this->fields.rewardItemWindow;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v4, (System_String_o *)StringLiteral_20408/*"img_itembg_mission"*/, 0);
    v6 = this->fields.rewardItemWindow;
    if ( !v6 )
      sub_1C2D6EC(0, v5);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v6,
      v6->klass->vtable._33_MakePixelPerfect.method);
  }
}