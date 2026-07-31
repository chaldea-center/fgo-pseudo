void MissionRewardInfoController___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  Il2CppClass *v8; // x0
  struct MissionRewardInfoController_StaticFields *static_fields; // x8
  struct System_Single_array *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int max_length; // w8
  struct System_Single_array *v19; // x1
  MissionRewardInfoController_c *v20; // x8
  struct MissionRewardInfoController_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int v28; // w8
  struct System_Single_array *v29; // x1
  MissionRewardInfoController_c *v30; // x8
  struct MissionRewardInfoController_StaticFields *v31; // x0

  if ( (byte_593C0BD & 1) == 0 )
  {
    sub_21FFC50(&MissionRewardInfoController_TypeInfo);
    sub_21FFC50(&float___TypeInfo);
    sub_21FFC50(&StringLiteral_21555/*"img_title_mission_"*/);
    byte_593C0BD = 1;
  }
  v7 = StringLiteral_21555/*"img_title_mission_"*/;
  MissionRewardInfoController_TypeInfo->static_fields->TitleImgNamePrefix = (struct System_String_o *)StringLiteral_21555/*"img_title_mission_"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)MissionRewardInfoController_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = float___TypeInfo;
  static_fields = MissionRewardInfoController_TypeInfo->static_fields;
  static_fields->FadeTime = 0.3;
  static_fields->ScopeItemInfoPosition = (struct UnityEngine_Vector2_o)0x4204000040800000LL;
  v10 = (struct System_Single_array *)sub_21FFD10(v8, 2);
  if ( !v10 )
    goto LABEL_11;
  max_length = v10->max_length;
  v19 = v10;
  if ( !max_length || (v10->m_Items[0] = -100.0, max_length == 1) )
LABEL_10:
    sub_21FFED4(v10);
  v20 = MissionRewardInfoController_TypeInfo;
  v10->m_Items[1] = 100.0;
  v21 = v20->static_fields;
  v21->XNormalPositions = v19;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->XNormalPositions, (int32_t)v19, v12, v13, v14, v15, v16, v17);
  v10 = (struct System_Single_array *)sub_21FFD10(float___TypeInfo, 2);
  if ( !v10 )
LABEL_11:
    sub_21FFECC(v10, v11);
  v28 = v10->max_length;
  v29 = v10;
  if ( !v28 )
    goto LABEL_10;
  v10->m_Items[0] = 72.0;
  if ( v28 == 1 )
    goto LABEL_10;
  v30 = MissionRewardInfoController_TypeInfo;
  v10->m_Items[1] = 30.0;
  v31 = v30->static_fields;
  v31->YNormalPositions = v29;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v31->YNormalPositions, (int32_t)v29, v22, v23, v24, v25, v26, v27);
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
  unsigned int v8; // w10
  struct MissionRewardInfoController_StaticFields *static_fields; // x11
  struct System_Single_array *XNormalPositions; // x9
  unsigned int v11; // w8
  struct System_Single_array *YNormalPositions; // x11
  float v13; // s2
  float v14; // s0
  float v15; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593C0BC & 1) == 0 )
  {
    sub_21FFC50(&MissionRewardInfoController_TypeInfo);
    byte_593C0BC = 1;
  }
  v4 = MissionRewardInfoController_TypeInfo;
  if ( !*(&MissionRewardInfoController_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo, *(_QWORD *)&index);
    v4 = MissionRewardInfoController_TypeInfo;
  }
  MaxColumnsNormal = v4->static_fields->MaxColumnsNormal;
  if ( !byte_593193F )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
  }
  v6 = (float)index / (float)MaxColumnsNormal;
  v7 = System_Math_TypeInfo;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&index);
  v8 = vcvtms_s32_f32(v6);
  static_fields = MissionRewardInfoController_TypeInfo->static_fields;
  XNormalPositions = static_fields->XNormalPositions;
  if ( floorf(v6) == INFINITY )
    v11 = 0x80000000;
  else
    v11 = v8;
  if ( !XNormalPositions )
    goto LABEL_17;
  if ( (unsigned int)(index % MaxColumnsNormal) >= LODWORD(XNormalPositions->max_length) )
    goto LABEL_18;
  YNormalPositions = static_fields->YNormalPositions;
  if ( !YNormalPositions )
LABEL_17:
    sub_21FFECC(v7, *(_QWORD *)&index);
  if ( v11 >= LODWORD(YNormalPositions->max_length) )
LABEL_18:
    sub_21FFED4(v7);
  v13 = 0.0;
  v14 = XNormalPositions->m_Items[index % MaxColumnsNormal];
  v15 = YNormalPositions->m_Items[v11];
  result.fields.z = v13;
  result.fields.y = v15;
  result.fields.x = v14;
  return result;
}


void MissionRewardInfoController__ModifyPanelPosition(
        MissionRewardInfoController_o *this,
        UnityEngine_GameObject_o *panelObject,
        const MethodInfo *method)
{
  __int64 v4; // x1
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float *p_y; // x9
  MissionRewardInfoController_c *v7; // x0
  struct MissionRewardInfoController_StaticFields *v8; // x9
  UnityEngine_Vector2_o v9; // 0:s0.4,4:s1.4

  if ( (byte_593C0BB & 1) == 0 )
  {
    sub_21FFC50(&FSUtility_TypeInfo);
    sub_21FFC50(&MissionRewardInfoController_TypeInfo);
    byte_593C0BB = 1;
  }
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, panelObject);
  if ( FSUtility__IsUnderVista(0) )
  {
    if ( !byte_5931820 )
    {
      sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
      byte_5931820 = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    p_y = &static_fields->zeroVector.fields.y;
  }
  else
  {
    v7 = MissionRewardInfoController_TypeInfo;
    if ( !*(&MissionRewardInfoController_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo, v4);
      v7 = MissionRewardInfoController_TypeInfo;
    }
    v8 = v7->static_fields;
    static_fields = (struct UnityEngine_Vector2_StaticFields *)&v8->ScopeItemInfoPosition;
    p_y = &v8->ScopeItemInfoPosition.fields.y;
  }
  v9.fields.x = static_fields->zeroVector.fields.x;
  v9.fields.y = *p_y;
  GameObjectExtensions__SetLocalPosition_42876016(panelObject, v9, 0);
}


void MissionRewardInfoController__RefreshMissionRewardItemInfo(
        MissionRewardInfoController_o *this,
        System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__o *itemIdAndInfoDic,
        bool isMissionRewardGet,
        const MethodInfo *method)
{
  MissionRewardInfoController_o *v6; // x19
  int32_t Count; // w20
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  MissionRewardInfoController_c *v10; // x8
  int32_t v11; // w21
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  struct MissionRewardItemComponent_array *missionRewardItemDrawList; // x8
  int32_t max_length; // w9
  Il2CppObject *value; // x27
  MissionRewardItemComponent_o *v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  struct MissionRewardItemComponent_array *v21; // x8
  UnityEngine_Component_o *v22; // x0
  MissionRewardInfoController_o *transform; // x22
  const MethodInfo *v24; // x2
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x0
  const MethodInfo *v28; // x1
  Il2CppClass *klass; // x22
  struct MissionRewardItemComponent_array *v30; // x8
  MissionRewardItemComponent_o *v31; // x0
  __int64 v32; // x0
  const MethodInfo *v33; // x1
  struct MissionRewardItemComponent_array *v34; // x8
  MissionRewardItemComponent_o *v35; // x0
  ItemIconComponent_o *itemIcon; // x0
  __int64 v37; // x1
  int data; // w8
  float v39; // s0
  struct MissionRewardItemComponent_array *v40; // x8
  MissionRewardItemComponent_o *v41; // x8
  const MethodInfo *v42; // x2
  struct MissionRewardItemComponent_array *v43; // x8
  unsigned __int64 v44; // x21
  unsigned __int64 max_length_low; // x9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Vector3_o EventItemPosition; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_593C0BA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Value__);
    this = (MissionRewardInfoController_o *)sub_21FFC50(&MissionRewardInfoController_TypeInfo);
    byte_593C0BA = 1;
  }
  memset(&v47, 0, sizeof(v47));
  if ( !itemIdAndInfoDic )
    goto LABEL_50;
  Count = System_Collections_Generic_Dictionary_int__object___get_Count(
            (System_Collections_Generic_Dictionary_int__object__o *)itemIdAndInfoDic,
            (const MethodInfo_3F689A0 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__);
  this = (MissionRewardInfoController_o *)v6->fields.rewardItemWindow;
  if ( Count <= 0 )
  {
    if ( this )
    {
      this = (MissionRewardInfoController_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        return;
      }
    }
    goto LABEL_50;
  }
  if ( !this )
    goto LABEL_50;
  this = (MissionRewardInfoController_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  if ( !isMissionRewardGet )
  {
    this = (MissionRewardInfoController_o *)v6->fields.rewardItemWindow;
    if ( !this )
      goto LABEL_50;
    this = (MissionRewardInfoController_o *)UIRect__get_parent((UIRect_o *)this, 0);
    if ( !this )
      goto LABEL_50;
    ((void (__fastcall *)(MissionRewardInfoController_o *, Il2CppClass *, double))this->klass[1]._1.element_class)(
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
    v10 = MissionRewardInfoController_TypeInfo;
    if ( !*(&MissionRewardInfoController_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo, v8);
      v10 = MissionRewardInfoController_TypeInfo;
    }
    TweenAlpha__Begin(gameObject, v10->static_fields->FadeTime, 1.0, 0);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v46,
    (System_Collections_Generic_Dictionary_int__object__o *)itemIdAndInfoDic,
    (const MethodInfo_3F69144 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
  v11 = 0;
  v47 = v46;
  v46.fields._dictionary = 0;
  *(_QWORD *)&v46.fields._version = &v47;
  while ( 1 )
  {
    v12 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v47,
            (const MethodInfo_41249BC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    if ( !v12 )
      break;
    missionRewardItemDrawList = v6->fields.missionRewardItemDrawList;
    if ( !missionRewardItemDrawList )
      sub_21FFECC(v12, v13);
    max_length = missionRewardItemDrawList->max_length;
    if ( v11 < max_length )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_21FFED4(v12);
      value = v47.fields._current.fields.value;
      if ( !v47.fields._current.fields.value )
        sub_21FFECC(v12, v13);
      v18 = missionRewardItemDrawList->m_Items[v11];
      if ( !v18 )
        sub_21FFECC(0, v13);
      MissionRewardItemComponent__Set(
        v18,
        (int32_t)v47.fields._current.fields.key,
        (int32_t)v47.fields._current.fields.value[1].monitor,
        v14);
      v21 = v6->fields.missionRewardItemDrawList;
      if ( !v21 )
        sub_21FFECC(v19, v20);
      if ( (unsigned int)v11 >= LODWORD(v21->max_length) )
        sub_21FFED4(v19);
      v22 = (UnityEngine_Component_o *)v21->m_Items[v11];
      if ( !v22 )
        sub_21FFECC(0, v20);
      transform = (MissionRewardInfoController_o *)UnityEngine_Component__get_transform(v22, 0);
      EventItemPosition = MissionRewardInfoController__GetEventItemPosition(transform, v11, v24);
      if ( !transform )
        sub_21FFECC(v25, v26);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, EventItemPosition, 0);
      klass = value[1].klass;
      if ( klass )
      {
        v30 = v6->fields.missionRewardItemDrawList;
        if ( !v30 )
          sub_21FFECC(v27, v28);
        if ( (unsigned int)v11 >= LODWORD(v30->max_length) )
          sub_21FFED4(v27);
        v31 = v30->m_Items[v11];
        if ( !v31 )
          sub_21FFECC(0, v28);
        MissionRewardItemComponent__SetItemIconOffsetX(v31, (float)SHIDWORD(klass->_1.byval_arg.data), v28);
        v34 = v6->fields.missionRewardItemDrawList;
        if ( !v34 )
          sub_21FFECC(v32, v33);
        if ( (unsigned int)v11 >= LODWORD(v34->max_length) )
          sub_21FFED4(v32);
        v35 = v34->m_Items[v11];
        if ( !v35 )
          sub_21FFECC(0, v33);
        MissionRewardItemComponent__SetItemIconOffsetY(v35, (float)(int)klass->_1.byval_arg.bits, v33);
        data = (int)klass->_1.byval_arg.data;
        if ( data <= 0 )
          v39 = 1.0;
        else
          v39 = (float)data / 1000.0;
        v40 = v6->fields.missionRewardItemDrawList;
        if ( !v40 )
          sub_21FFECC(itemIcon, v37);
        if ( (unsigned int)v11 >= LODWORD(v40->max_length) )
          sub_21FFED4(itemIcon);
        v41 = v40->m_Items[v11];
        if ( !v41 || (itemIcon = v41->fields.itemIcon) == 0 )
          sub_21FFECC(itemIcon, v37);
        ItemIconComponent__setLocalScaleIconSprite(itemIcon, v39, 0);
      }
      ++v11;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v47,
    (const MethodInfo_4124AE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
  v43 = v6->fields.missionRewardItemDrawList;
  if ( !v43 )
LABEL_50:
    sub_21FFECC(this, itemIdAndInfoDic);
  v44 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v43->max_length);
    if ( (__int64)v44 >= (int)max_length_low )
      break;
    if ( v44 >= (unsigned int)Count )
    {
      if ( v44 >= max_length_low )
        sub_21FFED4(this);
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


// local variable allocation has failed, the output may be wrong!
void MissionRewardInfoController__SetRewardItemTitle(
        MissionRewardInfoController_o *this,
        int32_t missionType,
        const MethodInfo *method)
{
  MissionRewardInfoController_c *v5; // x0
  unsigned int v6; // w8
  System_String_o *TitleImgNamePrefix; // x20
  UnityEngine_Object_o *rewardItemTitle; // x21
  __int64 v9; // x1
  UISprite_o *v10; // x21
  __int64 v11; // x1
  struct UISprite_o *v12; // x0

  if ( (byte_593C0B9 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&MissionRewardInfoController_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_19237/*"daily"*/);
    sub_21FFC50(&StringLiteral_22269/*"limited"*/);
    sub_21FFC50(&StringLiteral_20198/*"extra"*/);
    sub_21FFC50(&StringLiteral_26126/*"weekly"*/);
    byte_593C0B9 = 1;
  }
  v5 = MissionRewardInfoController_TypeInfo;
  if ( !*(&MissionRewardInfoController_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionRewardInfoController_TypeInfo, *(_QWORD *)&missionType);
    v5 = MissionRewardInfoController_TypeInfo;
  }
  v6 = missionType - 2;
  TitleImgNamePrefix = v5->static_fields->TitleImgNamePrefix;
  if ( v6 <= 3 )
    TitleImgNamePrefix = System_String__Concat_75438412(
                           v5->static_fields->TitleImgNamePrefix,
                           *(System_String_o **)*(&off_52967E0 + v6),
                           0);
  rewardItemTitle = (UnityEngine_Object_o *)this->fields.rewardItemTitle;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&missionType);
  if ( UnityEngine_Object__op_Inequality(rewardItemTitle, 0, 0) )
  {
    v10 = this->fields.rewardItemTitle;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
    AtlasManager__SetDownloadCommonSprite(v10, TitleImgNamePrefix, 0);
    v12 = this->fields.rewardItemTitle;
    if ( !v12 )
      sub_21FFECC(0, v11);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v12->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v12,
      v12->klass->vtable._33_MakePixelPerfect.method);
  }
}


void MissionRewardInfoController__SetupWindow(MissionRewardInfoController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rewardItemWindow; // x20
  __int64 v4; // x1
  UISprite_o *v5; // x20
  __int64 v6; // x1
  struct UISprite_o *v7; // x0

  if ( (byte_593C0B8 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_21364/*"img_itembg_mission"*/);
    byte_593C0B8 = 1;
  }
  rewardItemWindow = (UnityEngine_Object_o *)this->fields.rewardItemWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(rewardItemWindow, 0, 0) )
  {
    v5 = this->fields.rewardItemWindow;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4);
    AtlasManager__SetDownloadCommonSprite(v5, (System_String_o *)StringLiteral_21364/*"img_itembg_mission"*/, 0);
    v7 = this->fields.rewardItemWindow;
    if ( !v7 )
      sub_21FFECC(0, v6);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v7,
      v7->klass->vtable._33_MakePixelPerfect.method);
  }
}