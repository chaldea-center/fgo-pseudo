void __fastcall EventRewardButtonChangeManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventRewardButtonChangeManager_StaticFields *static_fields; // x0
  __int64 v3; // x1
  struct EventRewardButtonChangeManager_StaticFields *v4; // x0
  __int64 v5; // x1
  struct EventRewardButtonChangeManager_StaticFields *v6; // x0
  __int64 v7; // x1
  struct EventRewardButtonChangeManager_StaticFields *v8; // x0
  __int64 v9; // x1
  struct EventRewardButtonChangeManager_StaticFields *v10; // x0
  __int64 v11; // x1
  struct EventRewardButtonChangeManager_StaticFields *v12; // x0
  __int64 v13; // x1
  struct EventRewardButtonChangeManager_StaticFields *v14; // x0
  __int64 v15; // x1
  struct EventRewardButtonChangeManager_StaticFields *v16; // x0
  struct EventRewardButtonChangeManager_StaticFields *v17; // x0
  __int64 v18; // x1

  if ( (byte_4BD73AA & 1) == 0 )
  {
    sub_1C21E38(&EventRewardButtonChangeManager_TypeInfo);
    sub_1C21E38(&StringLiteral_17784/*"btn_bg_on_1"*/);
    sub_1C21E38(&StringLiteral_17785/*"btn_bg_on_2"*/);
    sub_1C21E38(&StringLiteral_17786/*"btn_bg_on_4"*/);
    sub_1C21E38(&StringLiteral_19118/*"ef_2tab_open"*/);
    sub_1C21E38(&StringLiteral_17781/*"btn_bg_off_4"*/);
    sub_1C21E38(&StringLiteral_17779/*"btn_bg_off_1"*/);
    sub_1C21E38(&StringLiteral_19120/*"ef_4tab_open"*/);
    sub_1C21E38(&StringLiteral_19119/*"ef_3tab_open"*/);
    sub_1C21E38(&StringLiteral_17780/*"btn_bg_off_2"*/);
    sub_1C21E38(&StringLiteral_17798/*"btn_disable_txt_"*/);
    byte_4BD73AA = 1;
  }
  EventRewardButtonChangeManager_TypeInfo->static_fields->BTN_NAME_TYPE3_ON = (struct System_String_o *)StringLiteral_17784/*"btn_bg_on_1"*/;
  sub_1C21DDC(EventRewardButtonChangeManager_TypeInfo->static_fields, StringLiteral_17784/*"btn_bg_on_1"*/);
  v1 = StringLiteral_17779/*"btn_bg_off_1"*/;
  static_fields = EventRewardButtonChangeManager_TypeInfo->static_fields;
  static_fields->BTN_NAME_TYPE3_OFF = (struct System_String_o *)StringLiteral_17779/*"btn_bg_off_1"*/;
  sub_1C21DDC(&static_fields->BTN_NAME_TYPE3_OFF, v1);
  v3 = StringLiteral_17785/*"btn_bg_on_2"*/;
  v4 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v4->BTN_NAME_TYPE2_ON = (struct System_String_o *)StringLiteral_17785/*"btn_bg_on_2"*/;
  sub_1C21DDC(&v4->BTN_NAME_TYPE2_ON, v3);
  v5 = StringLiteral_17780/*"btn_bg_off_2"*/;
  v6 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v6->BTN_NAME_TYPE2_OFF = (struct System_String_o *)StringLiteral_17780/*"btn_bg_off_2"*/;
  sub_1C21DDC(&v6->BTN_NAME_TYPE2_OFF, v5);
  v7 = StringLiteral_17786/*"btn_bg_on_4"*/;
  v8 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v8->BTN_NAME_TYPE4_ON = (struct System_String_o *)StringLiteral_17786/*"btn_bg_on_4"*/;
  sub_1C21DDC(&v8->BTN_NAME_TYPE4_ON, v7);
  v9 = StringLiteral_17781/*"btn_bg_off_4"*/;
  v10 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v10->BTN_NAME_TYPE4_OFF = (struct System_String_o *)StringLiteral_17781/*"btn_bg_off_4"*/;
  sub_1C21DDC(&v10->BTN_NAME_TYPE4_OFF, v9);
  v11 = StringLiteral_19120/*"ef_4tab_open"*/;
  v12 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v12->RELEASE_EFFECT_4TAB_NAME = (struct System_String_o *)StringLiteral_19120/*"ef_4tab_open"*/;
  sub_1C21DDC(&v12->RELEASE_EFFECT_4TAB_NAME, v11);
  v13 = StringLiteral_19119/*"ef_3tab_open"*/;
  v14 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v14->RELEASE_EFFECT_3TAB_NAME = (struct System_String_o *)StringLiteral_19119/*"ef_3tab_open"*/;
  sub_1C21DDC(&v14->RELEASE_EFFECT_3TAB_NAME, v13);
  v15 = StringLiteral_19118/*"ef_2tab_open"*/;
  v16 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v16->RELEASE_EFFECT_2TAB_NAME = (struct System_String_o *)StringLiteral_19118/*"ef_2tab_open"*/;
  sub_1C21DDC(&v16->RELEASE_EFFECT_2TAB_NAME, v15);
  v17 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v18 = StringLiteral_17798/*"btn_disable_txt_"*/;
  v17->DISABLE_BTN_TXT = (struct System_String_o *)StringLiteral_17798/*"btn_disable_txt_"*/;
  sub_1C21DDC(&v17->DISABLE_BTN_TXT, v18);
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
  il2cpp_array_size_t max_length; // w19
  struct UnityEngine_GameObject_array *backImgObjs; // x8
  System_String_o **p_max_length; // x9
  struct UnityEngine_GameObject_array *p_bounds; // x8
  System_String_o *v16; // x24
  Il2CppClass *klass; // x29
  unsigned __int64 v18; // x21
  int v19; // w19
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  struct UICommonButton_array *eventBtns; // x8
  struct UICommonButton_array *v22; // x8
  struct UISprite_array *eventBtnImages; // x8
  struct UnityEngine_GameObject_array *v24; // x8
  struct UnityEngine_GameObject_array *activeImgObjs; // x8
  struct UISprite_array *btnTxtSprites; // x8
  UISprite_o *v27; // x25
  struct EventRewardSceneReleaseEntity_array *v28; // x8
  EventRewardSceneReleaseEntity_o *v29; // x8
  System_String_o *v30; // x26
  System_String_o *v31; // x0
  System_String_o *v32; // x26
  struct UICommonButton_array *v33; // x8
  struct UnityEngine_GameObject_array *tabColliders; // x8
  struct UICommonButton_array *v35; // x8
  bool v36; // w25
  struct UICommonButton_array *v37; // x8
  struct UISprite_array *v38; // x8
  System_String_o *v39; // x1
  struct UnityEngine_GameObject_array *v40; // x8
  struct UnityEngine_GameObject_array *v41; // x8
  System_String_o **v42; // x25
  struct UISprite_array *v43; // x8
  System_String_o *v44; // x26
  UISprite_o *v45; // x25
  EventRewardSceneEntity_o *v46; // x8
  EventRewardButtonChangeManager_o *v47; // x27
  System_String_o *v48; // x0
  System_String_o *v49; // x26
  struct UICommonButton_array *v50; // x8
  struct UISprite_array *v51; // x8
  EventRewardButtonChangeManager_c *v52; // x0
  UISprite_o *v53; // x21
  System_String_o *DISABLE_BTN_TXT; // x22
  System_String_o *v55; // x0
  System_String_o *v56; // x22
  struct UICommonButton_array *v57; // x8
  int32_t v58; // [xsp+0h] [xbp-70h]
  bool v59; // [xsp+8h] [xbp-68h]
  int32_t v60; // [xsp+Ch] [xbp-64h] BYREF

  v11 = this;
  v60 = currentEventId;
  if ( (byte_4BD73A1 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardButtonChangeManager_TypeInfo);
    sub_1C21E38(&EventRewardRootComponent_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C21E38(&StringLiteral_17886/*"btn_txt_on_"*/);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    this = (EventRewardButtonChangeManager_o *)sub_1C21E38(&StringLiteral_17880/*"btn_txt_off_"*/);
    byte_4BD73A1 = 1;
  }
  if ( !eventRewardSceneEnt )
    goto LABEL_97;
  max_length = eventRewardSceneEnt->max_length;
  v58 = openSlot;
  v11->fields.eventCount = max_length;
  v59 = openedTab;
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
    v16 = *p_max_length;
    klass = p_bounds->obj.klass;
    v18 = 0LL;
    v19 = 0;
    do
    {
      releaseEntityArray = v11->fields.releaseEntityArray;
      if ( !releaseEntityArray )
        goto LABEL_51;
      if ( v18 >= releaseEntityArray->max_length )
        goto LABEL_98;
      if ( releaseEntityArray->m_Items[v18] )
      {
        eventBtns = v11->fields.eventBtns;
        if ( !eventBtns )
          goto LABEL_97;
        if ( v18 >= eventBtns->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)eventBtns->m_Items[v18];
        if ( !this )
          goto LABEL_97;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        v22 = v11->fields.eventBtns;
        if ( !v22 )
          goto LABEL_97;
        if ( v18 >= v22->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v22->m_Items[v18];
        if ( !this )
          goto LABEL_97;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_97;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( !this )
          goto LABEL_97;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
        eventBtnImages = v11->fields.eventBtnImages;
        if ( !eventBtnImages )
          goto LABEL_97;
        if ( v18 >= eventBtnImages->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)eventBtnImages->m_Items[v18];
        if ( !this )
          goto LABEL_97;
        UISprite__set_spriteName((UISprite_o *)this, v16, 0LL);
        v24 = v11->fields.backImgObjs;
        if ( !v24 )
          goto LABEL_97;
        if ( v18 >= v24->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v24->m_Items[v18];
        if ( !this )
          goto LABEL_97;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        activeImgObjs = v11->fields.activeImgObjs;
        if ( !activeImgObjs )
          goto LABEL_97;
        if ( v18 >= activeImgObjs->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)activeImgObjs->m_Items[v18];
        if ( !this )
          goto LABEL_97;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        btnTxtSprites = v11->fields.btnTxtSprites;
        if ( !btnTxtSprites )
          goto LABEL_97;
        if ( v18 >= btnTxtSprites->max_length )
          goto LABEL_98;
        v27 = btnTxtSprites->m_Items[v18];
        this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
        if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
          this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
        }
        v28 = v11->fields.releaseEntityArray;
        if ( !v28 )
          goto LABEL_97;
        if ( v18 >= v28->max_length )
          goto LABEL_98;
        v29 = v28->m_Items[v18];
        if ( !v29 )
          goto LABEL_97;
        v30 = (System_String_o *)this[1].fields.backImgObjs->m_Items[5];
        v31 = System_Int32__ToString((int)v29 + 36, 0LL);
        v32 = System_String__Concat_63115476(v30, v31, 0LL);
        if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v27, v32, 0LL);
        v33 = v11->fields.eventBtns;
        if ( !v33 )
          goto LABEL_97;
        if ( v18 >= v33->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v33->m_Items[v18];
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
        if ( v18 >= tabColliders->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)tabColliders->m_Items[v18];
        if ( !this )
          goto LABEL_97;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      }
      else
      {
LABEL_51:
        v35 = v11->fields.eventBtns;
        if ( !v35 )
          goto LABEL_97;
        if ( v18 >= v35->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v35->m_Items[v18];
        if ( !this )
          goto LABEL_97;
        v36 = v19 != priorityId;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v19 != priorityId, 0LL);
        v37 = v11->fields.eventBtns;
        if ( !v37 )
          goto LABEL_97;
        if ( v18 >= v37->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v37->m_Items[v18];
        if ( !this )
          goto LABEL_97;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_97;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( !this )
          goto LABEL_97;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v36, 0LL);
        v38 = v11->fields.eventBtnImages;
        if ( !v38 )
          goto LABEL_97;
        if ( v18 >= v38->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v38->m_Items[v18];
        if ( !this )
          goto LABEL_97;
        v39 = v19 == priorityId ? (System_String_o *)klass : v16;
        UISprite__set_spriteName((UISprite_o *)this, v39, 0LL);
        v40 = v11->fields.backImgObjs;
        if ( !v40 )
          goto LABEL_97;
        if ( v18 >= v40->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v40->m_Items[v18];
        if ( !this )
          goto LABEL_97;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v36, 0LL);
        v41 = v11->fields.activeImgObjs;
        if ( !v41 )
          goto LABEL_97;
        if ( v18 >= v41->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v41->m_Items[v18];
        if ( !this )
          goto LABEL_97;
        v42 = (System_String_o **)(v19 == priorityId ? &StringLiteral_17886/*"btn_txt_on_"*/ : &StringLiteral_17880/*"btn_txt_off_"*/);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v19 == priorityId, 0LL);
        v43 = v11->fields.btnTxtSprites;
        if ( !v43 )
          goto LABEL_97;
        if ( v18 >= v43->max_length )
          goto LABEL_98;
        v44 = *v42;
        v45 = v43->m_Items[v18];
        this = (EventRewardButtonChangeManager_o *)System_Int32__ToString((int32_t)&v60, 0LL);
        if ( v18 >= eventRewardSceneEnt->max_length )
          goto LABEL_98;
        v46 = eventRewardSceneEnt->m_Items[v18];
        if ( !v46 )
          goto LABEL_97;
        v47 = this;
        v48 = System_Int32__ToString((int)v46 + 20, 0LL);
        v49 = System_String__Concat_63128740(
                v44,
                (System_String_o *)v47,
                (System_String_o *)StringLiteral_16399/*"_"*/,
                v48,
                0LL);
        if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v45, v49, 0LL);
        v50 = v11->fields.eventBtns;
        if ( !v50 )
          goto LABEL_97;
        if ( v18 >= v50->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v50->m_Items[v18];
        if ( !this )
          goto LABEL_97;
        this = (EventRewardButtonChangeManager_o *)((__int64 (__fastcall *)(EventRewardButtonChangeManager_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                                     this,
                                                     0LL,
                                                     0LL,
                                                     this->klass[1]._1.interfaceOffsets);
        ++v19;
      }
      ++v18;
    }
    while ( (__int64)v18 < v11->fields.eventCount );
  }
  if ( v59 )
  {
    v51 = v11->fields.btnTxtSprites;
    if ( !v51 )
      goto LABEL_97;
    if ( v51->max_length <= v58 )
      goto LABEL_98;
    v52 = EventRewardButtonChangeManager_TypeInfo;
    v53 = v51->m_Items[v58];
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v52 = EventRewardButtonChangeManager_TypeInfo;
    }
    DISABLE_BTN_TXT = v52->static_fields->DISABLE_BTN_TXT;
    v55 = System_Int32__ToString((int)v11 + 116, 0LL);
    v56 = System_String__Concat_63115476(DISABLE_BTN_TXT, v55, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v53, v56, 0LL);
    v57 = v11->fields.eventBtns;
    if ( !v57 )
      goto LABEL_97;
    if ( v57->max_length <= v58 )
LABEL_98:
      sub_1C2209C(this, *(_QWORD *)&priorityId);
    this = (EventRewardButtonChangeManager_o *)v57->m_Items[v58];
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
    sub_1C22094(this, *(_QWORD *)&priorityId);
  }
}


void __fastcall EventRewardButtonChangeManager__EndTutorialRequest(
        EventRewardButtonChangeManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct System_Action_o **p_RequestEndCallBack; // x0
  struct System_Action_o *v4; // x19
  struct System_Action_o *RequestEndCallBack; // t1

  RequestEndCallBack = this->fields.RequestEndCallBack;
  p_RequestEndCallBack = &this->fields.RequestEndCallBack;
  v4 = RequestEndCallBack;
  if ( RequestEndCallBack )
  {
    *p_RequestEndCallBack = 0LL;
    sub_1C21DDC(p_RequestEndCallBack, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


System_String_o *__fastcall EventRewardButtonChangeManager__GetReleaseBtnSpriteName(
        EventRewardButtonChangeManager_o *this,
        int32_t eventId,
        int32_t releaseTabPriority,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t ReleaseTabImageId; // w0
  EventRewardButtonChangeManager_c *v9; // x8
  System_String_o *DISABLE_BTN_TXT; // x19
  System_String_o *v11; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BD73A4 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventRewardSceneReleaseMaster___);
    sub_1C21E38(&EventRewardButtonChangeManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD73A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventRewardSceneReleaseMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v7);
  }
  ReleaseTabImageId = EventRewardSceneReleaseMaster__getReleaseTabImageId(
                        (EventRewardSceneReleaseMaster_o *)Instance,
                        eventId,
                        releaseTabPriority,
                        0LL);
  v9 = EventRewardButtonChangeManager_TypeInfo;
  v13 = ReleaseTabImageId;
  if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
    v9 = EventRewardButtonChangeManager_TypeInfo;
  }
  DISABLE_BTN_TXT = v9->static_fields->DISABLE_BTN_TXT;
  v11 = System_Int32__ToString((int32_t)&v13, 0LL);
  return System_String__Concat_63115476(DISABLE_BTN_TXT, v11, 0LL);
}


void __fastcall EventRewardButtonChangeManager__OnClickDisableCenterButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  void *Instance; // x0
  __int64 v6; // x1
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v8; // x8
  CommonUI_o *v9; // x19
  System_String_o *closedMessage; // x20
  System_String_o *v11; // x21
  System_Action_o *v12; // x22
  Il2CppObject *v13; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x0

  if ( (byte_4BD73A7 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventRewardButtonChangeManager_OnClickDisableCenterButton__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_EventRewardButtonChangeManager___c__OnClickDisableCenterButton_b__35_0__);
    sub_1C21E38(&EventRewardButtonChangeManager___c_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD73A7 = 1;
  }
  v3 = Method_EventRewardButtonChangeManager_OnClickDisableCenterButton__;
  if ( (*((_BYTE *)Method_EventRewardButtonChangeManager_OnClickDisableCenterButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_EventRewardButtonChangeManager_OnClickDisableCenterButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  releaseEntityArray = this->fields.releaseEntityArray;
  if ( !releaseEntityArray )
    goto LABEL_16;
  if ( releaseEntityArray->max_length <= 1 )
    sub_1C2209C(Instance, v6);
  v8 = releaseEntityArray->m_Items[1];
  if ( !v8 )
    goto LABEL_16;
  v9 = (CommonUI_o *)Instance;
  closedMessage = v8->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  v12 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v12 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventRewardButtonChangeManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v12 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v12, v13, Method_EventRewardButtonChangeManager___c__OnClickDisableCenterButton_b__35_0__, 0LL);
    static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    static_fields->__9__35_0 = v12;
    Instance = (void *)sub_1C21DDC(&static_fields->__9__35_0, v12);
  }
  if ( !v9 )
LABEL_16:
    sub_1C22094(Instance, v6);
  CommonUI__OpenNotificationDialog(v9, v11, closedMessage, v12, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


void __fastcall EventRewardButtonChangeManager__OnClickDisableLeftButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  void *Instance; // x0
  __int64 v6; // x1
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v8; // x8
  CommonUI_o *v9; // x19
  System_String_o *closedMessage; // x20
  System_String_o *v11; // x21
  System_Action_o *v12; // x22
  Il2CppObject *v13; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x0

  if ( (byte_4BD73A6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventRewardButtonChangeManager_OnClickDisableLeftButton__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_EventRewardButtonChangeManager___c__OnClickDisableLeftButton_b__34_0__);
    sub_1C21E38(&EventRewardButtonChangeManager___c_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD73A6 = 1;
  }
  v3 = Method_EventRewardButtonChangeManager_OnClickDisableLeftButton__;
  if ( (*((_BYTE *)Method_EventRewardButtonChangeManager_OnClickDisableLeftButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_EventRewardButtonChangeManager_OnClickDisableLeftButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  releaseEntityArray = this->fields.releaseEntityArray;
  if ( !releaseEntityArray )
    goto LABEL_16;
  if ( !releaseEntityArray->max_length )
    sub_1C2209C(Instance, v6);
  v8 = releaseEntityArray->m_Items[0];
  if ( !v8 )
    goto LABEL_16;
  v9 = (CommonUI_o *)Instance;
  closedMessage = v8->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  v12 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v12 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventRewardButtonChangeManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v12 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v12, v13, Method_EventRewardButtonChangeManager___c__OnClickDisableLeftButton_b__34_0__, 0LL);
    static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = v12;
    Instance = (void *)sub_1C21DDC(&static_fields->__9__34_0, v12);
  }
  if ( !v9 )
LABEL_16:
    sub_1C22094(Instance, v6);
  CommonUI__OpenNotificationDialog(v9, v11, closedMessage, v12, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
}


void __fastcall EventRewardButtonChangeManager__OnClickDisableRightButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t eventCount; // w8
  void *Instance; // x0
  __int64 v7; // x1
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v9; // x8
  CommonUI_o *v10; // x19
  System_String_o *closedMessage; // x20
  System_Action_o *v12; // x22
  System_String_o *v13; // x21
  Il2CppObject *v14; // x23
  System_Action_o *v15; // x1
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x0
  struct System_Action_o **p__9__36_0; // x0
  struct EventRewardSceneReleaseEntity_array *v18; // x8
  EventRewardSceneReleaseEntity_o *v19; // x8
  Il2CppObject *v20; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v21; // x0

  if ( (byte_4BD73A8 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventRewardButtonChangeManager_OnClickDisableRightButton__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_0__);
    sub_1C21E38(&Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_1__);
    sub_1C21E38(&EventRewardButtonChangeManager___c_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD73A8 = 1;
  }
  v3 = Method_EventRewardButtonChangeManager_OnClickDisableRightButton__;
  if ( (*((_BYTE *)Method_EventRewardButtonChangeManager_OnClickDisableRightButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_EventRewardButtonChangeManager_OnClickDisableRightButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0, 0LL);
  eventCount = this->fields.eventCount;
  if ( eventCount != 3 )
  {
    if ( eventCount != 2 )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    releaseEntityArray = this->fields.releaseEntityArray;
    if ( !releaseEntityArray )
LABEL_29:
      sub_1C22094(Instance, v7);
    if ( releaseEntityArray->max_length > 1 )
    {
      v9 = releaseEntityArray->m_Items[1];
      if ( !v9 )
        goto LABEL_29;
      v10 = (CommonUI_o *)Instance;
      closedMessage = v9->fields.closedMessage;
      Instance = EventRewardButtonChangeManager___c_TypeInfo;
      if ( !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
        Instance = EventRewardButtonChangeManager___c_TypeInfo;
      }
      v12 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 24LL);
      v13 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v12 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = EventRewardButtonChangeManager___c_TypeInfo;
        }
        v14 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v12 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          v12,
          v14,
          Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_0__,
          0LL);
        v15 = v12;
        static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
        static_fields->__9__36_0 = v12;
        p__9__36_0 = &static_fields->__9__36_0;
LABEL_25:
        Instance = (void *)sub_1C21DDC(p__9__36_0, v15);
        goto LABEL_26;
      }
      goto LABEL_26;
    }
LABEL_30:
    sub_1C2209C(Instance, v7);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = this->fields.releaseEntityArray;
  if ( !v18 )
    goto LABEL_29;
  if ( v18->max_length <= 2 )
    goto LABEL_30;
  v19 = v18->m_Items[2];
  if ( !v19 )
    goto LABEL_29;
  v10 = (CommonUI_o *)Instance;
  closedMessage = v19->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  v12 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 32LL);
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !v12 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventRewardButtonChangeManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v12 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v12, v20, Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_1__, 0LL);
    v15 = v12;
    v21 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v21->__9__36_1 = v12;
    p__9__36_0 = &v21->__9__36_1;
    goto LABEL_25;
  }
LABEL_26:
  if ( !v10 )
    goto LABEL_29;
  CommonUI__OpenNotificationDialog(v10, v13, closedMessage, v12, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
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
  if ( (byte_4BD73A2 & 1) == 0 )
  {
    this = (EventRewardButtonChangeManager_o *)sub_1C21E38(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    byte_4BD73A2 = 1;
  }
  eventBtns = v6->fields.eventBtns;
  if ( !eventBtns )
LABEL_21:
    sub_1C22094(this, isDisp);
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
                                                     (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
          sub_1C2209C(this, isDisp);
        this = (EventRewardButtonChangeManager_o *)*((_QWORD *)&v15->obj.klass + i);
        if ( !this )
          goto LABEL_21;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
  UICommonButton_o *gameObject; // x0
  __int64 v10; // x9
  struct UICommonButton_array *eventBtns; // x8
  UnityEngine_Behaviour_o *v12; // x8
  System_String_o *v13; // x22
  struct UICommonButton_array *v14; // x8
  struct UISprite_array *eventBtnImages; // x8
  struct UnityEngine_GameObject_array *backImgObjs; // x8
  struct UnityEngine_GameObject_array *activeImgObjs; // x8
  const MethodInfo *v18; // x3
  struct UISprite_array *btnTxtSprites; // x8
  UISprite_o *v20; // x22
  System_String_o *v21; // x21
  struct UICommonButton_array *v22; // x8

  if ( (byte_4BD73A5 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardButtonChangeManager_TypeInfo);
    sub_1C21E38(&EventRewardRootComponent_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4BD73A5 = 1;
  }
  if ( eventCount == 3 )
  {
    gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v10 = 8LL;
  }
  else if ( eventCount == 2 )
  {
    gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v10 = 24LL;
  }
  else
  {
    gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v10 = 40LL;
  }
  eventBtns = this->fields.eventBtns;
  if ( !eventBtns )
    goto LABEL_39;
  if ( eventBtns->max_length <= tabPriority )
    goto LABEL_40;
  v12 = (UnityEngine_Behaviour_o *)eventBtns->m_Items[tabPriority];
  if ( !v12 )
    goto LABEL_39;
  v13 = *(System_String_o **)(*(_QWORD *)&gameObject[1].fields.specifyHoverColor.fields.b + v10);
  UnityEngine_Behaviour__set_enabled(v12, 0, 0LL);
  v14 = this->fields.eventBtns;
  if ( !v14 )
    goto LABEL_39;
  if ( v14->max_length <= tabPriority )
    goto LABEL_40;
  gameObject = v14->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_39;
  gameObject = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  gameObject = (UICommonButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)gameObject,
                                     (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
  UISprite__set_spriteName((UISprite_o *)gameObject, v13, 0LL);
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
  v20 = btnTxtSprites->m_Items[tabPriority];
  v21 = EventRewardButtonChangeManager__GetReleaseBtnSpriteName(
          (EventRewardButtonChangeManager_o *)gameObject,
          eventId,
          tabPriority,
          v18);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  gameObject = (UICommonButton_o *)EventRewardRootComponent__setRewardInfoImg(v20, v21, 0LL);
  v22 = this->fields.eventBtns;
  if ( !v22 )
LABEL_39:
    sub_1C22094(gameObject, *(_QWORD *)&eventId);
  if ( v22->max_length <= tabPriority )
LABEL_40:
    sub_1C2209C(gameObject, *(_QWORD *)&eventId);
  gameObject = v22->m_Items[tabPriority];
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

  v5 = this;
  this->fields.releaseEntityArray = entitys;
  sub_1C21DDC(&this->fields.releaseEntityArray, entitys);
  v5->fields.RequestEndCallBack = effectEndCallBack;
  v5 = (EventRewardButtonChangeManager_o *)((char *)v5 + 128);
  v5[-1].fields.releaseSlot = closedImageId;
  sub_1C21DDC(v5, effectEndCallBack);
}


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
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v15; // x9
  struct UnityEngine_GameObject_array *effectObject; // x25
  Il2CppObject *Object_object__49880776; // x23
  UnityEngine_GameObject_o *v18; // x1
  Il2CppClass **v19; // x0
  struct UnityEngine_GameObject_array *v20; // x8
  TabOpenEffectComponent_o *v21; // x23
  struct UnityEngine_GameObject_array *v22; // x8
  struct UISprite_array *eventBtnImages; // x8
  UnityEngine_Transform_o *v24; // x21
  struct UnityEngine_GameObject_array *v25; // x8
  UnityEngine_Transform_o *v26; // x21
  struct UnityEngine_GameObject_array *v27; // x8
  UnityEngine_Transform_o *v28; // x19
  const MethodInfo *v29; // x1

  if ( (byte_4BD73A3 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&EventRewardButtonChangeManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD73A3 = 1;
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
    Component_object = (UnityEngine_GameObject_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      Component_object = (UnityEngine_GameObject_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v15 = 56LL;
  }
  else if ( eventCount == 2 )
  {
    Component_object = (UnityEngine_GameObject_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      Component_object = (UnityEngine_GameObject_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v15 = 64LL;
  }
  else
  {
    Component_object = (UnityEngine_GameObject_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      Component_object = (UnityEngine_GameObject_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v15 = 48LL;
  }
  if ( !this->fields.efffectData )
    goto LABEL_47;
  effectObject = this->fields.effectObject;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              this->fields.efffectData,
                              *(System_String_o **)(*(_QWORD *)&Component_object[7].fields.m_CachedPtr + v15),
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   Object_object__49880776,
                                                   (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectObject )
    goto LABEL_47;
  if ( effectObject->max_length <= slot )
    goto LABEL_48;
  v18 = Component_object;
  v19 = &effectObject->obj.klass + slot;
  v19[4] = (Il2CppClass *)v18;
  Component_object = (UnityEngine_GameObject_o *)sub_1C21DDC(v19 + 4, v18);
  v20 = this->fields.effectObject;
  if ( !v20 )
    goto LABEL_47;
  if ( v20->max_length <= slot )
    goto LABEL_48;
  Component_object = v20->m_Items[slot];
  if ( !Component_object )
    goto LABEL_47;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
  if ( !Component_object )
    goto LABEL_47;
  v21 = (TabOpenEffectComponent_o *)Component_object;
  if ( changeCallback )
  {
    *(_QWORD *)&Component_object[8].fields.m_CachedPtr = changeCallback;
    Component_object = (UnityEngine_GameObject_o *)sub_1C21DDC(&Component_object[8].fields, changeCallback);
  }
  if ( endCallback )
  {
    v21->fields.animEndCallback = endCallback;
    Component_object = (UnityEngine_GameObject_o *)sub_1C21DDC(&v21->fields.animEndCallback, endCallback);
  }
  v22 = this->fields.effectObject;
  if ( !v22 )
LABEL_47:
    sub_1C22094(Component_object, v13);
  if ( v22->max_length <= slot )
    goto LABEL_48;
  Component_object = v22->m_Items[slot];
  if ( !Component_object )
    goto LABEL_47;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Component_object, 0LL);
  eventBtnImages = this->fields.eventBtnImages;
  if ( !eventBtnImages )
    goto LABEL_47;
  if ( eventBtnImages->max_length <= slot )
    goto LABEL_48;
  v24 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)eventBtnImages->m_Items[slot];
  if ( !Component_object )
    goto LABEL_47;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !v24 )
    goto LABEL_47;
  UnityEngine_Transform__set_parent(v24, (UnityEngine_Transform_o *)Component_object, 0LL);
  v25 = this->fields.effectObject;
  if ( !v25 )
    goto LABEL_47;
  if ( v25->max_length <= slot )
LABEL_48:
    sub_1C2209C(Component_object, v13);
  Component_object = v25->m_Items[slot];
  if ( !Component_object )
    goto LABEL_47;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Component_object, 0LL);
  v26 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4BD6BB1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v26 )
    goto LABEL_47;
  UnityEngine_Transform__set_localPosition(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  v27 = this->fields.effectObject;
  if ( !v27 )
    goto LABEL_47;
  if ( v27->max_length <= slot )
    goto LABEL_48;
  Component_object = v27->m_Items[slot];
  if ( !Component_object )
    goto LABEL_47;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Component_object, 0LL);
  v28 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4BD6BB6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v28 )
    goto LABEL_47;
  UnityEngine_Transform__set_localScale(v28, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  TabOpenEffectComponent__PlayAnimation(v21, v29);
}


void __fastcall EventRewardButtonChangeManager__SetReleaseEffectData(
        EventRewardButtonChangeManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( data )
  {
    this->fields.efffectData = data;
    sub_1C21DDC(&this->fields.efffectData, data);
  }
}


void __fastcall EventRewardButtonChangeManager__StartTutorialRequest(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  unsigned int releaseSlot; // w22
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  Il2CppObject *Request_object; // x0
  __int64 v6; // x1
  int32_t v7; // w1

  if ( (byte_4BD73A9 & 1) == 0 )
  {
    sub_1C21E38(&Method_EventRewardButtonChangeManager_EndTutorialRequest__);
    sub_1C21E38(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4BD73A9 = 1;
  }
  releaseSlot = this->fields.releaseSlot;
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_EventRewardButtonChangeManager_EndTutorialRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v4,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  if ( !Request_object )
    sub_1C22094(0LL, v6);
  if ( releaseSlot >= 3 )
    v7 = -1;
  else
    v7 = releaseSlot + 25;
  TutorialEventSetRequest__beginRequest((TutorialEventSetRequest_o *)Request_object, v7, this->fields.eventId, 0LL);
}


void __fastcall EventRewardButtonChangeManager__TabInitialize(
        EventRewardButtonChangeManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct UnityEngine_GameObject_array *tabColliders; // x8
  DataManager_o *v8; // x20
  __int64 v9; // x22
  int max_length; // w9
  struct UnityEngine_GameObject_array *v11; // x0

  if ( (byte_4BD73A0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_1C21E38(&UnityEngine_GameObject___TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD73A0 = 1;
  }
  this->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)EventRewardSceneMaster__GetEntityList((EventRewardSceneMaster_o *)Instance, eventId, 0LL);
  tabColliders = this->fields.tabColliders;
  if ( !tabColliders )
    goto LABEL_12;
  v8 = Instance;
  v9 = 0LL;
  while ( 1 )
  {
    max_length = tabColliders->max_length;
    if ( (int)v9 >= max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
      sub_1C2209C(Instance, v6);
    Instance = (DataManager_o *)tabColliders->m_Items[v9];
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        tabColliders = this->fields.tabColliders;
        ++v9;
        if ( tabColliders )
          continue;
      }
    }
    goto LABEL_12;
  }
  if ( !v8 )
LABEL_12:
    sub_1C22094(Instance, v6);
  v11 = (struct UnityEngine_GameObject_array *)sub_1C21EE0(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 LODWORD(v8->fields.m_CancellationTokenSource));
  this->fields.effectObject = v11;
  sub_1C21DDC(&this->fields.effectObject, v11);
}


void __fastcall EventRewardButtonChangeManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4BD73AB & 1) == 0 )
  {
    sub_1C21E38(&EventRewardButtonChangeManager___c_TypeInfo);
    byte_4BD73AB = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(EventRewardButtonChangeManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventRewardButtonChangeManager___c_TypeInfo->static_fields->__9 = (struct EventRewardButtonChangeManager___c_o *)v1;
  sub_1C21DDC(EventRewardButtonChangeManager___c_TypeInfo->static_fields, v1);
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

  if ( (byte_4BD73AD & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD73AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableLeftButton_b__34_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD73AC & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD73AC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableRightButton_b__36_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD73AE & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD73AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableRightButton_b__36_1(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD73AF & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD73AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}