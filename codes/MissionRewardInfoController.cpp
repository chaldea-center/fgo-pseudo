void __fastcall MissionRewardInfoController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  struct MissionRewardInfoController_StaticFields *static_fields; // x8
  struct System_Single_array *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  il2cpp_array_size_t max_length; // w8
  struct System_Single_array *v12; // x1
  struct MissionRewardInfoController_StaticFields *v13; // x0
  const MethodInfo *v14; // x3
  il2cpp_array_size_t v15; // w8
  struct MissionRewardInfoController_StaticFields *v16; // x0

  if ( (byte_4B47D77 & 1) == 0 )
  {
    sub_1BDB878(&MissionRewardInfoController_TypeInfo, v1);
    sub_1BDB878(&float___TypeInfo, v4);
    sub_1BDB878(&StringLiteral_20610/*"img_title_mission_"*/, v5);
    byte_4B47D77 = 1;
  }
  MissionRewardInfoController_TypeInfo->static_fields->TitleImgNamePrefix = (struct System_String_o *)StringLiteral_20610/*"img_title_mission_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)MissionRewardInfoController_TypeInfo->static_fields, StringLiteral_20610/*"img_title_mission_"*/, v2, v3);
  static_fields = MissionRewardInfoController_TypeInfo->static_fields;
  static_fields->FadeTime = 0.3;
  static_fields->ScopeItemInfoPosition = (struct UnityEngine_Vector2_o)0x4204000040800000LL;
  v7 = (struct System_Single_array *)sub_1BDB920(float___TypeInfo, 2LL);
  if ( !v7 )
    goto LABEL_11;
  max_length = v7->max_length;
  v12 = v7;
  if ( !max_length || (v7->m_Items[1] = -100.0, max_length == 1) )
LABEL_10:
    sub_1BDBADC(v7, v12, v9);
  v7->m_Items[2] = 100.0;
  v13 = MissionRewardInfoController_TypeInfo->static_fields;
  v13->XNormalPositions = v12;
  sub_1BDB81C((CGThumbnailListItem_o *)&v13->XNormalPositions, (int32_t)v12, v9, v10);
  v7 = (struct System_Single_array *)sub_1BDB920(float___TypeInfo, 2LL);
  if ( !v7 )
LABEL_11:
    sub_1BDBAD4(v7, v8);
  v15 = v7->max_length;
  v12 = v7;
  if ( !v15 )
    goto LABEL_10;
  v7->m_Items[1] = 72.0;
  if ( v15 == 1 )
    goto LABEL_10;
  v7->m_Items[2] = 30.0;
  v16 = MissionRewardInfoController_TypeInfo->static_fields;
  v16->YNormalPositions = v12;
  sub_1BDB81C((CGThumbnailListItem_o *)&v16->YNormalPositions, (int32_t)v12, v9, v14);
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

  if ( (byte_4B47D76 & 1) == 0 )
  {
    sub_1BDB878(&MissionRewardInfoController_TypeInfo, *(_QWORD *)&index);
    byte_4B47D76 = 1;
  }
  v4 = MissionRewardInfoController_TypeInfo;
  if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
    v4 = MissionRewardInfoController_TypeInfo;
  }
  MaxColumnsNormal = v4->static_fields->MaxColumnsNormal;
  if ( !byte_4B3E910 )
  {
    sub_1BDB878(&System_Math_TypeInfo, *(_QWORD *)&index);
    byte_4B3E910 = 1;
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
    sub_1BDBAD4(v7, *(_QWORD *)&index);
  if ( v11 >= YNormalPositions->max_length )
LABEL_18:
    sub_1BDBADC(v7, *(_QWORD *)&index, method);
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

  if ( (byte_4B47D75 & 1) == 0 )
  {
    sub_1BDB878(&FSUtility_TypeInfo, panelObject);
    sub_1BDB878(&MissionRewardInfoController_TypeInfo, v4);
    byte_4B47D75 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_4B3E80A )
    {
      sub_1BDB878(&UnityEngine_Vector2_TypeInfo, v5);
      byte_4B3E80A = 1;
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
  GameObjectExtensions__SetLocalPosition_35211000(panelObject, v10, 0LL);
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
  __int64 v20; // x2
  const MethodInfo *v21; // x3
  struct MissionRewardItemComponent_array *missionRewardItemDrawList; // x8
  __int64 v23; // x9
  Il2CppObject *value; // x27
  MissionRewardItemComponent_o *v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  struct MissionRewardItemComponent_array *v29; // x8
  UnityEngine_Component_o *v30; // x0
  MissionRewardInfoController_o *transform; // x22
  const MethodInfo *v32; // x2
  __int64 v33; // x0
  __int64 v34; // x1
  int v35; // s0
  __int64 v38; // x0
  const MethodInfo *v39; // x1
  __int64 v40; // x2
  Il2CppClass *klass; // x22
  struct MissionRewardItemComponent_array *v42; // x8
  MissionRewardItemComponent_o *v43; // x0
  __int64 v44; // x0
  const MethodInfo *v45; // x1
  __int64 v46; // x2
  struct MissionRewardItemComponent_array *v47; // x8
  MissionRewardItemComponent_o *v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  int data; // w8
  float v53; // s0
  struct MissionRewardItemComponent_array *v54; // x8
  MissionRewardItemComponent_o *v55; // x8
  ItemIconComponent_o *itemIcon; // x0
  const MethodInfo *v57; // x2
  struct MissionRewardItemComponent_array *v58; // x8
  signed __int64 v59; // x21
  unsigned __int64 max_length; // x9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v62; // [xsp+30h] [xbp-80h] BYREF

  v6 = this;
  if ( (byte_4B47D74 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__,
      itemIdAndInfoDic);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__, v9);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__get_Current__,
      v10);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Key__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Value__, v12);
    this = (MissionRewardInfoController_o *)sub_1BDB878(&MissionRewardInfoController_TypeInfo, v13);
    byte_4B47D74 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  if ( !itemIdAndInfoDic )
    goto LABEL_50;
  this = (MissionRewardInfoController_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                            (System_Collections_Generic_Dictionary_int__object__o *)itemIdAndInfoDic,
                                            (const MethodInfo_333AFD0 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__);
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
    &v61,
    (System_Collections_Generic_Dictionary_int__object__o *)itemIdAndInfoDic,
    (const MethodInfo_333B758 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
  v17 = 0;
  v62 = v61;
  while ( 1 )
  {
    v18 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v62,
            (const MethodInfo_348DA98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    if ( !v18 )
      break;
    missionRewardItemDrawList = v6->fields.missionRewardItemDrawList;
    if ( !missionRewardItemDrawList )
      sub_1BDBAD4(v18, v19);
    v23 = *(_QWORD *)&missionRewardItemDrawList->max_length;
    if ( v17 < (int)v23 )
    {
      if ( v17 >= (unsigned int)v23 )
        sub_1BDBADC(v18, v19, v20);
      value = v62.fields._current.fields.value;
      if ( !v62.fields._current.fields.value )
        sub_1BDBAD4(v18, v19);
      v25 = missionRewardItemDrawList->m_Items[v17];
      if ( !v25 )
        sub_1BDBAD4(0LL, v19);
      MissionRewardItemComponent__Set(
        v25,
        (int32_t)v62.fields._current.fields.key,
        (int32_t)v62.fields._current.fields.value[1].monitor,
        v21);
      v29 = v6->fields.missionRewardItemDrawList;
      if ( !v29 )
        sub_1BDBAD4(v26, v27);
      if ( v17 >= v29->max_length )
        sub_1BDBADC(v26, v27, v28);
      v30 = (UnityEngine_Component_o *)v29->m_Items[v17];
      if ( !v30 )
        sub_1BDBAD4(0LL, v27);
      transform = (MissionRewardInfoController_o *)UnityEngine_Component__get_transform(v30, 0LL);
      *(UnityEngine_Vector3_o *)&v35 = MissionRewardInfoController__GetEventItemPosition(transform, v17, v32);
      if ( !transform )
        sub_1BDBAD4(v33, v34);
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)&v35,
        0LL);
      klass = value[1].klass;
      if ( klass )
      {
        v42 = v6->fields.missionRewardItemDrawList;
        if ( !v42 )
          sub_1BDBAD4(v38, v39);
        if ( v17 >= v42->max_length )
          sub_1BDBADC(v38, v39, v40);
        v43 = v42->m_Items[v17];
        if ( !v43 )
          sub_1BDBAD4(0LL, v39);
        MissionRewardItemComponent__SetItemIconOffsetX(v43, (float)SHIDWORD(klass->_1.byval_arg.data), v39);
        v47 = v6->fields.missionRewardItemDrawList;
        if ( !v47 )
          sub_1BDBAD4(v44, v45);
        if ( v17 >= v47->max_length )
          sub_1BDBADC(v44, v45, v46);
        v48 = v47->m_Items[v17];
        if ( !v48 )
          sub_1BDBAD4(0LL, v45);
        MissionRewardItemComponent__SetItemIconOffsetY(v48, (float)(int)klass->_1.byval_arg.bits, v45);
        data = (int)klass->_1.byval_arg.data;
        if ( data <= 0 )
          v53 = 1.0;
        else
          v53 = (float)data / 1000.0;
        v54 = v6->fields.missionRewardItemDrawList;
        if ( !v54 )
          sub_1BDBAD4(v49, v50);
        if ( v17 >= v54->max_length )
          sub_1BDBADC(v49, v50, v51);
        v55 = v54->m_Items[v17];
        if ( !v55 )
          sub_1BDBAD4(v49, v50);
        itemIcon = v55->fields.itemIcon;
        if ( !itemIcon )
          sub_1BDBAD4(0LL, v50);
        ItemIconComponent__setLocalScaleIconSprite(itemIcon, v53, 0LL);
      }
      ++v17;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v62,
    (const MethodInfo_348DBBC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
  v58 = v6->fields.missionRewardItemDrawList;
  if ( !v58 )
LABEL_50:
    sub_1BDBAD4(this, itemIdAndInfoDic);
  v59 = 0LL;
  while ( 1 )
  {
    max_length = v58->max_length;
    if ( v59 >= (int)max_length )
      break;
    if ( v59 >= v14 )
    {
      if ( v59 >= max_length )
        sub_1BDBADC(this, itemIdAndInfoDic, v57);
      this = (MissionRewardInfoController_o *)v58->m_Items[v59];
      if ( !this )
        goto LABEL_50;
      MissionRewardItemComponent__Clear((MissionRewardItemComponent_o *)this, (const MethodInfo *)itemIdAndInfoDic);
      v58 = v6->fields.missionRewardItemDrawList;
    }
    ++v59;
    if ( !v58 )
      goto LABEL_50;
  }
  MissionRewardInfoController__ModifyPanelPosition(this, v6->fields.rewardItemPanelObject, v57);
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

  if ( (byte_4B47D73 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, *(_QWORD *)&missionType);
    sub_1BDB878(&MissionRewardInfoController_TypeInfo, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_18451/*"daily"*/, v7);
    sub_1BDB878(&StringLiteral_21252/*"limited"*/, v8);
    sub_1BDB878(&StringLiteral_19347/*"extra"*/, v9);
    sub_1BDB878(&StringLiteral_24875/*"weekly"*/, v10);
    byte_4B47D73 = 1;
  }
  v11 = MissionRewardInfoController_TypeInfo;
  if ( !MissionRewardInfoController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo);
    v11 = MissionRewardInfoController_TypeInfo;
  }
  TitleImgNamePrefix = v11->static_fields->TitleImgNamePrefix;
  if ( (unsigned int)(missionType - 2) <= 3 )
    TitleImgNamePrefix = System_String__Concat_62572260(
                           v11->static_fields->TitleImgNamePrefix,
                           *(System_String_o **)*(&off_457BBD8 + missionType - 2),
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
      sub_1BDBAD4(0LL, v15);
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

  if ( (byte_4B47D72 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_20434/*"img_itembg_mission"*/, v4);
    byte_4B47D72 = 1;
  }
  rewardItemWindow = (UnityEngine_Object_o *)this->fields.rewardItemWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rewardItemWindow, 0LL, 0LL) )
  {
    v6 = this->fields.rewardItemWindow;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v6, (System_String_o *)StringLiteral_20434/*"img_itembg_mission"*/, 0LL);
    v8 = this->fields.rewardItemWindow;
    if ( !v8 )
      sub_1BDBAD4(0LL, v7);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
      v8,
      v8->klass->vtable._34_get_minWidth.methodPtr);
  }
}