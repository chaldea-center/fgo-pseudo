void __fastcall EventRewardButtonChangeManager___cctor(const MethodInfo *method)
{
  struct EventRewardButtonChangeManager_StaticFields *static_fields; // x0
  struct EventRewardButtonChangeManager_StaticFields *v2; // x0
  struct EventRewardButtonChangeManager_StaticFields *v3; // x0
  struct EventRewardButtonChangeManager_StaticFields *v4; // x0
  struct EventRewardButtonChangeManager_StaticFields *v5; // x0
  struct EventRewardButtonChangeManager_StaticFields *v6; // x0
  struct EventRewardButtonChangeManager_StaticFields *v7; // x0
  struct EventRewardButtonChangeManager_StaticFields *v8; // x0
  struct EventRewardButtonChangeManager_StaticFields *v9; // x0
  struct EventRewardButtonChangeManager_StaticFields *v10; // x0

  if ( (byte_4387EBF & 1) == 0 )
  {
    sub_B775C4(&EventRewardButtonChangeManager_TypeInfo);
    sub_B775C4(&StringLiteral_17316/*"btn_bg_on_1"*/);
    sub_B775C4(&StringLiteral_17317/*"btn_bg_on_2"*/);
    sub_B775C4(&StringLiteral_17318/*"btn_bg_on_4"*/);
    sub_B775C4(&StringLiteral_18515/*"ef_2tab_open"*/);
    sub_B775C4(&StringLiteral_17313/*"btn_bg_off_4"*/);
    sub_B775C4(&StringLiteral_17311/*"btn_bg_off_1"*/);
    sub_B775C4(&StringLiteral_18517/*"ef_4tab_open"*/);
    sub_B775C4(&StringLiteral_18516/*"ef_3tab_open"*/);
    sub_B775C4(&StringLiteral_17312/*"btn_bg_off_2"*/);
    sub_B775C4(&StringLiteral_17326/*"btn_disable_txt_"*/);
    byte_4387EBF = 1;
  }
  static_fields = EventRewardButtonChangeManager_TypeInfo->static_fields;
  static_fields->BTN_NAME_TYPE3_ON = (struct System_String_o *)StringLiteral_17316/*"btn_bg_on_1"*/;
  sub_B77560(static_fields);
  v2 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v2->BTN_NAME_TYPE3_OFF = (struct System_String_o *)StringLiteral_17311/*"btn_bg_off_1"*/;
  sub_B77560(&v2->BTN_NAME_TYPE3_OFF);
  v3 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v3->BTN_NAME_TYPE2_ON = (struct System_String_o *)StringLiteral_17317/*"btn_bg_on_2"*/;
  sub_B77560(&v3->BTN_NAME_TYPE2_ON);
  v4 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v4->BTN_NAME_TYPE2_OFF = (struct System_String_o *)StringLiteral_17312/*"btn_bg_off_2"*/;
  sub_B77560(&v4->BTN_NAME_TYPE2_OFF);
  v5 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v5->BTN_NAME_TYPE4_ON = (struct System_String_o *)StringLiteral_17318/*"btn_bg_on_4"*/;
  sub_B77560(&v5->BTN_NAME_TYPE4_ON);
  v6 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v6->BTN_NAME_TYPE4_OFF = (struct System_String_o *)StringLiteral_17313/*"btn_bg_off_4"*/;
  sub_B77560(&v6->BTN_NAME_TYPE4_OFF);
  v7 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v7->RELEASE_EFFECT_4TAB_NAME = (struct System_String_o *)StringLiteral_18517/*"ef_4tab_open"*/;
  sub_B77560(&v7->RELEASE_EFFECT_4TAB_NAME);
  v8 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v8->RELEASE_EFFECT_3TAB_NAME = (struct System_String_o *)StringLiteral_18516/*"ef_3tab_open"*/;
  sub_B77560(&v8->RELEASE_EFFECT_3TAB_NAME);
  v9 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v9->RELEASE_EFFECT_2TAB_NAME = (struct System_String_o *)StringLiteral_18515/*"ef_2tab_open"*/;
  sub_B77560(&v9->RELEASE_EFFECT_2TAB_NAME);
  v10 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v10->DISABLE_BTN_TXT = (struct System_String_o *)StringLiteral_17326/*"btn_disable_txt_"*/;
  sub_B77560(&v10->DISABLE_BTN_TXT);
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
  il2cpp_array_size_t max_length; // w8
  struct UISprite_array *btnTxtSprites; // x9
  System_String_o **p_max_length; // x8
  struct UISprite_array *p_bounds; // x9
  struct UISprite_array *v16; // x9
  System_String_o *v17; // x24
  unsigned __int64 v18; // x28
  int v19; // w21
  EventRewardSceneEntity_o **m_Items; // x22
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  struct UICommonButton_array *eventBtns; // x8
  struct UICommonButton_array *v23; // x8
  struct UISprite_array *eventBtnImages; // x8
  struct UnityEngine_GameObject_array *backImgObjs; // x8
  struct UnityEngine_GameObject_array *activeImgObjs; // x8
  struct UISprite_array *v27; // x8
  UISprite_o *v28; // x25
  struct EventRewardSceneReleaseEntity_array *v29; // x8
  EventRewardSceneReleaseEntity_o *v30; // x8
  System_String_o *v31; // x26
  System_String_o *v32; // x0
  const MethodInfo *v33; // x2
  System_String_o *v34; // x26
  struct UICommonButton_array *v35; // x8
  struct UnityEngine_GameObject_array *tabColliders; // x8
  struct UICommonButton_array *v37; // x8
  bool v38; // w25
  struct UICommonButton_array *v39; // x8
  struct UISprite_array *v40; // x8
  System_String_o *v41; // x1
  struct UnityEngine_GameObject_array *v42; // x8
  struct UnityEngine_GameObject_array *v43; // x8
  System_String_o **v44; // x25
  struct UISprite_array *v45; // x8
  System_String_o *v46; // x26
  UISprite_o *v47; // x25
  EventRewardSceneEntity_o *v48; // x8
  EventRewardSceneEntity_array *v49; // x19
  System_String_o *v50; // x27
  System_String_o *v51; // x0
  const MethodInfo *v52; // x2
  System_String_o *v53; // x26
  struct UICommonButton_array *v54; // x8
  struct UISprite_array *v55; // x8
  UISprite_o *v56; // x21
  EventRewardButtonChangeManager_c *v57; // x0
  System_String_o *DISABLE_BTN_TXT; // x22
  System_String_o *v59; // x0
  const MethodInfo *v60; // x2
  System_String_o *v61; // x22
  struct UICommonButton_array *v62; // x8
  __int64 v63; // x0
  int32_t v64; // [xsp+0h] [xbp-70h]
  bool v65; // [xsp+Ch] [xbp-64h]
  Il2CppClass *klass; // [xsp+10h] [xbp-60h]
  int32_t v67; // [xsp+1Ch] [xbp-54h] BYREF

  v11 = this;
  v67 = currentEventId;
  if ( (byte_4387EB6 & 1) == 0 )
  {
    sub_B775C4(&EventRewardButtonChangeManager_TypeInfo);
    sub_B775C4(&EventRewardRootComponent_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B775C4(&StringLiteral_17408/*"btn_txt_on_"*/);
    sub_B775C4(&StringLiteral_16197/*"_"*/);
    this = (EventRewardButtonChangeManager_o *)sub_B775C4(&StringLiteral_17402/*"btn_txt_off_"*/);
    byte_4387EB6 = 1;
  }
  if ( !eventRewardSceneEnt )
    goto LABEL_107;
  max_length = eventRewardSceneEnt->max_length;
  v64 = openSlot;
  v65 = openedTab;
  v11->fields.eventCount = max_length;
  if ( max_length == 2 )
  {
    this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    btnTxtSprites = this[1].fields.btnTxtSprites;
    p_max_length = (System_String_o **)&btnTxtSprites->max_length;
    p_bounds = (struct UISprite_array *)&btnTxtSprites->bounds;
  }
  else
  {
    this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( max_length == 3 )
    {
      if ( (WORD1(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
        this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
      }
      p_bounds = this[1].fields.btnTxtSprites;
      p_max_length = (System_String_o **)&p_bounds->obj.monitor;
    }
    else
    {
      if ( (WORD1(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
        this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
      }
      v16 = this[1].fields.btnTxtSprites;
      p_max_length = (System_String_o **)&v16->m_Items[1];
      p_bounds = (struct UISprite_array *)v16->m_Items;
    }
  }
  if ( v11->fields.eventCount >= 1 )
  {
    v17 = *p_max_length;
    v18 = 0LL;
    v19 = 0;
    m_Items = eventRewardSceneEnt->m_Items;
    klass = p_bounds->obj.klass;
    do
    {
      releaseEntityArray = v11->fields.releaseEntityArray;
      if ( !releaseEntityArray )
        goto LABEL_58;
      if ( v18 >= releaseEntityArray->max_length )
        goto LABEL_108;
      if ( releaseEntityArray->m_Items[v18] )
      {
        eventBtns = v11->fields.eventBtns;
        if ( !eventBtns )
          goto LABEL_107;
        if ( v18 >= eventBtns->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)eventBtns->m_Items[v18];
        if ( !this )
          goto LABEL_107;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        v23 = v11->fields.eventBtns;
        if ( !v23 )
          goto LABEL_107;
        if ( v18 >= v23->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v23->m_Items[v18];
        if ( !this )
          goto LABEL_107;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_107;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( !this )
          goto LABEL_107;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
        eventBtnImages = v11->fields.eventBtnImages;
        if ( !eventBtnImages )
          goto LABEL_107;
        if ( v18 >= eventBtnImages->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)eventBtnImages->m_Items[v18];
        if ( !this )
          goto LABEL_107;
        UISprite__set_spriteName((UISprite_o *)this, v17, 0LL);
        backImgObjs = v11->fields.backImgObjs;
        if ( !backImgObjs )
          goto LABEL_107;
        if ( v18 >= backImgObjs->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)backImgObjs->m_Items[v18];
        if ( !this )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        activeImgObjs = v11->fields.activeImgObjs;
        if ( !activeImgObjs )
          goto LABEL_107;
        if ( v18 >= activeImgObjs->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)activeImgObjs->m_Items[v18];
        if ( !this )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v27 = v11->fields.btnTxtSprites;
        if ( !v27 )
          goto LABEL_107;
        if ( v18 >= v27->max_length )
          goto LABEL_108;
        v28 = v27->m_Items[v18];
        this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
        if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
          this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
        }
        v29 = v11->fields.releaseEntityArray;
        if ( !v29 )
          goto LABEL_107;
        if ( v18 >= v29->max_length )
          goto LABEL_108;
        v30 = v29->m_Items[v18];
        if ( !v30 )
          goto LABEL_107;
        v31 = (System_String_o *)this[1].fields.btnTxtSprites->m_Items[5];
        v32 = System_Int32__ToString((int)v30 + 36, 0LL);
        v34 = System_String__Concat_44901936(v31, v32, 0LL);
        if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        }
        this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v28, v34, v33);
        v35 = v11->fields.eventBtns;
        if ( !v35 )
          goto LABEL_107;
        if ( v18 >= v35->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v35->m_Items[v18];
        if ( !this )
          goto LABEL_107;
        this = (EventRewardButtonChangeManager_o *)((__int64 (__fastcall *)(EventRewardButtonChangeManager_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                                     this,
                                                     3LL,
                                                     0LL,
                                                     this->klass[1]._1.interfaceOffsets);
        tabColliders = v11->fields.tabColliders;
        if ( !tabColliders )
          goto LABEL_107;
        if ( v18 >= tabColliders->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)tabColliders->m_Items[v18];
        if ( !this )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      }
      else
      {
LABEL_58:
        v37 = v11->fields.eventBtns;
        if ( !v37 )
          goto LABEL_107;
        if ( v18 >= v37->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v37->m_Items[v18];
        if ( !this )
          goto LABEL_107;
        v38 = v19 != priorityId;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v19 != priorityId, 0LL);
        v39 = v11->fields.eventBtns;
        if ( !v39 )
          goto LABEL_107;
        if ( v18 >= v39->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v39->m_Items[v18];
        if ( !this )
          goto LABEL_107;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_107;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( !this )
          goto LABEL_107;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v38, 0LL);
        v40 = v11->fields.eventBtnImages;
        if ( !v40 )
          goto LABEL_107;
        if ( v18 >= v40->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v40->m_Items[v18];
        if ( !this )
          goto LABEL_107;
        v41 = v19 == priorityId ? (System_String_o *)klass : v17;
        UISprite__set_spriteName((UISprite_o *)this, v41, 0LL);
        v42 = v11->fields.backImgObjs;
        if ( !v42 )
          goto LABEL_107;
        if ( v18 >= v42->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v42->m_Items[v18];
        if ( !this )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v38, 0LL);
        v43 = v11->fields.activeImgObjs;
        if ( !v43 )
          goto LABEL_107;
        if ( v18 >= v43->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v43->m_Items[v18];
        if ( !this )
          goto LABEL_107;
        v44 = (System_String_o **)(v19 == priorityId ? &StringLiteral_17408/*"btn_txt_on_"*/ : &StringLiteral_17402/*"btn_txt_off_"*/);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v19 == priorityId, 0LL);
        v45 = v11->fields.btnTxtSprites;
        if ( !v45 )
          goto LABEL_107;
        if ( v18 >= v45->max_length )
          goto LABEL_108;
        v46 = *v44;
        v47 = v45->m_Items[v18];
        this = (EventRewardButtonChangeManager_o *)System_Int32__ToString((int32_t)&v67, 0LL);
        if ( v18 >= eventRewardSceneEnt->max_length )
          goto LABEL_108;
        v48 = m_Items[v18];
        if ( !v48 )
          goto LABEL_107;
        v49 = eventRewardSceneEnt;
        v50 = (System_String_o *)this;
        v51 = System_Int32__ToString((int)v48 + 20, 0LL);
        v53 = System_String__Concat_44905348(v46, v50, (System_String_o *)StringLiteral_16197/*"_"*/, v51, 0LL);
        if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        }
        this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v47, v53, v52);
        v54 = v11->fields.eventBtns;
        if ( !v54 )
          goto LABEL_107;
        if ( v18 >= v54->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v54->m_Items[v18];
        if ( !this )
          goto LABEL_107;
        eventRewardSceneEnt = v49;
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
  if ( v65 )
  {
    v55 = v11->fields.btnTxtSprites;
    if ( !v55 )
      goto LABEL_107;
    if ( v55->max_length <= v64 )
      goto LABEL_108;
    v56 = v55->m_Items[v64];
    v57 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v57 = EventRewardButtonChangeManager_TypeInfo;
    }
    DISABLE_BTN_TXT = v57->static_fields->DISABLE_BTN_TXT;
    v59 = System_Int32__ToString((int)v11 + 108, 0LL);
    v61 = System_String__Concat_44901936(DISABLE_BTN_TXT, v59, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v56, v61, v60);
    v62 = v11->fields.eventBtns;
    if ( !v62 )
      goto LABEL_107;
    if ( v62->max_length <= v64 )
    {
LABEL_108:
      v63 = sub_B776C8(this);
      sub_B77668(v63, 0LL);
    }
    this = (EventRewardButtonChangeManager_o *)v62->m_Items[v64];
    if ( this )
    {
      ((void (__fastcall *)(EventRewardButtonChangeManager_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
        this,
        3LL,
        0LL,
        this->klass[1]._1.interfaceOffsets);
      return;
    }
LABEL_107:
    sub_B7769C(this, *(_QWORD *)&priorityId);
  }
}


void __fastcall EventRewardButtonChangeManager__EndTutorialRequest(
        EventRewardButtonChangeManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct System_Action_o **p_RequestEndCallBack; // x0
  System_Action_o *v4; // x19
  struct System_Action_o *RequestEndCallBack; // t1

  RequestEndCallBack = this->fields.RequestEndCallBack;
  p_RequestEndCallBack = &this->fields.RequestEndCallBack;
  v4 = RequestEndCallBack;
  if ( RequestEndCallBack )
  {
    *p_RequestEndCallBack = 0LL;
    sub_B77560(p_RequestEndCallBack);
    System_Action__Invoke(v4, 0LL);
  }
}


System_String_o *__fastcall EventRewardButtonChangeManager__GetReleaseBtnSpriteName(
        EventRewardButtonChangeManager_o *this,
        int32_t eventId,
        int32_t releaseTabPriority,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  EventRewardButtonChangeManager_c *v8; // x8
  System_String_o *DISABLE_BTN_TXT; // x19
  System_String_o *v10; // x0
  int32_t ReleaseTabImageId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4387EB9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventRewardSceneReleaseMaster___);
    sub_B775C4(&EventRewardButtonChangeManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4387EB9 = 1;
  }
  ReleaseTabImageId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventRewardSceneReleaseMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v7);
  }
  ReleaseTabImageId = EventRewardSceneReleaseMaster__getReleaseTabImageId(
                        (EventRewardSceneReleaseMaster_o *)Instance,
                        eventId,
                        releaseTabPriority,
                        0LL);
  v8 = EventRewardButtonChangeManager_TypeInfo;
  if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
    v8 = EventRewardButtonChangeManager_TypeInfo;
  }
  DISABLE_BTN_TXT = v8->static_fields->DISABLE_BTN_TXT;
  v10 = System_Int32__ToString((int32_t)&ReleaseTabImageId, 0LL);
  return System_String__Concat_44901936(DISABLE_BTN_TXT, v10, 0LL);
}


void __fastcall EventRewardButtonChangeManager__OnClickDisableCenterButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v6; // x8
  CommonUI_o *v7; // x19
  System_String_o *closedMessage; // x20
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__35_0; // x22
  System_String_o *v11; // x21
  Il2CppObject *v12; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v13; // x0
  __int64 v14; // x0

  if ( (byte_4387EBC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_EventRewardButtonChangeManager___c__OnClickDisableCenterButton_b__35_0__);
    sub_B775C4(&EventRewardButtonChangeManager___c_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4387EBC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  releaseEntityArray = this->fields.releaseEntityArray;
  if ( !releaseEntityArray )
    goto LABEL_19;
  if ( releaseEntityArray->max_length <= 1 )
  {
    v14 = sub_B776C8(Instance);
    sub_B77668(v14, 0LL);
  }
  v6 = releaseEntityArray->m_Items[1];
  if ( !v6 )
    goto LABEL_19;
  v7 = (CommonUI_o *)Instance;
  closedMessage = v6->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( (BYTE3(EventRewardButtonChangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  static_fields = (struct EventRewardButtonChangeManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__35_0 = static_fields->__9__35_0;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__35_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__35_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__35_0,
      v12,
      Method_EventRewardButtonChangeManager___c__OnClickDisableCenterButton_b__35_0__,
      0LL);
    v13 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v13->__9__35_0 = _9__35_0;
    sub_B77560(&v13->__9__35_0);
  }
  if ( !v7 )
LABEL_19:
    sub_B7769C(Instance, v4);
  CommonUI__OpenNotificationDialog(v7, v11, closedMessage, _9__35_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall EventRewardButtonChangeManager__OnClickDisableLeftButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v6; // x8
  CommonUI_o *v7; // x19
  System_String_o *closedMessage; // x20
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__34_0; // x22
  System_String_o *v11; // x21
  Il2CppObject *v12; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v13; // x0
  __int64 v14; // x0

  if ( (byte_4387EBB & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_EventRewardButtonChangeManager___c__OnClickDisableLeftButton_b__34_0__);
    sub_B775C4(&EventRewardButtonChangeManager___c_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4387EBB = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  releaseEntityArray = this->fields.releaseEntityArray;
  if ( !releaseEntityArray )
    goto LABEL_19;
  if ( !releaseEntityArray->max_length )
  {
    v14 = sub_B776C8(Instance);
    sub_B77668(v14, 0LL);
  }
  v6 = releaseEntityArray->m_Items[0];
  if ( !v6 )
    goto LABEL_19;
  v7 = (CommonUI_o *)Instance;
  closedMessage = v6->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( (BYTE3(EventRewardButtonChangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  static_fields = (struct EventRewardButtonChangeManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__34_0 = static_fields->__9__34_0;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__34_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__34_0,
      v12,
      Method_EventRewardButtonChangeManager___c__OnClickDisableLeftButton_b__34_0__,
      0LL);
    v13 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v13->__9__34_0 = _9__34_0;
    sub_B77560(&v13->__9__34_0);
  }
  if ( !v7 )
LABEL_19:
    sub_B7769C(Instance, v4);
  CommonUI__OpenNotificationDialog(v7, v11, closedMessage, _9__34_0, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
}


void __fastcall EventRewardButtonChangeManager__OnClickDisableRightButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  int32_t eventCount; // w8
  void *Instance; // x0
  __int64 v5; // x1
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v7; // x8
  CommonUI_o *v8; // x19
  System_String_o *closedMessage; // x20
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__36_0; // x22
  System_String_o *v12; // x21
  Il2CppObject *v13; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v14; // x0
  struct System_Action_o **p__9__36_0; // x0
  struct EventRewardSceneReleaseEntity_array *v16; // x8
  EventRewardSceneReleaseEntity_o *v17; // x8
  struct EventRewardButtonChangeManager___c_StaticFields *v18; // x8
  Il2CppObject *v19; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v20; // x0
  __int64 v21; // x0

  if ( (byte_4387EBD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_0__);
    sub_B775C4(&Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_1__);
    sub_B775C4(&EventRewardButtonChangeManager___c_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4387EBD = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  eventCount = this->fields.eventCount;
  if ( eventCount != 3 )
  {
    if ( eventCount != 2 )
      return;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    releaseEntityArray = this->fields.releaseEntityArray;
    if ( !releaseEntityArray )
LABEL_34:
      sub_B7769C(Instance, v5);
    if ( releaseEntityArray->max_length > 1 )
    {
      v7 = releaseEntityArray->m_Items[1];
      if ( !v7 )
        goto LABEL_34;
      v8 = (CommonUI_o *)Instance;
      closedMessage = v7->fields.closedMessage;
      Instance = EventRewardButtonChangeManager___c_TypeInfo;
      if ( (BYTE3(EventRewardButtonChangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
        Instance = EventRewardButtonChangeManager___c_TypeInfo;
      }
      static_fields = (struct EventRewardButtonChangeManager___c_StaticFields *)*((_QWORD *)Instance + 23);
      _9__36_0 = static_fields->__9__36_0;
      v12 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__36_0 )
      {
        if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
        }
        v13 = (Il2CppObject *)static_fields->__9;
        _9__36_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(
          _9__36_0,
          v13,
          Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_0__,
          0LL);
        v14 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
        v14->__9__36_0 = _9__36_0;
        p__9__36_0 = &v14->__9__36_0;
LABEL_30:
        sub_B77560(p__9__36_0);
        goto LABEL_31;
      }
      goto LABEL_31;
    }
LABEL_35:
    v21 = sub_B776C8(Instance);
    sub_B77668(v21, 0LL);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = this->fields.releaseEntityArray;
  if ( !v16 )
    goto LABEL_34;
  if ( v16->max_length <= 2 )
    goto LABEL_35;
  v17 = v16->m_Items[2];
  if ( !v17 )
    goto LABEL_34;
  v8 = (CommonUI_o *)Instance;
  closedMessage = v17->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( (BYTE3(EventRewardButtonChangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  v18 = (struct EventRewardButtonChangeManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__36_0 = v18->__9__36_1;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__36_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      v18 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)v18->__9;
    _9__36_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__36_0,
      v19,
      Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_1__,
      0LL);
    v20 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v20->__9__36_1 = _9__36_0;
    p__9__36_0 = &v20->__9__36_1;
    goto LABEL_30;
  }
LABEL_31:
  if ( !v8 )
    goto LABEL_34;
  CommonUI__OpenNotificationDialog(v8, v12, closedMessage, _9__36_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
  struct UICommonButton_array *v15; // x9
  __int64 v16; // x8
  __int64 v17; // x0

  v6 = this;
  if ( (byte_4387EB7 & 1) == 0 )
  {
    this = (EventRewardButtonChangeManager_o *)sub_B775C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    byte_4387EB7 = 1;
  }
  eventBtns = v6->fields.eventBtns;
  if ( !eventBtns )
LABEL_21:
    sub_B7769C(this, isDisp);
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
        this = (EventRewardButtonChangeManager_o *)*((_QWORD *)&v14->obj.klass + v11);
        if ( !this )
          goto LABEL_21;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
        {
LABEL_22:
          v17 = sub_B776C8(this);
          sub_B77668(v17, 0LL);
        }
        this = (EventRewardButtonChangeManager_o *)*((_QWORD *)&v15->obj.klass + v11);
        if ( !this )
          goto LABEL_21;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
        if ( !this )
          goto LABEL_21;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v9++ != currentEventSlotIndex && isDisp, 0LL);
      }
      v16 = v11 - 3;
      ++v11;
    }
    while ( v16 < v10 );
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
  System_String_o **v10; // x8
  struct UICommonButton_array *eventBtns; // x9
  System_String_o *v12; // x22
  struct UICommonButton_array *v13; // x8
  struct UISprite_array *eventBtnImages; // x8
  struct UnityEngine_GameObject_array *backImgObjs; // x8
  struct UnityEngine_GameObject_array *activeImgObjs; // x8
  const MethodInfo *v17; // x3
  struct UISprite_array *btnTxtSprites; // x8
  UISprite_o *v19; // x22
  const MethodInfo *v20; // x2
  System_String_o *v21; // x21
  struct UICommonButton_array *v22; // x8
  __int64 v23; // x0

  if ( (byte_4387EBA & 1) == 0 )
  {
    sub_B775C4(&EventRewardButtonChangeManager_TypeInfo);
    sub_B775C4(&EventRewardRootComponent_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4387EBA = 1;
  }
  if ( eventCount == 3 )
  {
    gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v10 = (System_String_o **)(*(_QWORD *)&gameObject[1].fields.specifyPressedColor.fields.b + 8LL);
  }
  else if ( eventCount == 2 )
  {
    gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v10 = (System_String_o **)(*(_QWORD *)&gameObject[1].fields.specifyPressedColor.fields.b + 24LL);
  }
  else
  {
    gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v10 = (System_String_o **)(*(_QWORD *)&gameObject[1].fields.specifyPressedColor.fields.b + 40LL);
  }
  eventBtns = this->fields.eventBtns;
  if ( !eventBtns )
    goto LABEL_43;
  if ( eventBtns->max_length <= tabPriority )
    goto LABEL_44;
  gameObject = eventBtns->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_43;
  v12 = *v10;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
  v13 = this->fields.eventBtns;
  if ( !v13 )
    goto LABEL_43;
  if ( v13->max_length <= tabPriority )
    goto LABEL_44;
  gameObject = v13->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_43;
  gameObject = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  gameObject = (UICommonButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     (UnityEngine_GameObject_o *)gameObject,
                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  eventBtnImages = this->fields.eventBtnImages;
  if ( !eventBtnImages )
    goto LABEL_43;
  if ( eventBtnImages->max_length <= tabPriority )
    goto LABEL_44;
  gameObject = (UICommonButton_o *)eventBtnImages->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_43;
  UISprite__set_spriteName((UISprite_o *)gameObject, v12, 0LL);
  backImgObjs = this->fields.backImgObjs;
  if ( !backImgObjs )
    goto LABEL_43;
  if ( backImgObjs->max_length <= tabPriority )
    goto LABEL_44;
  gameObject = (UICommonButton_o *)backImgObjs->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  activeImgObjs = this->fields.activeImgObjs;
  if ( !activeImgObjs )
    goto LABEL_43;
  if ( activeImgObjs->max_length <= tabPriority )
    goto LABEL_44;
  gameObject = (UICommonButton_o *)activeImgObjs->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  btnTxtSprites = this->fields.btnTxtSprites;
  if ( !btnTxtSprites )
    goto LABEL_43;
  if ( btnTxtSprites->max_length <= tabPriority )
    goto LABEL_44;
  v19 = btnTxtSprites->m_Items[tabPriority];
  v21 = EventRewardButtonChangeManager__GetReleaseBtnSpriteName(
          (EventRewardButtonChangeManager_o *)gameObject,
          eventId,
          tabPriority,
          v17);
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  gameObject = (UICommonButton_o *)EventRewardRootComponent__setRewardInfoImg(v19, v21, v20);
  v22 = this->fields.eventBtns;
  if ( !v22 )
LABEL_43:
    sub_B7769C(gameObject, *(_QWORD *)&eventId);
  if ( v22->max_length <= tabPriority )
  {
LABEL_44:
    v23 = sub_B776C8(gameObject);
    sub_B77668(v23, 0LL);
  }
  gameObject = v22->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_43;
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
  sub_B77560(&this->fields.releaseEntityArray);
  v5->fields.RequestEndCallBack = effectEndCallBack;
  v5 = (EventRewardButtonChangeManager_o *)((char *)v5 + 120);
  v5[-1].fields.releaseSlot = closedImageId;
  sub_B77560(v5);
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
  EventRewardButtonChangeManager_c *v14; // x0
  System_String_o **p_RELEASE_EFFECT_3TAB_NAME; // x8
  EventRewardButtonChangeManager_c *v16; // x0
  EventRewardButtonChangeManager_c *v17; // x0
  AssetData_o *efffectData; // x0
  struct UnityEngine_GameObject_array *effectObject; // x25
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x23
  AssetData_o *v21; // x23
  Il2CppClass **v22; // x0
  struct UnityEngine_GameObject_array *v23; // x8
  TabOpenEffectComponent_o *v24; // x23
  struct UnityEngine_GameObject_array *v25; // x8
  struct UISprite_array *eventBtnImages; // x8
  UnityEngine_Transform_o *v27; // x21
  struct UnityEngine_GameObject_array *v28; // x8
  UnityEngine_Transform_o *transform; // x21
  int v30; // s0
  struct UnityEngine_GameObject_array *v33; // x8
  UnityEngine_Transform_o *v34; // x19
  int v35; // s0
  __int64 v38; // x0
  __int64 v39; // x0

  if ( (byte_4387EB8 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&EventRewardButtonChangeManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4387EB8 = 1;
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
    v16 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v16 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_RELEASE_EFFECT_3TAB_NAME = &v16->static_fields->RELEASE_EFFECT_3TAB_NAME;
  }
  else if ( eventCount == 2 )
  {
    v14 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v14 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_RELEASE_EFFECT_3TAB_NAME = &v14->static_fields->RELEASE_EFFECT_2TAB_NAME;
  }
  else
  {
    v17 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v17 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_RELEASE_EFFECT_3TAB_NAME = &v17->static_fields->RELEASE_EFFECT_4TAB_NAME;
  }
  efffectData = this->fields.efffectData;
  if ( !efffectData )
    goto LABEL_45;
  effectObject = this->fields.effectObject;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               efffectData,
                                                                               *p_RELEASE_EFFECT_3TAB_NAME,
                                                                               (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  efffectData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 Object_WarBoardWaitTimeSetting,
                                 (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectObject )
    goto LABEL_45;
  v21 = efffectData;
  if ( efffectData )
  {
    efffectData = (AssetData_o *)sub_B77684(efffectData, effectObject->obj.klass->_1.element_class);
    if ( !efffectData )
    {
      v39 = sub_B776BC();
      sub_B77668(v39, 0LL);
    }
  }
  if ( effectObject->max_length <= slot )
    goto LABEL_46;
  v22 = &effectObject->obj.klass + slot;
  v22[4] = (Il2CppClass *)v21;
  sub_B77560(v22 + 4);
  v23 = this->fields.effectObject;
  if ( !v23 )
    goto LABEL_45;
  if ( v23->max_length <= slot )
  {
LABEL_46:
    v38 = sub_B776C8(efffectData);
    sub_B77668(v38, 0LL);
  }
  efffectData = (AssetData_o *)v23->m_Items[slot];
  if ( !efffectData )
    goto LABEL_45;
  efffectData = (AssetData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 (UnityEngine_GameObject_o *)efffectData,
                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
  if ( !efffectData )
    goto LABEL_45;
  v24 = (TabOpenEffectComponent_o *)efffectData;
  TabOpenEffectComponent__SetChangeUICallback((TabOpenEffectComponent_o *)efffectData, changeCallback, 0LL);
  TabOpenEffectComponent__SetAnimationEndCallback(v24, endCallback, 0LL);
  v25 = this->fields.effectObject;
  if ( !v25 )
    goto LABEL_45;
  if ( v25->max_length <= slot )
    goto LABEL_46;
  efffectData = (AssetData_o *)v25->m_Items[slot];
  if ( !efffectData )
    goto LABEL_45;
  efffectData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)efffectData, 0LL);
  eventBtnImages = this->fields.eventBtnImages;
  if ( !eventBtnImages )
    goto LABEL_45;
  if ( eventBtnImages->max_length <= slot )
    goto LABEL_46;
  v27 = (UnityEngine_Transform_o *)efffectData;
  efffectData = (AssetData_o *)eventBtnImages->m_Items[slot];
  if ( !efffectData )
    goto LABEL_45;
  efffectData = (AssetData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)efffectData, 0LL);
  if ( !v27 )
    goto LABEL_45;
  UnityEngine_Transform__set_parent(v27, (UnityEngine_Transform_o *)efffectData, 0LL);
  v28 = this->fields.effectObject;
  if ( !v28 )
    goto LABEL_45;
  if ( v28->max_length <= slot )
    goto LABEL_46;
  efffectData = (AssetData_o *)v28->m_Items[slot];
  if ( !efffectData
    || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)efffectData, 0LL),
        *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v30, 0LL),
        (v33 = this->fields.effectObject) == 0LL) )
  {
LABEL_45:
    sub_B7769C(efffectData, v13);
  }
  if ( v33->max_length <= slot )
    goto LABEL_46;
  efffectData = (AssetData_o *)v33->m_Items[slot];
  if ( !efffectData )
    goto LABEL_45;
  v34 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)efffectData, 0LL);
  *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Vector3__get_one(0LL);
  if ( !v34 )
    goto LABEL_45;
  UnityEngine_Transform__set_localScale(v34, *(UnityEngine_Vector3_o *)&v35, 0LL);
  TabOpenEffectComponent__PlayAnimation(v24, 0LL);
}


void __fastcall EventRewardButtonChangeManager__SetReleaseEffectData(
        EventRewardButtonChangeManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( data )
  {
    this->fields.efffectData = data;
    sub_B77560(&this->fields.efffectData);
  }
}


void __fastcall EventRewardButtonChangeManager__StartTutorialRequest(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  unsigned int releaseSlot; // w8
  int32_t v4; // w20
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  TutorialEventSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v7; // x1

  if ( (byte_4387EBE & 1) == 0 )
  {
    sub_B775C4(&Method_EventRewardButtonChangeManager_EndTutorialRequest__);
    sub_B775C4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4387EBE = 1;
  }
  releaseSlot = this->fields.releaseSlot;
  if ( releaseSlot >= 3 )
    v4 = -1;
  else
    v4 = releaseSlot + 25;
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventRewardButtonChangeManager_EndTutorialRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v5,
                                                                     (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B7769C(0LL, v7);
  TutorialEventSetRequest__beginRequest(Request_WarBoardWallAttackRequest, v4, this->fields.eventId, 0LL);
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
  __int64 v9; // x21
  int max_length; // w9
  __int64 v11; // x0

  if ( (byte_4387EB5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_B775C4(&UnityEngine_GameObject___TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4387EB5 = 1;
  }
  this->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
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
    {
      v11 = sub_B776C8(Instance);
      sub_B77668(v11, 0LL);
    }
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
    sub_B7769C(Instance, v6);
  this->fields.effectObject = (struct UnityEngine_GameObject_array *)sub_B775DC(
                                                                       UnityEngine_GameObject___TypeInfo,
                                                                       LODWORD(v8->fields.datalist));
  sub_B77560(&this->fields.effectObject);
}


void __fastcall EventRewardButtonChangeManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x0

  if ( (byte_438800B & 1) == 0 )
  {
    sub_B775C4(&EventRewardButtonChangeManager___c_TypeInfo);
    byte_438800B = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventRewardButtonChangeManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRewardButtonChangeManager___c_o *)v1;
  sub_B77560(static_fields);
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
  __int64 v3; // x1

  if ( (byte_438800D & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438800D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableLeftButton_b__34_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_438800C & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438800C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableRightButton_b__36_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_438800E & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438800E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableRightButton_b__36_1(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_438800F & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438800F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}