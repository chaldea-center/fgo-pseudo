void __fastcall EventRewardButtonChangeManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v19; // x1
  struct EventRewardButtonChangeManager_StaticFields *v20; // x0
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct EventRewardButtonChangeManager_StaticFields *v28; // x0
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct EventRewardButtonChangeManager_StaticFields *v36; // x0
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct EventRewardButtonChangeManager_StaticFields *v44; // x0
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct EventRewardButtonChangeManager_StaticFields *v52; // x0
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct EventRewardButtonChangeManager_StaticFields *v60; // x0
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct EventRewardButtonChangeManager_StaticFields *v68; // x0
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct EventRewardButtonChangeManager_StaticFields *v76; // x0
  System_Int32_array **v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct EventRewardButtonChangeManager_StaticFields *v84; // x0
  System_Int32_array **v85; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7

  if ( (byte_40F6150 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardButtonChangeManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16911/*"btn_bg_on_1"*/, v8);
    sub_B16FFC(&StringLiteral_16912/*"btn_bg_on_2"*/, v9);
    sub_B16FFC(&StringLiteral_16913/*"btn_bg_on_4"*/, v10);
    sub_B16FFC(&StringLiteral_18084/*"ef_2tab_open"*/, v11);
    sub_B16FFC(&StringLiteral_16908/*"btn_bg_off_4"*/, v12);
    sub_B16FFC(&StringLiteral_16906/*"btn_bg_off_1"*/, v13);
    sub_B16FFC(&StringLiteral_18086/*"ef_4tab_open"*/, v14);
    sub_B16FFC(&StringLiteral_18085/*"ef_3tab_open"*/, v15);
    sub_B16FFC(&StringLiteral_16907/*"btn_bg_off_2"*/, v16);
    sub_B16FFC(&StringLiteral_16921/*"btn_disable_txt_"*/, v17);
    byte_40F6150 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRewardButtonChangeManager_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_16911/*"btn_bg_on_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16911/*"btn_bg_on_1"*/;
  sub_B16F98(static_fields, v19, v2, v3, v4, v5, v6, v7);
  v20 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_16906/*"btn_bg_off_1"*/;
  v20->BTN_NAME_TYPE3_OFF = (struct System_String_o *)StringLiteral_16906/*"btn_bg_off_1"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v20->BTN_NAME_TYPE3_OFF, v21, v22, v23, v24, v25, v26, v27);
  v28 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v29 = (System_Int32_array **)StringLiteral_16912/*"btn_bg_on_2"*/;
  v28->BTN_NAME_TYPE2_ON = (struct System_String_o *)StringLiteral_16912/*"btn_bg_on_2"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v28->BTN_NAME_TYPE2_ON, v29, v30, v31, v32, v33, v34, v35);
  v36 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v37 = (System_Int32_array **)StringLiteral_16907/*"btn_bg_off_2"*/;
  v36->BTN_NAME_TYPE2_OFF = (struct System_String_o *)StringLiteral_16907/*"btn_bg_off_2"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v36->BTN_NAME_TYPE2_OFF, v37, v38, v39, v40, v41, v42, v43);
  v44 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v45 = (System_Int32_array **)StringLiteral_16913/*"btn_bg_on_4"*/;
  v44->BTN_NAME_TYPE4_ON = (struct System_String_o *)StringLiteral_16913/*"btn_bg_on_4"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v44->BTN_NAME_TYPE4_ON, v45, v46, v47, v48, v49, v50, v51);
  v52 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v53 = (System_Int32_array **)StringLiteral_16908/*"btn_bg_off_4"*/;
  v52->BTN_NAME_TYPE4_OFF = (struct System_String_o *)StringLiteral_16908/*"btn_bg_off_4"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v52->BTN_NAME_TYPE4_OFF, v53, v54, v55, v56, v57, v58, v59);
  v60 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v61 = (System_Int32_array **)StringLiteral_18086/*"ef_4tab_open"*/;
  v60->RELEASE_EFFECT_4TAB_NAME = (struct System_String_o *)StringLiteral_18086/*"ef_4tab_open"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v60->RELEASE_EFFECT_4TAB_NAME, v61, v62, v63, v64, v65, v66, v67);
  v68 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v69 = (System_Int32_array **)StringLiteral_18085/*"ef_3tab_open"*/;
  v68->RELEASE_EFFECT_3TAB_NAME = (struct System_String_o *)StringLiteral_18085/*"ef_3tab_open"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v68->RELEASE_EFFECT_3TAB_NAME, v69, v70, v71, v72, v73, v74, v75);
  v76 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v77 = (System_Int32_array **)StringLiteral_18084/*"ef_2tab_open"*/;
  v76->RELEASE_EFFECT_2TAB_NAME = (struct System_String_o *)StringLiteral_18084/*"ef_2tab_open"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v76->RELEASE_EFFECT_2TAB_NAME, v77, v78, v79, v80, v81, v82, v83);
  v84 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v85 = (System_Int32_array **)StringLiteral_16921/*"btn_disable_txt_"*/;
  v84->DISABLE_BTN_TXT = (struct System_String_o *)StringLiteral_16921/*"btn_disable_txt_"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v84->DISABLE_BTN_TXT, v85, v86, v87, v88, v89, v90, v91);
}


void __fastcall EventRewardButtonChangeManager___ctor(EventRewardButtonChangeManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardButtonChangeManager__ChangeTabInfo(
        EventRewardButtonChangeManager_o *this,
        int32_t priorityId,
        int32_t currentEventId,
        EventRewardSceneEntity_array *eventRewardSceneEnt,
        int32_t openSlot,
        bool openedTab,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int32_t max_length; // w8
  __int64 v18; // x0
  __int64 v19; // x9
  System_String_o **v20; // x8
  System_String_o **v21; // x9
  __int64 v22; // x9
  System_String_o *v23; // x24
  unsigned __int64 v24; // x28
  int v25; // w21
  EventRewardSceneEntity_o **m_Items; // x22
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  struct UICommonButton_array *eventBtns; // x8
  UnityEngine_Behaviour_o *v29; // x0
  struct UICommonButton_array *v30; // x8
  UnityEngine_Component_o *v31; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Collider_o *Component_srcLineSprite; // x0
  struct UISprite_array *eventBtnImages; // x8
  UISprite_o *v35; // x0
  struct UnityEngine_GameObject_array *backImgObjs; // x8
  UnityEngine_GameObject_o *v37; // x0
  struct UnityEngine_GameObject_array *activeImgObjs; // x8
  UnityEngine_GameObject_o *v39; // x0
  struct UISprite_array *btnTxtSprites; // x8
  UISprite_o *v41; // x25
  struct EventRewardSceneReleaseEntity_array *v42; // x8
  EventRewardSceneReleaseEntity_o *v43; // x8
  System_String_o *v44; // x26
  System_String_o *v45; // x0
  const MethodInfo *v46; // x2
  System_String_o *v47; // x26
  struct UICommonButton_array *v48; // x8
  UICommonButton_o *v49; // x0
  struct UnityEngine_GameObject_array *tabColliders; // x8
  UnityEngine_GameObject_o *v51; // x0
  struct UICommonButton_array *v52; // x8
  UnityEngine_Behaviour_o *v53; // x0
  bool v54; // w25
  struct UICommonButton_array *v55; // x8
  UnityEngine_Component_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_Collider_o *v58; // x0
  struct UISprite_array *v59; // x8
  UISprite_o *v60; // x0
  System_String_o *v61; // x1
  struct UnityEngine_GameObject_array *v62; // x8
  UnityEngine_GameObject_o *v63; // x0
  struct UnityEngine_GameObject_array *v64; // x8
  UnityEngine_GameObject_o *v65; // x0
  System_String_o **v66; // x25
  struct UISprite_array *v67; // x8
  System_String_o *v68; // x26
  UISprite_o *v69; // x25
  EventRewardSceneEntity_o *v70; // x8
  EventRewardSceneEntity_array *v71; // x19
  System_String_o *v72; // x27
  System_String_o *v73; // x0
  const MethodInfo *v74; // x2
  System_String_o *v75; // x26
  struct UICommonButton_array *v76; // x8
  UICommonButton_o *v77; // x0
  struct UISprite_array *v78; // x8
  UISprite_o *v79; // x21
  EventRewardButtonChangeManager_c *v80; // x0
  System_String_o *DISABLE_BTN_TXT; // x22
  System_String_o *v82; // x0
  const MethodInfo *v83; // x2
  System_String_o *v84; // x22
  struct UICommonButton_array *v85; // x8
  UICommonButton_o *v86; // x0
  int32_t v87; // [xsp+0h] [xbp-70h]
  bool v88; // [xsp+Ch] [xbp-64h]
  System_String_o *v89; // [xsp+10h] [xbp-60h]
  int32_t v90; // [xsp+1Ch] [xbp-54h] BYREF

  v90 = currentEventId;
  if ( (byte_40F6147 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardButtonChangeManager_TypeInfo, *(_QWORD *)&priorityId);
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v13);
    sub_B16FFC(&StringLiteral_17003/*"btn_txt_on_"*/, v14);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v15);
    sub_B16FFC(&StringLiteral_16997/*"btn_txt_off_"*/, v16);
    byte_40F6147 = 1;
  }
  if ( !eventRewardSceneEnt )
    goto LABEL_107;
  max_length = eventRewardSceneEnt->max_length;
  v87 = openSlot;
  v88 = openedTab;
  this->fields.eventCount = max_length;
  if ( max_length == 2 )
  {
    v18 = (__int64)EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v18 = (__int64)EventRewardButtonChangeManager_TypeInfo;
    }
    v19 = *(_QWORD *)(v18 + 184);
    v20 = (System_String_o **)(v19 + 24);
    v21 = (System_String_o **)(v19 + 16);
  }
  else
  {
    v18 = (__int64)EventRewardButtonChangeManager_TypeInfo;
    if ( max_length == 3 )
    {
      if ( (WORD1(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
        v18 = (__int64)EventRewardButtonChangeManager_TypeInfo;
      }
      v21 = *(System_String_o ***)(v18 + 184);
      v20 = v21 + 1;
    }
    else
    {
      if ( (WORD1(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
        v18 = (__int64)EventRewardButtonChangeManager_TypeInfo;
      }
      v22 = *(_QWORD *)(v18 + 184);
      v20 = (System_String_o **)(v22 + 40);
      v21 = (System_String_o **)(v22 + 32);
    }
  }
  if ( this->fields.eventCount >= 1 )
  {
    v23 = *v20;
    v24 = 0LL;
    v25 = 0;
    m_Items = eventRewardSceneEnt->m_Items;
    v89 = *v21;
    do
    {
      releaseEntityArray = this->fields.releaseEntityArray;
      if ( !releaseEntityArray )
        goto LABEL_58;
      if ( v24 >= releaseEntityArray->max_length )
        goto LABEL_108;
      if ( releaseEntityArray->m_Items[v24] )
      {
        eventBtns = this->fields.eventBtns;
        if ( !eventBtns )
          goto LABEL_107;
        if ( v24 >= eventBtns->max_length )
          goto LABEL_108;
        v29 = (UnityEngine_Behaviour_o *)eventBtns->m_Items[v24];
        if ( !v29 )
          goto LABEL_107;
        UnityEngine_Behaviour__set_enabled(v29, 0, 0LL);
        v30 = this->fields.eventBtns;
        if ( !v30 )
          goto LABEL_107;
        if ( v24 >= v30->max_length )
          goto LABEL_108;
        v31 = (UnityEngine_Component_o *)v30->m_Items[v24];
        if ( !v31 )
          goto LABEL_107;
        gameObject = UnityEngine_Component__get_gameObject(v31, 0LL);
        if ( !gameObject )
          goto LABEL_107;
        Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              gameObject,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( !Component_srcLineSprite )
          goto LABEL_107;
        UnityEngine_Collider__set_enabled(Component_srcLineSprite, 0, 0LL);
        eventBtnImages = this->fields.eventBtnImages;
        if ( !eventBtnImages )
          goto LABEL_107;
        if ( v24 >= eventBtnImages->max_length )
          goto LABEL_108;
        v35 = eventBtnImages->m_Items[v24];
        if ( !v35 )
          goto LABEL_107;
        UISprite__set_spriteName(v35, v23, 0LL);
        backImgObjs = this->fields.backImgObjs;
        if ( !backImgObjs )
          goto LABEL_107;
        if ( v24 >= backImgObjs->max_length )
          goto LABEL_108;
        v37 = backImgObjs->m_Items[v24];
        if ( !v37 )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive(v37, 1, 0LL);
        activeImgObjs = this->fields.activeImgObjs;
        if ( !activeImgObjs )
          goto LABEL_107;
        if ( v24 >= activeImgObjs->max_length )
          goto LABEL_108;
        v39 = activeImgObjs->m_Items[v24];
        if ( !v39 )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive(v39, 0, 0LL);
        btnTxtSprites = this->fields.btnTxtSprites;
        if ( !btnTxtSprites )
          goto LABEL_107;
        if ( v24 >= btnTxtSprites->max_length )
          goto LABEL_108;
        v41 = btnTxtSprites->m_Items[v24];
        v18 = (__int64)EventRewardButtonChangeManager_TypeInfo;
        if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
          v18 = (__int64)EventRewardButtonChangeManager_TypeInfo;
        }
        v42 = this->fields.releaseEntityArray;
        if ( !v42 )
          goto LABEL_107;
        if ( v24 >= v42->max_length )
          goto LABEL_108;
        v43 = v42->m_Items[v24];
        if ( !v43 )
          goto LABEL_107;
        v44 = *(System_String_o **)(*(_QWORD *)(v18 + 184) + 72LL);
        v45 = System_Int32__ToString((int)v43 + 36, 0LL);
        v47 = System_String__Concat_43743732(v44, v45, 0LL);
        if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        }
        v18 = EventRewardRootComponent__setRewardInfoImg(v41, v47, v46);
        v48 = this->fields.eventBtns;
        if ( !v48 )
          goto LABEL_107;
        if ( v24 >= v48->max_length )
          goto LABEL_108;
        v49 = v48->m_Items[v24];
        if ( !v49 )
          goto LABEL_107;
        v18 = ((__int64 (__fastcall *)(UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))v49->klass->vtable._14_SetState.method)(
                v49,
                3LL,
                0LL,
                v49->klass->vtable._15_OnPress.methodPtr);
        tabColliders = this->fields.tabColliders;
        if ( !tabColliders )
          goto LABEL_107;
        if ( v24 >= tabColliders->max_length )
          goto LABEL_108;
        v51 = tabColliders->m_Items[v24];
        if ( !v51 )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive(v51, 1, 0LL);
      }
      else
      {
LABEL_58:
        v52 = this->fields.eventBtns;
        if ( !v52 )
          goto LABEL_107;
        if ( v24 >= v52->max_length )
          goto LABEL_108;
        v53 = (UnityEngine_Behaviour_o *)v52->m_Items[v24];
        if ( !v53 )
          goto LABEL_107;
        v54 = v25 != priorityId;
        UnityEngine_Behaviour__set_enabled(v53, v25 != priorityId, 0LL);
        v55 = this->fields.eventBtns;
        if ( !v55 )
          goto LABEL_107;
        if ( v24 >= v55->max_length )
          goto LABEL_108;
        v56 = (UnityEngine_Component_o *)v55->m_Items[v24];
        if ( !v56 )
          goto LABEL_107;
        v57 = UnityEngine_Component__get_gameObject(v56, 0LL);
        if ( !v57 )
          goto LABEL_107;
        v58 = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v57,
                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( !v58 )
          goto LABEL_107;
        UnityEngine_Collider__set_enabled(v58, v54, 0LL);
        v59 = this->fields.eventBtnImages;
        if ( !v59 )
          goto LABEL_107;
        if ( v24 >= v59->max_length )
          goto LABEL_108;
        v60 = v59->m_Items[v24];
        if ( !v60 )
          goto LABEL_107;
        v61 = v25 == priorityId ? v89 : v23;
        UISprite__set_spriteName(v60, v61, 0LL);
        v62 = this->fields.backImgObjs;
        if ( !v62 )
          goto LABEL_107;
        if ( v24 >= v62->max_length )
          goto LABEL_108;
        v63 = v62->m_Items[v24];
        if ( !v63 )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive(v63, v54, 0LL);
        v64 = this->fields.activeImgObjs;
        if ( !v64 )
          goto LABEL_107;
        if ( v24 >= v64->max_length )
          goto LABEL_108;
        v65 = v64->m_Items[v24];
        if ( !v65 )
          goto LABEL_107;
        v66 = (System_String_o **)(v25 == priorityId ? &StringLiteral_17003/*"btn_txt_on_"*/ : &StringLiteral_16997/*"btn_txt_off_"*/);
        UnityEngine_GameObject__SetActive(v65, v25 == priorityId, 0LL);
        v67 = this->fields.btnTxtSprites;
        if ( !v67 )
          goto LABEL_107;
        if ( v24 >= v67->max_length )
          goto LABEL_108;
        v68 = *v66;
        v69 = v67->m_Items[v24];
        v18 = (__int64)System_Int32__ToString((int32_t)&v90, 0LL);
        if ( v24 >= eventRewardSceneEnt->max_length )
          goto LABEL_108;
        v70 = m_Items[v24];
        if ( !v70 )
          goto LABEL_107;
        v71 = eventRewardSceneEnt;
        v72 = (System_String_o *)v18;
        v73 = System_Int32__ToString((int)v70 + 20, 0LL);
        v75 = System_String__Concat_43747144(v68, v72, (System_String_o *)StringLiteral_15842/*"_"*/, v73, 0LL);
        if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        }
        v18 = EventRewardRootComponent__setRewardInfoImg(v69, v75, v74);
        v76 = this->fields.eventBtns;
        if ( !v76 )
          goto LABEL_107;
        if ( v24 >= v76->max_length )
          goto LABEL_108;
        v77 = v76->m_Items[v24];
        if ( !v77 )
          goto LABEL_107;
        eventRewardSceneEnt = v71;
        v18 = ((__int64 (__fastcall *)(UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v77->klass->vtable._14_SetState.method)(
                v77,
                0LL,
                0LL,
                v77->klass->vtable._15_OnPress.methodPtr);
        ++v25;
      }
      ++v24;
    }
    while ( (__int64)v24 < this->fields.eventCount );
  }
  if ( v88 )
  {
    v78 = this->fields.btnTxtSprites;
    if ( !v78 )
      goto LABEL_107;
    if ( v78->max_length <= v87 )
      goto LABEL_108;
    v79 = v78->m_Items[v87];
    v80 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v80 = EventRewardButtonChangeManager_TypeInfo;
    }
    DISABLE_BTN_TXT = v80->static_fields->DISABLE_BTN_TXT;
    v82 = System_Int32__ToString((int)this + 108, 0LL);
    v84 = System_String__Concat_43743732(DISABLE_BTN_TXT, v82, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    v18 = EventRewardRootComponent__setRewardInfoImg(v79, v84, v83);
    v85 = this->fields.eventBtns;
    if ( !v85 )
      goto LABEL_107;
    if ( v85->max_length <= v87 )
    {
LABEL_108:
      sub_B17100(v18, *(_QWORD *)&priorityId, *(_QWORD *)&currentEventId);
      sub_B170A0();
    }
    v86 = v85->m_Items[v87];
    if ( v86 )
    {
      ((void (__fastcall *)(UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))v86->klass->vtable._14_SetState.method)(
        v86,
        3LL,
        0LL,
        v86->klass->vtable._15_OnPress.methodPtr);
      return;
    }
LABEL_107:
    sub_B170D4();
  }
}


void __fastcall EventRewardButtonChangeManager__EndTutorialRequest(
        EventRewardButtonChangeManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_RequestEndCallBack; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *RequestEndCallBack; // t1

  RequestEndCallBack = this->fields.RequestEndCallBack;
  p_RequestEndCallBack = (BattleServantConfConponent_o *)&this->fields.RequestEndCallBack;
  v9 = RequestEndCallBack;
  if ( RequestEndCallBack )
  {
    p_RequestEndCallBack->klass = 0LL;
    sub_B16F98(p_RequestEndCallBack, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRewardButtonChangeManager__GetReleaseBtnSpriteName(
        EventRewardButtonChangeManager_o *this,
        int32_t eventId,
        int32_t releaseTabPriority,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  EventRewardSceneReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventRewardButtonChangeManager_c *v10; // x8
  System_String_o *DISABLE_BTN_TXT; // x19
  System_String_o *v12; // x0
  int32_t ReleaseTabImageId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F614A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRewardSceneReleaseMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&EventRewardButtonChangeManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F614A = 1;
  }
  ReleaseTabImageId = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventRewardSceneReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRewardSceneReleaseMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  ReleaseTabImageId = EventRewardSceneReleaseMaster__getReleaseTabImageId(
                        MasterData_WarQuestSelectionMaster,
                        eventId,
                        releaseTabPriority,
                        0LL);
  v10 = EventRewardButtonChangeManager_TypeInfo;
  if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
    v10 = EventRewardButtonChangeManager_TypeInfo;
  }
  DISABLE_BTN_TXT = v10->static_fields->DISABLE_BTN_TXT;
  v12 = System_Int32__ToString((int32_t)&ReleaseTabImageId, 0LL);
  return System_String__Concat_43743732(DISABLE_BTN_TXT, v12, 0LL);
}


void __fastcall EventRewardButtonChangeManager__OnClickDisableCenterButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v14; // x8
  CommonUI_o *v15; // x19
  System_String_o *closedMessage; // x20
  EventRewardButtonChangeManager___c_c *v17; // x0
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__35_0; // x22
  System_String_o *v20; // x21
  Il2CppObject *v21; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40F614D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&Method_EventRewardButtonChangeManager___c__OnClickDisableCenterButton_b__35_0__, v5);
    sub_B16FFC(&EventRewardButtonChangeManager___c_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40F614D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  releaseEntityArray = this->fields.releaseEntityArray;
  if ( !releaseEntityArray )
    goto LABEL_19;
  if ( releaseEntityArray->max_length <= 1 )
  {
    sub_B17100(Instance, v9, v10);
    sub_B170A0();
  }
  v14 = releaseEntityArray->m_Items[1];
  if ( !v14 )
    goto LABEL_19;
  v15 = (CommonUI_o *)Instance;
  closedMessage = v14->fields.closedMessage;
  v17 = EventRewardButtonChangeManager___c_TypeInfo;
  if ( (BYTE3(EventRewardButtonChangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    v17 = EventRewardButtonChangeManager___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__35_0 = static_fields->__9__35_0;
  v20 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__35_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__35_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
    System_Action___ctor(
      _9__35_0,
      v21,
      Method_EventRewardButtonChangeManager___c__OnClickDisableCenterButton_b__35_0__,
      0LL);
    v22 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v22->__9__35_0 = _9__35_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v22->__9__35_0,
      (System_Int32_array **)_9__35_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !v15 )
LABEL_19:
    sub_B170D4();
  CommonUI__OpenNotificationDialog(v15, v20, closedMessage, _9__35_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall EventRewardButtonChangeManager__OnClickDisableLeftButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v14; // x8
  CommonUI_o *v15; // x19
  System_String_o *closedMessage; // x20
  EventRewardButtonChangeManager___c_c *v17; // x0
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__34_0; // x22
  System_String_o *v20; // x21
  Il2CppObject *v21; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40F614C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&Method_EventRewardButtonChangeManager___c__OnClickDisableLeftButton_b__34_0__, v5);
    sub_B16FFC(&EventRewardButtonChangeManager___c_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40F614C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  releaseEntityArray = this->fields.releaseEntityArray;
  if ( !releaseEntityArray )
    goto LABEL_19;
  if ( !releaseEntityArray->max_length )
  {
    sub_B17100(Instance, v9, v10);
    sub_B170A0();
  }
  v14 = releaseEntityArray->m_Items[0];
  if ( !v14 )
    goto LABEL_19;
  v15 = (CommonUI_o *)Instance;
  closedMessage = v14->fields.closedMessage;
  v17 = EventRewardButtonChangeManager___c_TypeInfo;
  if ( (BYTE3(EventRewardButtonChangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    v17 = EventRewardButtonChangeManager___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__34_0 = static_fields->__9__34_0;
  v20 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__34_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
    System_Action___ctor(
      _9__34_0,
      v21,
      Method_EventRewardButtonChangeManager___c__OnClickDisableLeftButton_b__34_0__,
      0LL);
    v22 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v22->__9__34_0 = _9__34_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v22->__9__34_0,
      (System_Int32_array **)_9__34_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !v15 )
LABEL_19:
    sub_B170D4();
  CommonUI__OpenNotificationDialog(v15, v20, closedMessage, _9__34_0, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
}


void __fastcall EventRewardButtonChangeManager__OnClickDisableRightButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t eventCount; // w8
  WebViewManager_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v16; // x8
  CommonUI_o *v17; // x19
  System_String_o *closedMessage; // x20
  EventRewardButtonChangeManager___c_c *v19; // x0
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__36_0; // x22
  System_String_o *v22; // x21
  Il2CppObject *v23; // x23
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  struct EventRewardButtonChangeManager___c_StaticFields *v31; // x0
  BattleServantConfConponent_o *p__9__36_0; // x0
  __int64 v33; // x3
  __int64 v34; // x4
  struct EventRewardSceneReleaseEntity_array *v35; // x8
  EventRewardSceneReleaseEntity_o *v36; // x8
  EventRewardButtonChangeManager___c_c *v37; // x0
  struct EventRewardButtonChangeManager___c_StaticFields *v38; // x8
  Il2CppObject *v39; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v40; // x0

  if ( (byte_40F614E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_0__, v5);
    sub_B16FFC(&Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_1__, v6);
    sub_B16FFC(&EventRewardButtonChangeManager___c_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    byte_40F614E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  eventCount = this->fields.eventCount;
  if ( eventCount != 3 )
  {
    if ( eventCount != 2 )
      return;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    releaseEntityArray = this->fields.releaseEntityArray;
    if ( !releaseEntityArray )
LABEL_34:
      sub_B170D4();
    if ( releaseEntityArray->max_length > 1 )
    {
      v16 = releaseEntityArray->m_Items[1];
      if ( !v16 )
        goto LABEL_34;
      v17 = (CommonUI_o *)Instance;
      closedMessage = v16->fields.closedMessage;
      v19 = EventRewardButtonChangeManager___c_TypeInfo;
      if ( (BYTE3(EventRewardButtonChangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
        v19 = EventRewardButtonChangeManager___c_TypeInfo;
      }
      static_fields = v19->static_fields;
      _9__36_0 = static_fields->__9__36_0;
      v22 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__36_0 )
      {
        if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
        }
        v23 = (Il2CppObject *)static_fields->__9;
        _9__36_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
        System_Action___ctor(
          _9__36_0,
          v23,
          Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_0__,
          0LL);
        v30 = (System_Int32_array **)_9__36_0;
        v31 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
        v31->__9__36_0 = _9__36_0;
        p__9__36_0 = (BattleServantConfConponent_o *)&v31->__9__36_0;
LABEL_30:
        sub_B16F98(p__9__36_0, v30, v24, v25, v26, v27, v28, v29);
        goto LABEL_31;
      }
      goto LABEL_31;
    }
LABEL_35:
    sub_B17100(Instance, v11, v12);
    sub_B170A0();
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35 = this->fields.releaseEntityArray;
  if ( !v35 )
    goto LABEL_34;
  if ( v35->max_length <= 2 )
    goto LABEL_35;
  v36 = v35->m_Items[2];
  if ( !v36 )
    goto LABEL_34;
  v17 = (CommonUI_o *)Instance;
  closedMessage = v36->fields.closedMessage;
  v37 = EventRewardButtonChangeManager___c_TypeInfo;
  if ( (BYTE3(EventRewardButtonChangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    v37 = EventRewardButtonChangeManager___c_TypeInfo;
  }
  v38 = v37->static_fields;
  _9__36_0 = v38->__9__36_1;
  v22 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__36_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v38 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)v38->__9;
    _9__36_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v33, v34);
    System_Action___ctor(
      _9__36_0,
      v39,
      Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_1__,
      0LL);
    v30 = (System_Int32_array **)_9__36_0;
    v40 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v40->__9__36_1 = _9__36_0;
    p__9__36_0 = (BattleServantConfConponent_o *)&v40->__9__36_1;
    goto LABEL_30;
  }
LABEL_31:
  if ( !v17 )
    goto LABEL_34;
  CommonUI__OpenNotificationDialog(v17, v22, closedMessage, _9__36_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardButtonChangeManager__SetBtnCollider(
        EventRewardButtonChangeManager_o *this,
        bool isDisp,
        int32_t currentEventSlotIndex,
        const MethodInfo *method)
{
  EventRewardButtonChangeManager_o *v6; // x21
  struct UICommonButton_array *eventBtns; // x8
  __int64 v8; // x8
  int v9; // w22
  __int64 v10; // x23
  __int64 v11; // x24
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x9
  unsigned __int64 v13; // x8
  struct UICommonButton_array *v14; // x9
  UnityEngine_Component_o *v15; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  struct UICommonButton_array *v17; // x9
  UnityEngine_Component_o *v18; // x0
  UnityEngine_Collider_o *v19; // x0
  __int64 v20; // x8

  v6 = this;
  if ( (byte_40F6148 & 1) == 0 )
  {
    this = (EventRewardButtonChangeManager_o *)sub_B16FFC(
                                                 &Method_UnityEngine_Component_GetComponent_BoxCollider___,
                                                 isDisp);
    byte_40F6148 = 1;
  }
  eventBtns = v6->fields.eventBtns;
  if ( !eventBtns )
LABEL_21:
    sub_B170D4();
  v8 = *(_QWORD *)&eventBtns->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0;
    v10 = (int)v8;
    v11 = 4LL;
    do
    {
      releaseEntityArray = v6->fields.releaseEntityArray;
      v13 = v11 - 4;
      if ( !releaseEntityArray )
        goto LABEL_14;
      if ( v13 >= releaseEntityArray->max_length )
        goto LABEL_22;
      if ( *((_QWORD *)&releaseEntityArray->obj.klass + v11) )
      {
        v14 = v6->fields.eventBtns;
        if ( !v14 )
          goto LABEL_21;
        if ( v13 >= v14->max_length )
          goto LABEL_22;
        v15 = (UnityEngine_Component_o *)*((_QWORD *)&v14->obj.klass + v11);
        if ( !v15 )
          goto LABEL_21;
        Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              v15,
                                                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
        if ( !Component_WebViewObject )
          goto LABEL_21;
        UnityEngine_Collider__set_enabled(Component_WebViewObject, 0, 0LL);
      }
      else
      {
LABEL_14:
        v17 = v6->fields.eventBtns;
        if ( !v17 )
          goto LABEL_21;
        if ( v13 >= v17->max_length )
        {
LABEL_22:
          sub_B17100(this, isDisp, *(_QWORD *)&currentEventSlotIndex);
          sub_B170A0();
        }
        v18 = (UnityEngine_Component_o *)*((_QWORD *)&v17->obj.klass + v11);
        if ( !v18 )
          goto LABEL_21;
        v19 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          v18,
                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
        if ( !v19 )
          goto LABEL_21;
        UnityEngine_Collider__set_enabled(v19, v9++ != currentEventSlotIndex && isDisp, 0LL);
      }
      v20 = v11 - 3;
      ++v11;
    }
    while ( v20 < v10 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardButtonChangeManager__SetReleaseBeforeTabInfo(
        EventRewardButtonChangeManager_o *this,
        int32_t eventId,
        int32_t tabPriority,
        int32_t eventCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  EventRewardButtonChangeManager_c *v11; // x0
  System_String_o **p_BTN_NAME_TYPE3_OFF; // x8
  struct UICommonButton_array *eventBtns; // x9
  UnityEngine_Behaviour_o *v14; // x0
  System_String_o *v15; // x22
  struct UICommonButton_array *v16; // x8
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Collider_o *Component_srcLineSprite; // x0
  struct UISprite_array *eventBtnImages; // x8
  UISprite_o *v21; // x0
  struct UnityEngine_GameObject_array *backImgObjs; // x8
  UnityEngine_GameObject_o *v23; // x0
  struct UnityEngine_GameObject_array *activeImgObjs; // x8
  UnityEngine_GameObject_o *v25; // x0
  const MethodInfo *v26; // x3
  struct UISprite_array *btnTxtSprites; // x8
  UISprite_o *v28; // x22
  const MethodInfo *v29; // x2
  System_String_o *v30; // x21
  struct UICommonButton_array *v31; // x8
  UICommonButton_o *v32; // x0

  if ( (byte_40F614B & 1) == 0 )
  {
    sub_B16FFC(&EventRewardButtonChangeManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v10);
    byte_40F614B = 1;
  }
  if ( eventCount == 3 )
  {
    v11 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v11 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_BTN_NAME_TYPE3_OFF = &v11->static_fields->BTN_NAME_TYPE3_OFF;
  }
  else if ( eventCount == 2 )
  {
    v11 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v11 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_BTN_NAME_TYPE3_OFF = &v11->static_fields->BTN_NAME_TYPE2_OFF;
  }
  else
  {
    v11 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v11 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_BTN_NAME_TYPE3_OFF = &v11->static_fields->BTN_NAME_TYPE4_OFF;
  }
  eventBtns = this->fields.eventBtns;
  if ( !eventBtns )
    goto LABEL_43;
  if ( eventBtns->max_length <= tabPriority )
    goto LABEL_44;
  v14 = (UnityEngine_Behaviour_o *)eventBtns->m_Items[tabPriority];
  if ( !v14 )
    goto LABEL_43;
  v15 = *p_BTN_NAME_TYPE3_OFF;
  UnityEngine_Behaviour__set_enabled(v14, 0, 0LL);
  v16 = this->fields.eventBtns;
  if ( !v16 )
    goto LABEL_43;
  if ( v16->max_length <= tabPriority )
    goto LABEL_44;
  v17 = (UnityEngine_Component_o *)v16->m_Items[tabPriority];
  if ( !v17 )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        gameObject,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !Component_srcLineSprite )
    goto LABEL_43;
  UnityEngine_Collider__set_enabled(Component_srcLineSprite, 0, 0LL);
  eventBtnImages = this->fields.eventBtnImages;
  if ( !eventBtnImages )
    goto LABEL_43;
  if ( eventBtnImages->max_length <= tabPriority )
    goto LABEL_44;
  v21 = eventBtnImages->m_Items[tabPriority];
  if ( !v21 )
    goto LABEL_43;
  UISprite__set_spriteName(v21, v15, 0LL);
  backImgObjs = this->fields.backImgObjs;
  if ( !backImgObjs )
    goto LABEL_43;
  if ( backImgObjs->max_length <= tabPriority )
    goto LABEL_44;
  v23 = backImgObjs->m_Items[tabPriority];
  if ( !v23 )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(v23, 1, 0LL);
  activeImgObjs = this->fields.activeImgObjs;
  if ( !activeImgObjs )
    goto LABEL_43;
  if ( activeImgObjs->max_length <= tabPriority )
    goto LABEL_44;
  v25 = activeImgObjs->m_Items[tabPriority];
  if ( !v25 )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(v25, 0, 0LL);
  btnTxtSprites = this->fields.btnTxtSprites;
  if ( !btnTxtSprites )
    goto LABEL_43;
  if ( btnTxtSprites->max_length <= tabPriority )
    goto LABEL_44;
  v28 = btnTxtSprites->m_Items[tabPriority];
  v30 = EventRewardButtonChangeManager__GetReleaseBtnSpriteName(
          (EventRewardButtonChangeManager_o *)v11,
          eventId,
          tabPriority,
          v26);
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  v11 = (EventRewardButtonChangeManager_c *)EventRewardRootComponent__setRewardInfoImg(v28, v30, v29);
  v31 = this->fields.eventBtns;
  if ( !v31 )
LABEL_43:
    sub_B170D4();
  if ( v31->max_length <= tabPriority )
  {
LABEL_44:
    sub_B17100(v11, *(_QWORD *)&eventId, *(_QWORD *)&tabPriority);
    sub_B170A0();
  }
  v32 = v31->m_Items[tabPriority];
  if ( !v32 )
    goto LABEL_43;
  ((void (__fastcall *)(UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))v32->klass->vtable._14_SetState.method)(
    v32,
    3LL,
    0LL,
    v32->klass->vtable._15_OnPress.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardButtonChangeManager__SetReleaseBtnState(
        EventRewardButtonChangeManager_o *this,
        EventRewardSceneReleaseEntity_array *entitys,
        int32_t closedImageId,
        System_Action_o *effectEndCallBack,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *v8; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  v8 = (BattleServantConfConponent_o *)this;
  this->fields.releaseEntityArray = entitys;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.releaseEntityArray,
    (System_Int32_array **)entitys,
    *(System_String_array ***)&closedImageId,
    (System_String_array **)effectEndCallBack,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v8->fields.unknownNp = (struct UILabel_o *)effectEndCallBack;
  v8 = (BattleServantConfConponent_o *)((char *)v8 + 120);
  HIDWORD(v8[-1].fields.classBoardSkillObj) = closedImageId;
  sub_B16F98(v8, (System_Int32_array **)effectEndCallBack, v11, v12, v13, v14, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardButtonChangeManager__SetReleaseEffect(
        EventRewardButtonChangeManager_o *this,
        int32_t eventId,
        int32_t eventCount,
        int32_t slot,
        System_Action_o *changeCallback,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  EventRewardButtonChangeManager_c *v17; // x0
  System_String_o **p_RELEASE_EFFECT_3TAB_NAME; // x8
  EventRewardButtonChangeManager_c *v19; // x0
  EventRewardButtonChangeManager_c *v20; // x0
  AssetData_o *efffectData; // x0
  struct UnityEngine_GameObject_array *effectObject; // x25
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x23
  System_Int32_array **transform; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x23
  Il2CppClass **v33; // x0
  struct UnityEngine_GameObject_array *v34; // x8
  UnityEngine_GameObject_o *v35; // x0
  TabOpenEffectComponent_o *Component_srcLineSprite; // x0
  TabOpenEffectComponent_o *v37; // x23
  struct UnityEngine_GameObject_array *v38; // x8
  UnityEngine_GameObject_o *v39; // x0
  struct UISprite_array *eventBtnImages; // x8
  UnityEngine_Transform_o *v41; // x21
  UnityEngine_Component_o *v42; // x0
  UnityEngine_Transform_o *v43; // x0
  struct UnityEngine_GameObject_array *v44; // x8
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Transform_o *v46; // x21
  int v47; // s0
  struct UnityEngine_GameObject_array *v50; // x8
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_Transform_o *v52; // x19
  int v53; // s0

  if ( (byte_40F6149 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, *(_QWORD *)&eventId);
    sub_B16FFC(&EventRewardButtonChangeManager_TypeInfo, v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___, v14);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    byte_40F6149 = 1;
  }
  this->fields.releaseSlot = slot;
  EventRewardButtonChangeManager__SetReleaseBeforeTabInfo(
    this,
    eventId,
    slot,
    eventCount,
    (const MethodInfo *)changeCallback);
  if ( eventCount == 3 )
  {
    v19 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v19 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_RELEASE_EFFECT_3TAB_NAME = &v19->static_fields->RELEASE_EFFECT_3TAB_NAME;
  }
  else if ( eventCount == 2 )
  {
    v17 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v17 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_RELEASE_EFFECT_3TAB_NAME = &v17->static_fields->RELEASE_EFFECT_2TAB_NAME;
  }
  else
  {
    v20 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v20 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_RELEASE_EFFECT_3TAB_NAME = &v20->static_fields->RELEASE_EFFECT_4TAB_NAME;
  }
  efffectData = this->fields.efffectData;
  if ( !efffectData )
    goto LABEL_45;
  effectObject = this->fields.effectObject;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               efffectData,
                                                                               *p_RELEASE_EFFECT_3TAB_NAME,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       Object_WarBoardWaitTimeSetting,
                                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectObject )
    goto LABEL_45;
  v32 = transform;
  if ( transform )
  {
    transform = (System_Int32_array **)sub_B170BC(transform, effectObject->obj.klass->_1.element_class);
    if ( !transform )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( effectObject->max_length <= slot )
    goto LABEL_46;
  v33 = &effectObject->obj.klass + slot;
  v33[4] = (Il2CppClass *)v32;
  sub_B16F98((BattleServantConfConponent_o *)(v33 + 4), v32, v26, v27, v28, v29, v30, v31);
  v34 = this->fields.effectObject;
  if ( !v34 )
    goto LABEL_45;
  if ( v34->max_length <= slot )
  {
LABEL_46:
    sub_B17100(transform, v25, v26);
    sub_B170A0();
  }
  v35 = v34->m_Items[slot];
  if ( !v35 )
    goto LABEL_45;
  Component_srcLineSprite = (TabOpenEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v35,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_45;
  v37 = Component_srcLineSprite;
  TabOpenEffectComponent__SetChangeUICallback(Component_srcLineSprite, changeCallback, 0LL);
  TabOpenEffectComponent__SetAnimationEndCallback(v37, endCallback, 0LL);
  v38 = this->fields.effectObject;
  if ( !v38 )
    goto LABEL_45;
  if ( v38->max_length <= slot )
    goto LABEL_46;
  v39 = v38->m_Items[slot];
  if ( !v39 )
    goto LABEL_45;
  transform = (System_Int32_array **)UnityEngine_GameObject__get_transform(v39, 0LL);
  eventBtnImages = this->fields.eventBtnImages;
  if ( !eventBtnImages )
    goto LABEL_45;
  if ( eventBtnImages->max_length <= slot )
    goto LABEL_46;
  v41 = (UnityEngine_Transform_o *)transform;
  v42 = (UnityEngine_Component_o *)eventBtnImages->m_Items[slot];
  if ( !v42 )
    goto LABEL_45;
  v43 = UnityEngine_Component__get_transform(v42, 0LL);
  if ( !v41 )
    goto LABEL_45;
  UnityEngine_Transform__set_parent(v41, v43, 0LL);
  v44 = this->fields.effectObject;
  if ( !v44 )
    goto LABEL_45;
  if ( v44->max_length <= slot )
    goto LABEL_46;
  v45 = v44->m_Items[slot];
  if ( !v45
    || (v46 = UnityEngine_GameObject__get_transform(v45, 0LL),
        *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Vector3__get_zero(0LL),
        !v46)
    || (UnityEngine_Transform__set_localPosition(v46, *(UnityEngine_Vector3_o *)&v47, 0LL),
        (v50 = this->fields.effectObject) == 0LL) )
  {
LABEL_45:
    sub_B170D4();
  }
  if ( v50->max_length <= slot )
    goto LABEL_46;
  v51 = v50->m_Items[slot];
  if ( !v51 )
    goto LABEL_45;
  v52 = UnityEngine_GameObject__get_transform(v51, 0LL);
  *(UnityEngine_Vector3_o *)&v53 = UnityEngine_Vector3__get_one(0LL);
  if ( !v52 )
    goto LABEL_45;
  UnityEngine_Transform__set_localScale(v52, *(UnityEngine_Vector3_o *)&v53, 0LL);
  TabOpenEffectComponent__PlayAnimation(v37, 0LL);
}


void __fastcall EventRewardButtonChangeManager__SetReleaseEffectData(
        EventRewardButtonChangeManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( data )
  {
    this->fields.efffectData = data;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.efffectData,
      (System_Int32_array **)data,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void __fastcall EventRewardButtonChangeManager__StartTutorialRequest(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  unsigned int releaseSlot; // w8
  int32_t v10; // w20
  NetworkManager_ResultCallbackFunc_o *v11; // x21
  TutorialEventSetRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40F614F & 1) == 0 )
  {
    sub_B16FFC(&Method_EventRewardButtonChangeManager_EndTutorialRequest__, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_40F614F = 1;
  }
  releaseSlot = this->fields.releaseSlot;
  if ( releaseSlot >= 3 )
    v10 = -1;
  else
    v10 = releaseSlot + 25;
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 method,
                                                 v2,
                                                 v3,
                                                 v4);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_EventRewardButtonChangeManager_EndTutorialRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v11,
                                                                     (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B170D4();
  TutorialEventSetRequest__beginRequest(Request_WarBoardWallAttackRequest, v10, this->fields.eventId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardButtonChangeManager__TabInitialize(
        EventRewardButtonChangeManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  EventRewardSceneMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventRewardSceneEntity_array *EntityList; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct UnityEngine_GameObject_array *tabColliders; // x8
  EventRewardSceneEntity_array *v13; // x20
  __int64 v14; // x21
  int max_length; // w9
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40F6146 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F6146 = 1;
  }
  this->fields.eventId = eventId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (EventRewardSceneMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  EntityList = EventRewardSceneMaster__GetEntityList(MasterData_WarQuestSelectionMaster, eventId, 0LL);
  tabColliders = this->fields.tabColliders;
  if ( !tabColliders )
    goto LABEL_12;
  v13 = EntityList;
  v14 = 0LL;
  while ( 1 )
  {
    max_length = tabColliders->max_length;
    if ( (int)v14 >= max_length )
      break;
    if ( (unsigned int)v14 >= max_length )
    {
      sub_B17100(EntityList, v10, v11);
      sub_B170A0();
    }
    v16 = tabColliders->m_Items[v14];
    if ( v16 )
    {
      gameObject = UnityEngine_GameObject__get_gameObject(v16, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        tabColliders = this->fields.tabColliders;
        ++v14;
        if ( tabColliders )
          continue;
      }
    }
    goto LABEL_12;
  }
  if ( !v13 )
LABEL_12:
    sub_B170D4();
  v18 = (struct UnityEngine_GameObject_array *)sub_B17014(UnityEngine_GameObject___TypeInfo, v13->max_length, v11);
  this->fields.effectObject = v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectObject,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void __fastcall EventRewardButtonChangeManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7032 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardButtonChangeManager___c_TypeInfo, v1);
    byte_40F7032 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventRewardButtonChangeManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventRewardButtonChangeManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventRewardButtonChangeManager___c___ctor(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableCenterButton_b__35_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F7034 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F7034 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableLeftButton_b__34_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F7033 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F7033 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableRightButton_b__36_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F7035 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F7035 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableRightButton_b__36_1(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F7036 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F7036 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}