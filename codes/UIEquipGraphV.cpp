void UIEquipGraphV___ctor(UIEquipGraphV_o *this, const MethodInfo *method)
{
  if ( (byte_4C585D7 & 1) == 0 )
  {
    sub_1C3E564(&UIEquipGraphViewerRender_TypeInfo);
    byte_4C585D7 = 1;
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
  AssetData_array *AssetStorage_40589144; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int max_length; // w8
  struct AssetData_array *v9; // x20
  __int64 v10; // x9
  AssetData_array *assetDataList; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4C585C8 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C585C8 = 1;
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage_40589144 = AssetManager__getAssetStorage_40589144(loadNameList, 0);
    if ( AssetStorage_40589144 )
    {
      max_length = AssetStorage_40589144->max_length;
      v9 = AssetStorage_40589144;
      if ( max_length < 1 )
      {
LABEL_12:
        assetDataList = this->fields.assetDataList;
        this->fields.loadNameList = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.loadNameList, 0, v6, v7);
        this->fields.assetDataList = v9;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.assetDataList, (int32_t)v9, v12, v13);
        UIEquipGraphV__SetFrame(this, v14);
        UIEquipGraphV__SetTexture(this, v15);
        UIEquipGraphV__SetButton(this, v16);
        if ( assetDataList )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_40581180(assetDataList, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v17, v18);
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
        }
      }
      else
      {
        v10 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v10 >= max_length )
            sub_1C3E7C8(AssetStorage_40589144, v5);
          if ( !AssetStorage_40589144->m_Items[v10] )
            break;
          if ( (int)++v10 >= max_length )
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

  if ( (byte_4C585C6 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C585C6 = 1;
  }
  UIEquipGraphViewerRender__ReleaseCharacter((UIEquipGraphViewerRender_o *)this, method);
  assetDataList = this->fields.assetDataList;
  if ( assetDataList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40581180(assetDataList, 0);
    this->fields.assetDataList = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.assetDataList, 0, v4, v5);
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    p_loadNameList = (CGThumbnailListItem_o *)&this->fields.loadNameList;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40590132(loadNameList, 0);
    p_loadNameList->klass = 0;
    sub_1C3E508(p_loadNameList, 0, v8, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C585D5 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C585D5 = 1;
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
    sub_1C3E7C0(frameTopSprite, *(_QWORD *)&isForce);
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
  __int64 v7; // x1
  struct EquipGraphViewModeState_o *v8; // x8

  if ( (byte_4C585CE & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C585CE = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  equipAtkSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)equipAtkSprite & 1) != 0 )
  {
    v8 = this->fields.state;
    if ( isSetting )
    {
      if ( !v8 )
LABEL_14:
        sub_1C3E7C0(equipAtkSprite, v7);
    }
    else
    {
      if ( !v8 )
        goto LABEL_14;
      v8->fields._atkbtn_k__BackingField ^= 1u;
    }
    equipAtkSprite = this->fields.equipAtkSprite;
    if ( !equipAtkSprite )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)equipAtkSprite, v8->fields._atkbtn_k__BackingField, 0);
  }
}


void UIEquipGraphV__SetAtkLabel(UIEquipGraphV_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x20
  UnityEngine_Component_o *atkInput; // x0
  __int64 v5; // x1
  struct EquipGraphViewModeState_o *v6; // x8
  UILabel_o *atkLabel; // x19

  if ( (byte_4C585D0 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UILineInput___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C585D0 = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  atkInput = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)atkInput & 1) != 0 )
  {
    v6 = this->fields.state;
    if ( !v6
      || (atkInput = (UnityEngine_Component_o *)v6->fields.atkInput) == 0
      || (atkLabel = this->fields.atkLabel,
          (atkInput = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(atkInput, 0)) == 0)
      || (atkInput = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)atkInput,
                                                  (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UILineInput___)) == 0
      || (atkInput = (UnityEngine_Component_o *)UILineInput__GetText((UILineInput_o *)atkInput, 0), !atkLabel) )
    {
      sub_1C3E7C0(atkInput, v5);
    }
    UILabel__set_text(atkLabel, (System_String_o *)atkInput, 0);
  }
}


void UIEquipGraphV__SetAutoLabel(UIEquipGraphV_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x20
  UnityEngine_Component_o *autoInput; // x0
  __int64 v5; // x1
  struct EquipGraphViewModeState_o *v6; // x8
  System_String_o *Text; // x0
  struct EquipGraphViewModeState_o *v8; // x8
  float v9; // s0
  float result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C585D2 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UILineInput___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C585D2 = 1;
  }
  result = 0.0;
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  autoInput = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)autoInput & 1) == 0 )
    goto LABEL_13;
  v6 = this->fields.state;
  if ( !v6 )
    goto LABEL_16;
  autoInput = (UnityEngine_Component_o *)v6->fields.autoInput;
  if ( !autoInput )
    goto LABEL_16;
  autoInput = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(autoInput, 0);
  if ( !autoInput )
    goto LABEL_16;
  autoInput = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)autoInput,
                                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UILineInput___);
  if ( !autoInput )
    goto LABEL_16;
  Text = UILineInput__GetText((UILineInput_o *)autoInput, 0);
  autoInput = (UnityEngine_Component_o *)System_Single__TryParse(Text, &result, 0);
  if ( ((unsigned __int8)autoInput & 1) == 0 )
  {
LABEL_13:
    v8 = this->fields.state;
    if ( v8 )
    {
      v9 = 5.0;
      goto LABEL_15;
    }
LABEL_16:
    sub_1C3E7C0(autoInput, v5);
  }
  v8 = this->fields.state;
  if ( !v8 )
    goto LABEL_16;
  v9 = result;
LABEL_15:
  v8->fields.AutoPlayInterval = v9;
}


void UIEquipGraphV__SetBottomButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  struct UISprite_o *frameBottomSprite; // x0
  __int64 v7; // x1
  struct EquipGraphViewModeState_o *v8; // x8

  if ( (byte_4C585CD & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C585CD = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  frameBottomSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)frameBottomSprite & 1) != 0 )
  {
    v8 = this->fields.state;
    if ( isSetting )
    {
      if ( !v8 )
LABEL_14:
        sub_1C3E7C0(frameBottomSprite, v7);
    }
    else
    {
      if ( !v8 )
        goto LABEL_14;
      v8->fields._btmbtn_k__BackingField ^= 1u;
    }
    frameBottomSprite = this->fields.frameBottomSprite;
    if ( !frameBottomSprite )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled(
      (UnityEngine_Behaviour_o *)frameBottomSprite,
      v8->fields._btmbtn_k__BackingField,
      0);
  }
}


void UIEquipGraphV__SetButton(UIEquipGraphV_o *this, const MethodInfo *method)
{
  char *state; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  struct EquipGraphViewModeState_o **p_state; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  __int64 v10; // x8
  __int64 v11; // x8
  int32_t v12; // w2
  int v13; // w9
  __int64 v14; // x8
  __int64 v15; // x8
  int32_t v16; // w2
  int v17; // w9
  __int64 v18; // x8
  __int64 v19; // x8
  int32_t v20; // w2
  int v21; // w9
  __int64 v22; // x8
  __int64 v23; // x8
  int32_t v24; // w2
  int v25; // w9
  __int64 v26; // x8
  __int64 v27; // x8
  int32_t v28; // w2
  int v29; // w9
  __int64 v30; // x8
  __int64 v31; // x8
  int32_t v32; // w2
  int v33; // w9
  __int64 v34; // x8
  __int64 v35; // x8
  int32_t v36; // w2
  int v37; // w9
  __int64 v38; // x8
  __int64 v39; // x8
  int32_t v40; // w2
  int v41; // w9
  __int64 v42; // x8
  __int64 v43; // x8
  int32_t v44; // w2
  int v45; // w9
  __int64 v46; // x8
  __int64 v47; // x8
  int32_t v48; // w2
  int v49; // w9
  __int64 v50; // x8
  __int64 v51; // x8
  int32_t v52; // w2
  int v53; // w9
  struct EquipGraphViewModeState_o *v54; // x8
  struct UICommonButton_o *topButton; // x8
  System_Collections_Generic_List_object__o *onClick; // x21
  EventDelegate_o *v57; // x22
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  struct UICommonButton_o *bottomButton; // x8
  System_Collections_Generic_List_object__o *v65; // x21
  EventDelegate_o *v66; // x22
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  struct UICommonButton_o *rareButton; // x8
  System_Collections_Generic_List_object__o *v74; // x21
  EventDelegate_o *v75; // x22
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  struct UICommonButton_o *atkButton; // x8
  System_Collections_Generic_List_object__o *v83; // x21
  EventDelegate_o *v84; // x22
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  struct UICommonButton_o *hpButton; // x8
  System_Collections_Generic_List_object__o *v92; // x21
  EventDelegate_o *v93; // x22
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  struct System_Object_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  Il2CppClass **v99; // x0
  struct UICommonButton_o *nameButton; // x8
  System_Collections_Generic_List_object__o *v101; // x21
  EventDelegate_o *v102; // x22
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  struct UICommonButton_o *allButton; // x8
  System_Collections_Generic_List_object__o *v110; // x21
  EventDelegate_o *v111; // x22
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  struct System_Object_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  Il2CppClass **v117; // x0
  struct UICommonButton_o *rotButton; // x8
  System_Collections_Generic_List_object__o *v119; // x21
  EventDelegate_o *v120; // x22
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  struct System_Object_array *v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  Il2CppClass **v126; // x0
  struct UIInput_o *atkInput; // x8
  System_Collections_Generic_List_object__o *onChange; // x21
  EventDelegate_o *v129; // x22
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  struct System_Object_array *v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  Il2CppClass **v135; // x0
  struct UIInput_o *hpInput; // x8
  System_Collections_Generic_List_object__o *v137; // x21
  EventDelegate_o *v138; // x22
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  Il2CppClass **v144; // x0
  struct UIInput_o *autoInput; // x8
  System_Collections_Generic_List_object__o *v146; // x21
  EventDelegate_o *v147; // x22
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  struct System_Object_array *v150; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  Il2CppClass **v153; // x0
  const MethodInfo *v154; // x2
  const MethodInfo *v155; // x2
  const MethodInfo *v156; // x2
  const MethodInfo *v157; // x2
  const MethodInfo *v158; // x2
  const MethodInfo *v159; // x2
  const MethodInfo *v160; // x2
  const MethodInfo *v161; // x1
  const MethodInfo *v162; // x1
  const MethodInfo *v163; // x1

  if ( (byte_4C585CB & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_EquipGraphViewModeState___);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C3E564(&StringLiteral_12829/*"SetTopButton"*/);
    sub_1C3E564(&StringLiteral_12818/*"SetNameButton"*/);
    sub_1C3E564(&StringLiteral_12792/*"SetAutoLabel"*/);
    sub_1C3E564(&StringLiteral_12822/*"SetRarityButton"*/);
    sub_1C3E564(&StringLiteral_12790/*"SetAtkButton"*/);
    sub_1C3E564(&StringLiteral_12786/*"SetAllButton"*/);
    sub_1C3E564(&StringLiteral_12807/*"SetHpButton"*/);
    sub_1C3E564(&StringLiteral_6114/*"EquipGraphViewMode"*/);
    sub_1C3E564(&StringLiteral_12791/*"SetAtkLabel"*/);
    sub_1C3E564(&StringLiteral_12796/*"SetBottomButton"*/);
    sub_1C3E564(&StringLiteral_12824/*"SetRotateButton"*/);
    sub_1C3E564(&StringLiteral_12808/*"SetHpLabel"*/);
    byte_4C585CB = 1;
  }
  state = (char *)UnityEngine_GameObject__Find((System_String_o *)StringLiteral_6114/*"EquipGraphViewMode"*/, 0);
  if ( !state )
    goto LABEL_129;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)state,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_EquipGraphViewModeState___);
  p_state = &this->fields.state;
  this->fields.state = (struct EquipGraphViewModeState_o *)Component_object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.state, (int32_t)Component_object, v7, v8);
  state = (char *)this->fields.state;
  if ( !state )
    goto LABEL_129;
  v10 = *((_QWORD *)state + 4);
  if ( !v10 )
    goto LABEL_129;
  v11 = *(_QWORD *)(v10 + 104);
  if ( !v11 )
    goto LABEL_129;
  v12 = *(_DWORD *)(v11 + 24);
  v13 = *(_DWORD *)(v11 + 28) + 1;
  *(_DWORD *)(v11 + 24) = 0;
  *(_DWORD *)(v11 + 28) = v13;
  if ( v12 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v11 + 16), 0, v12, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v14 = *((_QWORD *)state + 6);
  if ( !v14 )
    goto LABEL_129;
  v15 = *(_QWORD *)(v14 + 104);
  if ( !v15 )
    goto LABEL_129;
  v16 = *(_DWORD *)(v15 + 24);
  v17 = *(_DWORD *)(v15 + 28) + 1;
  *(_DWORD *)(v15 + 24) = 0;
  *(_DWORD *)(v15 + 28) = v17;
  if ( v16 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v15 + 16), 0, v16, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v18 = *((_QWORD *)state + 8);
  if ( !v18 )
    goto LABEL_129;
  v19 = *(_QWORD *)(v18 + 104);
  if ( !v19 )
    goto LABEL_129;
  v20 = *(_DWORD *)(v19 + 24);
  v21 = *(_DWORD *)(v19 + 28) + 1;
  *(_DWORD *)(v19 + 24) = 0;
  *(_DWORD *)(v19 + 28) = v21;
  if ( v20 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v19 + 16), 0, v20, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v22 = *((_QWORD *)state + 10);
  if ( !v22 )
    goto LABEL_129;
  v23 = *(_QWORD *)(v22 + 104);
  if ( !v23 )
    goto LABEL_129;
  v24 = *(_DWORD *)(v23 + 24);
  v25 = *(_DWORD *)(v23 + 28) + 1;
  *(_DWORD *)(v23 + 24) = 0;
  *(_DWORD *)(v23 + 28) = v25;
  if ( v24 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v23 + 16), 0, v24, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v26 = *((_QWORD *)state + 12);
  if ( !v26 )
    goto LABEL_129;
  v27 = *(_QWORD *)(v26 + 104);
  if ( !v27 )
    goto LABEL_129;
  v28 = *(_DWORD *)(v27 + 24);
  v29 = *(_DWORD *)(v27 + 28) + 1;
  *(_DWORD *)(v27 + 24) = 0;
  *(_DWORD *)(v27 + 28) = v29;
  if ( v28 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v27 + 16), 0, v28, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v30 = *((_QWORD *)state + 14);
  if ( !v30 )
    goto LABEL_129;
  v31 = *(_QWORD *)(v30 + 104);
  if ( !v31 )
    goto LABEL_129;
  v32 = *(_DWORD *)(v31 + 24);
  v33 = *(_DWORD *)(v31 + 28) + 1;
  *(_DWORD *)(v31 + 24) = 0;
  *(_DWORD *)(v31 + 28) = v33;
  if ( v32 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v31 + 16), 0, v32, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v34 = *((_QWORD *)state + 16);
  if ( !v34 )
    goto LABEL_129;
  v35 = *(_QWORD *)(v34 + 104);
  if ( !v35 )
    goto LABEL_129;
  v36 = *(_DWORD *)(v35 + 24);
  v37 = *(_DWORD *)(v35 + 28) + 1;
  *(_DWORD *)(v35 + 24) = 0;
  *(_DWORD *)(v35 + 28) = v37;
  if ( v36 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v35 + 16), 0, v36, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v38 = *((_QWORD *)state + 18);
  if ( !v38 )
    goto LABEL_129;
  v39 = *(_QWORD *)(v38 + 104);
  if ( !v39 )
    goto LABEL_129;
  v40 = *(_DWORD *)(v39 + 24);
  v41 = *(_DWORD *)(v39 + 28) + 1;
  *(_DWORD *)(v39 + 24) = 0;
  *(_DWORD *)(v39 + 28) = v41;
  if ( v40 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v39 + 16), 0, v40, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v42 = *((_QWORD *)state + 27);
  if ( !v42 )
    goto LABEL_129;
  v43 = *(_QWORD *)(v42 + 136);
  if ( !v43 )
    goto LABEL_129;
  v44 = *(_DWORD *)(v43 + 24);
  v45 = *(_DWORD *)(v43 + 28) + 1;
  *(_DWORD *)(v43 + 24) = 0;
  *(_DWORD *)(v43 + 28) = v45;
  if ( v44 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v43 + 16), 0, v44, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v46 = *((_QWORD *)state + 28);
  if ( !v46 )
    goto LABEL_129;
  v47 = *(_QWORD *)(v46 + 136);
  if ( !v47 )
    goto LABEL_129;
  v48 = *(_DWORD *)(v47 + 24);
  v49 = *(_DWORD *)(v47 + 28) + 1;
  *(_DWORD *)(v47 + 24) = 0;
  *(_DWORD *)(v47 + 28) = v49;
  if ( v48 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v47 + 16), 0, v48, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v50 = *((_QWORD *)state + 29);
  if ( !v50 )
    goto LABEL_129;
  v51 = *(_QWORD *)(v50 + 136);
  if ( !v51 )
    goto LABEL_129;
  v52 = *(_DWORD *)(v51 + 24);
  v53 = *(_DWORD *)(v51 + 28) + 1;
  *(_DWORD *)(v51 + 24) = 0;
  *(_DWORD *)(v51 + 28) = v53;
  if ( v52 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v51 + 16), 0, v52, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  *((_QWORD *)state + 31) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(state + 248), (int32_t)this, v52, v9);
  v54 = this->fields.state;
  if ( !v54 )
    goto LABEL_129;
  topButton = v54->fields.topButton;
  if ( !topButton )
    goto LABEL_129;
  onClick = (System_Collections_Generic_List_object__o *)topButton->fields.onClick;
  v57 = (EventDelegate_o *)sub_1C3E7B0(EventDelegate_TypeInfo);
  EventDelegate___ctor_49347676(v57, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12829/*"SetTopButton"*/, 0);
  if ( !onClick )
    goto LABEL_129;
  items = onClick->fields._items;
  v61 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++onClick->fields._version;
  if ( !items )
    goto LABEL_129;
  size = onClick->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      onClick,
      (Il2CppObject *)v57,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = &items->obj.klass + size;
    onClick->fields._size = size + 1;
    v63[4] = (Il2CppClass *)v57;
    sub_1C3E508((CGThumbnailListItem_o *)(v63 + 4), (int32_t)v57, v58, v59);
  }
  if ( !*p_state )
    goto LABEL_129;
  bottomButton = (*p_state)->fields.bottomButton;
  if ( !bottomButton )
    goto LABEL_129;
  v65 = (System_Collections_Generic_List_object__o *)bottomButton->fields.onClick;
  v66 = (EventDelegate_o *)sub_1C3E7B0(EventDelegate_TypeInfo);
  EventDelegate___ctor_49347676(v66, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12796/*"SetBottomButton"*/, 0);
  if ( !v65 )
    goto LABEL_129;
  v69 = v65->fields._items;
  v70 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v65->fields._version;
  if ( !v69 )
    goto LABEL_129;
  v71 = v65->fields._size;
  if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v65,
      (Il2CppObject *)v66,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
  }
  else
  {
    v72 = &v69->obj.klass + v71;
    v65->fields._size = v71 + 1;
    v72[4] = (Il2CppClass *)v66;
    sub_1C3E508((CGThumbnailListItem_o *)(v72 + 4), (int32_t)v66, v67, v68);
  }
  if ( !*p_state )
    goto LABEL_129;
  rareButton = (*p_state)->fields.rareButton;
  if ( !rareButton )
    goto LABEL_129;
  v74 = (System_Collections_Generic_List_object__o *)rareButton->fields.onClick;
  v75 = (EventDelegate_o *)sub_1C3E7B0(EventDelegate_TypeInfo);
  EventDelegate___ctor_49347676(v75, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12822/*"SetRarityButton"*/, 0);
  if ( !v74 )
    goto LABEL_129;
  v78 = v74->fields._items;
  v79 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v74->fields._version;
  if ( !v78 )
    goto LABEL_129;
  v80 = v74->fields._size;
  if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v74,
      (Il2CppObject *)v75,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
  }
  else
  {
    v81 = &v78->obj.klass + v80;
    v74->fields._size = v80 + 1;
    v81[4] = (Il2CppClass *)v75;
    sub_1C3E508((CGThumbnailListItem_o *)(v81 + 4), (int32_t)v75, v76, v77);
  }
  if ( !*p_state )
    goto LABEL_129;
  atkButton = (*p_state)->fields.atkButton;
  if ( !atkButton )
    goto LABEL_129;
  v83 = (System_Collections_Generic_List_object__o *)atkButton->fields.onClick;
  v84 = (EventDelegate_o *)sub_1C3E7B0(EventDelegate_TypeInfo);
  EventDelegate___ctor_49347676(v84, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12790/*"SetAtkButton"*/, 0);
  if ( !v83 )
    goto LABEL_129;
  v87 = v83->fields._items;
  v88 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v83->fields._version;
  if ( !v87 )
    goto LABEL_129;
  v89 = v83->fields._size;
  if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v83,
      (Il2CppObject *)v84,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
  }
  else
  {
    v90 = &v87->obj.klass + v89;
    v83->fields._size = v89 + 1;
    v90[4] = (Il2CppClass *)v84;
    sub_1C3E508((CGThumbnailListItem_o *)(v90 + 4), (int32_t)v84, v85, v86);
  }
  if ( !*p_state )
    goto LABEL_129;
  hpButton = (*p_state)->fields.hpButton;
  if ( !hpButton )
    goto LABEL_129;
  v92 = (System_Collections_Generic_List_object__o *)hpButton->fields.onClick;
  v93 = (EventDelegate_o *)sub_1C3E7B0(EventDelegate_TypeInfo);
  EventDelegate___ctor_49347676(v93, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12807/*"SetHpButton"*/, 0);
  if ( !v92 )
    goto LABEL_129;
  v96 = v92->fields._items;
  v97 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v92->fields._version;
  if ( !v96 )
    goto LABEL_129;
  v98 = v92->fields._size;
  if ( (unsigned int)v98 >= LODWORD(v96->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v92,
      (Il2CppObject *)v93,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
  }
  else
  {
    v99 = &v96->obj.klass + v98;
    v92->fields._size = v98 + 1;
    v99[4] = (Il2CppClass *)v93;
    sub_1C3E508((CGThumbnailListItem_o *)(v99 + 4), (int32_t)v93, v94, v95);
  }
  if ( !*p_state )
    goto LABEL_129;
  nameButton = (*p_state)->fields.nameButton;
  if ( !nameButton )
    goto LABEL_129;
  v101 = (System_Collections_Generic_List_object__o *)nameButton->fields.onClick;
  v102 = (EventDelegate_o *)sub_1C3E7B0(EventDelegate_TypeInfo);
  EventDelegate___ctor_49347676(v102, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12818/*"SetNameButton"*/, 0);
  if ( !v101 )
    goto LABEL_129;
  v105 = v101->fields._items;
  v106 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v101->fields._version;
  if ( !v105 )
    goto LABEL_129;
  v107 = v101->fields._size;
  if ( (unsigned int)v107 >= LODWORD(v105->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v101,
      (Il2CppObject *)v102,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
  }
  else
  {
    v108 = &v105->obj.klass + v107;
    v101->fields._size = v107 + 1;
    v108[4] = (Il2CppClass *)v102;
    sub_1C3E508((CGThumbnailListItem_o *)(v108 + 4), (int32_t)v102, v103, v104);
  }
  if ( !*p_state )
    goto LABEL_129;
  allButton = (*p_state)->fields.allButton;
  if ( !allButton )
    goto LABEL_129;
  v110 = (System_Collections_Generic_List_object__o *)allButton->fields.onClick;
  v111 = (EventDelegate_o *)sub_1C3E7B0(EventDelegate_TypeInfo);
  EventDelegate___ctor_49347676(v111, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12786/*"SetAllButton"*/, 0);
  if ( !v110 )
    goto LABEL_129;
  v114 = v110->fields._items;
  v115 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v110->fields._version;
  if ( !v114 )
    goto LABEL_129;
  v116 = v110->fields._size;
  if ( (unsigned int)v116 >= LODWORD(v114->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v110,
      (Il2CppObject *)v111,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
  }
  else
  {
    v117 = &v114->obj.klass + v116;
    v110->fields._size = v116 + 1;
    v117[4] = (Il2CppClass *)v111;
    sub_1C3E508((CGThumbnailListItem_o *)(v117 + 4), (int32_t)v111, v112, v113);
  }
  if ( !*p_state )
    goto LABEL_129;
  rotButton = (*p_state)->fields.rotButton;
  if ( !rotButton )
    goto LABEL_129;
  v119 = (System_Collections_Generic_List_object__o *)rotButton->fields.onClick;
  v120 = (EventDelegate_o *)sub_1C3E7B0(EventDelegate_TypeInfo);
  EventDelegate___ctor_49347676(v120, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12824/*"SetRotateButton"*/, 0);
  if ( !v119 )
    goto LABEL_129;
  v123 = v119->fields._items;
  v124 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v119->fields._version;
  if ( !v123 )
    goto LABEL_129;
  v125 = v119->fields._size;
  if ( (unsigned int)v125 >= LODWORD(v123->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v119,
      (Il2CppObject *)v120,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
  }
  else
  {
    v126 = &v123->obj.klass + v125;
    v119->fields._size = v125 + 1;
    v126[4] = (Il2CppClass *)v120;
    sub_1C3E508((CGThumbnailListItem_o *)(v126 + 4), (int32_t)v120, v121, v122);
  }
  if ( !*p_state )
    goto LABEL_129;
  atkInput = (*p_state)->fields.atkInput;
  if ( !atkInput )
    goto LABEL_129;
  onChange = (System_Collections_Generic_List_object__o *)atkInput->fields.onChange;
  v129 = (EventDelegate_o *)sub_1C3E7B0(EventDelegate_TypeInfo);
  EventDelegate___ctor_49347676(v129, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12791/*"SetAtkLabel"*/, 0);
  if ( !onChange )
    goto LABEL_129;
  v132 = onChange->fields._items;
  v133 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++onChange->fields._version;
  if ( !v132 )
    goto LABEL_129;
  v134 = onChange->fields._size;
  if ( (unsigned int)v134 >= LODWORD(v132->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      onChange,
      (Il2CppObject *)v129,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
  }
  else
  {
    v135 = &v132->obj.klass + v134;
    onChange->fields._size = v134 + 1;
    v135[4] = (Il2CppClass *)v129;
    sub_1C3E508((CGThumbnailListItem_o *)(v135 + 4), (int32_t)v129, v130, v131);
  }
  if ( !*p_state )
    goto LABEL_129;
  hpInput = (*p_state)->fields.hpInput;
  if ( !hpInput )
    goto LABEL_129;
  v137 = (System_Collections_Generic_List_object__o *)hpInput->fields.onChange;
  v138 = (EventDelegate_o *)sub_1C3E7B0(EventDelegate_TypeInfo);
  EventDelegate___ctor_49347676(v138, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12808/*"SetHpLabel"*/, 0);
  if ( !v137 )
    goto LABEL_129;
  v141 = v137->fields._items;
  v142 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v137->fields._version;
  if ( !v141 )
    goto LABEL_129;
  v143 = v137->fields._size;
  if ( (unsigned int)v143 >= LODWORD(v141->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v137,
      (Il2CppObject *)v138,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
  }
  else
  {
    v144 = &v141->obj.klass + v143;
    v137->fields._size = v143 + 1;
    v144[4] = (Il2CppClass *)v138;
    sub_1C3E508((CGThumbnailListItem_o *)(v144 + 4), (int32_t)v138, v139, v140);
  }
  if ( !*p_state )
    goto LABEL_129;
  autoInput = (*p_state)->fields.autoInput;
  if ( !autoInput )
    goto LABEL_129;
  v146 = (System_Collections_Generic_List_object__o *)autoInput->fields.onChange;
  v147 = (EventDelegate_o *)sub_1C3E7B0(EventDelegate_TypeInfo);
  EventDelegate___ctor_49347676(v147, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12792/*"SetAutoLabel"*/, 0);
  if ( !v146 )
    goto LABEL_129;
  v150 = v146->fields._items;
  v151 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v146->fields._version;
  if ( !v150 )
    goto LABEL_129;
  v152 = v146->fields._size;
  if ( (unsigned int)v152 >= LODWORD(v150->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v146,
      (Il2CppObject *)v147,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v151[4] + 192LL) + 112LL));
  }
  else
  {
    v153 = &v150->obj.klass + v152;
    v146->fields._size = v152 + 1;
    v153[4] = (Il2CppClass *)v147;
    sub_1C3E508((CGThumbnailListItem_o *)(v153 + 4), (int32_t)v147, v148, v149);
  }
  UIEquipGraphV__SetRotateButton(this, 1, v154);
  UIEquipGraphV__SetTopButton(this, 1, v155);
  UIEquipGraphV__SetBottomButton(this, 1, v156);
  UIEquipGraphV__SetRarityButton(this, 1, v157);
  UIEquipGraphV__SetAtkButton(this, 1, v158);
  UIEquipGraphV__SetHpButton(this, 1, v159);
  UIEquipGraphV__SetNameButton(this, 1, v160);
  state = (char *)this->fields.state;
  if ( !state
    || (EquipGraphViewModeState__OnClickAutoPlayButton((EquipGraphViewModeState_o *)state, 1, 0),
        (state = (char *)*p_state) == 0) )
  {
LABEL_129:
    sub_1C3E7C0(state, v4);
  }
  EquipGraphViewModeState__OnClickQuickAutoPlayButton((EquipGraphViewModeState_o *)state, 1, 0);
  UIEquipGraphV__SetAtkLabel(this, v161);
  UIEquipGraphV__SetHpLabel(this, v162);
  UIEquipGraphV__SetAutoLabel(this, v163);
}


void UIEquipGraphV__SetCharacter(
        UIEquipGraphV_o *this,
        System_String_o *imageName,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  void *AssetNameList; // x0
  __int64 v8; // x1
  System_String_array *v9; // x21
  int32_t v10; // w0
  System_String_o *v11; // x0
  int32_t v12; // w22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_String_array *loadNameList; // x23
  CGThumbnailListItem_o *p_loadNameList; // x22
  System_Delegate_o *v17; // x0
  UIEquipGraphV_c *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppClass *v21; // x8
  System_Action_c *v22; // x1
  AssetData_array *assetDataList; // x23
  const MethodInfo *v24; // x1
  System_String_array *klass; // x23
  System_Delegate_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Action_c *v29; // x1
  System_String_array *v30; // x20
  System_Action_o *v31; // x21
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C585C7 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_UIEquipGraphV_EndLoadAsset__);
    sub_1C3E564(&UIEquipGraphViewerRender_TypeInfo);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    byte_4C585C7 = 1;
  }
  result = 0;
  if ( !UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo);
  AssetNameList = UIEquipGraphViewerRender__GetAssetNameList(imageName, (const MethodInfo *)imageName);
  if ( !imageName
    || ((v9 = (System_String_array *)AssetNameList,
         v10 = System_String__IndexOf_63694844(imageName, (System_String_o *)StringLiteral_1048/*"/"*/, 0),
         v11 = System_String__Substring(imageName, v10 + 1, 0),
         !System_Int32__TryParse(v11, &result, 0))
      ? (v12 = 9400010)
      : (v12 = result),
        (AssetNameList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0
     || (AssetNameList = DataManager__GetMasterData_object_(
                           (DataManager_o *)AssetNameList,
                           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0
     || (AssetNameList = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)AssetNameList, v12, 0, 0)) == 0) )
  {
    sub_1C3E7C0(AssetNameList, v8);
  }
  loadNameList = this->fields.loadNameList;
  p_loadNameList = (CGThumbnailListItem_o *)&this->fields.loadNameList;
  this->fields.rarity = *((_DWORD *)AssetNameList + 6);
  if ( loadNameList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__compAssetStorageList(loadNameList, v9, 0) )
    {
      if ( !callbackFunc )
        return;
      v17 = (System_Delegate_o *)this->fields.callbackFunc;
      this = (UIEquipGraphV_o *)((char *)this + 656);
      v18 = (UIEquipGraphV_c *)System_Delegate__Combine(v17, (System_Delegate_o *)callbackFunc, 0);
      v21 = (Il2CppClass *)v18;
      if ( v18 )
      {
        v22 = System_Action_TypeInfo;
        if ( v18->_1.image != System_Action_TypeInfo )
          goto LABEL_34;
        this->klass = v18;
        if ( v18->_1.image != v22 )
          goto LABEL_34;
      }
      else
      {
        this->klass = 0;
      }
      sub_1C3E508((CGThumbnailListItem_o *)this, (int32_t)v18, v19, v20);
      return;
    }
    klass = (System_String_array *)p_loadNameList->klass;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40590132(klass, 0);
LABEL_30:
    if ( !callbackFunc )
    {
LABEL_37:
      this->fields.loadNameList = v9;
      sub_1C3E508(p_loadNameList, (int32_t)v9, v13, v14);
      v30 = this->fields.loadNameList;
      v31 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_UIEquipGraphV_EndLoadAsset__, 0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage_40587784(v30, v31, 1, 0);
      return;
    }
    loadNameList = (System_String_array *)&this->fields.callbackFunc;
    v26 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v21 = (Il2CppClass *)v26;
    if ( !v26 )
      goto LABEL_35;
    v29 = System_Action_TypeInfo;
    if ( (System_Action_c *)v26->klass == System_Action_TypeInfo )
    {
      loadNameList->obj.klass = (Il2CppClass *)v26;
      if ( (System_Action_c *)v26->klass == v29 )
        goto LABEL_36;
    }
LABEL_34:
    sub_1C3EA80(v21);
LABEL_35:
    loadNameList->obj.klass = v21;
LABEL_36:
    sub_1C3E508((CGThumbnailListItem_o *)loadNameList, (int32_t)v21, v27, v28);
    goto LABEL_37;
  }
  assetDataList = this->fields.assetDataList;
  if ( !assetDataList )
    goto LABEL_30;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__compAssetStorageList_40578916(assetDataList, v9, 0) )
    goto LABEL_30;
  UIEquipGraphV__SetTextureStatus(this, v24);
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
    sub_1C3E7C0(bodyFilter, method);
  }
  v5.fields.y = this->fields.dispNameOffset.fields.y;
  v5.fields.x = this->fields.dispNameOffset.fields.x;
  v5.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v5, 0);
}


void UIEquipGraphV__SetFrame(UIEquipGraphV_o *this, const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  System_String_o *v14; // x0
  int32_t rarity; // w8
  System_String_o *v16; // x20
  __int64 *v17; // x9
  System_String_o **v18; // x8
  System_String_o *v19; // x21
  UISprite_o *frameTopSprite; // x22
  System_String_o *v21; // x23
  UISprite_o *frameBottomSprite; // x22
  System_String_o *v23; // x0

  if ( (byte_4C585CA & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_18713/*"e"*/);
    sub_1C3E564(&StringLiteral_22981/*"rarity"*/);
    sub_1C3E564(&StringLiteral_16120/*"_0"*/);
    sub_1C3E564(&StringLiteral_13328/*"T"*/);
    sub_1C3E564(&StringLiteral_2510/*"B"*/);
    sub_1C3E564(&StringLiteral_19666/*"frame3"*/);
    sub_1C3E564(&StringLiteral_19660/*"frame1"*/);
    sub_1C3E564(&StringLiteral_18959/*"eframeB_hp"*/);
    sub_1C3E564(&StringLiteral_18958/*"eframeB_atk"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_19665/*"frame2"*/);
    byte_4C585CA = 1;
  }
  IsNullOrEmpty = sub_1C3E60C(string___TypeInfo, 3);
  if ( !IsNullOrEmpty )
    goto LABEL_24;
  v7 = IsNullOrEmpty;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24)
    || (v8 = StringLiteral_22981/*"rarity"*/,
        *(_QWORD *)(IsNullOrEmpty + 32) = StringLiteral_22981/*"rarity"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(IsNullOrEmpty + 32), v8, v5, v6),
        IsNullOrEmpty = (__int64)System_Int32__ToString((int)this + 648, 0),
        *(_DWORD *)(v7 + 24) <= 1u)
    || (*(_QWORD *)(v7 + 40) = IsNullOrEmpty,
        sub_1C3E508((CGThumbnailListItem_o *)(v7 + 40), IsNullOrEmpty, v9, v10),
        *(_DWORD *)(v7 + 24) <= 2u) )
  {
    sub_1C3E7C8(IsNullOrEmpty, v4);
  }
  v13 = StringLiteral_16120/*"_0"*/;
  *(_QWORD *)(v7 + 48) = StringLiteral_16120/*"_0"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 48), v13, v11, v12);
  v14 = System_String__Join((System_String_o *)StringLiteral_1/*""*/, (System_String_array *)v7, 0);
  rarity = this->fields.rarity;
  v16 = v14;
  if ( (rarity & 0xFFFFFFFE) == 4 )
    v17 = &StringLiteral_19666/*"frame3"*/;
  else
    v17 = &StringLiteral_19660/*"frame1"*/;
  if ( rarity == 3 )
    v18 = (System_String_o **)&StringLiteral_19665/*"frame2"*/;
  else
    v18 = (System_String_o **)v17;
  v19 = *v18;
  IsNullOrEmpty = System_String__IsNullOrEmpty(*v18, 0);
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
    sub_1C3E7C0(IsNullOrEmpty, v4);
  }
  v21 = System_String__Concat_63674716(
          (System_String_o *)StringLiteral_18713/*"e"*/,
          v19,
          (System_String_o *)StringLiteral_13328/*"T"*/,
          0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCharaGraphaOption(frameTopSprite, v21, 0);
  frameBottomSprite = this->fields.frameBottomSprite;
  v23 = System_String__Concat_63674716(
          (System_String_o *)StringLiteral_18713/*"e"*/,
          v19,
          (System_String_o *)StringLiteral_2510/*"B"*/,
          0);
  AtlasManager__SetCharaGraphaOption(frameBottomSprite, v23, 0);
  AtlasManager__SetCharaGraphaOption(this->fields.raritySprite, v16, 0);
  IsNullOrEmpty = (__int64)this->fields.raritySprite;
  if ( !IsNullOrEmpty )
    goto LABEL_24;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)IsNullOrEmpty + 840LL))(
    IsNullOrEmpty,
    *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 848LL));
  AtlasManager__SetCharaGraphaOption(this->fields.equipAtkSprite, (System_String_o *)StringLiteral_18958/*"eframeB_atk"*/, 0);
  IsNullOrEmpty = (__int64)this->fields.equipAtkSprite;
  if ( !IsNullOrEmpty )
    goto LABEL_24;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)IsNullOrEmpty + 840LL))(
    IsNullOrEmpty,
    *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 848LL));
  AtlasManager__SetCharaGraphaOption(this->fields.equipHpSprite, (System_String_o *)StringLiteral_18959/*"eframeB_hp"*/, 0);
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
  __int64 v7; // x1
  struct EquipGraphViewModeState_o *v8; // x8

  if ( (byte_4C585CF & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C585CF = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  equipHpSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)equipHpSprite & 1) != 0 )
  {
    v8 = this->fields.state;
    if ( isSetting )
    {
      if ( !v8 )
LABEL_14:
        sub_1C3E7C0(equipHpSprite, v7);
    }
    else
    {
      if ( !v8 )
        goto LABEL_14;
      v8->fields._hpbtn_k__BackingField ^= 1u;
    }
    equipHpSprite = this->fields.equipHpSprite;
    if ( !equipHpSprite )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)equipHpSprite, v8->fields._hpbtn_k__BackingField, 0);
  }
}


void UIEquipGraphV__SetHpLabel(UIEquipGraphV_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x20
  UnityEngine_Component_o *hpInput; // x0
  __int64 v5; // x1
  struct EquipGraphViewModeState_o *v6; // x8
  UILabel_o *hpLabel; // x19

  if ( (byte_4C585D1 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UILineInput___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C585D1 = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  hpInput = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)hpInput & 1) != 0 )
  {
    v6 = this->fields.state;
    if ( !v6
      || (hpInput = (UnityEngine_Component_o *)v6->fields.hpInput) == 0
      || (hpLabel = this->fields.hpLabel,
          (hpInput = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hpInput, 0)) == 0)
      || (hpInput = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)hpInput,
                                                 (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UILineInput___)) == 0
      || (hpInput = (UnityEngine_Component_o *)UILineInput__GetText((UILineInput_o *)hpInput, 0), !hpLabel) )
    {
      sub_1C3E7C0(hpInput, v5);
    }
    UILabel__set_text(hpLabel, (System_String_o *)hpInput, 0);
  }
}


void UIEquipGraphV__SetNameButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  struct UnityEngine_MeshRenderer_o *nameRenderer; // x0
  __int64 v7; // x1
  struct EquipGraphViewModeState_o *v8; // x8

  if ( (byte_4C585D4 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C585D4 = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nameRenderer = (struct UnityEngine_MeshRenderer_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)nameRenderer & 1) != 0 )
  {
    v8 = this->fields.state;
    if ( isSetting )
    {
      if ( !v8 )
LABEL_14:
        sub_1C3E7C0(nameRenderer, v7);
    }
    else
    {
      if ( !v8 )
        goto LABEL_14;
      v8->fields._namebtn_k__BackingField ^= 1u;
    }
    nameRenderer = this->fields.nameRenderer;
    if ( !nameRenderer )
      goto LABEL_14;
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)nameRenderer, v8->fields._namebtn_k__BackingField, 0);
  }
}


void UIEquipGraphV__SetRarityButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  struct UISprite_o *raritySprite; // x0
  __int64 v7; // x1
  struct EquipGraphViewModeState_o *v8; // x8

  if ( (byte_4C585D3 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C585D3 = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  raritySprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)raritySprite & 1) != 0 )
  {
    v8 = this->fields.state;
    if ( isSetting )
    {
      if ( !v8 )
LABEL_14:
        sub_1C3E7C0(raritySprite, v7);
    }
    else
    {
      if ( !v8 )
        goto LABEL_14;
      v8->fields._rarebtn_k__BackingField ^= 1u;
    }
    raritySprite = this->fields.raritySprite;
    if ( !raritySprite )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)raritySprite, v8->fields._rarebtn_k__BackingField, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphV__SetRotateButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  struct EquipGraphViewModeState_o *v8; // x8
  UnityEngine_Object_o *rotateBase; // x20
  struct EquipGraphViewModeState_o *v10; // x8
  _BOOL4 rotbtn_k__BackingField; // w20
  UnityEngine_Transform_o *v12; // x0
  UnityEngine_Transform_o *v13; // x20
  float v14; // s0 OVERLAPPED
  float v15; // s1
  UnityEngine_Transform_o *v16; // x20
  float v17; // s2
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C585D6 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C585D6 = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !isSetting )
    {
      v8 = this->fields.state;
      if ( !v8 )
        goto LABEL_29;
      v8->fields._rotbtn_k__BackingField ^= 1u;
    }
    rotateBase = (UnityEngine_Object_o *)this->fields.rotateBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(rotateBase, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      v10 = this->fields.state;
      if ( v10 )
      {
        transform = this->fields.rotateBase;
        if ( transform )
        {
          rotbtn_k__BackingField = v10->fields._rotbtn_k__BackingField;
          transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
          if ( rotbtn_k__BackingField )
          {
            if ( transform )
            {
              v18.fields.z = 0.0;
              v18.fields.x = -428.0;
              v18.fields.y = -280.0;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v18, 0);
              transform = this->fields.rotateBase;
              if ( transform )
              {
                v12 = UnityEngine_GameObject__get_transform(transform, 0);
                v19.fields.z = 1.5708;
                v13 = v12;
                v19.fields.x = 0.0;
                v19.fields.y = 0.0;
                v22 = UnityEngine_Quaternion__Internal_FromEulerRad(v19, 0);
                if ( v13 )
                {
                  UnityEngine_Transform__set_localRotation(v13, v22, 0);
                  transform = this->fields.rotateBase;
                  if ( transform )
                  {
                    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
                    if ( transform )
                    {
                      v14 = 1.5;
                      v15 = 1.5;
LABEL_28:
                      v17 = 1.0;
                      UnityEngine_Transform__set_localScale(
                        (UnityEngine_Transform_o *)transform,
                        *(UnityEngine_Vector3_o *)&v14,
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
            v20.fields.x = 0.0;
            v20.fields.y = 0.0;
            v20.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v20, 0);
            transform = this->fields.rotateBase;
            if ( transform )
            {
              v16 = UnityEngine_GameObject__get_transform(transform, 0);
              v21.fields.x = 0.0;
              v21.fields.y = 0.0;
              v21.fields.z = 0.0;
              v23 = UnityEngine_Quaternion__Internal_FromEulerRad(v21, 0);
              if ( v16 )
              {
                UnityEngine_Transform__set_localRotation(v16, v23, 0);
                transform = this->fields.rotateBase;
                if ( transform )
                {
                  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
                  if ( transform )
                  {
                    v14 = 1.0;
                    v15 = 1.0;
                    goto LABEL_28;
                  }
                }
              }
            }
          }
        }
      }
LABEL_29:
      sub_1C3E7C0(transform, v7);
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
  if ( (byte_4C585C9 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_Texture2D____78185184);
    sub_1C3E564(&UnityEngine_Texture2D___TypeInfo);
    this = (UIEquipGraphV_o *)sub_1C3E564(&StringLiteral_16641/*"a"*/);
    byte_4C585C9 = 1;
  }
  assetDataList = v2->fields.assetDataList;
  if ( !assetDataList )
    goto LABEL_9;
  if ( !LODWORD(assetDataList->max_length) )
    goto LABEL_10;
  v4 = assetDataList->m_Items[0];
  if ( !v4
    || (LastName = AssetData__get_LastName(assetDataList->m_Items[0], 0),
        v6 = sub_1C3E60C(UnityEngine_Texture2D___TypeInfo, 1),
        v2->fields.textureList = (struct UnityEngine_Texture2D_array *)v6,
        sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.textureList, v6, v7, v8),
        textureList = v2->fields.textureList,
        v10 = System_String__Concat_63636468(LastName, (System_String_o *)StringLiteral_16641/*"a"*/, 0),
        this = (UIEquipGraphV_o *)AssetData__GetObject_object__51228128(
                                    v4,
                                    v10,
                                    (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184),
        !textureList) )
  {
LABEL_9:
    sub_1C3E7C0(this, method);
  }
  if ( !LODWORD(textureList->max_length) )
LABEL_10:
    sub_1C3E7C8(this, method);
  textureList->m_Items[0] = (UnityEngine_Texture2D_o *)this;
  sub_1C3E508((CGThumbnailListItem_o *)textureList->m_Items, (int32_t)this, v11, v12);
  UIEquipGraphV__SetTextureStatus(v2, v13);
}


void UIEquipGraphV__SetTextureStatus(UIEquipGraphV_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  UIEquipGraphViewerRender__SetCharacterRender((UIEquipGraphViewerRender_o *)this, method);
  UIEquipGraphViewerRender__SetNameRender((UIEquipGraphViewerRender_o *)this, v3);
  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter
    || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0
    || (v6.fields.y = this->fields.dispTop.fields.y,
        v6.fields.x = this->fields.dispTop.fields.x,
        v6.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v6, 0),
        (bodyFilter = (UnityEngine_Component_o *)this->fields.nameFilter) == 0)
    || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
  {
    sub_1C3E7C0(bodyFilter, v4);
  }
  v7.fields.y = this->fields.dispNameTop.fields.y;
  v7.fields.x = this->fields.dispNameTop.fields.x;
  v7.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v7, 0);
}


void UIEquipGraphV__SetTopButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  struct UISprite_o *frameTopSprite; // x0
  __int64 v7; // x1
  struct EquipGraphViewModeState_o *v8; // x8

  if ( (byte_4C585CC & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C585CC = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  frameTopSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)frameTopSprite & 1) != 0 )
  {
    v8 = this->fields.state;
    if ( isSetting )
    {
      if ( !v8 )
LABEL_14:
        sub_1C3E7C0(frameTopSprite, v7);
    }
    else
    {
      if ( !v8 )
        goto LABEL_14;
      v8->fields._topbtn_k__BackingField ^= 1u;
    }
    frameTopSprite = this->fields.frameTopSprite;
    if ( !frameTopSprite )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)frameTopSprite, v8->fields._topbtn_k__BackingField, 0);
  }
}


bool UIEquipGraphV__get_IsLoad(UIEquipGraphV_o *this, const MethodInfo *method)
{
  return this->fields.loadNameList != 0;
}