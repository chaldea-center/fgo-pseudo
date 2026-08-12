void EventRewardButtonChangeManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventRewardButtonChangeManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct EventRewardButtonChangeManager_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct EventRewardButtonChangeManager_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct EventRewardButtonChangeManager_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct EventRewardButtonChangeManager_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w1
  struct EventRewardButtonChangeManager_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  struct EventRewardButtonChangeManager_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  int32_t v64; // w1
  struct EventRewardButtonChangeManager_StaticFields *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct EventRewardButtonChangeManager_StaticFields *v72; // x0
  int32_t v73; // w1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7

  if ( (byte_596ABFE & 1) == 0 )
  {
    sub_2213A60(&EventRewardButtonChangeManager_TypeInfo);
    sub_2213A60(&StringLiteral_18228/*"btn_bg_on_1"*/);
    sub_2213A60(&StringLiteral_18229/*"btn_bg_on_2"*/);
    sub_2213A60(&StringLiteral_18230/*"btn_bg_on_4"*/);
    sub_2213A60(&StringLiteral_19651/*"ef_2tab_open"*/);
    sub_2213A60(&StringLiteral_18225/*"btn_bg_off_4"*/);
    sub_2213A60(&StringLiteral_18223/*"btn_bg_off_1"*/);
    sub_2213A60(&StringLiteral_19653/*"ef_4tab_open"*/);
    sub_2213A60(&StringLiteral_19652/*"ef_3tab_open"*/);
    sub_2213A60(&StringLiteral_18224/*"btn_bg_off_2"*/);
    sub_2213A60(&StringLiteral_18245/*"btn_disable_txt_"*/);
    byte_596ABFE = 1;
  }
  v7 = StringLiteral_18228/*"btn_bg_on_1"*/;
  EventRewardButtonChangeManager_TypeInfo->static_fields->BTN_NAME_TYPE3_ON = (struct System_String_o *)StringLiteral_18228/*"btn_bg_on_1"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventRewardButtonChangeManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_18223/*"btn_bg_off_1"*/;
  static_fields = EventRewardButtonChangeManager_TypeInfo->static_fields;
  static_fields->BTN_NAME_TYPE3_OFF = (struct System_String_o *)StringLiteral_18223/*"btn_bg_off_1"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->BTN_NAME_TYPE3_OFF, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_18229/*"btn_bg_on_2"*/;
  v17 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v17->BTN_NAME_TYPE2_ON = (struct System_String_o *)StringLiteral_18229/*"btn_bg_on_2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->BTN_NAME_TYPE2_ON, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_18224/*"btn_bg_off_2"*/;
  v25 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v25->BTN_NAME_TYPE2_OFF = (struct System_String_o *)StringLiteral_18224/*"btn_bg_off_2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->BTN_NAME_TYPE2_OFF, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_18230/*"btn_bg_on_4"*/;
  v33 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v33->BTN_NAME_TYPE4_ON = (struct System_String_o *)StringLiteral_18230/*"btn_bg_on_4"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->BTN_NAME_TYPE4_ON, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_18225/*"btn_bg_off_4"*/;
  v41 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v41->BTN_NAME_TYPE4_OFF = (struct System_String_o *)StringLiteral_18225/*"btn_bg_off_4"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->BTN_NAME_TYPE4_OFF, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_19653/*"ef_4tab_open"*/;
  v49 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v49->RELEASE_EFFECT_4TAB_NAME = (struct System_String_o *)StringLiteral_19653/*"ef_4tab_open"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49->RELEASE_EFFECT_4TAB_NAME, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_19652/*"ef_3tab_open"*/;
  v57 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v57->RELEASE_EFFECT_3TAB_NAME = (struct System_String_o *)StringLiteral_19652/*"ef_3tab_open"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v57->RELEASE_EFFECT_3TAB_NAME, v56, v58, v59, v60, v61, v62, v63);
  v64 = StringLiteral_19651/*"ef_2tab_open"*/;
  v65 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v65->RELEASE_EFFECT_2TAB_NAME = (struct System_String_o *)StringLiteral_19651/*"ef_2tab_open"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v65->RELEASE_EFFECT_2TAB_NAME, v64, v66, v67, v68, v69, v70, v71);
  v72 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v73 = StringLiteral_18245/*"btn_disable_txt_"*/;
  v72->DISABLE_BTN_TXT = (struct System_String_o *)StringLiteral_18245/*"btn_disable_txt_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v72->DISABLE_BTN_TXT, v73, v74, v75, v76, v77, v78, v79);
}


void EventRewardButtonChangeManager___ctor(EventRewardButtonChangeManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardButtonChangeManager__ChangeTabInfo(
        EventRewardButtonChangeManager_o *this,
        int32_t priorityId,
        int32_t currentEventId,
        EventRewardSceneEntity_array *eventRewardSceneEnt,
        int32_t openSlot,
        bool openedTab,
        const MethodInfo *method)
{
  EventRewardButtonChangeManager_o *v11; // x20
  int32_t max_length; // w9
  int v13; // w8
  __int64 v14; // x8
  System_String_o **v15; // x9
  System_String_o **v16; // x8
  __int64 v17; // x8
  System_String_o *v18; // x24
  System_String_o *v19; // x29
  unsigned __int64 v20; // x21
  int v21; // w19
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  struct UICommonButton_array *eventBtns; // x8
  struct UICommonButton_array *v24; // x8
  struct UISprite_array *eventBtnImages; // x8
  struct UnityEngine_GameObject_array *backImgObjs; // x8
  struct UnityEngine_GameObject_array *activeImgObjs; // x8
  __int64 v28; // x2
  struct UISprite_array *btnTxtSprites; // x8
  UISprite_o *v30; // x25
  struct EventRewardSceneReleaseEntity_array *v31; // x8
  EventRewardSceneReleaseEntity_o *v32; // x8
  System_String_o *v33; // x26
  System_String_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  System_String_o *v37; // x26
  struct UICommonButton_array *v38; // x8
  struct UnityEngine_GameObject_array *tabColliders; // x8
  struct UICommonButton_array *v40; // x8
  bool v41; // w25
  struct UICommonButton_array *v42; // x8
  struct UISprite_array *v43; // x8
  System_String_o *v44; // x1
  struct UnityEngine_GameObject_array *v45; // x8
  struct UnityEngine_GameObject_array *v46; // x8
  System_String_o **v47; // x25
  struct UISprite_array *v48; // x8
  System_String_o *v49; // x26
  UISprite_o *v50; // x25
  EventRewardSceneEntity_o *v51; // x8
  EventRewardButtonChangeManager_o *v52; // x27
  System_String_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  System_String_o *v56; // x26
  struct UICommonButton_array *v57; // x8
  struct UISprite_array *v58; // x8
  EventRewardButtonChangeManager_c *v59; // x0
  UISprite_o *v60; // x21
  System_String_o *DISABLE_BTN_TXT; // x22
  System_String_o *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  System_String_o *v65; // x22
  struct UICommonButton_array *v66; // x8
  int32_t v67; // [xsp+0h] [xbp-70h]
  bool v68; // [xsp+8h] [xbp-68h]
  int32_t v69; // [xsp+Ch] [xbp-64h] BYREF

  v11 = this;
  v69 = currentEventId;
  if ( (byte_596ABF5 & 1) == 0 )
  {
    sub_2213A60(&EventRewardButtonChangeManager_TypeInfo);
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_2213A60(&StringLiteral_18353/*"btn_txt_on_"*/);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    this = (EventRewardButtonChangeManager_o *)sub_2213A60(&StringLiteral_18347/*"btn_txt_off_"*/);
    byte_596ABF5 = 1;
  }
  if ( !eventRewardSceneEnt )
    goto LABEL_99;
  max_length = eventRewardSceneEnt->max_length;
  v67 = openSlot;
  v68 = openedTab;
  this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
  v11->fields.eventCount = max_length;
  v13 = *((_DWORD *)this + 57);
  if ( max_length == 3 )
  {
    if ( !v13 )
    {
      j_il2cpp_runtime_class_init_0(this, *(_QWORD *)&priorityId, *(_QWORD *)&currentEventId);
      this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v16 = (System_String_o **)*((_QWORD *)this + 23);
    v15 = v16 + 1;
  }
  else if ( max_length == 2 )
  {
    if ( !v13 )
    {
      j_il2cpp_runtime_class_init_0(this, *(_QWORD *)&priorityId, *(_QWORD *)&currentEventId);
      this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v14 = *((_QWORD *)this + 23);
    v15 = (System_String_o **)(v14 + 24);
    v16 = (System_String_o **)(v14 + 16);
  }
  else
  {
    if ( !v13 )
    {
      j_il2cpp_runtime_class_init_0(this, *(_QWORD *)&priorityId, *(_QWORD *)&currentEventId);
      this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v17 = *((_QWORD *)this + 23);
    v15 = (System_String_o **)(v17 + 40);
    v16 = (System_String_o **)(v17 + 32);
  }
  if ( v11->fields.eventCount >= 1 )
  {
    v18 = *v15;
    v19 = *v16;
    v20 = 0;
    v21 = 0;
    do
    {
      releaseEntityArray = v11->fields.releaseEntityArray;
      if ( !releaseEntityArray )
        goto LABEL_53;
      if ( v20 >= LODWORD(releaseEntityArray->max_length) )
        goto LABEL_100;
      if ( releaseEntityArray->m_Items[v20] )
      {
        eventBtns = v11->fields.eventBtns;
        if ( !eventBtns )
          goto LABEL_99;
        if ( v20 >= LODWORD(eventBtns->max_length) )
          goto LABEL_100;
        this = (EventRewardButtonChangeManager_o *)eventBtns->m_Items[v20];
        if ( !this )
          goto LABEL_99;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
        v24 = v11->fields.eventBtns;
        if ( !v24 )
          goto LABEL_99;
        if ( v20 >= LODWORD(v24->max_length) )
          goto LABEL_100;
        this = (EventRewardButtonChangeManager_o *)v24->m_Items[v20];
        if ( !this )
          goto LABEL_99;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
        if ( !this )
          goto LABEL_99;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( !this )
          goto LABEL_99;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
        eventBtnImages = v11->fields.eventBtnImages;
        if ( !eventBtnImages )
          goto LABEL_99;
        if ( v20 >= LODWORD(eventBtnImages->max_length) )
          goto LABEL_100;
        this = (EventRewardButtonChangeManager_o *)eventBtnImages->m_Items[v20];
        if ( !this )
          goto LABEL_99;
        UISprite__set_spriteName((UISprite_o *)this, v18, 0);
        backImgObjs = v11->fields.backImgObjs;
        if ( !backImgObjs )
          goto LABEL_99;
        if ( v20 >= LODWORD(backImgObjs->max_length) )
          goto LABEL_100;
        this = (EventRewardButtonChangeManager_o *)backImgObjs->m_Items[v20];
        if ( !this )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        activeImgObjs = v11->fields.activeImgObjs;
        if ( !activeImgObjs )
          goto LABEL_99;
        if ( v20 >= LODWORD(activeImgObjs->max_length) )
          goto LABEL_100;
        this = (EventRewardButtonChangeManager_o *)activeImgObjs->m_Items[v20];
        if ( !this )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        btnTxtSprites = v11->fields.btnTxtSprites;
        if ( !btnTxtSprites )
          goto LABEL_99;
        if ( v20 >= LODWORD(btnTxtSprites->max_length) )
          goto LABEL_100;
        v30 = btnTxtSprites->m_Items[v20];
        this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
        if ( !*(&EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo, *(_QWORD *)&priorityId, v28);
          this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
        }
        v31 = v11->fields.releaseEntityArray;
        if ( !v31 )
          goto LABEL_99;
        if ( v20 >= LODWORD(v31->max_length) )
          goto LABEL_100;
        v32 = v31->m_Items[v20];
        if ( !v32 )
          goto LABEL_99;
        v33 = *(System_String_o **)(*((_QWORD *)this + 23) + 72LL);
        v34 = System_Int32__ToString((int)v32 + 36, 0);
        v37 = System_String__Concat_75651716(v33, v34, 0);
        if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v35, v36);
        this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v30, v37, 0);
        v38 = v11->fields.eventBtns;
        if ( !v38 )
          goto LABEL_99;
        if ( v20 >= LODWORD(v38->max_length) )
          goto LABEL_100;
        this = (EventRewardButtonChangeManager_o *)v38->m_Items[v20];
        if ( !this )
          goto LABEL_99;
        this = (EventRewardButtonChangeManager_o *)((__int64 (__fastcall *)(EventRewardButtonChangeManager_o *, __int64, _QWORD, Il2CppClass **))this->klass[1]._1.nestedTypes)(
                                                     this,
                                                     3,
                                                     0,
                                                     this->klass[1]._1.implementedInterfaces);
        tabColliders = v11->fields.tabColliders;
        if ( !tabColliders )
          goto LABEL_99;
        if ( v20 >= LODWORD(tabColliders->max_length) )
          goto LABEL_100;
        this = (EventRewardButtonChangeManager_o *)tabColliders->m_Items[v20];
        if ( !this )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      }
      else
      {
LABEL_53:
        v40 = v11->fields.eventBtns;
        if ( !v40 )
          goto LABEL_99;
        if ( v20 >= LODWORD(v40->max_length) )
          goto LABEL_100;
        this = (EventRewardButtonChangeManager_o *)v40->m_Items[v20];
        if ( !this )
          goto LABEL_99;
        v41 = v21 != priorityId;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v21 != priorityId, 0);
        v42 = v11->fields.eventBtns;
        if ( !v42 )
          goto LABEL_99;
        if ( v20 >= LODWORD(v42->max_length) )
          goto LABEL_100;
        this = (EventRewardButtonChangeManager_o *)v42->m_Items[v20];
        if ( !this )
          goto LABEL_99;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
        if ( !this )
          goto LABEL_99;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( !this )
          goto LABEL_99;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v41, 0);
        v43 = v11->fields.eventBtnImages;
        if ( !v43 )
          goto LABEL_99;
        if ( v20 >= LODWORD(v43->max_length) )
          goto LABEL_100;
        this = (EventRewardButtonChangeManager_o *)v43->m_Items[v20];
        if ( !this )
          goto LABEL_99;
        v44 = v21 == priorityId ? v19 : v18;
        UISprite__set_spriteName((UISprite_o *)this, v44, 0);
        v45 = v11->fields.backImgObjs;
        if ( !v45 )
          goto LABEL_99;
        if ( v20 >= LODWORD(v45->max_length) )
          goto LABEL_100;
        this = (EventRewardButtonChangeManager_o *)v45->m_Items[v20];
        if ( !this )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v41, 0);
        v46 = v11->fields.activeImgObjs;
        if ( !v46 )
          goto LABEL_99;
        if ( v20 >= LODWORD(v46->max_length) )
          goto LABEL_100;
        this = (EventRewardButtonChangeManager_o *)v46->m_Items[v20];
        if ( !this )
          goto LABEL_99;
        v47 = (System_String_o **)(v21 == priorityId ? &StringLiteral_18353/*"btn_txt_on_"*/ : &StringLiteral_18347/*"btn_txt_off_"*/);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v21 == priorityId, 0);
        v48 = v11->fields.btnTxtSprites;
        if ( !v48 )
          goto LABEL_99;
        if ( v20 >= LODWORD(v48->max_length) )
          goto LABEL_100;
        v49 = *v47;
        v50 = v48->m_Items[v20];
        this = (EventRewardButtonChangeManager_o *)System_Int32__ToString((int32_t)&v69, 0);
        if ( v20 >= LODWORD(eventRewardSceneEnt->max_length) )
          goto LABEL_100;
        v51 = eventRewardSceneEnt->m_Items[v20];
        if ( !v51 )
          goto LABEL_99;
        v52 = this;
        v53 = System_Int32__ToString((int)v51 + 20, 0);
        v56 = System_String__Concat_75696856(
                v49,
                (System_String_o *)v52,
                (System_String_o *)StringLiteral_16746/*"_"*/,
                v53,
                0);
        if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v54, v55);
        this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v50, v56, 0);
        v57 = v11->fields.eventBtns;
        if ( !v57 )
          goto LABEL_99;
        if ( v20 >= LODWORD(v57->max_length) )
          goto LABEL_100;
        this = (EventRewardButtonChangeManager_o *)v57->m_Items[v20];
        if ( !this )
          goto LABEL_99;
        this = (EventRewardButtonChangeManager_o *)((__int64 (__fastcall *)(EventRewardButtonChangeManager_o *, _QWORD, _QWORD, Il2CppClass **))this->klass[1]._1.nestedTypes)(
                                                     this,
                                                     0,
                                                     0,
                                                     this->klass[1]._1.implementedInterfaces);
        ++v21;
      }
      ++v20;
    }
    while ( (__int64)v20 < v11->fields.eventCount );
  }
  if ( v68 )
  {
    v58 = v11->fields.btnTxtSprites;
    if ( !v58 )
      goto LABEL_99;
    if ( LODWORD(v58->max_length) <= v67 )
      goto LABEL_100;
    v59 = EventRewardButtonChangeManager_TypeInfo;
    v60 = v58->m_Items[v67];
    if ( !*(&EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(
        EventRewardButtonChangeManager_TypeInfo,
        *(_QWORD *)&priorityId,
        *(_QWORD *)&currentEventId);
      v59 = EventRewardButtonChangeManager_TypeInfo;
    }
    DISABLE_BTN_TXT = v59->static_fields->DISABLE_BTN_TXT;
    v62 = System_Int32__ToString((int)v11 + 116, 0);
    v65 = System_String__Concat_75651716(DISABLE_BTN_TXT, v62, 0);
    if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v63, v64);
    this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v60, v65, 0);
    v66 = v11->fields.eventBtns;
    if ( !v66 )
      goto LABEL_99;
    if ( LODWORD(v66->max_length) <= v67 )
LABEL_100:
      sub_2213CE4(this);
    this = (EventRewardButtonChangeManager_o *)v66->m_Items[v67];
    if ( this )
    {
      ((void (__fastcall *)(EventRewardButtonChangeManager_o *, __int64, _QWORD, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        3,
        0,
        this->klass[1]._1.implementedInterfaces);
      return;
    }
LABEL_99:
    sub_2213CDC(this, *(_QWORD *)&priorityId);
  }
}


void EventRewardButtonChangeManager__EndTutorialRequest(
        EventRewardButtonChangeManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_RequestEndCallBack; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *RequestEndCallBack; // t1

  RequestEndCallBack = this->fields.RequestEndCallBack;
  p_RequestEndCallBack = (MissionNaviTransitionBoardItem_o *)&this->fields.RequestEndCallBack;
  v9 = RequestEndCallBack;
  if ( RequestEndCallBack )
  {
    p_RequestEndCallBack->klass = 0;
    sub_2213A04(p_RequestEndCallBack, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


System_String_o *EventRewardButtonChangeManager__GetReleaseBtnSpriteName(
        EventRewardButtonChangeManager_o *this,
        int32_t eventId,
        int32_t releaseTabPriority,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t ReleaseTabImageId; // w0
  __int64 v9; // x1
  __int64 v10; // x2
  EventRewardButtonChangeManager_c *v11; // x8
  System_String_o *DISABLE_BTN_TXT; // x19
  System_String_o *v13; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596ABF8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventRewardSceneReleaseMaster___);
    sub_2213A60(&EventRewardButtonChangeManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596ABF8 = 1;
  }
  v15 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRewardSceneReleaseMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v7);
  }
  ReleaseTabImageId = EventRewardSceneReleaseMaster__getReleaseTabImageId(
                        (EventRewardSceneReleaseMaster_o *)Instance,
                        eventId,
                        releaseTabPriority,
                        0);
  v11 = EventRewardButtonChangeManager_TypeInfo;
  v15 = ReleaseTabImageId;
  if ( !*(&EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo, v9, v10);
    v11 = EventRewardButtonChangeManager_TypeInfo;
  }
  DISABLE_BTN_TXT = v11->static_fields->DISABLE_BTN_TXT;
  v13 = System_Int32__ToString((int32_t)&v15, 0);
  return System_String__Concat_75651716(DISABLE_BTN_TXT, v13, 0);
}


void EventRewardButtonChangeManager__OnClickDisableCenterButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  void *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v9; // x8
  CommonUI_o *v10; // x19
  System_String_o *closedMessage; // x20
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x8
  System_String_o *v13; // x21
  System_Action_o *_9__35_0; // x22
  Il2CppObject *v15; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_596ABFB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventRewardButtonChangeManager_OnClickDisableCenterButton__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventRewardButtonChangeManager___c__OnClickDisableCenterButton_b__35_0__);
    sub_2213A60(&EventRewardButtonChangeManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596ABFB = 1;
  }
  v3 = Method_EventRewardButtonChangeManager_OnClickDisableCenterButton__;
  if ( (*((_BYTE *)Method_EventRewardButtonChangeManager_OnClickDisableCenterButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventRewardButtonChangeManager_OnClickDisableCenterButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  releaseEntityArray = this->fields.releaseEntityArray;
  if ( !releaseEntityArray )
    goto LABEL_16;
  if ( (releaseEntityArray->max_length & 0xFFFFFFFE) == 0 )
    sub_2213CE4(Instance);
  v9 = releaseEntityArray->m_Items[1];
  if ( !v9 )
    goto LABEL_16;
  v10 = (CommonUI_o *)Instance;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  closedMessage = v9->fields.closedMessage;
  if ( !*(&EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo, v6, v7);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  static_fields = (struct EventRewardButtonChangeManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  _9__35_0 = static_fields->__9__35_0;
  if ( !_9__35_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v6, v7);
      static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__35_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__35_0,
      v15,
      Method_EventRewardButtonChangeManager___c__OnClickDisableCenterButton_b__35_0__,
      0);
    v16 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v16->__9__35_0 = _9__35_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__35_0, (int32_t)_9__35_0, v17, v18, v19, v20, v21, v22);
  }
  if ( !v10 )
LABEL_16:
    sub_2213CDC(Instance, v6);
  CommonUI__OpenNotificationDialog(v10, v13, closedMessage, _9__35_0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
}


void EventRewardButtonChangeManager__OnClickDisableLeftButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  void *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v9; // x8
  CommonUI_o *v10; // x19
  System_String_o *closedMessage; // x20
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x8
  System_String_o *v13; // x21
  System_Action_o *_9__34_0; // x22
  Il2CppObject *v15; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_596ABFA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventRewardButtonChangeManager_OnClickDisableLeftButton__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventRewardButtonChangeManager___c__OnClickDisableLeftButton_b__34_0__);
    sub_2213A60(&EventRewardButtonChangeManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596ABFA = 1;
  }
  v3 = Method_EventRewardButtonChangeManager_OnClickDisableLeftButton__;
  if ( (*((_BYTE *)Method_EventRewardButtonChangeManager_OnClickDisableLeftButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventRewardButtonChangeManager_OnClickDisableLeftButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  releaseEntityArray = this->fields.releaseEntityArray;
  if ( !releaseEntityArray )
    goto LABEL_16;
  if ( !LODWORD(releaseEntityArray->max_length) )
    sub_2213CE4(Instance);
  v9 = releaseEntityArray->m_Items[0];
  if ( !v9 )
    goto LABEL_16;
  v10 = (CommonUI_o *)Instance;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  closedMessage = v9->fields.closedMessage;
  if ( !*(&EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo, v6, v7);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  static_fields = (struct EventRewardButtonChangeManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  _9__34_0 = static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v6, v7);
      static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__34_0,
      v15,
      Method_EventRewardButtonChangeManager___c__OnClickDisableLeftButton_b__34_0__,
      0);
    v16 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v16->__9__34_0 = _9__34_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__34_0, (int32_t)_9__34_0, v17, v18, v19, v20, v21, v22);
  }
  if ( !v10 )
LABEL_16:
    sub_2213CDC(Instance, v6);
  CommonUI__OpenNotificationDialog(v10, v13, closedMessage, _9__34_0, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
}


void EventRewardButtonChangeManager__OnClickDisableRightButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t eventCount; // w8
  void *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v10; // x8
  CommonUI_o *v11; // x19
  System_String_o *closedMessage; // x20
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__36_0; // x22
  System_String_o *v15; // x21
  Il2CppObject *v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w1
  struct EventRewardButtonChangeManager___c_StaticFields *v24; // x0
  MissionNaviTransitionBoardItem_o *p__9__36_0; // x0
  __int64 v26; // x2
  struct EventRewardSceneReleaseEntity_array *v27; // x8
  EventRewardSceneReleaseEntity_o *v28; // x8
  struct EventRewardButtonChangeManager___c_StaticFields *v29; // x8
  Il2CppObject *v30; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v31; // x0

  if ( (byte_596ABFC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventRewardButtonChangeManager_OnClickDisableRightButton__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_0__);
    sub_2213A60(&Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_1__);
    sub_2213A60(&EventRewardButtonChangeManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596ABFC = 1;
  }
  v3 = Method_EventRewardButtonChangeManager_OnClickDisableRightButton__;
  if ( (*((_BYTE *)Method_EventRewardButtonChangeManager_OnClickDisableRightButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventRewardButtonChangeManager_OnClickDisableRightButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0, 0);
  eventCount = this->fields.eventCount;
  if ( eventCount != 3 )
  {
    if ( eventCount != 2 )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    releaseEntityArray = this->fields.releaseEntityArray;
    if ( !releaseEntityArray )
LABEL_29:
      sub_2213CDC(Instance, v7);
    if ( (releaseEntityArray->max_length & 0xFFFFFFFE) != 0 )
    {
      v10 = releaseEntityArray->m_Items[1];
      if ( !v10 )
        goto LABEL_29;
      v11 = (CommonUI_o *)Instance;
      closedMessage = v10->fields.closedMessage;
      Instance = EventRewardButtonChangeManager___c_TypeInfo;
      if ( !*(&EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo, v7, v8);
        Instance = EventRewardButtonChangeManager___c_TypeInfo;
      }
      static_fields = (struct EventRewardButtonChangeManager___c_StaticFields *)*((_QWORD *)Instance + 23);
      _9__36_0 = static_fields->__9__36_0;
      v15 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__36_0 )
      {
        if ( !*((_DWORD *)Instance + 57) )
        {
          j_il2cpp_runtime_class_init_0(Instance, v7, v8);
          static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
        }
        v16 = (Il2CppObject *)static_fields->__9;
        _9__36_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__36_0,
          v16,
          Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_0__,
          0);
        v23 = (int)_9__36_0;
        v24 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
        v24->__9__36_0 = _9__36_0;
        p__9__36_0 = (MissionNaviTransitionBoardItem_o *)&v24->__9__36_0;
LABEL_25:
        sub_2213A04(p__9__36_0, v23, v17, v18, v19, v20, v21, v22);
        goto LABEL_26;
      }
      goto LABEL_26;
    }
LABEL_30:
    sub_2213CE4(Instance);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = this->fields.releaseEntityArray;
  if ( !v27 )
    goto LABEL_29;
  if ( LODWORD(v27->max_length) <= 2 )
    goto LABEL_30;
  v28 = v27->m_Items[2];
  if ( !v28 )
    goto LABEL_29;
  v11 = (CommonUI_o *)Instance;
  closedMessage = v28->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( !*(&EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo, v7, v26);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  v29 = (struct EventRewardButtonChangeManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__36_0 = v29->__9__36_1;
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__36_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v7, v26);
      v29 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)v29->__9;
    _9__36_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__36_0,
      v30,
      Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_1__,
      0);
    v23 = (int)_9__36_0;
    v31 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v31->__9__36_1 = _9__36_0;
    p__9__36_0 = (MissionNaviTransitionBoardItem_o *)&v31->__9__36_1;
    goto LABEL_25;
  }
LABEL_26:
  if ( !v11 )
    goto LABEL_29;
  CommonUI__OpenNotificationDialog(v11, v15, closedMessage, _9__36_0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardButtonChangeManager__SetBtnCollider(
        EventRewardButtonChangeManager_o *this,
        bool isDisp,
        int32_t currentEventSlotIndex,
        const MethodInfo *method)
{
  EventRewardButtonChangeManager_o *v6; // x21
  struct UICommonButton_array *eventBtns; // x8
  il2cpp_array_size_t max_length; // x8
  int v9; // w22
  __int64 v10; // x24
  __int64 i; // x25
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x9
  unsigned __int64 v13; // x8
  __int64 v14; // x10
  struct UICommonButton_array *v15; // x9

  v6 = this;
  if ( (byte_596ABF6 & 1) == 0 )
  {
    this = (EventRewardButtonChangeManager_o *)sub_2213A60(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    byte_596ABF6 = 1;
  }
  eventBtns = v6->fields.eventBtns;
  if ( !eventBtns )
LABEL_22:
    sub_2213CDC(this, isDisp);
  max_length = eventBtns->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    v10 = -(__int64)(unsigned int)max_length;
    for ( i = 4; v10 + i != 4; ++i )
    {
      releaseEntityArray = v6->fields.releaseEntityArray;
      v13 = i - 4;
      if ( releaseEntityArray )
      {
        if ( v13 >= LODWORD(releaseEntityArray->max_length) )
          goto LABEL_23;
        v14 = *((_QWORD *)&releaseEntityArray->obj.klass + i);
        v15 = v6->fields.eventBtns;
        if ( v14 )
        {
          if ( !v15 )
            goto LABEL_22;
          if ( v13 >= LODWORD(v15->max_length) )
            goto LABEL_23;
          this = (EventRewardButtonChangeManager_o *)*((_QWORD *)&v15->obj.klass + i);
          if ( !this )
            goto LABEL_22;
          this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
          if ( !this )
            goto LABEL_22;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
          continue;
        }
      }
      else
      {
        v15 = v6->fields.eventBtns;
      }
      if ( !v15 )
        goto LABEL_22;
      if ( v13 >= LODWORD(v15->max_length) )
LABEL_23:
        sub_2213CE4(this);
      this = (EventRewardButtonChangeManager_o *)*((_QWORD *)&v15->obj.klass + i);
      if ( !this )
        goto LABEL_22;
      this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( !this )
        goto LABEL_22;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v9++ != currentEventSlotIndex && isDisp, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardButtonChangeManager__SetReleaseBeforeTabInfo(
        EventRewardButtonChangeManager_o *this,
        int32_t eventId,
        int32_t tabPriority,
        int32_t eventCount,
        const MethodInfo *method)
{
  UICommonButton_o *gameObject; // x0
  int v10; // w8
  System_String_o **v11; // x8
  struct UICommonButton_array *eventBtns; // x9
  System_String_o *v13; // x22
  struct UICommonButton_array *v14; // x8
  struct UISprite_array *eventBtnImages; // x8
  struct UnityEngine_GameObject_array *backImgObjs; // x8
  struct UnityEngine_GameObject_array *activeImgObjs; // x8
  const MethodInfo *v18; // x3
  struct UISprite_array *btnTxtSprites; // x8
  UISprite_o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  System_String_o *v23; // x21
  struct UICommonButton_array *v24; // x8

  if ( (byte_596ABF9 & 1) == 0 )
  {
    sub_2213A60(&EventRewardButtonChangeManager_TypeInfo);
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_596ABF9 = 1;
  }
  gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
  v10 = *(&EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished + 1);
  if ( eventCount == 3 )
  {
    if ( !v10 )
    {
      j_il2cpp_runtime_class_init_0(
        EventRewardButtonChangeManager_TypeInfo,
        *(_QWORD *)&eventId,
        *(_QWORD *)&tabPriority);
      gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v11 = (System_String_o **)(*(_QWORD *)&gameObject[1].fields.specifyHoverColor.fields.b + 8LL);
  }
  else if ( eventCount == 2 )
  {
    if ( !v10 )
    {
      j_il2cpp_runtime_class_init_0(
        EventRewardButtonChangeManager_TypeInfo,
        *(_QWORD *)&eventId,
        *(_QWORD *)&tabPriority);
      gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v11 = (System_String_o **)(*(_QWORD *)&gameObject[1].fields.specifyHoverColor.fields.b + 24LL);
  }
  else
  {
    if ( !v10 )
    {
      j_il2cpp_runtime_class_init_0(
        EventRewardButtonChangeManager_TypeInfo,
        *(_QWORD *)&eventId,
        *(_QWORD *)&tabPriority);
      gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v11 = (System_String_o **)(*(_QWORD *)&gameObject[1].fields.specifyHoverColor.fields.b + 40LL);
  }
  eventBtns = this->fields.eventBtns;
  if ( !eventBtns )
    goto LABEL_39;
  if ( LODWORD(eventBtns->max_length) <= tabPriority )
    goto LABEL_40;
  gameObject = eventBtns->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_39;
  v13 = *v11;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
  v14 = this->fields.eventBtns;
  if ( !v14 )
    goto LABEL_39;
  if ( LODWORD(v14->max_length) <= tabPriority )
    goto LABEL_40;
  gameObject = v14->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_39;
  gameObject = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_39;
  gameObject = (UICommonButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)gameObject,
                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  eventBtnImages = this->fields.eventBtnImages;
  if ( !eventBtnImages )
    goto LABEL_39;
  if ( LODWORD(eventBtnImages->max_length) <= tabPriority )
    goto LABEL_40;
  gameObject = (UICommonButton_o *)eventBtnImages->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_39;
  UISprite__set_spriteName((UISprite_o *)gameObject, v13, 0);
  backImgObjs = this->fields.backImgObjs;
  if ( !backImgObjs )
    goto LABEL_39;
  if ( LODWORD(backImgObjs->max_length) <= tabPriority )
    goto LABEL_40;
  gameObject = (UICommonButton_o *)backImgObjs->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  activeImgObjs = this->fields.activeImgObjs;
  if ( !activeImgObjs )
    goto LABEL_39;
  if ( LODWORD(activeImgObjs->max_length) <= tabPriority )
    goto LABEL_40;
  gameObject = (UICommonButton_o *)activeImgObjs->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  btnTxtSprites = this->fields.btnTxtSprites;
  if ( !btnTxtSprites )
    goto LABEL_39;
  if ( LODWORD(btnTxtSprites->max_length) <= tabPriority )
    goto LABEL_40;
  v20 = btnTxtSprites->m_Items[tabPriority];
  v23 = EventRewardButtonChangeManager__GetReleaseBtnSpriteName(
          (EventRewardButtonChangeManager_o *)gameObject,
          eventId,
          tabPriority,
          v18);
  if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v21, v22);
  gameObject = (UICommonButton_o *)EventRewardRootComponent__setRewardInfoImg(v20, v23, 0);
  v24 = this->fields.eventBtns;
  if ( !v24 )
LABEL_39:
    sub_2213CDC(gameObject, *(_QWORD *)&eventId);
  if ( LODWORD(v24->max_length) <= tabPriority )
LABEL_40:
    sub_2213CE4(gameObject);
  gameObject = v24->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_39;
  ((void (__fastcall *)(UICommonButton_o *, __int64, _QWORD, const MethodInfo *))gameObject->klass->vtable._14_SetState.methodPtr)(
    gameObject,
    3,
    0,
    gameObject->klass->vtable._14_SetState.method);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardButtonChangeManager__SetReleaseBtnState(
        EventRewardButtonChangeManager_o *this,
        EventRewardSceneReleaseEntity_array *entitys,
        int32_t closedImageId,
        System_Action_o *effectEndCallBack,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *v10; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  v10 = (MissionNaviTransitionBoardItem_o *)this;
  this->fields.releaseEntityArray = entitys;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.releaseEntityArray,
    (int32_t)entitys,
    *(System_String_o **)&closedImageId,
    (System_String_o *)effectEndCallBack,
    (int32_t)method,
    v5,
    v6,
    v7);
  v10->fields._Name_k__BackingField = (struct System_String_o *)effectEndCallBack;
  v10 = (MissionNaviTransitionBoardItem_o *)((char *)v10 + 128);
  HIDWORD(v10[-1].fields._NaviAction_k__BackingField) = closedImageId;
  sub_2213A04(v10, (int32_t)effectEndCallBack, v11, v12, v13, v14, v15, v16);
}


void EventRewardButtonChangeManager__SetReleaseEffect(
        EventRewardButtonChangeManager_o *this,
        int32_t eventId,
        int32_t eventCount,
        int32_t slot,
        System_Action_o *changeCallback,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  EventRewardButtonChangeManager_c *v15; // x0
  int v16; // w8
  System_String_o **p_RELEASE_EFFECT_3TAB_NAME; // x8
  __int64 efffectData; // x0
  struct UnityEngine_GameObject_array *effectObject; // x25
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *Object_object__58532980; // x23
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  Il2CppClass **v30; // x0
  struct UnityEngine_GameObject_array *v31; // x8
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x23
  struct UnityEngine_GameObject_array *v39; // x8
  struct UISprite_array *eventBtnImages; // x8
  UnityEngine_Transform_o *v41; // x21
  struct UnityEngine_GameObject_array *v42; // x8
  UnityEngine_Transform_o *v43; // x21
  struct UnityEngine_GameObject_array *v44; // x8
  UnityEngine_Transform_o *v45; // x19
  const MethodInfo *v46; // x1

  if ( (byte_596ABF7 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&EventRewardButtonChangeManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596ABF7 = 1;
  }
  this->fields.releaseSlot = slot;
  EventRewardButtonChangeManager__SetReleaseBeforeTabInfo(
    this,
    eventId,
    slot,
    eventCount,
    (const MethodInfo *)changeCallback);
  v15 = EventRewardButtonChangeManager_TypeInfo;
  v16 = *(&EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished + 1);
  if ( eventCount == 3 )
  {
    if ( !v16 )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo, v13, v14);
      v15 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_RELEASE_EFFECT_3TAB_NAME = &v15->static_fields->RELEASE_EFFECT_3TAB_NAME;
  }
  else if ( eventCount == 2 )
  {
    if ( !v16 )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo, v13, v14);
      v15 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_RELEASE_EFFECT_3TAB_NAME = &v15->static_fields->RELEASE_EFFECT_2TAB_NAME;
  }
  else
  {
    if ( !v16 )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo, v13, v14);
      v15 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_RELEASE_EFFECT_3TAB_NAME = &v15->static_fields->RELEASE_EFFECT_4TAB_NAME;
  }
  efffectData = (__int64)this->fields.efffectData;
  if ( !efffectData )
    goto LABEL_47;
  effectObject = this->fields.effectObject;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              (AssetData_o *)efffectData,
                              *p_RELEASE_EFFECT_3TAB_NAME,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  efffectData = (__int64)UnityEngine_Object__Instantiate_object_(
                           Object_object__58532980,
                           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectObject )
    goto LABEL_47;
  if ( LODWORD(effectObject->max_length) <= slot )
    goto LABEL_48;
  v29 = efffectData;
  v30 = &effectObject->obj.klass + slot;
  v30[4] = (Il2CppClass *)v29;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), v29, v23, v24, v25, v26, v27, v28);
  v31 = this->fields.effectObject;
  if ( !v31 )
    goto LABEL_47;
  if ( LODWORD(v31->max_length) <= slot )
    goto LABEL_48;
  efffectData = (__int64)v31->m_Items[slot];
  if ( !efffectData )
    goto LABEL_47;
  efffectData = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)efffectData,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
  if ( !efffectData )
    goto LABEL_47;
  v38 = efffectData;
  if ( changeCallback )
  {
    *(_QWORD *)(efffectData + 208) = changeCallback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(efffectData + 208),
      (int32_t)changeCallback,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( endCallback )
  {
    *(_QWORD *)(v38 + 216) = endCallback;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 216), (int32_t)endCallback, v32, v33, v34, v35, v36, v37);
  }
  v39 = this->fields.effectObject;
  if ( !v39 )
LABEL_47:
    sub_2213CDC(efffectData, v13);
  if ( LODWORD(v39->max_length) <= slot )
    goto LABEL_48;
  efffectData = (__int64)v39->m_Items[slot];
  if ( !efffectData )
    goto LABEL_47;
  efffectData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)efffectData, 0);
  eventBtnImages = this->fields.eventBtnImages;
  if ( !eventBtnImages )
    goto LABEL_47;
  if ( LODWORD(eventBtnImages->max_length) <= slot )
    goto LABEL_48;
  v41 = (UnityEngine_Transform_o *)efffectData;
  efffectData = (__int64)eventBtnImages->m_Items[slot];
  if ( !efffectData )
    goto LABEL_47;
  efffectData = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)efffectData, 0);
  if ( !v41 )
    goto LABEL_47;
  UnityEngine_Transform__set_parent(v41, (UnityEngine_Transform_o *)efffectData, 0);
  v42 = this->fields.effectObject;
  if ( !v42 )
    goto LABEL_47;
  if ( LODWORD(v42->max_length) <= slot )
LABEL_48:
    sub_2213CE4(efffectData);
  efffectData = (__int64)v42->m_Items[slot];
  if ( !efffectData )
    goto LABEL_47;
  efffectData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)efffectData, 0);
  v43 = (UnityEngine_Transform_o *)efffectData;
  if ( !byte_5969AE0 )
  {
    efffectData = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v43 )
    goto LABEL_47;
  UnityEngine_Transform__set_localPosition(v43, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  v44 = this->fields.effectObject;
  if ( !v44 )
    goto LABEL_47;
  if ( LODWORD(v44->max_length) <= slot )
    goto LABEL_48;
  efffectData = (__int64)v44->m_Items[slot];
  if ( !efffectData )
    goto LABEL_47;
  efffectData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)efffectData, 0);
  v45 = (UnityEngine_Transform_o *)efffectData;
  if ( !byte_5969AE5 )
  {
    efffectData = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v45 )
    goto LABEL_47;
  UnityEngine_Transform__set_localScale(v45, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  TabOpenEffectComponent__PlayAnimation((TabOpenEffectComponent_o *)v38, v46);
}


void EventRewardButtonChangeManager__SetReleaseEffectData(
        EventRewardButtonChangeManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( data )
  {
    this->fields.efffectData = data;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.efffectData,
      (int32_t)data,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void EventRewardButtonChangeManager__StartTutorialRequest(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  unsigned int releaseSlot; // w22
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1
  int32_t v9; // w1

  if ( (byte_596ABFD & 1) == 0 )
  {
    sub_2213A60(&Method_EventRewardButtonChangeManager_EndTutorialRequest__);
    sub_2213A60(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596ABFD = 1;
  }
  releaseSlot = this->fields.releaseSlot;
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_EventRewardButtonChangeManager_EndTutorialRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  Request_object = NetworkManager__getRequest_object_(
                     v4,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  if ( !Request_object )
    sub_2213CDC(0, v8);
  if ( releaseSlot >= 3 )
    v9 = -1;
  else
    v9 = releaseSlot + 25;
  TutorialEventSetRequest__beginRequest((TutorialEventSetRequest_o *)Request_object, v9, this->fields.eventId, 0);
}


void EventRewardButtonChangeManager__TabInitialize(
        EventRewardButtonChangeManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo_47A29F8 *v5; // x0
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  struct UnityEngine_GameObject_array *tabColliders; // x8
  DataManager_o *v9; // x20
  __int64 v10; // x22
  int max_length; // w9
  struct UnityEngine_GameObject_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596ABF4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596ABF4 = 1;
  }
  v5 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v5);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)EventRewardSceneMaster__GetEntityList((EventRewardSceneMaster_o *)Instance, eventId, 0);
  tabColliders = this->fields.tabColliders;
  if ( !tabColliders )
    goto LABEL_12;
  v9 = Instance;
  v10 = 0;
  while ( 1 )
  {
    max_length = tabColliders->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
      sub_2213CE4(Instance);
    Instance = (DataManager_o *)tabColliders->m_Items[v10];
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
        tabColliders = this->fields.tabColliders;
        ++v10;
        if ( tabColliders )
          continue;
      }
    }
    goto LABEL_12;
  }
  if ( !v9 )
LABEL_12:
    sub_2213CDC(Instance, v7);
  v12 = (struct UnityEngine_GameObject_array *)sub_2213B20(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 LODWORD(v9->fields.m_CancellationTokenSource));
  this->fields.effectObject = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.effectObject,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void EventRewardButtonChangeManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596ABFF & 1) == 0 )
  {
    sub_2213A60(&EventRewardButtonChangeManager___c_TypeInfo);
    byte_596ABFF = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventRewardButtonChangeManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRewardButtonChangeManager___c_TypeInfo->static_fields->__9 = (struct EventRewardButtonChangeManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventRewardButtonChangeManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventRewardButtonChangeManager___c___ctor(EventRewardButtonChangeManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventRewardButtonChangeManager___c___OnClickDisableCenterButton_b__35_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596AC01 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AC01 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void EventRewardButtonChangeManager___c___OnClickDisableLeftButton_b__34_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596AC00 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AC00 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void EventRewardButtonChangeManager___c___OnClickDisableRightButton_b__36_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596AC02 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AC02 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void EventRewardButtonChangeManager___c___OnClickDisableRightButton_b__36_1(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596AC03 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AC03 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}