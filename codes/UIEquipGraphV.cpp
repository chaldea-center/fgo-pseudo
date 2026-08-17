void UIEquipGraphV___ctor(UIEquipGraphV_o *this, const MethodInfo *method)
{
  UIEquipGraphViewerRender_c *v3; // x0

  if ( (byte_5972119 & 1) == 0 )
  {
    sub_2213A60(&UIEquipGraphViewerRender_TypeInfo);
    byte_5972119 = 1;
  }
  v3 = UIEquipGraphViewerRender_TypeInfo;
  this->fields.rarity = 1;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
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
  AssetData_array *AssetStorage_47505140; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int max_length; // w8
  struct AssetData_array *v12; // x20
  AssetData_o **m_Items; // x9
  AssetData_array *assetDataList; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_597210A & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_597210A = 1;
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetStorage_47505140 = AssetManager__getAssetStorage_47505140(loadNameList, 0);
    if ( AssetStorage_47505140 )
    {
      max_length = AssetStorage_47505140->max_length;
      v12 = AssetStorage_47505140;
      if ( max_length < 1 )
      {
LABEL_11:
        assetDataList = this->fields.assetDataList;
        this->fields.loadNameList = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadNameList, 0, v5, v6, v7, v8, v9, v10);
        this->fields.assetDataList = v12;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.assetDataList,
          (int32_t)v12,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        UIEquipGraphV__SetFrame(this, v21);
        UIEquipGraphV__SetTexture(this, v22);
        UIEquipGraphV__SetButton(this, v23);
        if ( assetDataList )
        {
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v24);
          AssetManager__releaseAsset_47497180(assetDataList, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v25, v26, v27, v28, v29, v30);
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
        }
      }
      else
      {
        m_Items = AssetStorage_47505140->m_Items;
        while ( *m_Items )
        {
          --max_length;
          ++m_Items;
          if ( !max_length )
            goto LABEL_11;
        }
      }
    }
  }
}


void UIEquipGraphV__ReleaseCharacter(UIEquipGraphV_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  AssetData_array *assetDataList; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_array *loadNameList; // x20
  MissionNaviTransitionBoardItem_o *p_loadNameList; // x19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5972108 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_5972108 = 1;
  }
  UIEquipGraphViewerRender__ReleaseCharacter((UIEquipGraphViewerRender_o *)this, method);
  assetDataList = this->fields.assetDataList;
  if ( assetDataList )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
    AssetManager__releaseAsset_47497180(assetDataList, 0);
    this->fields.assetDataList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetDataList, 0, v5, v6, v7, v8, v9, v10);
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    p_loadNameList = (MissionNaviTransitionBoardItem_o *)&this->fields.loadNameList;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
    AssetManager__releaseAssetStorage_47506132(loadNameList, 0);
    p_loadNameList->klass = 0;
    sub_2213A04(p_loadNameList, 0, v13, v14, v15, v16, v17, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphV__SetAllButton(UIEquipGraphV_o *this, int32_t isForce, const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Behaviour_o *frameTopSprite; // x0
  const MethodInfo *v7; // x2
  struct EquipGraphViewModeState_o *v8; // x8
  char v9; // w9
  UnityEngine_Object_o *state; // x20
  UnityEngine_Object_o *v11; // x20
  UnityEngine_Object_o *v12; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_5972117 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972117 = 1;
  }
  if ( isForce == 2 )
  {
    state = (UnityEngine_Object_o *)this->fields.state;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&isForce);
    frameTopSprite = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
    if ( ((unsigned __int8)frameTopSprite & 1) != 0 )
      goto LABEL_32;
  }
  else if ( isForce == 1 )
  {
    v5 = (UnityEngine_Object_o *)this->fields.state;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&isForce);
    frameTopSprite = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(v5, 0, 0);
    if ( ((unsigned __int8)frameTopSprite & 1) != 0 )
    {
LABEL_8:
      v8 = this->fields.state;
      if ( v8 )
      {
        v9 = 0;
LABEL_34:
        v8->fields._topbtn_k__BackingField = v9;
        v8->fields._btmbtn_k__BackingField = v9;
        v8->fields._rarebtn_k__BackingField = v9;
        v8->fields._namebtn_k__BackingField = v9;
        v8->fields._atkbtn_k__BackingField = v9;
        v8->fields._hpbtn_k__BackingField = v9;
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
    v12 = (UnityEngine_Object_o *)this->fields.state;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&isForce);
    frameTopSprite = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(v12, 0, 0);
    if ( ((unsigned __int8)frameTopSprite & 1) == 0 )
      return;
LABEL_32:
    v8 = this->fields.state;
    if ( v8 )
    {
      v9 = 1;
      goto LABEL_34;
    }
LABEL_36:
    sub_2213CDC(frameTopSprite, *(_QWORD *)&isForce);
  }
  v11 = (UnityEngine_Object_o *)this->fields.state;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&isForce);
  frameTopSprite = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
  if ( ((unsigned __int8)frameTopSprite & 1) != 0 )
    goto LABEL_8;
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphV__SetAtkButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  struct UISprite_o *equipAtkSprite; // x0
  __int64 v7; // x1
  struct EquipGraphViewModeState_o *v8; // x8

  if ( (byte_5972110 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972110 = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isSetting);
  equipAtkSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)equipAtkSprite & 1) != 0 )
  {
    v8 = this->fields.state;
    if ( isSetting )
    {
      if ( !v8 )
LABEL_14:
        sub_2213CDC(equipAtkSprite, v7);
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
  const MethodInfo *v5; // x1
  struct EquipGraphViewModeState_o *v6; // x8
  UILabel_o *atkLabel; // x19

  if ( (byte_5972112 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILineInput___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972112 = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
                                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILineInput___)) == 0
      || (atkInput = (UnityEngine_Component_o *)UILineInput__GetText((UILineInput_o *)atkInput, v5), !atkLabel) )
    {
      sub_2213CDC(atkInput, v5);
    }
    UILabel__set_text(atkLabel, (System_String_o *)atkInput, 0);
  }
}


void UIEquipGraphV__SetAutoLabel(UIEquipGraphV_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x20
  UnityEngine_Component_o *autoInput; // x0
  const MethodInfo *v5; // x1
  struct EquipGraphViewModeState_o *v6; // x8
  System_String_o *Text; // x0
  struct EquipGraphViewModeState_o *v8; // x8
  float v9; // s0
  float result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5972114 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILineInput___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972114 = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  result = 0.0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILineInput___);
  if ( !autoInput )
    goto LABEL_16;
  Text = UILineInput__GetText((UILineInput_o *)autoInput, v5);
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
    sub_2213CDC(autoInput, v5);
  }
  v8 = this->fields.state;
  if ( !v8 )
    goto LABEL_16;
  v9 = result;
LABEL_15:
  v8->fields.AutoPlayInterval = v9;
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphV__SetBottomButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  struct UISprite_o *frameBottomSprite; // x0
  __int64 v7; // x1
  struct EquipGraphViewModeState_o *v8; // x8

  if ( (byte_597210F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597210F = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isSetting);
  frameBottomSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)frameBottomSprite & 1) != 0 )
  {
    v8 = this->fields.state;
    if ( isSetting )
    {
      if ( !v8 )
LABEL_14:
        sub_2213CDC(frameBottomSprite, v7);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
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
  __int64 v54; // x8
  __int64 v55; // x8
  int32_t v56; // w2
  int v57; // w9
  __int64 v58; // x8
  __int64 v59; // x8
  System_String_o *v60; // x2
  int v61; // w9
  struct EquipGraphViewModeState_o *v62; // x8
  struct UICommonButton_o *topButton; // x8
  System_Collections_Generic_List_object__o *onClick; // x21
  EventDelegate_o *v65; // x22
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  struct UICommonButton_o *bottomButton; // x8
  System_Collections_Generic_List_object__o *v77; // x21
  EventDelegate_o *v78; // x22
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  Il2CppClass **v88; // x0
  struct UICommonButton_o *rareButton; // x8
  System_Collections_Generic_List_object__o *v90; // x21
  EventDelegate_o *v91; // x22
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  struct UICommonButton_o *atkButton; // x8
  System_Collections_Generic_List_object__o *v103; // x21
  EventDelegate_o *v104; // x22
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  Il2CppClass **v114; // x0
  struct UICommonButton_o *hpButton; // x8
  System_Collections_Generic_List_object__o *v116; // x21
  EventDelegate_o *v117; // x22
  System_String_o *v118; // x2
  System_String_o *v119; // x3
  int32_t v120; // w4
  int32_t v121; // w5
  bool v122; // w6
  bool v123; // w7
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  Il2CppClass **v127; // x0
  struct UICommonButton_o *nameButton; // x8
  System_Collections_Generic_List_object__o *v129; // x21
  EventDelegate_o *v130; // x22
  System_String_o *v131; // x2
  System_String_o *v132; // x3
  int32_t v133; // w4
  int32_t v134; // w5
  bool v135; // w6
  bool v136; // w7
  struct System_Object_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass **v140; // x0
  struct UICommonButton_o *allButton; // x8
  System_Collections_Generic_List_object__o *v142; // x21
  EventDelegate_o *v143; // x22
  System_String_o *v144; // x2
  System_String_o *v145; // x3
  int32_t v146; // w4
  int32_t v147; // w5
  bool v148; // w6
  bool v149; // w7
  struct System_Object_array *v150; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  Il2CppClass **v153; // x0
  struct UICommonButton_o *rotButton; // x8
  System_Collections_Generic_List_object__o *v155; // x21
  EventDelegate_o *v156; // x22
  System_String_o *v157; // x2
  System_String_o *v158; // x3
  int32_t v159; // w4
  int32_t v160; // w5
  bool v161; // w6
  bool v162; // w7
  struct System_Object_array *v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  Il2CppClass **v166; // x0
  struct UIInput_o *atkInput; // x8
  System_Collections_Generic_List_object__o *onChange; // x21
  EventDelegate_o *v169; // x22
  System_String_o *v170; // x2
  System_String_o *v171; // x3
  int32_t v172; // w4
  int32_t v173; // w5
  bool v174; // w6
  bool v175; // w7
  struct System_Object_array *v176; // x8
  _QWORD *v177; // x9
  __int64 v178; // x10
  Il2CppClass **v179; // x0
  struct UIInput_o *hpInput; // x8
  System_Collections_Generic_List_object__o *v181; // x21
  EventDelegate_o *v182; // x22
  System_String_o *v183; // x2
  System_String_o *v184; // x3
  int32_t v185; // w4
  int32_t v186; // w5
  bool v187; // w6
  bool v188; // w7
  struct System_Object_array *v189; // x8
  _QWORD *v190; // x9
  __int64 v191; // x10
  Il2CppClass **v192; // x0
  struct UIInput_o *autoInput; // x8
  System_Collections_Generic_List_object__o *v194; // x21
  EventDelegate_o *v195; // x22
  System_String_o *v196; // x2
  System_String_o *v197; // x3
  int32_t v198; // w4
  int32_t v199; // w5
  bool v200; // w6
  bool v201; // w7
  struct System_Object_array *v202; // x8
  _QWORD *v203; // x9
  __int64 v204; // x10
  Il2CppClass **v205; // x0
  const MethodInfo *v206; // x2
  const MethodInfo *v207; // x2
  const MethodInfo *v208; // x2
  const MethodInfo *v209; // x2
  const MethodInfo *v210; // x2
  const MethodInfo *v211; // x2
  const MethodInfo *v212; // x2
  const MethodInfo *v213; // x1
  const MethodInfo *v214; // x1
  const MethodInfo *v215; // x1

  if ( (byte_597210D & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EquipGraphViewModeState___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_2213A60(&StringLiteral_13360/*"SetTopButton"*/);
    sub_2213A60(&StringLiteral_13349/*"SetNameButton"*/);
    sub_2213A60(&StringLiteral_13322/*"SetAutoLabel"*/);
    sub_2213A60(&StringLiteral_13353/*"SetRarityButton"*/);
    sub_2213A60(&StringLiteral_13320/*"SetAtkButton"*/);
    sub_2213A60(&StringLiteral_13318/*"SetAllButton"*/);
    sub_2213A60(&StringLiteral_13338/*"SetHpButton"*/);
    sub_2213A60(&StringLiteral_6371/*"EquipGraphViewMode"*/);
    sub_2213A60(&StringLiteral_13321/*"SetAtkLabel"*/);
    sub_2213A60(&StringLiteral_13326/*"SetBottomButton"*/);
    sub_2213A60(&StringLiteral_13355/*"SetRotateButton"*/);
    sub_2213A60(&StringLiteral_13339/*"SetHpLabel"*/);
    byte_597210D = 1;
  }
  state = (char *)UnityEngine_GameObject__Find((System_String_o *)StringLiteral_6371/*"EquipGraphViewMode"*/, 0);
  if ( !state )
    goto LABEL_129;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)state,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphViewModeState___);
  p_state = &this->fields.state;
  this->fields.state = (struct EquipGraphViewModeState_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.state,
    (int32_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  state = (char *)this->fields.state;
  if ( !state )
    goto LABEL_129;
  v18 = *((_QWORD *)state + 4);
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
  v22 = *((_QWORD *)state + 6);
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
  v26 = *((_QWORD *)state + 8);
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
  v30 = *((_QWORD *)state + 10);
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
  v34 = *((_QWORD *)state + 12);
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
  v38 = *((_QWORD *)state + 14);
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
  v42 = *((_QWORD *)state + 16);
  if ( !v42 )
    goto LABEL_129;
  v43 = *(_QWORD *)(v42 + 104);
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
  v46 = *((_QWORD *)state + 18);
  if ( !v46 )
    goto LABEL_129;
  v47 = *(_QWORD *)(v46 + 104);
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
  v50 = *((_QWORD *)state + 27);
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
  v54 = *((_QWORD *)state + 28);
  if ( !v54 )
    goto LABEL_129;
  v55 = *(_QWORD *)(v54 + 136);
  if ( !v55 )
    goto LABEL_129;
  v56 = *(_DWORD *)(v55 + 24);
  v57 = *(_DWORD *)(v55 + 28) + 1;
  *(_DWORD *)(v55 + 24) = 0;
  *(_DWORD *)(v55 + 28) = v57;
  if ( v56 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v55 + 16), 0, v56, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  v58 = *((_QWORD *)state + 29);
  if ( !v58 )
    goto LABEL_129;
  v59 = *(_QWORD *)(v58 + 136);
  if ( !v59 )
    goto LABEL_129;
  v60 = (System_String_o *)*(unsigned int *)(v59 + 24);
  v61 = *(_DWORD *)(v59 + 28) + 1;
  *(_DWORD *)(v59 + 24) = 0;
  *(_DWORD *)(v59 + 28) = v61;
  if ( (int)v60 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v59 + 16), 0, (int32_t)v60, 0);
    state = (char *)*p_state;
    if ( !*p_state )
      goto LABEL_129;
  }
  *((_QWORD *)state + 31) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(state + 248), (int32_t)this, v60, v13, v14, v15, v16, v17);
  v62 = this->fields.state;
  if ( !v62 )
    goto LABEL_129;
  topButton = v62->fields.topButton;
  if ( !topButton )
    goto LABEL_129;
  onClick = (System_Collections_Generic_List_object__o *)topButton->fields.onClick;
  v65 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56337752(v65, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_13360/*"SetTopButton"*/, 0);
  if ( !onClick )
    goto LABEL_129;
  items = onClick->fields._items;
  v73 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++onClick->fields._version;
  if ( !items )
    goto LABEL_129;
  size = onClick->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      onClick,
      (Il2CppObject *)v65,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
  }
  else
  {
    v75 = &items->obj.klass + size;
    onClick->fields._size = size + 1;
    v75[4] = (Il2CppClass *)v65;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v75 + 4), (int32_t)v65, v66, v67, v68, v69, v70, v71);
  }
  if ( !*p_state )
    goto LABEL_129;
  bottomButton = (*p_state)->fields.bottomButton;
  if ( !bottomButton )
    goto LABEL_129;
  v77 = (System_Collections_Generic_List_object__o *)bottomButton->fields.onClick;
  v78 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56337752(v78, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_13326/*"SetBottomButton"*/, 0);
  if ( !v77 )
    goto LABEL_129;
  v85 = v77->fields._items;
  v86 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v77->fields._version;
  if ( !v85 )
    goto LABEL_129;
  v87 = v77->fields._size;
  if ( (unsigned int)v87 >= LODWORD(v85->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v77,
      (Il2CppObject *)v78,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
  }
  else
  {
    v88 = &v85->obj.klass + v87;
    v77->fields._size = v87 + 1;
    v88[4] = (Il2CppClass *)v78;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v88 + 4), (int32_t)v78, v79, v80, v81, v82, v83, v84);
  }
  if ( !*p_state )
    goto LABEL_129;
  rareButton = (*p_state)->fields.rareButton;
  if ( !rareButton )
    goto LABEL_129;
  v90 = (System_Collections_Generic_List_object__o *)rareButton->fields.onClick;
  v91 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56337752(v91, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_13353/*"SetRarityButton"*/, 0);
  if ( !v90 )
    goto LABEL_129;
  v98 = v90->fields._items;
  v99 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v90->fields._version;
  if ( !v98 )
    goto LABEL_129;
  v100 = v90->fields._size;
  if ( (unsigned int)v100 >= LODWORD(v98->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v90,
      (Il2CppObject *)v91,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
  }
  else
  {
    v101 = &v98->obj.klass + v100;
    v90->fields._size = v100 + 1;
    v101[4] = (Il2CppClass *)v91;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v101 + 4), (int32_t)v91, v92, v93, v94, v95, v96, v97);
  }
  if ( !*p_state )
    goto LABEL_129;
  atkButton = (*p_state)->fields.atkButton;
  if ( !atkButton )
    goto LABEL_129;
  v103 = (System_Collections_Generic_List_object__o *)atkButton->fields.onClick;
  v104 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56337752(v104, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_13320/*"SetAtkButton"*/, 0);
  if ( !v103 )
    goto LABEL_129;
  v111 = v103->fields._items;
  v112 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v103->fields._version;
  if ( !v111 )
    goto LABEL_129;
  v113 = v103->fields._size;
  if ( (unsigned int)v113 >= LODWORD(v111->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v103,
      (Il2CppObject *)v104,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
  }
  else
  {
    v114 = &v111->obj.klass + v113;
    v103->fields._size = v113 + 1;
    v114[4] = (Il2CppClass *)v104;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v114 + 4), (int32_t)v104, v105, v106, v107, v108, v109, v110);
  }
  if ( !*p_state )
    goto LABEL_129;
  hpButton = (*p_state)->fields.hpButton;
  if ( !hpButton )
    goto LABEL_129;
  v116 = (System_Collections_Generic_List_object__o *)hpButton->fields.onClick;
  v117 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56337752(v117, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_13338/*"SetHpButton"*/, 0);
  if ( !v116 )
    goto LABEL_129;
  v124 = v116->fields._items;
  v125 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v116->fields._version;
  if ( !v124 )
    goto LABEL_129;
  v126 = v116->fields._size;
  if ( (unsigned int)v126 >= LODWORD(v124->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v116,
      (Il2CppObject *)v117,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
  }
  else
  {
    v127 = &v124->obj.klass + v126;
    v116->fields._size = v126 + 1;
    v127[4] = (Il2CppClass *)v117;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v127 + 4), (int32_t)v117, v118, v119, v120, v121, v122, v123);
  }
  if ( !*p_state )
    goto LABEL_129;
  nameButton = (*p_state)->fields.nameButton;
  if ( !nameButton )
    goto LABEL_129;
  v129 = (System_Collections_Generic_List_object__o *)nameButton->fields.onClick;
  v130 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56337752(v130, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_13349/*"SetNameButton"*/, 0);
  if ( !v129 )
    goto LABEL_129;
  v137 = v129->fields._items;
  v138 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v129->fields._version;
  if ( !v137 )
    goto LABEL_129;
  v139 = v129->fields._size;
  if ( (unsigned int)v139 >= LODWORD(v137->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v129,
      (Il2CppObject *)v130,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
  }
  else
  {
    v140 = &v137->obj.klass + v139;
    v129->fields._size = v139 + 1;
    v140[4] = (Il2CppClass *)v130;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v140 + 4), (int32_t)v130, v131, v132, v133, v134, v135, v136);
  }
  if ( !*p_state )
    goto LABEL_129;
  allButton = (*p_state)->fields.allButton;
  if ( !allButton )
    goto LABEL_129;
  v142 = (System_Collections_Generic_List_object__o *)allButton->fields.onClick;
  v143 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56337752(v143, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_13318/*"SetAllButton"*/, 0);
  if ( !v142 )
    goto LABEL_129;
  v150 = v142->fields._items;
  v151 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v142->fields._version;
  if ( !v150 )
    goto LABEL_129;
  v152 = v142->fields._size;
  if ( (unsigned int)v152 >= LODWORD(v150->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v142,
      (Il2CppObject *)v143,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v151[4] + 192LL) + 112LL));
  }
  else
  {
    v153 = &v150->obj.klass + v152;
    v142->fields._size = v152 + 1;
    v153[4] = (Il2CppClass *)v143;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v153 + 4), (int32_t)v143, v144, v145, v146, v147, v148, v149);
  }
  if ( !*p_state )
    goto LABEL_129;
  rotButton = (*p_state)->fields.rotButton;
  if ( !rotButton )
    goto LABEL_129;
  v155 = (System_Collections_Generic_List_object__o *)rotButton->fields.onClick;
  v156 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56337752(v156, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_13355/*"SetRotateButton"*/, 0);
  if ( !v155 )
    goto LABEL_129;
  v163 = v155->fields._items;
  v164 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v155->fields._version;
  if ( !v163 )
    goto LABEL_129;
  v165 = v155->fields._size;
  if ( (unsigned int)v165 >= LODWORD(v163->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v155,
      (Il2CppObject *)v156,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
  }
  else
  {
    v166 = &v163->obj.klass + v165;
    v155->fields._size = v165 + 1;
    v166[4] = (Il2CppClass *)v156;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v166 + 4), (int32_t)v156, v157, v158, v159, v160, v161, v162);
  }
  if ( !*p_state )
    goto LABEL_129;
  atkInput = (*p_state)->fields.atkInput;
  if ( !atkInput )
    goto LABEL_129;
  onChange = (System_Collections_Generic_List_object__o *)atkInput->fields.onChange;
  v169 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56337752(v169, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_13321/*"SetAtkLabel"*/, 0);
  if ( !onChange )
    goto LABEL_129;
  v176 = onChange->fields._items;
  v177 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++onChange->fields._version;
  if ( !v176 )
    goto LABEL_129;
  v178 = onChange->fields._size;
  if ( (unsigned int)v178 >= LODWORD(v176->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      onChange,
      (Il2CppObject *)v169,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
  }
  else
  {
    v179 = &v176->obj.klass + v178;
    onChange->fields._size = v178 + 1;
    v179[4] = (Il2CppClass *)v169;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v179 + 4), (int32_t)v169, v170, v171, v172, v173, v174, v175);
  }
  if ( !*p_state )
    goto LABEL_129;
  hpInput = (*p_state)->fields.hpInput;
  if ( !hpInput )
    goto LABEL_129;
  v181 = (System_Collections_Generic_List_object__o *)hpInput->fields.onChange;
  v182 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56337752(v182, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_13339/*"SetHpLabel"*/, 0);
  if ( !v181 )
    goto LABEL_129;
  v189 = v181->fields._items;
  v190 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v181->fields._version;
  if ( !v189 )
    goto LABEL_129;
  v191 = v181->fields._size;
  if ( (unsigned int)v191 >= LODWORD(v189->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v181,
      (Il2CppObject *)v182,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v190[4] + 192LL) + 112LL));
  }
  else
  {
    v192 = &v189->obj.klass + v191;
    v181->fields._size = v191 + 1;
    v192[4] = (Il2CppClass *)v182;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v192 + 4), (int32_t)v182, v183, v184, v185, v186, v187, v188);
  }
  if ( !*p_state )
    goto LABEL_129;
  autoInput = (*p_state)->fields.autoInput;
  if ( !autoInput )
    goto LABEL_129;
  v194 = (System_Collections_Generic_List_object__o *)autoInput->fields.onChange;
  v195 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56337752(v195, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_13322/*"SetAutoLabel"*/, 0);
  if ( !v194 )
    goto LABEL_129;
  v202 = v194->fields._items;
  v203 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++v194->fields._version;
  if ( !v202 )
    goto LABEL_129;
  v204 = v194->fields._size;
  if ( (unsigned int)v204 >= LODWORD(v202->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v194,
      (Il2CppObject *)v195,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
  }
  else
  {
    v205 = &v202->obj.klass + v204;
    v194->fields._size = v204 + 1;
    v205[4] = (Il2CppClass *)v195;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v205 + 4), (int32_t)v195, v196, v197, v198, v199, v200, v201);
  }
  UIEquipGraphV__SetRotateButton(this, 1, v206);
  UIEquipGraphV__SetTopButton(this, 1, v207);
  UIEquipGraphV__SetBottomButton(this, 1, v208);
  UIEquipGraphV__SetRarityButton(this, 1, v209);
  UIEquipGraphV__SetAtkButton(this, 1, v210);
  UIEquipGraphV__SetHpButton(this, 1, v211);
  UIEquipGraphV__SetNameButton(this, 1, v212);
  state = (char *)this->fields.state;
  if ( !state
    || (EquipGraphViewModeState__OnClickAutoPlayButton((EquipGraphViewModeState_o *)state, 1, 0),
        (state = (char *)*p_state) == 0) )
  {
LABEL_129:
    sub_2213CDC(state, v4);
  }
  EquipGraphViewModeState__OnClickQuickAutoPlayButton((EquipGraphViewModeState_o *)state, 1, 0);
  UIEquipGraphV__SetAtkLabel(this, v213);
  UIEquipGraphV__SetHpLabel(this, v214);
  UIEquipGraphV__SetAutoLabel(this, v215);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  MissionNaviTransitionBoardItem_o *p_loadNameList; // x22
  System_String_array *loadNameList; // x23
  __int64 v21; // x1
  System_Delegate_o *v22; // x0
  UIEquipGraphV_c *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  void *v30; // x8
  System_Action_c *v31; // x1
  AssetData_array *assetDataList; // x23
  const MethodInfo *v33; // x1
  System_String_array *klass; // x23
  System_Delegate_o *v35; // x0
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_array *v41; // x20
  System_Action_o *v42; // x21
  __int64 v43; // x1
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5972109 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_UIEquipGraphV_EndLoadAsset__);
    sub_2213A60(&UIEquipGraphViewerRender_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_5972109 = 1;
  }
  result = 0;
  if ( !*(&UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo, imageName);
  AssetNameList = UIEquipGraphViewerRender__GetAssetNameList(imageName, (const MethodInfo *)imageName);
  if ( !imageName
    || ((v9 = (System_String_array *)AssetNameList,
         v10 = System_String__IndexOf_75715196(imageName, (System_String_o *)StringLiteral_1123/*"/"*/, 0),
         v11 = System_String__Substring(imageName, v10 + 1, 0),
         !System_Int32__TryParse(v11, &result, 0))
      ? (v12 = 9400010)
      : (v12 = result),
        (AssetNameList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0
     || (AssetNameList = DataManager__GetMasterData_object_(
                           (DataManager_o *)AssetNameList,
                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0
     || (AssetNameList = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)AssetNameList, v12, 0, 0)) == 0) )
  {
    sub_2213CDC(AssetNameList, v8);
  }
  p_loadNameList = (MissionNaviTransitionBoardItem_o *)&this->fields.loadNameList;
  loadNameList = this->fields.loadNameList;
  this->fields.rarity = *((_DWORD *)AssetNameList + 6);
  if ( loadNameList )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8);
    if ( AssetManager__compAssetStorageList(loadNameList, v9, 0) )
    {
      if ( !callbackFunc )
        return;
      v22 = (System_Delegate_o *)this->fields.callbackFunc;
      this = (UIEquipGraphV_o *)((char *)this + 656);
      v23 = (UIEquipGraphV_c *)System_Delegate__Combine(v22, (System_Delegate_o *)callbackFunc, 0);
      v30 = v23;
      if ( v23 )
      {
        v31 = System_Action_TypeInfo;
        if ( v23->_1.image != System_Action_TypeInfo )
          goto LABEL_34;
        this->klass = v23;
        if ( v23->_1.image != v31 )
          goto LABEL_34;
      }
      else
      {
        this->klass = 0;
      }
      sub_2213A04((MissionNaviTransitionBoardItem_o *)this, (int32_t)v23, v24, v25, v26, v27, v28, v29);
      return;
    }
    klass = (System_String_array *)p_loadNameList->klass;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v21);
    AssetManager__releaseAssetStorage_47506132(klass, 0);
LABEL_30:
    if ( !callbackFunc )
    {
LABEL_37:
      this->fields.loadNameList = v9;
      sub_2213A04(p_loadNameList, (int32_t)v9, v13, v14, v15, v16, v17, v18);
      v41 = this->fields.loadNameList;
      v42 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v42, (Il2CppObject *)this, Method_UIEquipGraphV_EndLoadAsset__, 0);
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v43);
      AssetManager__loadAssetStorage_47503780(v41, v42, 1, 0);
      return;
    }
    loadNameList = (System_String_array *)&this->fields.callbackFunc;
    v35 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v30 = v35;
    if ( !v35 )
      goto LABEL_35;
    v31 = System_Action_TypeInfo;
    if ( (System_Action_c *)v35->klass == System_Action_TypeInfo )
    {
      loadNameList->obj.klass = (Il2CppClass *)v35;
      if ( (System_Action_c *)v35->klass == v31 )
        goto LABEL_36;
    }
LABEL_34:
    sub_221405C(v30, v31, v24);
LABEL_35:
    loadNameList->obj.klass = 0;
LABEL_36:
    sub_2213A04((MissionNaviTransitionBoardItem_o *)loadNameList, (int32_t)v30, v24, v36, v37, v38, v39, v40);
    goto LABEL_37;
  }
  assetDataList = this->fields.assetDataList;
  if ( !assetDataList )
    goto LABEL_30;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8);
  if ( !AssetManager__compAssetStorageList_47494836(assetDataList, v9, 0) )
    goto LABEL_30;
  UIEquipGraphV__SetTextureStatus(this, v33);
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
    || (v4.fields.z = 0.0,
        v4.fields.y = this->fields.dispOffset.fields.y,
        v4.fields.x = this->fields.dispOffset.fields.x,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v4, 0),
        (bodyFilter = (UnityEngine_Component_o *)this->fields.nameFilter) == 0)
    || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
  {
    sub_2213CDC(bodyFilter, method);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x20
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  System_String_o *v26; // x0
  int32_t rarity; // w8
  System_String_o *v28; // x20
  __int64 *v29; // x9
  System_String_o **v30; // x8
  System_String_o *v31; // x21
  UISprite_o *frameTopSprite; // x22
  __int64 v33; // x1
  System_String_o *v34; // x23
  UISprite_o *frameBottomSprite; // x22
  System_String_o *v36; // x0

  if ( (byte_597210C & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_19549/*"e"*/);
    sub_2213A60(&StringLiteral_24157/*"rarity"*/);
    sub_2213A60(&StringLiteral_16747/*"_0"*/);
    sub_2213A60(&StringLiteral_13873/*"T"*/);
    sub_2213A60(&StringLiteral_2622/*"B"*/);
    sub_2213A60(&StringLiteral_20577/*"frame3"*/);
    sub_2213A60(&StringLiteral_20571/*"frame1"*/);
    sub_2213A60(&StringLiteral_19810/*"eframeB_hp"*/);
    sub_2213A60(&StringLiteral_19809/*"eframeB_atk"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_20576/*"frame2"*/);
    byte_597210C = 1;
  }
  IsNullOrEmpty = sub_2213B20(string___TypeInfo, 3);
  if ( !IsNullOrEmpty )
    goto LABEL_24;
  v11 = IsNullOrEmpty;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24)
    || (v12 = StringLiteral_24157/*"rarity"*/,
        *(_QWORD *)(IsNullOrEmpty + 32) = StringLiteral_24157/*"rarity"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(IsNullOrEmpty + 32), v12, v5, v6, v7, v8, v9, v10),
        IsNullOrEmpty = (__int64)System_Int32__ToString((int)this + 648, 0),
        (*(_DWORD *)(v11 + 24) & 0xFFFFFFFE) == 0)
    || (*(_QWORD *)(v11 + 40) = IsNullOrEmpty,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), IsNullOrEmpty, v13, v14, v15, v16, v17, v18),
        *(_DWORD *)(v11 + 24) <= 2u) )
  {
    sub_2213CE4(IsNullOrEmpty);
  }
  v25 = StringLiteral_16747/*"_0"*/;
  *(_QWORD *)(v11 + 48) = StringLiteral_16747/*"_0"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), v25, v19, v20, v21, v22, v23, v24);
  v26 = System_String__Join((System_String_o *)StringLiteral_1/*""*/, (System_String_array *)v11, 0);
  rarity = this->fields.rarity;
  v28 = v26;
  if ( (rarity & 0xFFFFFFFE) == 4 )
    v29 = &StringLiteral_20577/*"frame3"*/;
  else
    v29 = &StringLiteral_20571/*"frame1"*/;
  if ( rarity == 3 )
    v30 = (System_String_o **)&StringLiteral_20576/*"frame2"*/;
  else
    v30 = (System_String_o **)v29;
  v31 = *v30;
  IsNullOrEmpty = System_String__IsNullOrEmpty(*v30, 0);
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
    sub_2213CDC(IsNullOrEmpty, v4);
  }
  v34 = System_String__Concat_75694928(
          (System_String_o *)StringLiteral_19549/*"e"*/,
          v31,
          (System_String_o *)StringLiteral_13873/*"T"*/,
          0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v33);
  AtlasManager__SetCharaGraphaOption(frameTopSprite, v34, 0);
  frameBottomSprite = this->fields.frameBottomSprite;
  v36 = System_String__Concat_75694928(
          (System_String_o *)StringLiteral_19549/*"e"*/,
          v31,
          (System_String_o *)StringLiteral_2622/*"B"*/,
          0);
  AtlasManager__SetCharaGraphaOption(frameBottomSprite, v36, 0);
  AtlasManager__SetCharaGraphaOption(this->fields.raritySprite, v28, 0);
  IsNullOrEmpty = (__int64)this->fields.raritySprite;
  if ( !IsNullOrEmpty )
    goto LABEL_24;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)IsNullOrEmpty + 840LL))(
    IsNullOrEmpty,
    *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 848LL));
  AtlasManager__SetCharaGraphaOption(this->fields.equipAtkSprite, (System_String_o *)StringLiteral_19809/*"eframeB_atk"*/, 0);
  IsNullOrEmpty = (__int64)this->fields.equipAtkSprite;
  if ( !IsNullOrEmpty )
    goto LABEL_24;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)IsNullOrEmpty + 840LL))(
    IsNullOrEmpty,
    *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 848LL));
  AtlasManager__SetCharaGraphaOption(this->fields.equipHpSprite, (System_String_o *)StringLiteral_19810/*"eframeB_hp"*/, 0);
  IsNullOrEmpty = (__int64)this->fields.equipHpSprite;
  if ( !IsNullOrEmpty )
    goto LABEL_24;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)IsNullOrEmpty + 840LL))(
    IsNullOrEmpty,
    *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 848LL));
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphV__SetHpButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  struct UISprite_o *equipHpSprite; // x0
  __int64 v7; // x1
  struct EquipGraphViewModeState_o *v8; // x8

  if ( (byte_5972111 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972111 = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isSetting);
  equipHpSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)equipHpSprite & 1) != 0 )
  {
    v8 = this->fields.state;
    if ( isSetting )
    {
      if ( !v8 )
LABEL_14:
        sub_2213CDC(equipHpSprite, v7);
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
  const MethodInfo *v5; // x1
  struct EquipGraphViewModeState_o *v6; // x8
  UILabel_o *hpLabel; // x19

  if ( (byte_5972113 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILineInput___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972113 = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILineInput___)) == 0
      || (hpInput = (UnityEngine_Component_o *)UILineInput__GetText((UILineInput_o *)hpInput, v5), !hpLabel) )
    {
      sub_2213CDC(hpInput, v5);
    }
    UILabel__set_text(hpLabel, (System_String_o *)hpInput, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphV__SetNameButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  struct UnityEngine_MeshRenderer_o *nameRenderer; // x0
  __int64 v7; // x1
  struct EquipGraphViewModeState_o *v8; // x8

  if ( (byte_5972116 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972116 = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isSetting);
  nameRenderer = (struct UnityEngine_MeshRenderer_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)nameRenderer & 1) != 0 )
  {
    v8 = this->fields.state;
    if ( isSetting )
    {
      if ( !v8 )
LABEL_14:
        sub_2213CDC(nameRenderer, v7);
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


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphV__SetRarityButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  struct UISprite_o *raritySprite; // x0
  __int64 v7; // x1
  struct EquipGraphViewModeState_o *v8; // x8

  if ( (byte_5972115 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972115 = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isSetting);
  raritySprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)raritySprite & 1) != 0 )
  {
    v8 = this->fields.state;
    if ( isSetting )
    {
      if ( !v8 )
LABEL_14:
        sub_2213CDC(raritySprite, v7);
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
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Transform_o *v12; // x20
  float v13; // s0 OVERLAPPED
  float v14; // s1
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Transform_o *v16; // x20
  float v17; // s2
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5972118 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972118 = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isSetting);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !isSetting )
    {
      v8 = this->fields.state;
      if ( !v8 )
        goto LABEL_30;
      v8->fields._rotbtn_k__BackingField ^= 1u;
    }
    rotateBase = (UnityEngine_Object_o *)this->fields.rotateBase;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(rotateBase, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      v10 = this->fields.state;
      if ( v10 )
      {
        transform = this->fields.rotateBase;
        if ( v10->fields._rotbtn_k__BackingField )
        {
          if ( transform )
          {
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
            if ( transform )
            {
              v18.fields.z = 0.0;
              v18.fields.x = -428.0;
              v18.fields.y = -280.0;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v18, 0);
              transform = this->fields.rotateBase;
              if ( transform )
              {
                v11 = UnityEngine_GameObject__get_transform(transform, 0);
                v19.fields.x = 0.0;
                v19.fields.y = 0.0;
                v19.fields.z = 1.5708;
                v12 = v11;
                v22 = UnityEngine_Quaternion__Internal_FromEulerRad(v19, 0);
                if ( v12 )
                {
                  UnityEngine_Transform__set_localRotation(v12, v22, 0);
                  transform = this->fields.rotateBase;
                  if ( transform )
                  {
                    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
                    if ( transform )
                    {
                      v13 = 1.5;
                      v14 = 1.5;
LABEL_29:
                      v17 = 1.0;
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
        }
        else if ( transform )
        {
          transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
          if ( transform )
          {
            v20.fields.x = 0.0;
            v20.fields.y = 0.0;
            v20.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v20, 0);
            transform = this->fields.rotateBase;
            if ( transform )
            {
              v15 = UnityEngine_GameObject__get_transform(transform, 0);
              v21.fields.x = 0.0;
              v21.fields.y = 0.0;
              v16 = v15;
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
                    v13 = 1.0;
                    v14 = 1.0;
                    goto LABEL_29;
                  }
                }
              }
            }
          }
        }
      }
LABEL_30:
      sub_2213CDC(transform, v7);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UnityEngine_Texture2D_array *textureList; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x1

  v2 = this;
  if ( (byte_597210B & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&UnityEngine_Texture2D___TypeInfo);
    this = (UIEquipGraphV_o *)sub_2213A60(&StringLiteral_17306/*"a"*/);
    byte_597210B = 1;
  }
  assetDataList = v2->fields.assetDataList;
  if ( !assetDataList )
    goto LABEL_9;
  if ( !LODWORD(assetDataList->max_length) )
    goto LABEL_10;
  v4 = assetDataList->m_Items[0];
  if ( !v4
    || (LastName = AssetData__get_LastName(assetDataList->m_Items[0], 0),
        v6 = sub_2213B20(UnityEngine_Texture2D___TypeInfo, 1),
        v2->fields.textureList = (struct UnityEngine_Texture2D_array *)v6,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.textureList, v6, v7, v8, v9, v10, v11, v12),
        textureList = v2->fields.textureList,
        v14 = System_String__Concat_75651716(LastName, (System_String_o *)StringLiteral_17306/*"a"*/, 0),
        this = (UIEquipGraphV_o *)AssetData__GetObject_object__58532980(
                                    v4,
                                    v14,
                                    (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360),
        !textureList) )
  {
LABEL_9:
    sub_2213CDC(this, method);
  }
  if ( !LODWORD(textureList->max_length) )
LABEL_10:
    sub_2213CE4(this);
  textureList->m_Items[0] = (UnityEngine_Texture2D_o *)this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)textureList->m_Items, (int32_t)this, v15, v16, v17, v18, v19, v20);
  UIEquipGraphV__SetTextureStatus(v2, v21);
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
    || (v6.fields.z = 0.0,
        v6.fields.y = this->fields.dispTop.fields.y,
        v6.fields.x = this->fields.dispTop.fields.x,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v6, 0),
        (bodyFilter = (UnityEngine_Component_o *)this->fields.nameFilter) == 0)
    || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
  {
    sub_2213CDC(bodyFilter, v4);
  }
  v7.fields.y = this->fields.dispNameTop.fields.y;
  v7.fields.x = this->fields.dispNameTop.fields.x;
  v7.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphV__SetTopButton(UIEquipGraphV_o *this, bool isSetting, const MethodInfo *method)
{
  UnityEngine_Object_o *state; // x21
  struct UISprite_o *frameTopSprite; // x0
  __int64 v7; // x1
  struct EquipGraphViewModeState_o *v8; // x8

  if ( (byte_597210E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597210E = 1;
  }
  state = (UnityEngine_Object_o *)this->fields.state;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isSetting);
  frameTopSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(state, 0, 0);
  if ( ((unsigned __int8)frameTopSprite & 1) != 0 )
  {
    v8 = this->fields.state;
    if ( isSetting )
    {
      if ( !v8 )
LABEL_14:
        sub_2213CDC(frameTopSprite, v7);
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