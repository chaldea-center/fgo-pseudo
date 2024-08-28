void __fastcall EventRewardButtonChangeManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w1
  struct EventRewardButtonChangeManager_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  struct EventRewardButtonChangeManager_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  struct EventRewardButtonChangeManager_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  struct EventRewardButtonChangeManager_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  struct EventRewardButtonChangeManager_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  struct EventRewardButtonChangeManager_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  struct EventRewardButtonChangeManager_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w1
  struct EventRewardButtonChangeManager_StaticFields *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  struct EventRewardButtonChangeManager_StaticFields *v46; // x0
  int32_t v47; // w1
  int32_t v48; // w2
  int32_t v49; // w3

  if ( (byte_4A23C9E & 1) == 0 )
  {
    sub_1B715CC(&EventRewardButtonChangeManager_TypeInfo, v1);
    sub_1B715CC(&StringLiteral_17445/*"btn_bg_on_1"*/, v4);
    sub_1B715CC(&StringLiteral_17446/*"btn_bg_on_2"*/, v5);
    sub_1B715CC(&StringLiteral_17447/*"btn_bg_on_4"*/, v6);
    sub_1B715CC(&StringLiteral_18744/*"ef_2tab_open"*/, v7);
    sub_1B715CC(&StringLiteral_17442/*"btn_bg_off_4"*/, v8);
    sub_1B715CC(&StringLiteral_17440/*"btn_bg_off_1"*/, v9);
    sub_1B715CC(&StringLiteral_18746/*"ef_4tab_open"*/, v10);
    sub_1B715CC(&StringLiteral_18745/*"ef_3tab_open"*/, v11);
    sub_1B715CC(&StringLiteral_17441/*"btn_bg_off_2"*/, v12);
    sub_1B715CC(&StringLiteral_17455/*"btn_disable_txt_"*/, v13);
    byte_4A23C9E = 1;
  }
  EventRewardButtonChangeManager_TypeInfo->static_fields->BTN_NAME_TYPE3_ON = (struct System_String_o *)StringLiteral_17445/*"btn_bg_on_1"*/;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)EventRewardButtonChangeManager_TypeInfo->static_fields,
    StringLiteral_17445/*"btn_bg_on_1"*/,
    v2,
    v3);
  v14 = StringLiteral_17440/*"btn_bg_off_1"*/;
  static_fields = EventRewardButtonChangeManager_TypeInfo->static_fields;
  static_fields->BTN_NAME_TYPE3_OFF = (struct System_String_o *)StringLiteral_17440/*"btn_bg_off_1"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->BTN_NAME_TYPE3_OFF, v14, v16, v17);
  v18 = StringLiteral_17446/*"btn_bg_on_2"*/;
  v19 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v19->BTN_NAME_TYPE2_ON = (struct System_String_o *)StringLiteral_17446/*"btn_bg_on_2"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v19->BTN_NAME_TYPE2_ON, v18, v20, v21);
  v22 = StringLiteral_17441/*"btn_bg_off_2"*/;
  v23 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v23->BTN_NAME_TYPE2_OFF = (struct System_String_o *)StringLiteral_17441/*"btn_bg_off_2"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v23->BTN_NAME_TYPE2_OFF, v22, v24, v25);
  v26 = StringLiteral_17447/*"btn_bg_on_4"*/;
  v27 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v27->BTN_NAME_TYPE4_ON = (struct System_String_o *)StringLiteral_17447/*"btn_bg_on_4"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v27->BTN_NAME_TYPE4_ON, v26, v28, v29);
  v30 = StringLiteral_17442/*"btn_bg_off_4"*/;
  v31 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v31->BTN_NAME_TYPE4_OFF = (struct System_String_o *)StringLiteral_17442/*"btn_bg_off_4"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v31->BTN_NAME_TYPE4_OFF, v30, v32, v33);
  v34 = StringLiteral_18746/*"ef_4tab_open"*/;
  v35 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v35->RELEASE_EFFECT_4TAB_NAME = (struct System_String_o *)StringLiteral_18746/*"ef_4tab_open"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v35->RELEASE_EFFECT_4TAB_NAME, v34, v36, v37);
  v38 = StringLiteral_18745/*"ef_3tab_open"*/;
  v39 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v39->RELEASE_EFFECT_3TAB_NAME = (struct System_String_o *)StringLiteral_18745/*"ef_3tab_open"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v39->RELEASE_EFFECT_3TAB_NAME, v38, v40, v41);
  v42 = StringLiteral_18744/*"ef_2tab_open"*/;
  v43 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v43->RELEASE_EFFECT_2TAB_NAME = (struct System_String_o *)StringLiteral_18744/*"ef_2tab_open"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v43->RELEASE_EFFECT_2TAB_NAME, v42, v44, v45);
  v46 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v47 = StringLiteral_17455/*"btn_disable_txt_"*/;
  v46->DISABLE_BTN_TXT = (struct System_String_o *)StringLiteral_17455/*"btn_disable_txt_"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v46->DISABLE_BTN_TXT, v47, v48, v49);
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
  EventRewardButtonChangeManager_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  il2cpp_array_size_t max_length; // w19
  struct UnityEngine_GameObject_array *backImgObjs; // x8
  System_String_o **p_max_length; // x9
  struct UnityEngine_GameObject_array *p_bounds; // x8
  System_String_o *v21; // x24
  Il2CppClass *klass; // x29
  unsigned __int64 v23; // x21
  int v24; // w19
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  struct UICommonButton_array *eventBtns; // x8
  struct UICommonButton_array *v27; // x8
  struct UISprite_array *eventBtnImages; // x8
  struct UnityEngine_GameObject_array *v29; // x8
  struct UnityEngine_GameObject_array *activeImgObjs; // x8
  struct UISprite_array *btnTxtSprites; // x8
  UISprite_o *v32; // x25
  struct EventRewardSceneReleaseEntity_array *v33; // x8
  EventRewardSceneReleaseEntity_o *v34; // x8
  System_String_o *v35; // x26
  System_String_o *v36; // x0
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
  System_String_o *v54; // x26
  struct UICommonButton_array *v55; // x8
  struct UISprite_array *v56; // x8
  EventRewardButtonChangeManager_c *v57; // x0
  UISprite_o *v58; // x21
  System_String_o *DISABLE_BTN_TXT; // x22
  System_String_o *v60; // x0
  System_String_o *v61; // x22
  struct UICommonButton_array *v62; // x8
  int32_t v63; // [xsp+0h] [xbp-70h]
  bool v64; // [xsp+8h] [xbp-68h]
  int32_t v65; // [xsp+Ch] [xbp-64h] BYREF

  v11 = this;
  v65 = currentEventId;
  if ( (byte_4A23C95 & 1) == 0 )
  {
    sub_1B715CC(&EventRewardButtonChangeManager_TypeInfo, *(_QWORD *)&priorityId);
    sub_1B715CC(&EventRewardRootComponent_TypeInfo, v12);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v13);
    sub_1B715CC(&StringLiteral_17542/*"btn_txt_on_"*/, v14);
    sub_1B715CC(&StringLiteral_16073/*"_"*/, v15);
    this = (EventRewardButtonChangeManager_o *)sub_1B715CC(&StringLiteral_17536/*"btn_txt_off_"*/, v16);
    byte_4A23C95 = 1;
  }
  if ( !eventRewardSceneEnt )
    goto LABEL_97;
  max_length = eventRewardSceneEnt->max_length;
  v63 = openSlot;
  v11->fields.eventCount = max_length;
  v64 = openedTab;
  if ( max_length == 2 )
  {
    this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    backImgObjs = this[1].fields.backImgObjs;
    p_max_length = (System_String_o **)&backImgObjs->max_length;
    p_bounds = (struct UnityEngine_GameObject_array *)&backImgObjs->bounds;
  }
  else
  {
    this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    p_bounds = this[1].fields.backImgObjs;
    if ( max_length == 3 )
    {
      p_max_length = (System_String_o **)&p_bounds->obj.monitor;
    }
    else
    {
      p_max_length = (System_String_o **)&p_bounds->m_Items[1];
      p_bounds = (struct UnityEngine_GameObject_array *)((char *)p_bounds + 32);
    }
  }
  if ( v11->fields.eventCount >= 1 )
  {
    v21 = *p_max_length;
    klass = p_bounds->obj.klass;
    v23 = 0LL;
    v24 = 0;
    do
    {
      releaseEntityArray = v11->fields.releaseEntityArray;
      if ( !releaseEntityArray )
        goto LABEL_51;
      if ( v23 >= releaseEntityArray->max_length )
        goto LABEL_98;
      if ( releaseEntityArray->m_Items[v23] )
      {
        eventBtns = v11->fields.eventBtns;
        if ( !eventBtns )
          goto LABEL_97;
        if ( v23 >= eventBtns->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)eventBtns->m_Items[v23];
        if ( !this )
          goto LABEL_97;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        v27 = v11->fields.eventBtns;
        if ( !v27 )
          goto LABEL_97;
        if ( v23 >= v27->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v27->m_Items[v23];
        if ( !this )
          goto LABEL_97;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_97;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( !this )
          goto LABEL_97;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
        eventBtnImages = v11->fields.eventBtnImages;
        if ( !eventBtnImages )
          goto LABEL_97;
        if ( v23 >= eventBtnImages->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)eventBtnImages->m_Items[v23];
        if ( !this )
          goto LABEL_97;
        UISprite__set_spriteName((UISprite_o *)this, v21, 0LL);
        v29 = v11->fields.backImgObjs;
        if ( !v29 )
          goto LABEL_97;
        if ( v23 >= v29->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v29->m_Items[v23];
        if ( !this )
          goto LABEL_97;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        activeImgObjs = v11->fields.activeImgObjs;
        if ( !activeImgObjs )
          goto LABEL_97;
        if ( v23 >= activeImgObjs->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)activeImgObjs->m_Items[v23];
        if ( !this )
          goto LABEL_97;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        btnTxtSprites = v11->fields.btnTxtSprites;
        if ( !btnTxtSprites )
          goto LABEL_97;
        if ( v23 >= btnTxtSprites->max_length )
          goto LABEL_98;
        v32 = btnTxtSprites->m_Items[v23];
        this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
        if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
          this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
        }
        v33 = v11->fields.releaseEntityArray;
        if ( !v33 )
          goto LABEL_97;
        if ( v23 >= v33->max_length )
          goto LABEL_98;
        v34 = v33->m_Items[v23];
        if ( !v34 )
          goto LABEL_97;
        v35 = (System_String_o *)this[1].fields.backImgObjs->m_Items[5];
        v36 = System_Int32__ToString((int)v34 + 36, 0LL);
        v37 = System_String__Concat_61505504(v35, v36, 0LL);
        if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v32, v37, 0LL);
        v38 = v11->fields.eventBtns;
        if ( !v38 )
          goto LABEL_97;
        if ( v23 >= v38->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v38->m_Items[v23];
        if ( !this )
          goto LABEL_97;
        this = (EventRewardButtonChangeManager_o *)((__int64 (__fastcall *)(EventRewardButtonChangeManager_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                                     this,
                                                     3LL,
                                                     0LL,
                                                     this->klass[1]._1.interfaceOffsets);
        tabColliders = v11->fields.tabColliders;
        if ( !tabColliders )
          goto LABEL_97;
        if ( v23 >= tabColliders->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)tabColliders->m_Items[v23];
        if ( !this )
          goto LABEL_97;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      }
      else
      {
LABEL_51:
        v40 = v11->fields.eventBtns;
        if ( !v40 )
          goto LABEL_97;
        if ( v23 >= v40->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v40->m_Items[v23];
        if ( !this )
          goto LABEL_97;
        v41 = v24 != priorityId;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v24 != priorityId, 0LL);
        v42 = v11->fields.eventBtns;
        if ( !v42 )
          goto LABEL_97;
        if ( v23 >= v42->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v42->m_Items[v23];
        if ( !this )
          goto LABEL_97;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_97;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( !this )
          goto LABEL_97;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v41, 0LL);
        v43 = v11->fields.eventBtnImages;
        if ( !v43 )
          goto LABEL_97;
        if ( v23 >= v43->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v43->m_Items[v23];
        if ( !this )
          goto LABEL_97;
        v44 = v24 == priorityId ? (System_String_o *)klass : v21;
        UISprite__set_spriteName((UISprite_o *)this, v44, 0LL);
        v45 = v11->fields.backImgObjs;
        if ( !v45 )
          goto LABEL_97;
        if ( v23 >= v45->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v45->m_Items[v23];
        if ( !this )
          goto LABEL_97;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v41, 0LL);
        v46 = v11->fields.activeImgObjs;
        if ( !v46 )
          goto LABEL_97;
        if ( v23 >= v46->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v46->m_Items[v23];
        if ( !this )
          goto LABEL_97;
        v47 = (System_String_o **)(v24 == priorityId ? &StringLiteral_17542/*"btn_txt_on_"*/ : &StringLiteral_17536/*"btn_txt_off_"*/);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v24 == priorityId, 0LL);
        v48 = v11->fields.btnTxtSprites;
        if ( !v48 )
          goto LABEL_97;
        if ( v23 >= v48->max_length )
          goto LABEL_98;
        v49 = *v47;
        v50 = v48->m_Items[v23];
        this = (EventRewardButtonChangeManager_o *)System_Int32__ToString((int32_t)&v65, 0LL);
        if ( v23 >= eventRewardSceneEnt->max_length )
          goto LABEL_98;
        v51 = eventRewardSceneEnt->m_Items[v23];
        if ( !v51 )
          goto LABEL_97;
        v52 = this;
        v53 = System_Int32__ToString((int)v51 + 20, 0LL);
        v54 = System_String__Concat_61518768(
                v49,
                (System_String_o *)v52,
                (System_String_o *)StringLiteral_16073/*"_"*/,
                v53,
                0LL);
        if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v50, v54, 0LL);
        v55 = v11->fields.eventBtns;
        if ( !v55 )
          goto LABEL_97;
        if ( v23 >= v55->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v55->m_Items[v23];
        if ( !this )
          goto LABEL_97;
        this = (EventRewardButtonChangeManager_o *)((__int64 (__fastcall *)(EventRewardButtonChangeManager_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                                     this,
                                                     0LL,
                                                     0LL,
                                                     this->klass[1]._1.interfaceOffsets);
        ++v24;
      }
      ++v23;
    }
    while ( (__int64)v23 < v11->fields.eventCount );
  }
  if ( v64 )
  {
    v56 = v11->fields.btnTxtSprites;
    if ( !v56 )
      goto LABEL_97;
    if ( v56->max_length <= v63 )
      goto LABEL_98;
    v57 = EventRewardButtonChangeManager_TypeInfo;
    v58 = v56->m_Items[v63];
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v57 = EventRewardButtonChangeManager_TypeInfo;
    }
    DISABLE_BTN_TXT = v57->static_fields->DISABLE_BTN_TXT;
    v60 = System_Int32__ToString((int)v11 + 116, 0LL);
    v61 = System_String__Concat_61505504(DISABLE_BTN_TXT, v60, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v58, v61, 0LL);
    v62 = v11->fields.eventBtns;
    if ( !v62 )
      goto LABEL_97;
    if ( v62->max_length <= v63 )
LABEL_98:
      sub_1B71830(this, *(_QWORD *)&priorityId);
    this = (EventRewardButtonChangeManager_o *)v62->m_Items[v63];
    if ( this )
    {
      ((void (__fastcall *)(EventRewardButtonChangeManager_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
        this,
        3LL,
        0LL,
        this->klass[1]._1.interfaceOffsets);
      return;
    }
LABEL_97:
    sub_1B71828(this, *(_QWORD *)&priorityId);
  }
}


void __fastcall EventRewardButtonChangeManager__EndTutorialRequest(
        EventRewardButtonChangeManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_RequestEndCallBack; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *RequestEndCallBack; // t1

  RequestEndCallBack = this->fields.RequestEndCallBack;
  p_RequestEndCallBack = (ServantStatusBattleListViewItem_o *)&this->fields.RequestEndCallBack;
  v5 = RequestEndCallBack;
  if ( RequestEndCallBack )
  {
    p_RequestEndCallBack->klass = 0LL;
    sub_1B71570(p_RequestEndCallBack, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
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
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t ReleaseTabImageId; // w0
  EventRewardButtonChangeManager_c *v11; // x8
  System_String_o *DISABLE_BTN_TXT; // x19
  System_String_o *v13; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A23C98 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_EventRewardSceneReleaseMaster___, *(_QWORD *)&eventId);
    sub_1B715CC(&EventRewardButtonChangeManager_TypeInfo, v6);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A23C98 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EventRewardSceneReleaseMaster___)) == 0LL )
  {
    sub_1B71828(Instance, v9);
  }
  ReleaseTabImageId = EventRewardSceneReleaseMaster__getReleaseTabImageId(
                        (EventRewardSceneReleaseMaster_o *)Instance,
                        eventId,
                        releaseTabPriority,
                        0LL);
  v11 = EventRewardButtonChangeManager_TypeInfo;
  v15 = ReleaseTabImageId;
  if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
    v11 = EventRewardButtonChangeManager_TypeInfo;
  }
  DISABLE_BTN_TXT = v11->static_fields->DISABLE_BTN_TXT;
  v13 = System_Int32__ToString((int32_t)&v15, 0LL);
  return System_String__Concat_61505504(DISABLE_BTN_TXT, v13, 0LL);
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
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  void *Instance; // x0
  __int64 v11; // x1
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v13; // x8
  CommonUI_o *v14; // x19
  System_String_o *closedMessage; // x20
  System_String_o *v16; // x21
  System_Action_o *v17; // x22
  Il2CppObject *v18; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A23C9B & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_EventRewardButtonChangeManager_OnClickDisableCenterButton__, v3);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B715CC(&Method_EventRewardButtonChangeManager___c__OnClickDisableCenterButton_b__35_0__, v5);
    sub_1B715CC(&EventRewardButtonChangeManager___c_TypeInfo, v6);
    sub_1B715CC(&StringLiteral_1/*""*/, v7);
    byte_4A23C9B = 1;
  }
  v8 = Method_EventRewardButtonChangeManager_OnClickDisableCenterButton__;
  if ( (*((_BYTE *)Method_EventRewardButtonChangeManager_OnClickDisableCenterButton__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B715E4(Method_EventRewardButtonChangeManager_OnClickDisableCenterButton__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B715B0(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  releaseEntityArray = this->fields.releaseEntityArray;
  if ( !releaseEntityArray )
    goto LABEL_16;
  if ( releaseEntityArray->max_length <= 1 )
    sub_1B71830(Instance, v11);
  v13 = releaseEntityArray->m_Items[1];
  if ( !v13 )
    goto LABEL_16;
  v14 = (CommonUI_o *)Instance;
  closedMessage = v13->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  v16 = (System_String_o *)StringLiteral_1/*""*/;
  v17 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v17 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventRewardButtonChangeManager___c_TypeInfo;
    }
    v18 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v17 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(v17, v18, Method_EventRewardButtonChangeManager___c__OnClickDisableCenterButton_b__35_0__, 0LL);
    static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    static_fields->__9__35_0 = v17;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__35_0, (int32_t)v17, v20, v21);
  }
  if ( !v14 )
LABEL_16:
    sub_1B71828(Instance, v11);
  CommonUI__OpenNotificationDialog(v14, v16, closedMessage, v17, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
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
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  void *Instance; // x0
  __int64 v11; // x1
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v13; // x8
  CommonUI_o *v14; // x19
  System_String_o *closedMessage; // x20
  System_String_o *v16; // x21
  System_Action_o *v17; // x22
  Il2CppObject *v18; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A23C9A & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_EventRewardButtonChangeManager_OnClickDisableLeftButton__, v3);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B715CC(&Method_EventRewardButtonChangeManager___c__OnClickDisableLeftButton_b__34_0__, v5);
    sub_1B715CC(&EventRewardButtonChangeManager___c_TypeInfo, v6);
    sub_1B715CC(&StringLiteral_1/*""*/, v7);
    byte_4A23C9A = 1;
  }
  v8 = Method_EventRewardButtonChangeManager_OnClickDisableLeftButton__;
  if ( (*((_BYTE *)Method_EventRewardButtonChangeManager_OnClickDisableLeftButton__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B715E4(Method_EventRewardButtonChangeManager_OnClickDisableLeftButton__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B715B0(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  releaseEntityArray = this->fields.releaseEntityArray;
  if ( !releaseEntityArray )
    goto LABEL_16;
  if ( !releaseEntityArray->max_length )
    sub_1B71830(Instance, v11);
  v13 = releaseEntityArray->m_Items[0];
  if ( !v13 )
    goto LABEL_16;
  v14 = (CommonUI_o *)Instance;
  closedMessage = v13->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  v16 = (System_String_o *)StringLiteral_1/*""*/;
  v17 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v17 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventRewardButtonChangeManager___c_TypeInfo;
    }
    v18 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v17 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(v17, v18, Method_EventRewardButtonChangeManager___c__OnClickDisableLeftButton_b__34_0__, 0LL);
    static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = v17;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)v17, v20, v21);
  }
  if ( !v14 )
LABEL_16:
    sub_1B71828(Instance, v11);
  CommonUI__OpenNotificationDialog(v14, v16, closedMessage, v17, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
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
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  int32_t eventCount; // w8
  void *Instance; // x0
  __int64 v13; // x1
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v15; // x8
  CommonUI_o *v16; // x19
  System_String_o *closedMessage; // x20
  System_Action_o *v18; // x22
  System_String_o *v19; // x21
  Il2CppObject *v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x0
  ServantStatusBattleListViewItem_o *p__9__36_0; // x0
  struct EventRewardSceneReleaseEntity_array *v26; // x8
  EventRewardSceneReleaseEntity_o *v27; // x8
  Il2CppObject *v28; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v29; // x0

  if ( (byte_4A23C9C & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_EventRewardButtonChangeManager_OnClickDisableRightButton__, v3);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B715CC(&Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_0__, v5);
    sub_1B715CC(&Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_1__, v6);
    sub_1B715CC(&EventRewardButtonChangeManager___c_TypeInfo, v7);
    sub_1B715CC(&StringLiteral_1/*""*/, v8);
    byte_4A23C9C = 1;
  }
  v9 = Method_EventRewardButtonChangeManager_OnClickDisableRightButton__;
  if ( (*((_BYTE *)Method_EventRewardButtonChangeManager_OnClickDisableRightButton__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B715E4(Method_EventRewardButtonChangeManager_OnClickDisableRightButton__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B715B0(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0LL);
  eventCount = this->fields.eventCount;
  if ( eventCount != 3 )
  {
    if ( eventCount != 2 )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    releaseEntityArray = this->fields.releaseEntityArray;
    if ( !releaseEntityArray )
LABEL_29:
      sub_1B71828(Instance, v13);
    if ( releaseEntityArray->max_length > 1 )
    {
      v15 = releaseEntityArray->m_Items[1];
      if ( !v15 )
        goto LABEL_29;
      v16 = (CommonUI_o *)Instance;
      closedMessage = v15->fields.closedMessage;
      Instance = EventRewardButtonChangeManager___c_TypeInfo;
      if ( !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
        Instance = EventRewardButtonChangeManager___c_TypeInfo;
      }
      v18 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 24LL);
      v19 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v18 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = EventRewardButtonChangeManager___c_TypeInfo;
        }
        v20 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v18 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
        System_Action___ctor(
          v18,
          v20,
          Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_0__,
          0LL);
        v23 = (int)v18;
        static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
        static_fields->__9__36_0 = v18;
        p__9__36_0 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0;
LABEL_25:
        sub_1B71570(p__9__36_0, v23, v21, v22);
        goto LABEL_26;
      }
      goto LABEL_26;
    }
LABEL_30:
    sub_1B71830(Instance, v13);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = this->fields.releaseEntityArray;
  if ( !v26 )
    goto LABEL_29;
  if ( v26->max_length <= 2 )
    goto LABEL_30;
  v27 = v26->m_Items[2];
  if ( !v27 )
    goto LABEL_29;
  v16 = (CommonUI_o *)Instance;
  closedMessage = v27->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  v18 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 32LL);
  v19 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !v18 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventRewardButtonChangeManager___c_TypeInfo;
    }
    v28 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v18 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(v18, v28, Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_1__, 0LL);
    v23 = (int)v18;
    v29 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v29->__9__36_1 = v18;
    p__9__36_0 = (ServantStatusBattleListViewItem_o *)&v29->__9__36_1;
    goto LABEL_25;
  }
LABEL_26:
  if ( !v16 )
    goto LABEL_29;
  CommonUI__OpenNotificationDialog(v16, v19, closedMessage, v18, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
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
  __int64 v10; // x24
  __int64 i; // x25
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x9
  unsigned __int64 v13; // x8
  struct UICommonButton_array *v14; // x9
  struct UICommonButton_array *v15; // x9

  v6 = this;
  if ( (byte_4A23C96 & 1) == 0 )
  {
    this = (EventRewardButtonChangeManager_o *)sub_1B715CC(
                                                 &Method_UnityEngine_Component_GetComponent_BoxCollider___,
                                                 isDisp);
    byte_4A23C96 = 1;
  }
  eventBtns = v6->fields.eventBtns;
  if ( !eventBtns )
LABEL_21:
    sub_1B71828(this, isDisp);
  v8 = *(_QWORD *)&eventBtns->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0;
    v10 = -(__int64)(unsigned int)v8;
    for ( i = 4LL; v10 + i != 4; ++i )
    {
      releaseEntityArray = v6->fields.releaseEntityArray;
      v13 = i - 4;
      if ( !releaseEntityArray )
        goto LABEL_14;
      if ( v13 >= releaseEntityArray->max_length )
        goto LABEL_22;
      if ( *((_QWORD *)&releaseEntityArray->obj.klass + i) )
      {
        v14 = v6->fields.eventBtns;
        if ( !v14 )
          goto LABEL_21;
        if ( v13 >= v14->max_length )
          goto LABEL_22;
        this = (EventRewardButtonChangeManager_o *)*((_QWORD *)&v14->obj.klass + i);
        if ( !this )
          goto LABEL_21;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
        if ( !this )
          goto LABEL_21;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
      }
      else
      {
LABEL_14:
        v15 = v6->fields.eventBtns;
        if ( !v15 )
          goto LABEL_21;
        if ( v13 >= v15->max_length )
LABEL_22:
          sub_1B71830(this, isDisp);
        this = (EventRewardButtonChangeManager_o *)*((_QWORD *)&v15->obj.klass + i);
        if ( !this )
          goto LABEL_21;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
        if ( !this )
          goto LABEL_21;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v9++ != currentEventSlotIndex && isDisp, 0LL);
      }
    }
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
  UICommonButton_o *gameObject; // x0
  __int64 v12; // x9
  struct UICommonButton_array *eventBtns; // x8
  UnityEngine_Behaviour_o *v14; // x8
  System_String_o *v15; // x22
  struct UICommonButton_array *v16; // x8
  struct UISprite_array *eventBtnImages; // x8
  struct UnityEngine_GameObject_array *backImgObjs; // x8
  struct UnityEngine_GameObject_array *activeImgObjs; // x8
  const MethodInfo *v20; // x3
  struct UISprite_array *btnTxtSprites; // x8
  UISprite_o *v22; // x22
  System_String_o *v23; // x21
  struct UICommonButton_array *v24; // x8

  if ( (byte_4A23C99 & 1) == 0 )
  {
    sub_1B715CC(&EventRewardButtonChangeManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B715CC(&EventRewardRootComponent_TypeInfo, v9);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v10);
    byte_4A23C99 = 1;
  }
  if ( eventCount == 3 )
  {
    gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v12 = 8LL;
  }
  else if ( eventCount == 2 )
  {
    gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v12 = 24LL;
  }
  else
  {
    gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v12 = 40LL;
  }
  eventBtns = this->fields.eventBtns;
  if ( !eventBtns )
    goto LABEL_39;
  if ( eventBtns->max_length <= tabPriority )
    goto LABEL_40;
  v14 = (UnityEngine_Behaviour_o *)eventBtns->m_Items[tabPriority];
  if ( !v14 )
    goto LABEL_39;
  v15 = *(System_String_o **)(*(_QWORD *)&gameObject[1].fields.specifyHoverColor.fields.b + v12);
  UnityEngine_Behaviour__set_enabled(v14, 0, 0LL);
  v16 = this->fields.eventBtns;
  if ( !v16 )
    goto LABEL_39;
  if ( v16->max_length <= tabPriority )
    goto LABEL_40;
  gameObject = v16->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_39;
  gameObject = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  gameObject = (UICommonButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)gameObject,
                                     (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  eventBtnImages = this->fields.eventBtnImages;
  if ( !eventBtnImages )
    goto LABEL_39;
  if ( eventBtnImages->max_length <= tabPriority )
    goto LABEL_40;
  gameObject = (UICommonButton_o *)eventBtnImages->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_39;
  UISprite__set_spriteName((UISprite_o *)gameObject, v15, 0LL);
  backImgObjs = this->fields.backImgObjs;
  if ( !backImgObjs )
    goto LABEL_39;
  if ( backImgObjs->max_length <= tabPriority )
    goto LABEL_40;
  gameObject = (UICommonButton_o *)backImgObjs->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  activeImgObjs = this->fields.activeImgObjs;
  if ( !activeImgObjs )
    goto LABEL_39;
  if ( activeImgObjs->max_length <= tabPriority )
    goto LABEL_40;
  gameObject = (UICommonButton_o *)activeImgObjs->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  btnTxtSprites = this->fields.btnTxtSprites;
  if ( !btnTxtSprites )
    goto LABEL_39;
  if ( btnTxtSprites->max_length <= tabPriority )
    goto LABEL_40;
  v22 = btnTxtSprites->m_Items[tabPriority];
  v23 = EventRewardButtonChangeManager__GetReleaseBtnSpriteName(
          (EventRewardButtonChangeManager_o *)gameObject,
          eventId,
          tabPriority,
          v20);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  gameObject = (UICommonButton_o *)EventRewardRootComponent__setRewardInfoImg(v22, v23, 0LL);
  v24 = this->fields.eventBtns;
  if ( !v24 )
LABEL_39:
    sub_1B71828(gameObject, *(_QWORD *)&eventId);
  if ( v24->max_length <= tabPriority )
LABEL_40:
    sub_1B71830(gameObject, *(_QWORD *)&eventId);
  gameObject = v24->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_39;
  ((void (__fastcall *)(UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))gameObject->klass->vtable._14_SetState.method)(
    gameObject,
    3LL,
    0LL,
    gameObject->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall EventRewardButtonChangeManager__SetReleaseBtnState(
        EventRewardButtonChangeManager_o *this,
        EventRewardSceneReleaseEntity_array *entitys,
        int32_t closedImageId,
        System_Action_o *effectEndCallBack,
        const MethodInfo *method)
{
  EventRewardButtonChangeManager_o *v5; // x21
  int32_t v8; // w2
  int32_t v9; // w3

  v5 = this;
  this->fields.releaseEntityArray = entitys;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.releaseEntityArray,
    (int32_t)entitys,
    closedImageId,
    (int32_t)effectEndCallBack);
  v5->fields.RequestEndCallBack = effectEndCallBack;
  v5 = (EventRewardButtonChangeManager_o *)((char *)v5 + 128);
  v5[-1].fields.releaseSlot = closedImageId;
  sub_1B71570((ServantStatusBattleListViewItem_o *)v5, (int32_t)effectEndCallBack, v8, v9);
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
  __int64 v17; // x1
  __int64 Component_object; // x0
  __int64 v19; // x9
  struct UnityEngine_GameObject_array *effectObject; // x25
  Il2CppObject *Object_object__48486748; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  Il2CppClass **v25; // x0
  struct UnityEngine_GameObject_array *v26; // x8
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x23
  struct UnityEngine_GameObject_array *v30; // x8
  struct UISprite_array *eventBtnImages; // x8
  UnityEngine_Transform_o *v32; // x21
  struct UnityEngine_GameObject_array *v33; // x8
  UnityEngine_Transform_o *v34; // x21
  struct UnityEngine_GameObject_array *v35; // x8
  UnityEngine_Transform_o *v36; // x19
  const MethodInfo *v37; // x1

  if ( (byte_4A23C97 & 1) == 0 )
  {
    sub_1B715CC(&Method_AssetData_GetObject_GameObject____75846976, *(_QWORD *)&eventId);
    sub_1B715CC(&EventRewardButtonChangeManager_TypeInfo, v13);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___, v14);
    sub_1B715CC(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v16);
    byte_4A23C97 = 1;
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
    Component_object = (__int64)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      Component_object = (__int64)EventRewardButtonChangeManager_TypeInfo;
    }
    v19 = 56LL;
  }
  else if ( eventCount == 2 )
  {
    Component_object = (__int64)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      Component_object = (__int64)EventRewardButtonChangeManager_TypeInfo;
    }
    v19 = 64LL;
  }
  else
  {
    Component_object = (__int64)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      Component_object = (__int64)EventRewardButtonChangeManager_TypeInfo;
    }
    v19 = 48LL;
  }
  if ( !this->fields.efffectData )
    goto LABEL_47;
  effectObject = this->fields.effectObject;
  Object_object__48486748 = AssetData__GetObject_object__48486748(
                              this->fields.efffectData,
                              *(System_String_o **)(*(_QWORD *)(Component_object + 184) + v19),
                              (const MethodInfo_2E3D95C *)Method_AssetData_GetObject_GameObject____75846976);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                Object_object__48486748,
                                (const MethodInfo_2EDE770 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectObject )
    goto LABEL_47;
  if ( effectObject->max_length <= slot )
    goto LABEL_48;
  v24 = Component_object;
  v25 = &effectObject->obj.klass + slot;
  v25[4] = (Il2CppClass *)v24;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v25 + 4), v24, v22, v23);
  v26 = this->fields.effectObject;
  if ( !v26 )
    goto LABEL_47;
  if ( v26->max_length <= slot )
    goto LABEL_48;
  Component_object = (__int64)v26->m_Items[slot];
  if ( !Component_object )
    goto LABEL_47;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Component_object,
                                (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
  if ( !Component_object )
    goto LABEL_47;
  v29 = Component_object;
  if ( changeCallback )
  {
    *(_QWORD *)(Component_object + 208) = changeCallback;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(Component_object + 208), (int32_t)changeCallback, v27, v28);
  }
  if ( endCallback )
  {
    *(_QWORD *)(v29 + 216) = endCallback;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v29 + 216), (int32_t)endCallback, v27, v28);
  }
  v30 = this->fields.effectObject;
  if ( !v30 )
LABEL_47:
    sub_1B71828(Component_object, v17);
  if ( v30->max_length <= slot )
    goto LABEL_48;
  Component_object = (__int64)v30->m_Items[slot];
  if ( !Component_object )
    goto LABEL_47;
  Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  eventBtnImages = this->fields.eventBtnImages;
  if ( !eventBtnImages )
    goto LABEL_47;
  if ( eventBtnImages->max_length <= slot )
    goto LABEL_48;
  v32 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (__int64)eventBtnImages->m_Items[slot];
  if ( !Component_object )
    goto LABEL_47;
  Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
  if ( !v32 )
    goto LABEL_47;
  UnityEngine_Transform__set_parent(v32, (UnityEngine_Transform_o *)Component_object, 0LL);
  v33 = this->fields.effectObject;
  if ( !v33 )
    goto LABEL_47;
  if ( v33->max_length <= slot )
LABEL_48:
    sub_1B71830(Component_object, v17);
  Component_object = (__int64)v33->m_Items[slot];
  if ( !Component_object )
    goto LABEL_47;
  Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  v34 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A1A751 )
  {
    Component_object = sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v17);
    byte_4A1A751 = 1;
  }
  if ( !v34 )
    goto LABEL_47;
  UnityEngine_Transform__set_localPosition(v34, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  v35 = this->fields.effectObject;
  if ( !v35 )
    goto LABEL_47;
  if ( v35->max_length <= slot )
    goto LABEL_48;
  Component_object = (__int64)v35->m_Items[slot];
  if ( !Component_object )
    goto LABEL_47;
  Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  v36 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A1A756 )
  {
    Component_object = sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v17);
    byte_4A1A756 = 1;
  }
  if ( !v36 )
    goto LABEL_47;
  UnityEngine_Transform__set_localScale(v36, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  TabOpenEffectComponent__PlayAnimation((TabOpenEffectComponent_o *)v29, v37);
}


void __fastcall EventRewardButtonChangeManager__SetReleaseEffectData(
        EventRewardButtonChangeManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3

  if ( data )
  {
    this->fields.efffectData = data;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.efffectData, (int32_t)data, (int32_t)method, v3);
  }
}


void __fastcall EventRewardButtonChangeManager__StartTutorialRequest(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  unsigned int releaseSlot; // w22
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1
  int32_t v10; // w1

  if ( (byte_4A23C9D & 1) == 0 )
  {
    sub_1B715CC(&Method_EventRewardButtonChangeManager_EndTutorialRequest__, method);
    sub_1B715CC(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v3);
    sub_1B715CC(&NetworkManager_TypeInfo, v4);
    sub_1B715CC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4A23C9D = 1;
  }
  releaseSlot = this->fields.releaseSlot;
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B71818(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_EventRewardButtonChangeManager_EndTutorialRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_2EDD4A0 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  if ( !Request_object )
    sub_1B71828(0LL, v9);
  if ( releaseSlot >= 3 )
    v10 = -1;
  else
    v10 = releaseSlot + 25;
  TutorialEventSetRequest__beginRequest((TutorialEventSetRequest_o *)Request_object, v10, this->fields.eventId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardButtonChangeManager__TabInitialize(
        EventRewardButtonChangeManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  struct UnityEngine_GameObject_array *tabColliders; // x8
  DataManager_o *v10; // x20
  __int64 v11; // x22
  int max_length; // w9
  struct UnityEngine_GameObject_array *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A23C94 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, *(_QWORD *)&eventId);
    sub_1B715CC(&UnityEngine_GameObject___TypeInfo, v5);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A23C94 = 1;
  }
  this->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)EventRewardSceneMaster__GetEntityList((EventRewardSceneMaster_o *)Instance, eventId, 0LL);
  tabColliders = this->fields.tabColliders;
  if ( !tabColliders )
    goto LABEL_12;
  v10 = Instance;
  v11 = 0LL;
  while ( 1 )
  {
    max_length = tabColliders->max_length;
    if ( (int)v11 >= max_length )
      break;
    if ( (unsigned int)v11 >= max_length )
      sub_1B71830(Instance, v8);
    Instance = (DataManager_o *)tabColliders->m_Items[v11];
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        tabColliders = this->fields.tabColliders;
        ++v11;
        if ( tabColliders )
          continue;
      }
    }
    goto LABEL_12;
  }
  if ( !v10 )
LABEL_12:
    sub_1B71828(Instance, v8);
  v13 = (struct UnityEngine_GameObject_array *)sub_1B71674(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 LODWORD(v10->fields.m_CancellationTokenSource));
  this->fields.effectObject = v13;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.effectObject, (int32_t)v13, v14, v15);
}


void __fastcall EventRewardButtonChangeManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A23C9F & 1) == 0 )
  {
    sub_1B715CC(&EventRewardButtonChangeManager___c_TypeInfo, v1);
    byte_4A23C9F = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(EventRewardButtonChangeManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventRewardButtonChangeManager___c_TypeInfo->static_fields->__9 = (struct EventRewardButtonChangeManager___c_o *)v2;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)EventRewardButtonChangeManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A23CA1 & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A23CA1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B71828(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableLeftButton_b__34_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A23CA0 & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A23CA0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B71828(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableRightButton_b__36_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A23CA2 & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A23CA2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B71828(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableRightButton_b__36_1(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A23CA3 & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A23CA3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B71828(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}