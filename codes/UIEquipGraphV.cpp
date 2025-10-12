void UIEquipGraphV___ctor(UIEquipGraphV_o *this, const MethodInfo *method)
{
  if ( (byte_4C39212 & 1) == 0 )
  {
    sub_1C32C20(&UIEquipGraphViewerRender_TypeInfo);
    byte_4C39212 = 1;
  }
  this->fields.rarity = 1;
  if ( !UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo);
  UIEquipGraphViewerRender___ctor((UIEquipGraphViewerRender_o *)this, method);
}


void UIEquipGraphV__Awake(UIEquipGraphV_o *this, const MethodInfo *method)
{
  ;
}


// attributes: thunk
void UIEquipGraphV__Destroy(UIEquipGraphV_o *this, const MethodInfo *method)
{
  UIEquipGraphV__ReleaseCharacter(this, method);
}


void UIEquipGraphV__EndLoadAsset(UIEquipGraphV_o *this, const MethodInfo *method)
{
  System_String_array *loadNameList; // x20
  AssetData_array *AssetStorage_40443500; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int max_length; // w8
  struct AssetData_array *v8; // x20
  __int64 v9; // x9
  AssetData_array *assetDataList; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4C39203 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C39203 = 1;
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage_40443500 = AssetManager__getAssetStorage_40443500(loadNameList, 0);
    if ( AssetStorage_40443500 )
    {
      max_length = AssetStorage_40443500->max_length;
      v8 = AssetStorage_40443500;
      if ( max_length < 1 )
      {
LABEL_12:
        assetDataList = this->fields.assetDataList;
        this->fields.loadNameList = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.loadNameList, 0, v5, v6);
        this->fields.assetDataList = v8;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.assetDataList, (int32_t)v8, v11, v12);
        UIEquipGraphV__SetFrame(this, v13);
        UIEquipGraphV__SetTexture(this, v14);
        UIEquipGraphV__SetButton(this, v15);
        if ( assetDataList )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_40435536(assetDataList, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v16, v17);
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
        }
      }
      else
      {
        v9 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= max_length )
            sub_1C32E84(AssetStorage_40443500);
          if ( !AssetStorage_40443500->m_Items[v9] )
            break;
          if ( (int)++v9 >= max_length )
            goto LABEL_12;
        }
      }
    }
  }
}


void UIEquipGraphV__ReleaseCharacter(UIEquipGraphV_o *this, const MethodInfo *method)
{
  AssetData_array *assetDataList; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_String_array *loadNameList; // x20
  CGThumbnailListItem_o *p_loadNameList; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C39201 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C39201 = 1;
  }
  UIEquipGraphViewerRender__ReleaseCharacter((UIEquipGraphViewerRender_o *)this, method);
  assetDataList = this->fields.assetDataList;
  if ( assetDataList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40435536(assetDataList, 0);
    this->fields.assetDataList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.assetDataList, 0, v4, v5);
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    p_loadNameList = (CGThumbnailListItem_o *)&this->fields.loadNameList;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40444488(loadNameList, 0);
    p_loadNameList->klass = 0;
    sub_1C32BC4(p_loadNameList, 0, v8, v9);
  }
}


void UIEquipGraphV__SetAllButton(UIEquipGraphV_o *this, int32_t isForce, const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Behaviour_o *frameTopSprite; // x0
  const MethodInfo *v7; // x2
  struct EquipGraphViewModeState_o *v8; // x8
  UnityEngine_Object_o *state; // x20
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Object_o *v11; // x20
  struct EquipGraphViewModeState_o *v12; // x8
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4C39210 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39210 = 1;
  }
  if ( isForce == 2 )
  {
    state = (UnityEngine_Object_o *)this->fields.state;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    frameTopSprite = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
    if ( ((unsigned __int8)frameTopSprite & 1) != 0 )
      goto LABEL_32;
  }
  else if ( isForce == 1 )
  {
    v5 = (UnityEngine_Object_o *)this->fields.state;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    frameTopSprite = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(v5, 0, 0);
    if ( ((unsigned __int8)frameTopSprite & 1) != 0 )
    {
LABEL_8:
      v8 = this->fields.state;
      if ( v8 )
      {
        v8->fields._topbtn_k__BackingField = 0;
        v8->fields._btmbtn_k__BackingField = 0;
        v8->fields._rarebtn_k__BackingField = 0;
        v8->fields._namebtn_k__BackingField = 0;
        v8->fields._atkbtn_k__BackingField = 0;
        v8->fields._hpbtn_k__BackingField = 0;
LABEL_34:
        UIEquipGraphV__SetTopButton(this, 1, v7);
        UIEquipGraphV__SetBottomButton(this, 1, v13);
        UIEquipGraphV__SetRarityButton(this, 1, v14);
        UIEquipGraphV__SetNameButton(this, 1, v15);
        UIEquipGraphV__SetAtkButton(this, 1, v16);
        UIEquipGraphV__SetHpButton(this, 1, v17);
        return;
      }
      goto LABEL_36;
    }
  }
  frameTopSprite = (UnityEngine_Behaviour_o *)this->fields.frameTopSprite;
  if ( !frameTopSprite )
    goto LABEL_36;
  if ( !UnityEngine_Behaviour__get_enabled(frameTopSprite, 0) )
    goto LABEL_29;
  frameTopSprite = (UnityEngine_Behaviour_o *)this->fields.frameBottomSprite;
  if ( !frameTopSprite )
    goto LABEL_36;
  if ( !UnityEngine_Behaviour__get_enabled(frameTopSprite, 0) )
    goto LABEL_29;
  frameTopSprite = (UnityEngine_Behaviour_o *)this->fields.raritySprite;
  if ( !frameTopSprite )
    goto LABEL_36;
  if ( !UnityEngine_Behaviour__get_enabled(frameTopSprite, 0) )
    goto LABEL_29;
  frameTopSprite = (UnityEngine_Behaviour_o *)this->fields.nameRenderer;
  if ( !frameTopSprite )
    goto LABEL_36;
  if ( !UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)frameTopSprite, 0) )
    goto LABEL_29;
  frameTopSprite = (UnityEngine_Behaviour_o *)this->fields.equipAtkSprite;
  if ( !frameTopSprite )
    goto LABEL_36;
  if ( !UnityEngine_Behaviour__get_enabled(frameTopSprite, 0) )
    goto LABEL_29;
  frameTopSprite = (UnityEngine_Behaviour_o *)this->fields.equipHpSprite;
  if ( !frameTopSprite )
    goto LABEL_36;
  if ( !UnityEngine_Behaviour__get_enabled(frameTopSprite, 0) )
  {
LABEL_29:
    v11 = (UnityEngine_Object_o *)this->fields.state;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    frameTopSprite = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
    if ( ((unsigned __int8)frameTopSprite & 1) == 0 )
      return;
LABEL_32:
    v12 = this->fields.state;
    if ( v12 )
    {
      v12->fields._topbtn_k__BackingField = 1;
      v12->fields._btmbtn_k__BackingField = 1;
      v12->fields._rarebtn_k__BackingField = 1;
      v12->fields._namebtn_k__BackingField = 1;
      v12->fields._atkbtn_k__BackingField = 1;
      v12->fields._hpbtn_k__BackingField = 1;
      goto LABEL_34;
    }
LABEL_36:
    sub_1C32E7C(frameTopSprite);
  }
  v10 = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  frameTopSprite = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
  if ( ((unsigned __int8)frameTopSprite & 1) != 0 )
    goto LABEL_8;
}


void UIEquipGraphV__SetAtkButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  struct UISprite_o *equipAtkSprite; // x0
  struct EquipGraphViewModeState_o *v7; // x8

  if ( (byte_4C39209 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39209 = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  equipAtkSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)equipAtkSprite & 1) != 0 )
  {
    v7 = this->fields.state;
    if ( isSetting )
    {
      if ( !v7 )
LABEL_14:
        sub_1C32E7C(equipAtkSprite);
    }
    else
    {
      if ( !v7 )
        goto LABEL_14;
      v7->fields._atkbtn_k__BackingField ^= 1u;
    }
    equipAtkSprite = this->fields.equipAtkSprite;
    if ( !equipAtkSprite )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)equipAtkSprite, v7->fields._atkbtn_k__BackingField, 0);
  }
}


void UIEquipGraphV__SetAtkLabel(UIEquipGraphV_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x20
  UnityEngine_Component_o *atkInput; // x0
  struct EquipGraphViewModeState_o *v5; // x8
  UILabel_o *atkLabel; // x19

  if ( (byte_4C3920B & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UILineInput___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3920B = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  atkInput = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)atkInput & 1) != 0 )
  {
    v5 = this->fields.state;
    if ( !v5
      || (atkInput = (UnityEngine_Component_o *)v5->fields.atkInput) == 0
      || (atkLabel = this->fields.atkLabel,
          (atkInput = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(atkInput, 0)) == 0)
      || (atkInput = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)atkInput,
                                                  (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILineInput___)) == 0
      || (atkInput = (UnityEngine_Component_o *)UILineInput__GetText((UILineInput_o *)atkInput, 0), !atkLabel) )
    {
      sub_1C32E7C(atkInput);
    }
    UILabel__set_text(atkLabel, (System_String_o *)atkInput, 0);
  }
}


void UIEquipGraphV__SetAutoLabel(UIEquipGraphV_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x20
  UnityEngine_Component_o *autoInput; // x0
  struct EquipGraphViewModeState_o *v5; // x8
  System_String_o *Text; // x0
  struct EquipGraphViewModeState_o *v7; // x8
  float v8; // s0
  float result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3920D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UILineInput___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3920D = 1;
  }
  result = 0.0;
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  autoInput = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)autoInput & 1) == 0 )
    goto LABEL_13;
  v5 = this->fields.state;
  if ( !v5 )
    goto LABEL_16;
  autoInput = (UnityEngine_Component_o *)v5->fields.autoInput;
  if ( !autoInput )
    goto LABEL_16;
  autoInput = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(autoInput, 0);
  if ( !autoInput )
    goto LABEL_16;
  autoInput = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)autoInput,
                                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILineInput___);
  if ( !autoInput )
    goto LABEL_16;
  Text = UILineInput__GetText((UILineInput_o *)autoInput, 0);
  autoInput = (UnityEngine_Component_o *)System_Single__TryParse(Text, &result, 0);
  if ( ((unsigned __int8)autoInput & 1) == 0 )
  {
LABEL_13:
    v7 = this->fields.state;
    if ( v7 )
    {
      v8 = 5.0;
      goto LABEL_15;
    }
LABEL_16:
    sub_1C32E7C(autoInput);
  }
  v7 = this->fields.state;
  if ( !v7 )
    goto LABEL_16;
  v8 = result;
LABEL_15:
  v7->fields.AutoPlayInterval = v8;
}


void UIEquipGraphV__SetBottomButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  struct UISprite_o *frameBottomSprite; // x0
  struct EquipGraphViewModeState_o *v7; // x8

  if ( (byte_4C39208 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39208 = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  frameBottomSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)frameBottomSprite & 1) != 0 )
  {
    v7 = this->fields.state;
    if ( isSetting )
    {
      if ( !v7 )
LABEL_14:
        sub_1C32E7C(frameBottomSprite);
    }
    else
    {
      if ( !v7 )
        goto LABEL_14;
      v7->fields._btmbtn_k__BackingField ^= 1u;
    }
    frameBottomSprite = this->fields.frameBottomSprite;
    if ( !frameBottomSprite )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled(
      (UnityEngine_Behaviour_o *)frameBottomSprite,
      v7->fields._btmbtn_k__BackingField,
      0);
  }
}


void UIEquipGraphV__SetButton(UIEquipGraphV_o *this, const MethodInfo *method)
{
  char *state; // x0
  Il2CppObject *Component_object; // x0
  struct EquipGraphViewModeState_o **p_state; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  __int64 v9; // x8
  __int64 v10; // x8
  int32_t v11; // w2
  int v12; // w9
  __int64 v13; // x8
  __int64 v14; // x8
  int32_t v15; // w2
  int v16; // w9
  __int64 v17; // x8
  __int64 v18; // x8
  int32_t v19; // w2
  int v20; // w9
  __int64 v21; // x8
  __int64 v22; // x8
  int32_t v23; // w2
  int v24; // w9
  __int64 v25; // x8
  __int64 v26; // x8
  int32_t v27; // w2
  int v28; // w9
  __int64 v29; // x8
  __int64 v30; // x8
  int32_t v31; // w2
  int v32; // w9
  __int64 v33; // x8
  __int64 v34; // x8
  int32_t v35; // w2
  int v36; // w9
  __int64 v37; // x8
  __int64 v38; // x8
  int32_t v39; // w2
  int v40; // w9
  __int64 v41; // x8
  __int64 v42; // x8
  int32_t v43; // w2
  int v44; // w9
  __int64 v45; // x8
  __int64 v46; // x8
  int32_t v47; // w2
  int v48; // w9
  __int64 v49; // x8
  __int64 v50; // x8
  int32_t v51; // w2
  int v52; // w9
  struct EquipGraphViewModeState_o *v53; // x8
  struct UICommonButton_o *topButton; // x8
  System_Collections_Generic_List_object__o *onClick; // x21
  EventDelegate_o *v56; // x22
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  struct UICommonButton_o *bottomButton; // x8
  System_Collections_Generic_List_object__o *v64; // x21
  EventDelegate_o *v65; // x22
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  struct UICommonButton_o *rareButton; // x8
  System_Collections_Generic_List_object__o *v73; // x21
  EventDelegate_o *v74; // x22
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  struct UICommonButton_o *atkButton; // x8
  System_Collections_Generic_List_object__o *v82; // x21
  EventDelegate_o *v83; // x22
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  struct UICommonButton_o *hpButton; // x8
  System_Collections_Generic_List_object__o *v91; // x21
  EventDelegate_o *v92; // x22
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  struct System_Object_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  Il2CppClass **v98; // x0
  struct UICommonButton_o *nameButton; // x8
  System_Collections_Generic_List_object__o *v100; // x21
  EventDelegate_o *v101; // x22
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  struct UICommonButton_o *allButton; // x8
  System_Collections_Generic_List_object__o *v109; // x21
  EventDelegate_o *v110; // x22
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  struct System_Object_array *v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  Il2CppClass **v116; // x0
  struct UICommonButton_o *rotButton; // x8
  System_Collections_Generic_List_object__o *v118; // x21
  EventDelegate_o *v119; // x22
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  struct System_Object_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  Il2CppClass **v125; // x0
  struct UIInput_o *atkInput; // x8
  System_Collections_Generic_List_object__o *onChange; // x21
  EventDelegate_o *v128; // x22
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  Il2CppClass **v134; // x0
  struct UIInput_o *hpInput; // x8
  System_Collections_Generic_List_object__o *v136; // x21
  EventDelegate_o *v137; // x22
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  struct System_Object_array *v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  Il2CppClass **v143; // x0
  struct UIInput_o *autoInput; // x8
  System_Collections_Generic_List_object__o *v145; // x21
  EventDelegate_o *v146; // x22
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  struct System_Object_array *v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  Il2CppClass **v152; // x0
  const MethodInfo *v153; // x2
  const MethodInfo *v154; // x2
  const MethodInfo *v155; // x2
  const MethodInfo *v156; // x2
  const MethodInfo *v157; // x2
  const MethodInfo *v158; // x2
  const MethodInfo *v159; // x2
  const MethodInfo *v160; // x1
  const MethodInfo *v161; // x1
  const MethodInfo *v162; // x1

  if ( (byte_4C39206 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_EquipGraphViewModeState___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C32C20(&StringLiteral_12820/*"SetTopButton"*/);
    sub_1C32C20(&StringLiteral_12809/*"SetNameButton"*/);
    sub_1C32C20(&StringLiteral_12783/*"SetAutoLabel"*/);
    sub_1C32C20(&StringLiteral_12813/*"SetRarityButton"*/);
    sub_1C32C20(&StringLiteral_12781/*"SetAtkButton"*/);
    sub_1C32C20(&StringLiteral_12777/*"SetAllButton"*/);
    sub_1C32C20(&StringLiteral_12798/*"SetHpButton"*/);
    sub_1C32C20(&StringLiteral_6113/*"EquipGraphViewMode"*/);
    sub_1C32C20(&StringLiteral_12782/*"SetAtkLabel"*/);
    sub_1C32C20(&StringLiteral_12787/*"SetBottomButton"*/);
    sub_1C32C20(&StringLiteral_12815/*"SetRotateButton"*/);
    sub_1C32C20(&StringLiteral_12799/*"SetHpLabel"*/);
    byte_4C39206 = 1;
  }
  state = (char *)UnityEngine_GameObject__Find((System_String_o *)StringLiteral_6113/*"EquipGraphViewMode"*/, 0);
  if ( !state )
    goto LABEL_129;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)state,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphViewModeState___);
  p_state = &this->fields.state;
  this->fields.state = (struct EquipGraphViewModeState_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.state, (int32_t)Component_object, v6, v7);
  state = (char *)this->fields.state;
  if ( !state )
    goto LABEL_129;
  v9 = *((_QWORD *)state + 4);
  if ( !v9 )
    goto LABEL_129;
  v10 = *(_QWORD *)(v9 + 104);
  if ( !v10 )
    goto LABEL_129;
  v11 = *(_DWORD *)(v10 + 24);
  v12 = *(_DWORD *)(v10 + 28) + 1;
  *(_DWORD *)(v10 + 24) = 0;
  *(_DWORD *)(v10 + 28) = v12;
  if ( v11 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v10 + 16), 0, v11, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v13 = *((_QWORD *)state + 6);
  if ( !v13 )
    goto LABEL_129;
  v14 = *(_QWORD *)(v13 + 104);
  if ( !v14 )
    goto LABEL_129;
  v15 = *(_DWORD *)(v14 + 24);
  v16 = *(_DWORD *)(v14 + 28) + 1;
  *(_DWORD *)(v14 + 24) = 0;
  *(_DWORD *)(v14 + 28) = v16;
  if ( v15 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v14 + 16), 0, v15, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v17 = *((_QWORD *)state + 8);
  if ( !v17 )
    goto LABEL_129;
  v18 = *(_QWORD *)(v17 + 104);
  if ( !v18 )
    goto LABEL_129;
  v19 = *(_DWORD *)(v18 + 24);
  v20 = *(_DWORD *)(v18 + 28) + 1;
  *(_DWORD *)(v18 + 24) = 0;
  *(_DWORD *)(v18 + 28) = v20;
  if ( v19 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v18 + 16), 0, v19, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v21 = *((_QWORD *)state + 10);
  if ( !v21 )
    goto LABEL_129;
  v22 = *(_QWORD *)(v21 + 104);
  if ( !v22 )
    goto LABEL_129;
  v23 = *(_DWORD *)(v22 + 24);
  v24 = *(_DWORD *)(v22 + 28) + 1;
  *(_DWORD *)(v22 + 24) = 0;
  *(_DWORD *)(v22 + 28) = v24;
  if ( v23 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v22 + 16), 0, v23, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v25 = *((_QWORD *)state + 12);
  if ( !v25 )
    goto LABEL_129;
  v26 = *(_QWORD *)(v25 + 104);
  if ( !v26 )
    goto LABEL_129;
  v27 = *(_DWORD *)(v26 + 24);
  v28 = *(_DWORD *)(v26 + 28) + 1;
  *(_DWORD *)(v26 + 24) = 0;
  *(_DWORD *)(v26 + 28) = v28;
  if ( v27 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v26 + 16), 0, v27, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v29 = *((_QWORD *)state + 14);
  if ( !v29 )
    goto LABEL_129;
  v30 = *(_QWORD *)(v29 + 104);
  if ( !v30 )
    goto LABEL_129;
  v31 = *(_DWORD *)(v30 + 24);
  v32 = *(_DWORD *)(v30 + 28) + 1;
  *(_DWORD *)(v30 + 24) = 0;
  *(_DWORD *)(v30 + 28) = v32;
  if ( v31 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v30 + 16), 0, v31, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v33 = *((_QWORD *)state + 16);
  if ( !v33 )
    goto LABEL_129;
  v34 = *(_QWORD *)(v33 + 104);
  if ( !v34 )
    goto LABEL_129;
  v35 = *(_DWORD *)(v34 + 24);
  v36 = *(_DWORD *)(v34 + 28) + 1;
  *(_DWORD *)(v34 + 24) = 0;
  *(_DWORD *)(v34 + 28) = v36;
  if ( v35 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v34 + 16), 0, v35, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v37 = *((_QWORD *)state + 18);
  if ( !v37 )
    goto LABEL_129;
  v38 = *(_QWORD *)(v37 + 104);
  if ( !v38 )
    goto LABEL_129;
  v39 = *(_DWORD *)(v38 + 24);
  v40 = *(_DWORD *)(v38 + 28) + 1;
  *(_DWORD *)(v38 + 24) = 0;
  *(_DWORD *)(v38 + 28) = v40;
  if ( v39 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v38 + 16), 0, v39, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v41 = *((_QWORD *)state + 27);
  if ( !v41 )
    goto LABEL_129;
  v42 = *(_QWORD *)(v41 + 136);
  if ( !v42 )
    goto LABEL_129;
  v43 = *(_DWORD *)(v42 + 24);
  v44 = *(_DWORD *)(v42 + 28) + 1;
  *(_DWORD *)(v42 + 24) = 0;
  *(_DWORD *)(v42 + 28) = v44;
  if ( v43 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v42 + 16), 0, v43, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v45 = *((_QWORD *)state + 28);
  if ( !v45 )
    goto LABEL_129;
  v46 = *(_QWORD *)(v45 + 136);
  if ( !v46 )
    goto LABEL_129;
  v47 = *(_DWORD *)(v46 + 24);
  v48 = *(_DWORD *)(v46 + 28) + 1;
  *(_DWORD *)(v46 + 24) = 0;
  *(_DWORD *)(v46 + 28) = v48;
  if ( v47 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v46 + 16), 0, v47, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v49 = *((_QWORD *)state + 29);
  if ( !v49 )
    goto LABEL_129;
  v50 = *(_QWORD *)(v49 + 136);
  if ( !v50 )
    goto LABEL_129;
  v51 = *(_DWORD *)(v50 + 24);
  v52 = *(_DWORD *)(v50 + 28) + 1;
  *(_DWORD *)(v50 + 24) = 0;
  *(_DWORD *)(v50 + 28) = v52;
  if ( v51 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v50 + 16), 0, v51, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  *((_QWORD *)state + 31) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(state + 248), (int32_t)this, v51, v8);
  v53 = this->fields.state;
  if ( !v53 )
    goto LABEL_129;
  topButton = v53->fields.topButton;
  if ( !topButton )
    goto LABEL_129;
  onClick = (System_Collections_Generic_List_object__o *)topButton->fields.onClick;
  v56 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
  EventDelegate___ctor_49231324(v56, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12820/*"SetTopButton"*/, 0);
  if ( !onClick )
    goto LABEL_129;
  items = onClick->fields._items;
  v60 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++onClick->fields._version;
  if ( !items )
    goto LABEL_129;
  size = onClick->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      onClick,
      (Il2CppObject *)v56,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = &items->obj.klass + size;
    onClick->fields._size = size + 1;
    v62[4] = (Il2CppClass *)v56;
    sub_1C32BC4((CGThumbnailListItem_o *)(v62 + 4), (int32_t)v56, v57, v58);
  }
  if ( !*p_state )
    goto LABEL_129;
  bottomButton = (*p_state)->fields.bottomButton;
  if ( !bottomButton )
    goto LABEL_129;
  v64 = (System_Collections_Generic_List_object__o *)bottomButton->fields.onClick;
  v65 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
  EventDelegate___ctor_49231324(v65, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12787/*"SetBottomButton"*/, 0);
  if ( !v64 )
    goto LABEL_129;
  v68 = v64->fields._items;
  v69 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v64->fields._version;
  if ( !v68 )
    goto LABEL_129;
  v70 = v64->fields._size;
  if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v64,
      (Il2CppObject *)v65,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
  }
  else
  {
    v71 = &v68->obj.klass + v70;
    v64->fields._size = v70 + 1;
    v71[4] = (Il2CppClass *)v65;
    sub_1C32BC4((CGThumbnailListItem_o *)(v71 + 4), (int32_t)v65, v66, v67);
  }
  if ( !*p_state )
    goto LABEL_129;
  rareButton = (*p_state)->fields.rareButton;
  if ( !rareButton )
    goto LABEL_129;
  v73 = (System_Collections_Generic_List_object__o *)rareButton->fields.onClick;
  v74 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
  EventDelegate___ctor_49231324(v74, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12813/*"SetRarityButton"*/, 0);
  if ( !v73 )
    goto LABEL_129;
  v77 = v73->fields._items;
  v78 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v73->fields._version;
  if ( !v77 )
    goto LABEL_129;
  v79 = v73->fields._size;
  if ( (unsigned int)v79 >= LODWORD(v77->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v73,
      (Il2CppObject *)v74,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
  }
  else
  {
    v80 = &v77->obj.klass + v79;
    v73->fields._size = v79 + 1;
    v80[4] = (Il2CppClass *)v74;
    sub_1C32BC4((CGThumbnailListItem_o *)(v80 + 4), (int32_t)v74, v75, v76);
  }
  if ( !*p_state )
    goto LABEL_129;
  atkButton = (*p_state)->fields.atkButton;
  if ( !atkButton )
    goto LABEL_129;
  v82 = (System_Collections_Generic_List_object__o *)atkButton->fields.onClick;
  v83 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
  EventDelegate___ctor_49231324(v83, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12781/*"SetAtkButton"*/, 0);
  if ( !v82 )
    goto LABEL_129;
  v86 = v82->fields._items;
  v87 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v82->fields._version;
  if ( !v86 )
    goto LABEL_129;
  v88 = v82->fields._size;
  if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v82,
      (Il2CppObject *)v83,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
  }
  else
  {
    v89 = &v86->obj.klass + v88;
    v82->fields._size = v88 + 1;
    v89[4] = (Il2CppClass *)v83;
    sub_1C32BC4((CGThumbnailListItem_o *)(v89 + 4), (int32_t)v83, v84, v85);
  }
  if ( !*p_state )
    goto LABEL_129;
  hpButton = (*p_state)->fields.hpButton;
  if ( !hpButton )
    goto LABEL_129;
  v91 = (System_Collections_Generic_List_object__o *)hpButton->fields.onClick;
  v92 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
  EventDelegate___ctor_49231324(v92, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12798/*"SetHpButton"*/, 0);
  if ( !v91 )
    goto LABEL_129;
  v95 = v91->fields._items;
  v96 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v91->fields._version;
  if ( !v95 )
    goto LABEL_129;
  v97 = v91->fields._size;
  if ( (unsigned int)v97 >= LODWORD(v95->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v91,
      (Il2CppObject *)v92,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
  }
  else
  {
    v98 = &v95->obj.klass + v97;
    v91->fields._size = v97 + 1;
    v98[4] = (Il2CppClass *)v92;
    sub_1C32BC4((CGThumbnailListItem_o *)(v98 + 4), (int32_t)v92, v93, v94);
  }
  if ( !*p_state )
    goto LABEL_129;
  nameButton = (*p_state)->fields.nameButton;
  if ( !nameButton )
    goto LABEL_129;
  v100 = (System_Collections_Generic_List_object__o *)nameButton->fields.onClick;
  v101 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
  EventDelegate___ctor_49231324(v101, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12809/*"SetNameButton"*/, 0);
  if ( !v100 )
    goto LABEL_129;
  v104 = v100->fields._items;
  v105 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v100->fields._version;
  if ( !v104 )
    goto LABEL_129;
  v106 = v100->fields._size;
  if ( (unsigned int)v106 >= LODWORD(v104->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v100,
      (Il2CppObject *)v101,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
  }
  else
  {
    v107 = &v104->obj.klass + v106;
    v100->fields._size = v106 + 1;
    v107[4] = (Il2CppClass *)v101;
    sub_1C32BC4((CGThumbnailListItem_o *)(v107 + 4), (int32_t)v101, v102, v103);
  }
  if ( !*p_state )
    goto LABEL_129;
  allButton = (*p_state)->fields.allButton;
  if ( !allButton )
    goto LABEL_129;
  v109 = (System_Collections_Generic_List_object__o *)allButton->fields.onClick;
  v110 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
  EventDelegate___ctor_49231324(v110, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12777/*"SetAllButton"*/, 0);
  if ( !v109 )
    goto LABEL_129;
  v113 = v109->fields._items;
  v114 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v109->fields._version;
  if ( !v113 )
    goto LABEL_129;
  v115 = v109->fields._size;
  if ( (unsigned int)v115 >= LODWORD(v113->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v109,
      (Il2CppObject *)v110,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
  }
  else
  {
    v116 = &v113->obj.klass + v115;
    v109->fields._size = v115 + 1;
    v116[4] = (Il2CppClass *)v110;
    sub_1C32BC4((CGThumbnailListItem_o *)(v116 + 4), (int32_t)v110, v111, v112);
  }
  if ( !*p_state )
    goto LABEL_129;
  rotButton = (*p_state)->fields.rotButton;
  if ( !rotButton )
    goto LABEL_129;
  v118 = (System_Collections_Generic_List_object__o *)rotButton->fields.onClick;
  v119 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
  EventDelegate___ctor_49231324(v119, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12815/*"SetRotateButton"*/, 0);
  if ( !v118 )
    goto LABEL_129;
  v122 = v118->fields._items;
  v123 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v118->fields._version;
  if ( !v122 )
    goto LABEL_129;
  v124 = v118->fields._size;
  if ( (unsigned int)v124 >= LODWORD(v122->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v118,
      (Il2CppObject *)v119,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
  }
  else
  {
    v125 = &v122->obj.klass + v124;
    v118->fields._size = v124 + 1;
    v125[4] = (Il2CppClass *)v119;
    sub_1C32BC4((CGThumbnailListItem_o *)(v125 + 4), (int32_t)v119, v120, v121);
  }
  if ( !*p_state )
    goto LABEL_129;
  atkInput = (*p_state)->fields.atkInput;
  if ( !atkInput )
    goto LABEL_129;
  onChange = (System_Collections_Generic_List_object__o *)atkInput->fields.onChange;
  v128 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
  EventDelegate___ctor_49231324(v128, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12782/*"SetAtkLabel"*/, 0);
  if ( !onChange )
    goto LABEL_129;
  v131 = onChange->fields._items;
  v132 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++onChange->fields._version;
  if ( !v131 )
    goto LABEL_129;
  v133 = onChange->fields._size;
  if ( (unsigned int)v133 >= LODWORD(v131->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      onChange,
      (Il2CppObject *)v128,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
  }
  else
  {
    v134 = &v131->obj.klass + v133;
    onChange->fields._size = v133 + 1;
    v134[4] = (Il2CppClass *)v128;
    sub_1C32BC4((CGThumbnailListItem_o *)(v134 + 4), (int32_t)v128, v129, v130);
  }
  if ( !*p_state )
    goto LABEL_129;
  hpInput = (*p_state)->fields.hpInput;
  if ( !hpInput )
    goto LABEL_129;
  v136 = (System_Collections_Generic_List_object__o *)hpInput->fields.onChange;
  v137 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
  EventDelegate___ctor_49231324(v137, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12799/*"SetHpLabel"*/, 0);
  if ( !v136 )
    goto LABEL_129;
  v140 = v136->fields._items;
  v141 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v136->fields._version;
  if ( !v140 )
    goto LABEL_129;
  v142 = v136->fields._size;
  if ( (unsigned int)v142 >= LODWORD(v140->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v136,
      (Il2CppObject *)v137,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
  }
  else
  {
    v143 = &v140->obj.klass + v142;
    v136->fields._size = v142 + 1;
    v143[4] = (Il2CppClass *)v137;
    sub_1C32BC4((CGThumbnailListItem_o *)(v143 + 4), (int32_t)v137, v138, v139);
  }
  if ( !*p_state )
    goto LABEL_129;
  autoInput = (*p_state)->fields.autoInput;
  if ( !autoInput )
    goto LABEL_129;
  v145 = (System_Collections_Generic_List_object__o *)autoInput->fields.onChange;
  v146 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
  EventDelegate___ctor_49231324(v146, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12783/*"SetAutoLabel"*/, 0);
  if ( !v145 )
    goto LABEL_129;
  v149 = v145->fields._items;
  v150 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v145->fields._version;
  if ( !v149 )
    goto LABEL_129;
  v151 = v145->fields._size;
  if ( (unsigned int)v151 >= LODWORD(v149->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v145,
      (Il2CppObject *)v146,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
  }
  else
  {
    v152 = &v149->obj.klass + v151;
    v145->fields._size = v151 + 1;
    v152[4] = (Il2CppClass *)v146;
    sub_1C32BC4((CGThumbnailListItem_o *)(v152 + 4), (int32_t)v146, v147, v148);
  }
  UIEquipGraphV__SetRotateButton(this, 1, v153);
  UIEquipGraphV__SetTopButton(this, 1, v154);
  UIEquipGraphV__SetBottomButton(this, 1, v155);
  UIEquipGraphV__SetRarityButton(this, 1, v156);
  UIEquipGraphV__SetAtkButton(this, 1, v157);
  UIEquipGraphV__SetHpButton(this, 1, v158);
  UIEquipGraphV__SetNameButton(this, 1, v159);
  state = (char *)this->fields.state;
  if ( !state
    || (EquipGraphViewModeState__OnClickAutoPlayButton((EquipGraphViewModeState_o *)state, 1, 0),
        (state = (char *)*p_state) == 0) )
  {
LABEL_129:
    sub_1C32E7C(state);
  }
  EquipGraphViewModeState__OnClickQuickAutoPlayButton((EquipGraphViewModeState_o *)state, 1, 0);
  UIEquipGraphV__SetAtkLabel(this, v160);
  UIEquipGraphV__SetHpLabel(this, v161);
  UIEquipGraphV__SetAutoLabel(this, v162);
}


void UIEquipGraphV__SetCharacter(
        UIEquipGraphV_o *this,
        System_String_o *imageName,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  void *AssetNameList; // x0
  System_String_array *v8; // x21
  int32_t v9; // w0
  System_String_o *v10; // x0
  int32_t v11; // w22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_array *loadNameList; // x23
  CGThumbnailListItem_o *p_loadNameList; // x22
  System_Delegate_o *v16; // x0
  UIEquipGraphV_c *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppClass *v20; // x8
  System_Action_c *v21; // x1
  AssetData_array *assetDataList; // x23
  const MethodInfo *v23; // x1
  System_String_array *klass; // x23
  System_Delegate_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Action_c *v28; // x1
  System_String_array *v29; // x20
  System_Action_o *v30; // x21
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C39202 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_UIEquipGraphV_EndLoadAsset__);
    sub_1C32C20(&UIEquipGraphViewerRender_TypeInfo);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C39202 = 1;
  }
  result = 0;
  if ( !UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo);
  AssetNameList = UIEquipGraphViewerRender__GetAssetNameList(imageName, (const MethodInfo *)imageName);
  if ( !imageName
    || ((v8 = (System_String_array *)AssetNameList,
         v9 = System_String__IndexOf_63576920(imageName, (System_String_o *)StringLiteral_1048/*"/"*/, 0),
         v10 = System_String__Substring(imageName, v9 + 1, 0),
         !System_Int32__TryParse(v10, &result, 0))
      ? (v11 = 9400010)
      : (v11 = result),
        (AssetNameList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0
     || (AssetNameList = DataManager__GetMasterData_object_(
                           (DataManager_o *)AssetNameList,
                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0
     || (AssetNameList = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)AssetNameList, v11, 0, 0)) == 0) )
  {
    sub_1C32E7C(AssetNameList);
  }
  loadNameList = this->fields.loadNameList;
  p_loadNameList = (CGThumbnailListItem_o *)&this->fields.loadNameList;
  this->fields.rarity = *((_DWORD *)AssetNameList + 6);
  if ( loadNameList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__compAssetStorageList(loadNameList, v8, 0) )
    {
      if ( !callbackFunc )
        return;
      v16 = (System_Delegate_o *)this->fields.callbackFunc;
      this = (UIEquipGraphV_o *)((char *)this + 656);
      v17 = (UIEquipGraphV_c *)System_Delegate__Combine(v16, (System_Delegate_o *)callbackFunc, 0);
      v20 = (Il2CppClass *)v17;
      if ( v17 )
      {
        v21 = System_Action_TypeInfo;
        if ( v17->_1.image != System_Action_TypeInfo )
          goto LABEL_34;
        this->klass = v17;
        if ( v17->_1.image != v21 )
          goto LABEL_34;
      }
      else
      {
        this->klass = 0;
      }
      sub_1C32BC4((CGThumbnailListItem_o *)this, (int32_t)v17, v18, v19);
      return;
    }
    klass = (System_String_array *)p_loadNameList->klass;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40444488(klass, 0);
LABEL_30:
    if ( !callbackFunc )
    {
LABEL_37:
      this->fields.loadNameList = v8;
      sub_1C32BC4(p_loadNameList, (int32_t)v8, v12, v13);
      v29 = this->fields.loadNameList;
      v30 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_UIEquipGraphV_EndLoadAsset__, 0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage_40442140(v29, v30, 1, 0);
      return;
    }
    loadNameList = (System_String_array *)&this->fields.callbackFunc;
    v25 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v20 = (Il2CppClass *)v25;
    if ( !v25 )
      goto LABEL_35;
    v28 = System_Action_TypeInfo;
    if ( (System_Action_c *)v25->klass == System_Action_TypeInfo )
    {
      loadNameList->obj.klass = (Il2CppClass *)v25;
      if ( (System_Action_c *)v25->klass == v28 )
        goto LABEL_36;
    }
LABEL_34:
    sub_1C3313C(v20);
LABEL_35:
    loadNameList->obj.klass = v20;
LABEL_36:
    sub_1C32BC4((CGThumbnailListItem_o *)loadNameList, (int32_t)v20, v26, v27);
    goto LABEL_37;
  }
  assetDataList = this->fields.assetDataList;
  if ( !assetDataList )
    goto LABEL_30;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__compAssetStorageList_40433272(assetDataList, v8, 0) )
    goto LABEL_30;
  UIEquipGraphV__SetTextureStatus(this, v23);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
}


void UIEquipGraphV__SetDispOffset(UIEquipGraphV_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter
    || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0
    || (v4.fields.y = this->fields.dispOffset.fields.y,
        v4.fields.x = this->fields.dispOffset.fields.x,
        v4.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v4, 0),
        (bodyFilter = (UnityEngine_Component_o *)this->fields.nameFilter) == 0)
    || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
  {
    sub_1C32E7C(bodyFilter);
  }
  v5.fields.y = this->fields.dispNameOffset.fields.y;
  v5.fields.x = this->fields.dispNameOffset.fields.x;
  v5.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v5, 0);
}


void UIEquipGraphV__SetFrame(UIEquipGraphV_o *this, const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x20
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  System_String_o *v13; // x0
  int32_t rarity; // w8
  System_String_o *v15; // x20
  __int64 *v16; // x9
  System_String_o **v17; // x8
  System_String_o *v18; // x21
  UISprite_o *frameTopSprite; // x22
  System_String_o *v20; // x23
  UISprite_o *frameBottomSprite; // x22
  System_String_o *v22; // x0

  if ( (byte_4C39205 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_18692/*"e"*/);
    sub_1C32C20(&StringLiteral_22958/*"rarity"*/);
    sub_1C32C20(&StringLiteral_16108/*"_0"*/);
    sub_1C32C20(&StringLiteral_13319/*"T"*/);
    sub_1C32C20(&StringLiteral_2510/*"B"*/);
    sub_1C32C20(&StringLiteral_19645/*"frame3"*/);
    sub_1C32C20(&StringLiteral_19639/*"frame1"*/);
    sub_1C32C20(&StringLiteral_18938/*"eframeB_hp"*/);
    sub_1C32C20(&StringLiteral_18937/*"eframeB_atk"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_19644/*"frame2"*/);
    byte_4C39205 = 1;
  }
  IsNullOrEmpty = sub_1C32CC8(string___TypeInfo, 3);
  if ( !IsNullOrEmpty )
    goto LABEL_24;
  v6 = IsNullOrEmpty;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24)
    || (v7 = StringLiteral_22958/*"rarity"*/,
        *(_QWORD *)(IsNullOrEmpty + 32) = StringLiteral_22958/*"rarity"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(IsNullOrEmpty + 32), v7, v4, v5),
        IsNullOrEmpty = (__int64)System_Int32__ToString((int)this + 648, 0),
        *(_DWORD *)(v6 + 24) <= 1u)
    || (*(_QWORD *)(v6 + 40) = IsNullOrEmpty,
        sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 40), IsNullOrEmpty, v8, v9),
        *(_DWORD *)(v6 + 24) <= 2u) )
  {
    sub_1C32E84(IsNullOrEmpty);
  }
  v12 = StringLiteral_16108/*"_0"*/;
  *(_QWORD *)(v6 + 48) = StringLiteral_16108/*"_0"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 48), v12, v10, v11);
  v13 = System_String__Join((System_String_o *)StringLiteral_1/*""*/, (System_String_array *)v6, 0);
  rarity = this->fields.rarity;
  v15 = v13;
  if ( (rarity & 0xFFFFFFFE) == 4 )
    v16 = &StringLiteral_19645/*"frame3"*/;
  else
    v16 = &StringLiteral_19639/*"frame1"*/;
  if ( rarity == 3 )
    v17 = (System_String_o **)&StringLiteral_19644/*"frame2"*/;
  else
    v17 = (System_String_o **)v16;
  v18 = *v17;
  IsNullOrEmpty = System_String__IsNullOrEmpty(*v17, 0);
  frameTopSprite = this->fields.frameTopSprite;
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    if ( frameTopSprite )
    {
      UISprite__set_spriteName(this->fields.frameTopSprite, 0, 0);
      IsNullOrEmpty = (__int64)this->fields.frameBottomSprite;
      if ( IsNullOrEmpty )
      {
        UISprite__set_spriteName((UISprite_o *)IsNullOrEmpty, 0, 0);
        IsNullOrEmpty = (__int64)this->fields.raritySprite;
        if ( IsNullOrEmpty )
        {
          UISprite__set_spriteName((UISprite_o *)IsNullOrEmpty, 0, 0);
          return;
        }
      }
    }
LABEL_24:
    sub_1C32E7C(IsNullOrEmpty);
  }
  v20 = System_String__Concat_63556792(
          (System_String_o *)StringLiteral_18692/*"e"*/,
          v18,
          (System_String_o *)StringLiteral_13319/*"T"*/,
          0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCharaGraphaOption(frameTopSprite, v20, 0);
  frameBottomSprite = this->fields.frameBottomSprite;
  v22 = System_String__Concat_63556792(
          (System_String_o *)StringLiteral_18692/*"e"*/,
          v18,
          (System_String_o *)StringLiteral_2510/*"B"*/,
          0);
  AtlasManager__SetCharaGraphaOption(frameBottomSprite, v22, 0);
  AtlasManager__SetCharaGraphaOption(this->fields.raritySprite, v15, 0);
  IsNullOrEmpty = (__int64)this->fields.raritySprite;
  if ( !IsNullOrEmpty )
    goto LABEL_24;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)IsNullOrEmpty + 840LL))(
    IsNullOrEmpty,
    *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 848LL));
  AtlasManager__SetCharaGraphaOption(this->fields.equipAtkSprite, (System_String_o *)StringLiteral_18937/*"eframeB_atk"*/, 0);
  IsNullOrEmpty = (__int64)this->fields.equipAtkSprite;
  if ( !IsNullOrEmpty )
    goto LABEL_24;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)IsNullOrEmpty + 840LL))(
    IsNullOrEmpty,
    *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 848LL));
  AtlasManager__SetCharaGraphaOption(this->fields.equipHpSprite, (System_String_o *)StringLiteral_18938/*"eframeB_hp"*/, 0);
  IsNullOrEmpty = (__int64)this->fields.equipHpSprite;
  if ( !IsNullOrEmpty )
    goto LABEL_24;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)IsNullOrEmpty + 840LL))(
    IsNullOrEmpty,
    *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 848LL));
}


void UIEquipGraphV__SetHpButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  struct UISprite_o *equipHpSprite; // x0
  struct EquipGraphViewModeState_o *v7; // x8

  if ( (byte_4C3920A & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3920A = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  equipHpSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)equipHpSprite & 1) != 0 )
  {
    v7 = this->fields.state;
    if ( isSetting )
    {
      if ( !v7 )
LABEL_14:
        sub_1C32E7C(equipHpSprite);
    }
    else
    {
      if ( !v7 )
        goto LABEL_14;
      v7->fields._hpbtn_k__BackingField ^= 1u;
    }
    equipHpSprite = this->fields.equipHpSprite;
    if ( !equipHpSprite )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)equipHpSprite, v7->fields._hpbtn_k__BackingField, 0);
  }
}


void UIEquipGraphV__SetHpLabel(UIEquipGraphV_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x20
  UnityEngine_Component_o *hpInput; // x0
  struct EquipGraphViewModeState_o *v5; // x8
  UILabel_o *hpLabel; // x19

  if ( (byte_4C3920C & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UILineInput___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3920C = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  hpInput = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)hpInput & 1) != 0 )
  {
    v5 = this->fields.state;
    if ( !v5
      || (hpInput = (UnityEngine_Component_o *)v5->fields.hpInput) == 0
      || (hpLabel = this->fields.hpLabel,
          (hpInput = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hpInput, 0)) == 0)
      || (hpInput = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)hpInput,
                                                 (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UILineInput___)) == 0
      || (hpInput = (UnityEngine_Component_o *)UILineInput__GetText((UILineInput_o *)hpInput, 0), !hpLabel) )
    {
      sub_1C32E7C(hpInput);
    }
    UILabel__set_text(hpLabel, (System_String_o *)hpInput, 0);
  }
}


void UIEquipGraphV__SetNameButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  struct UnityEngine_MeshRenderer_o *nameRenderer; // x0
  struct EquipGraphViewModeState_o *v7; // x8

  if ( (byte_4C3920F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3920F = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nameRenderer = (struct UnityEngine_MeshRenderer_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)nameRenderer & 1) != 0 )
  {
    v7 = this->fields.state;
    if ( isSetting )
    {
      if ( !v7 )
LABEL_14:
        sub_1C32E7C(nameRenderer);
    }
    else
    {
      if ( !v7 )
        goto LABEL_14;
      v7->fields._namebtn_k__BackingField ^= 1u;
    }
    nameRenderer = this->fields.nameRenderer;
    if ( !nameRenderer )
      goto LABEL_14;
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)nameRenderer, v7->fields._namebtn_k__BackingField, 0);
  }
}


void UIEquipGraphV__SetRarityButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  struct UISprite_o *raritySprite; // x0
  struct EquipGraphViewModeState_o *v7; // x8

  if ( (byte_4C3920E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3920E = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  raritySprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)raritySprite & 1) != 0 )
  {
    v7 = this->fields.state;
    if ( isSetting )
    {
      if ( !v7 )
LABEL_14:
        sub_1C32E7C(raritySprite);
    }
    else
    {
      if ( !v7 )
        goto LABEL_14;
      v7->fields._rarebtn_k__BackingField ^= 1u;
    }
    raritySprite = this->fields.raritySprite;
    if ( !raritySprite )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)raritySprite, v7->fields._rarebtn_k__BackingField, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphV__SetRotateButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  UnityEngine_GameObject_o *transform; // x0
  struct EquipGraphViewModeState_o *v7; // x8
  UnityEngine_Object_o *rotateBase; // x20
  struct EquipGraphViewModeState_o *v9; // x8
  _BOOL4 rotbtn_k__BackingField; // w20
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Transform_o *v12; // x20
  float v13; // s0 OVERLAPPED
  float v14; // s1
  UnityEngine_Transform_o *v15; // x20
  float v16; // s2
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C39211 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39211 = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !isSetting )
    {
      v7 = this->fields.state;
      if ( !v7 )
        goto LABEL_29;
      v7->fields._rotbtn_k__BackingField ^= 1u;
    }
    rotateBase = (UnityEngine_Object_o *)this->fields.rotateBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(rotateBase, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      v9 = this->fields.state;
      if ( v9 )
      {
        transform = this->fields.rotateBase;
        if ( transform )
        {
          rotbtn_k__BackingField = v9->fields._rotbtn_k__BackingField;
          transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
          if ( rotbtn_k__BackingField )
          {
            if ( transform )
            {
              v17.fields.z = 0.0;
              v17.fields.x = -428.0;
              v17.fields.y = -280.0;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v17, 0);
              transform = this->fields.rotateBase;
              if ( transform )
              {
                v11 = UnityEngine_GameObject__get_transform(transform, 0);
                v18.fields.z = 1.5708;
                v12 = v11;
                v18.fields.x = 0.0;
                v18.fields.y = 0.0;
                v21 = UnityEngine_Quaternion__Internal_FromEulerRad(v18, 0);
                if ( v12 )
                {
                  UnityEngine_Transform__set_localRotation(v12, v21, 0);
                  transform = this->fields.rotateBase;
                  if ( transform )
                  {
                    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
                    if ( transform )
                    {
                      v13 = 1.5;
                      v14 = 1.5;
LABEL_28:
                      v16 = 1.0;
                      UnityEngine_Transform__set_localScale(
                        (UnityEngine_Transform_o *)transform,
                        *(UnityEngine_Vector3_o *)&v13,
                        0);
                      return;
                    }
                  }
                }
              }
            }
          }
          else if ( transform )
          {
            v19.fields.x = 0.0;
            v19.fields.y = 0.0;
            v19.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v19, 0);
            transform = this->fields.rotateBase;
            if ( transform )
            {
              v15 = UnityEngine_GameObject__get_transform(transform, 0);
              v20.fields.x = 0.0;
              v20.fields.y = 0.0;
              v20.fields.z = 0.0;
              v22 = UnityEngine_Quaternion__Internal_FromEulerRad(v20, 0);
              if ( v15 )
              {
                UnityEngine_Transform__set_localRotation(v15, v22, 0);
                transform = this->fields.rotateBase;
                if ( transform )
                {
                  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
                  if ( transform )
                  {
                    v13 = 1.0;
                    v14 = 1.0;
                    goto LABEL_28;
                  }
                }
              }
            }
          }
        }
      }
LABEL_29:
      sub_1C32E7C(transform);
    }
  }
}


void UIEquipGraphV__SetTexture(UIEquipGraphV_o *this, const MethodInfo *method)
{
  UIEquipGraphV_o *v2; // x19
  struct AssetData_array *assetDataList; // x8
  AssetData_o *v4; // x20
  System_String_o *LastName; // x22
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UnityEngine_Texture2D_array *textureList; // x21
  System_String_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  v2 = this;
  if ( (byte_4C39204 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    sub_1C32C20(&UnityEngine_Texture2D___TypeInfo);
    this = (UIEquipGraphV_o *)sub_1C32C20(&StringLiteral_16629/*"a"*/);
    byte_4C39204 = 1;
  }
  assetDataList = v2->fields.assetDataList;
  if ( !assetDataList )
    goto LABEL_9;
  if ( !LODWORD(assetDataList->max_length) )
    goto LABEL_10;
  v4 = assetDataList->m_Items[0];
  if ( !v4
    || (LastName = AssetData__get_LastName(assetDataList->m_Items[0], 0),
        v6 = sub_1C32CC8(UnityEngine_Texture2D___TypeInfo, 1),
        v2->fields.textureList = (struct UnityEngine_Texture2D_array *)v6,
        sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.textureList, v6, v7, v8),
        textureList = v2->fields.textureList,
        v10 = System_String__Concat_63518544(LastName, (System_String_o *)StringLiteral_16629/*"a"*/, 0),
        this = (UIEquipGraphV_o *)AssetData__GetObject_object__51111776(
                                    v4,
                                    v10,
                                    (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424),
        !textureList) )
  {
LABEL_9:
    sub_1C32E7C(this);
  }
  if ( !LODWORD(textureList->max_length) )
LABEL_10:
    sub_1C32E84(this);
  textureList->m_Items[0] = (UnityEngine_Texture2D_o *)this;
  sub_1C32BC4((CGThumbnailListItem_o *)textureList->m_Items, (int32_t)this, v11, v12);
  UIEquipGraphV__SetTextureStatus(v2, v13);
}


void UIEquipGraphV__SetTextureStatus(UIEquipGraphV_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  UIEquipGraphViewerRender__SetCharacterRender((UIEquipGraphViewerRender_o *)this, method);
  UIEquipGraphViewerRender__SetNameRender((UIEquipGraphViewerRender_o *)this, v3);
  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter
    || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0
    || (v5.fields.y = this->fields.dispTop.fields.y,
        v5.fields.x = this->fields.dispTop.fields.x,
        v5.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v5, 0),
        (bodyFilter = (UnityEngine_Component_o *)this->fields.nameFilter) == 0)
    || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
  {
    sub_1C32E7C(bodyFilter);
  }
  v6.fields.y = this->fields.dispNameTop.fields.y;
  v6.fields.x = this->fields.dispNameTop.fields.x;
  v6.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v6, 0);
}


void UIEquipGraphV__SetTopButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  struct UISprite_o *frameTopSprite; // x0
  struct EquipGraphViewModeState_o *v7; // x8

  if ( (byte_4C39207 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39207 = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  frameTopSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)frameTopSprite & 1) != 0 )
  {
    v7 = this->fields.state;
    if ( isSetting )
    {
      if ( !v7 )
LABEL_14:
        sub_1C32E7C(frameTopSprite);
    }
    else
    {
      if ( !v7 )
        goto LABEL_14;
      v7->fields._topbtn_k__BackingField ^= 1u;
    }
    frameTopSprite = this->fields.frameTopSprite;
    if ( !frameTopSprite )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)frameTopSprite, v7->fields._topbtn_k__BackingField, 0);
  }
}


bool UIEquipGraphV__get_IsLoad(UIEquipGraphV_o *this, const MethodInfo *method)
{
  return this->fields.loadNameList != 0;
}