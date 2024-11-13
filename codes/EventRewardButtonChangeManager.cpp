void __fastcall EventRewardButtonChangeManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  struct EventRewardButtonChangeManager_StaticFields *static_fields; // x0
  __int64 v25; // x1
  struct EventRewardButtonChangeManager_StaticFields *v26; // x0
  __int64 v27; // x1
  struct EventRewardButtonChangeManager_StaticFields *v28; // x0
  __int64 v29; // x1
  struct EventRewardButtonChangeManager_StaticFields *v30; // x0
  __int64 v31; // x1
  struct EventRewardButtonChangeManager_StaticFields *v32; // x0
  __int64 v33; // x1
  struct EventRewardButtonChangeManager_StaticFields *v34; // x0
  __int64 v35; // x1
  struct EventRewardButtonChangeManager_StaticFields *v36; // x0
  __int64 v37; // x1
  struct EventRewardButtonChangeManager_StaticFields *v38; // x0
  struct EventRewardButtonChangeManager_StaticFields *v39; // x0
  __int64 v40; // x1

  if ( (byte_4B1116E & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardButtonChangeManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17668/*"btn_bg_on_1"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_17669/*"btn_bg_on_2"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_17670/*"btn_bg_on_4"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_18989/*"ef_2tab_open"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17665/*"btn_bg_off_4"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17663/*"btn_bg_off_1"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_18991/*"ef_4tab_open"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_18990/*"ef_3tab_open"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_17664/*"btn_bg_off_2"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_17682/*"btn_disable_txt_"*/, v21, v22);
    byte_4B1116E = 1;
  }
  EventRewardButtonChangeManager_TypeInfo->static_fields->BTN_NAME_TYPE3_ON = (struct System_String_o *)StringLiteral_17668/*"btn_bg_on_1"*/;
  sub_1BCA784(EventRewardButtonChangeManager_TypeInfo->static_fields, StringLiteral_17668/*"btn_bg_on_1"*/);
  v23 = StringLiteral_17663/*"btn_bg_off_1"*/;
  static_fields = EventRewardButtonChangeManager_TypeInfo->static_fields;
  static_fields->BTN_NAME_TYPE3_OFF = (struct System_String_o *)StringLiteral_17663/*"btn_bg_off_1"*/;
  sub_1BCA784(&static_fields->BTN_NAME_TYPE3_OFF, v23);
  v25 = StringLiteral_17669/*"btn_bg_on_2"*/;
  v26 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v26->BTN_NAME_TYPE2_ON = (struct System_String_o *)StringLiteral_17669/*"btn_bg_on_2"*/;
  sub_1BCA784(&v26->BTN_NAME_TYPE2_ON, v25);
  v27 = StringLiteral_17664/*"btn_bg_off_2"*/;
  v28 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v28->BTN_NAME_TYPE2_OFF = (struct System_String_o *)StringLiteral_17664/*"btn_bg_off_2"*/;
  sub_1BCA784(&v28->BTN_NAME_TYPE2_OFF, v27);
  v29 = StringLiteral_17670/*"btn_bg_on_4"*/;
  v30 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v30->BTN_NAME_TYPE4_ON = (struct System_String_o *)StringLiteral_17670/*"btn_bg_on_4"*/;
  sub_1BCA784(&v30->BTN_NAME_TYPE4_ON, v29);
  v31 = StringLiteral_17665/*"btn_bg_off_4"*/;
  v32 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v32->BTN_NAME_TYPE4_OFF = (struct System_String_o *)StringLiteral_17665/*"btn_bg_off_4"*/;
  sub_1BCA784(&v32->BTN_NAME_TYPE4_OFF, v31);
  v33 = StringLiteral_18991/*"ef_4tab_open"*/;
  v34 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v34->RELEASE_EFFECT_4TAB_NAME = (struct System_String_o *)StringLiteral_18991/*"ef_4tab_open"*/;
  sub_1BCA784(&v34->RELEASE_EFFECT_4TAB_NAME, v33);
  v35 = StringLiteral_18990/*"ef_3tab_open"*/;
  v36 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v36->RELEASE_EFFECT_3TAB_NAME = (struct System_String_o *)StringLiteral_18990/*"ef_3tab_open"*/;
  sub_1BCA784(&v36->RELEASE_EFFECT_3TAB_NAME, v35);
  v37 = StringLiteral_18989/*"ef_2tab_open"*/;
  v38 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v38->RELEASE_EFFECT_2TAB_NAME = (struct System_String_o *)StringLiteral_18989/*"ef_2tab_open"*/;
  sub_1BCA784(&v38->RELEASE_EFFECT_2TAB_NAME, v37);
  v39 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v40 = StringLiteral_17682/*"btn_disable_txt_"*/;
  v39->DISABLE_BTN_TXT = (struct System_String_o *)StringLiteral_17682/*"btn_disable_txt_"*/;
  sub_1BCA784(&v39->DISABLE_BTN_TXT, v40);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  il2cpp_array_size_t max_length; // w19
  struct UnityEngine_GameObject_array *backImgObjs; // x8
  System_String_o **p_max_length; // x9
  struct UnityEngine_GameObject_array *p_bounds; // x8
  System_String_o *v26; // x24
  Il2CppClass *klass; // x29
  unsigned __int64 v28; // x21
  int v29; // w19
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  struct UICommonButton_array *eventBtns; // x8
  struct UICommonButton_array *v32; // x8
  struct UISprite_array *eventBtnImages; // x8
  struct UnityEngine_GameObject_array *v34; // x8
  struct UnityEngine_GameObject_array *activeImgObjs; // x8
  struct UISprite_array *btnTxtSprites; // x8
  UISprite_o *v37; // x25
  struct EventRewardSceneReleaseEntity_array *v38; // x8
  EventRewardSceneReleaseEntity_o *v39; // x8
  System_String_o *v40; // x26
  System_String_o *v41; // x0
  __int64 v42; // x1
  System_String_o *v43; // x26
  struct UICommonButton_array *v44; // x8
  struct UnityEngine_GameObject_array *tabColliders; // x8
  struct UICommonButton_array *v46; // x8
  bool v47; // w25
  struct UICommonButton_array *v48; // x8
  struct UISprite_array *v49; // x8
  System_String_o *v50; // x1
  struct UnityEngine_GameObject_array *v51; // x8
  struct UnityEngine_GameObject_array *v52; // x8
  System_String_o **v53; // x25
  struct UISprite_array *v54; // x8
  System_String_o *v55; // x26
  UISprite_o *v56; // x25
  EventRewardSceneEntity_o *v57; // x8
  EventRewardButtonChangeManager_o *v58; // x27
  System_String_o *v59; // x0
  __int64 v60; // x1
  System_String_o *v61; // x26
  struct UICommonButton_array *v62; // x8
  struct UISprite_array *v63; // x8
  EventRewardButtonChangeManager_c *v64; // x0
  UISprite_o *v65; // x21
  System_String_o *DISABLE_BTN_TXT; // x22
  System_String_o *v67; // x0
  __int64 v68; // x1
  System_String_o *v69; // x22
  struct UICommonButton_array *v70; // x8
  int32_t v71; // [xsp+0h] [xbp-70h]
  bool v72; // [xsp+8h] [xbp-68h]
  int32_t v73; // [xsp+Ch] [xbp-64h] BYREF

  v11 = this;
  v73 = currentEventId;
  if ( (byte_4B11165 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardButtonChangeManager_TypeInfo, *(_QWORD *)&priorityId, *(_QWORD *)&currentEventId);
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v14, v15);
    sub_1BCA7E0(&StringLiteral_17769/*"btn_txt_on_"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v18, v19);
    this = (EventRewardButtonChangeManager_o *)sub_1BCA7E0(&StringLiteral_17763/*"btn_txt_off_"*/, v20, v21);
    byte_4B11165 = 1;
  }
  if ( !eventRewardSceneEnt )
    goto LABEL_97;
  max_length = eventRewardSceneEnt->max_length;
  v71 = openSlot;
  v11->fields.eventCount = max_length;
  v72 = openedTab;
  if ( max_length == 2 )
  {
    this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo, *(_QWORD *)&priorityId);
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
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo, *(_QWORD *)&priorityId);
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
    v26 = *p_max_length;
    klass = p_bounds->obj.klass;
    v28 = 0LL;
    v29 = 0;
    do
    {
      releaseEntityArray = v11->fields.releaseEntityArray;
      if ( !releaseEntityArray )
        goto LABEL_51;
      if ( v28 >= releaseEntityArray->max_length )
        goto LABEL_98;
      if ( releaseEntityArray->m_Items[v28] )
      {
        eventBtns = v11->fields.eventBtns;
        if ( !eventBtns )
          goto LABEL_97;
        if ( v28 >= eventBtns->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)eventBtns->m_Items[v28];
        if ( !this )
          goto LABEL_97;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        v32 = v11->fields.eventBtns;
        if ( !v32 )
          goto LABEL_97;
        if ( v28 >= v32->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v32->m_Items[v28];
        if ( !this )
          goto LABEL_97;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_97;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( !this )
          goto LABEL_97;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
        eventBtnImages = v11->fields.eventBtnImages;
        if ( !eventBtnImages )
          goto LABEL_97;
        if ( v28 >= eventBtnImages->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)eventBtnImages->m_Items[v28];
        if ( !this )
          goto LABEL_97;
        UISprite__set_spriteName((UISprite_o *)this, v26, 0LL);
        v34 = v11->fields.backImgObjs;
        if ( !v34 )
          goto LABEL_97;
        if ( v28 >= v34->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v34->m_Items[v28];
        if ( !this )
          goto LABEL_97;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        activeImgObjs = v11->fields.activeImgObjs;
        if ( !activeImgObjs )
          goto LABEL_97;
        if ( v28 >= activeImgObjs->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)activeImgObjs->m_Items[v28];
        if ( !this )
          goto LABEL_97;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        btnTxtSprites = v11->fields.btnTxtSprites;
        if ( !btnTxtSprites )
          goto LABEL_97;
        if ( v28 >= btnTxtSprites->max_length )
          goto LABEL_98;
        v37 = btnTxtSprites->m_Items[v28];
        this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
        if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo, *(_QWORD *)&priorityId);
          this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
        }
        v38 = v11->fields.releaseEntityArray;
        if ( !v38 )
          goto LABEL_97;
        if ( v28 >= v38->max_length )
          goto LABEL_98;
        v39 = v38->m_Items[v28];
        if ( !v39 )
          goto LABEL_97;
        v40 = (System_String_o *)this[1].fields.backImgObjs->m_Items[5];
        v41 = System_Int32__ToString((int)v39 + 36, 0LL);
        v43 = System_String__Concat_62401220(v40, v41, 0LL);
        if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v42);
        this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v37, v43, 0LL);
        v44 = v11->fields.eventBtns;
        if ( !v44 )
          goto LABEL_97;
        if ( v28 >= v44->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v44->m_Items[v28];
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
        if ( v28 >= tabColliders->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)tabColliders->m_Items[v28];
        if ( !this )
          goto LABEL_97;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      }
      else
      {
LABEL_51:
        v46 = v11->fields.eventBtns;
        if ( !v46 )
          goto LABEL_97;
        if ( v28 >= v46->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v46->m_Items[v28];
        if ( !this )
          goto LABEL_97;
        v47 = v29 != priorityId;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v29 != priorityId, 0LL);
        v48 = v11->fields.eventBtns;
        if ( !v48 )
          goto LABEL_97;
        if ( v28 >= v48->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v48->m_Items[v28];
        if ( !this )
          goto LABEL_97;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_97;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( !this )
          goto LABEL_97;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v47, 0LL);
        v49 = v11->fields.eventBtnImages;
        if ( !v49 )
          goto LABEL_97;
        if ( v28 >= v49->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v49->m_Items[v28];
        if ( !this )
          goto LABEL_97;
        v50 = v29 == priorityId ? (System_String_o *)klass : v26;
        UISprite__set_spriteName((UISprite_o *)this, v50, 0LL);
        v51 = v11->fields.backImgObjs;
        if ( !v51 )
          goto LABEL_97;
        if ( v28 >= v51->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v51->m_Items[v28];
        if ( !this )
          goto LABEL_97;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v47, 0LL);
        v52 = v11->fields.activeImgObjs;
        if ( !v52 )
          goto LABEL_97;
        if ( v28 >= v52->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v52->m_Items[v28];
        if ( !this )
          goto LABEL_97;
        v53 = (System_String_o **)(v29 == priorityId ? &StringLiteral_17769/*"btn_txt_on_"*/ : &StringLiteral_17763/*"btn_txt_off_"*/);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v29 == priorityId, 0LL);
        v54 = v11->fields.btnTxtSprites;
        if ( !v54 )
          goto LABEL_97;
        if ( v28 >= v54->max_length )
          goto LABEL_98;
        v55 = *v53;
        v56 = v54->m_Items[v28];
        this = (EventRewardButtonChangeManager_o *)System_Int32__ToString((int32_t)&v73, 0LL);
        if ( v28 >= eventRewardSceneEnt->max_length )
          goto LABEL_98;
        v57 = eventRewardSceneEnt->m_Items[v28];
        if ( !v57 )
          goto LABEL_97;
        v58 = this;
        v59 = System_Int32__ToString((int)v57 + 20, 0LL);
        v61 = System_String__Concat_62414484(
                v55,
                (System_String_o *)v58,
                (System_String_o *)StringLiteral_16290/*"_"*/,
                v59,
                0LL);
        if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v60);
        this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v56, v61, 0LL);
        v62 = v11->fields.eventBtns;
        if ( !v62 )
          goto LABEL_97;
        if ( v28 >= v62->max_length )
          goto LABEL_98;
        this = (EventRewardButtonChangeManager_o *)v62->m_Items[v28];
        if ( !this )
          goto LABEL_97;
        this = (EventRewardButtonChangeManager_o *)((__int64 (__fastcall *)(EventRewardButtonChangeManager_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                                     this,
                                                     0LL,
                                                     0LL,
                                                     this->klass[1]._1.interfaceOffsets);
        ++v29;
      }
      ++v28;
    }
    while ( (__int64)v28 < v11->fields.eventCount );
  }
  if ( v72 )
  {
    v63 = v11->fields.btnTxtSprites;
    if ( !v63 )
      goto LABEL_97;
    if ( v63->max_length <= v71 )
      goto LABEL_98;
    v64 = EventRewardButtonChangeManager_TypeInfo;
    v65 = v63->m_Items[v71];
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo, *(_QWORD *)&priorityId);
      v64 = EventRewardButtonChangeManager_TypeInfo;
    }
    DISABLE_BTN_TXT = v64->static_fields->DISABLE_BTN_TXT;
    v67 = System_Int32__ToString((int)v11 + 116, 0LL);
    v69 = System_String__Concat_62401220(DISABLE_BTN_TXT, v67, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v68);
    this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v65, v69, 0LL);
    v70 = v11->fields.eventBtns;
    if ( !v70 )
      goto LABEL_97;
    if ( v70->max_length <= v71 )
LABEL_98:
      sub_1BCAA44(this, *(_QWORD *)&priorityId);
    this = (EventRewardButtonChangeManager_o *)v70->m_Items[v71];
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
    sub_1BCAA3C(this, *(_QWORD *)&priorityId);
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
    sub_1BCA784(p_RequestEndCallBack, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  int32_t ReleaseTabImageId; // w0
  __int64 v13; // x1
  EventRewardButtonChangeManager_c *v14; // x8
  System_String_o *DISABLE_BTN_TXT; // x19
  System_String_o *v16; // x0
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B11168 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_EventRewardSceneReleaseMaster___,
      *(_QWORD *)&eventId,
      *(_QWORD *)&releaseTabPriority);
    sub_1BCA7E0(&EventRewardButtonChangeManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B11168 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRewardSceneReleaseMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v11);
  }
  ReleaseTabImageId = EventRewardSceneReleaseMaster__getReleaseTabImageId(
                        (EventRewardSceneReleaseMaster_o *)Instance,
                        eventId,
                        releaseTabPriority,
                        0LL);
  v14 = EventRewardButtonChangeManager_TypeInfo;
  v18 = ReleaseTabImageId;
  if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo, v13);
    v14 = EventRewardButtonChangeManager_TypeInfo;
  }
  DISABLE_BTN_TXT = v14->static_fields->DISABLE_BTN_TXT;
  v16 = System_Int32__ToString((int32_t)&v18, 0LL);
  return System_String__Concat_62401220(DISABLE_BTN_TXT, v16, 0LL);
}


void __fastcall EventRewardButtonChangeManager__OnClickDisableCenterButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  void *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v21; // x8
  CommonUI_o *v22; // x19
  System_String_o *closedMessage; // x20
  System_String_o *v24; // x21
  System_Action_o *v25; // x22
  Il2CppObject *v26; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x0

  if ( (byte_4B1116B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventRewardButtonChangeManager_OnClickDisableCenterButton__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_EventRewardButtonChangeManager___c__OnClickDisableCenterButton_b__35_0__, v8, v9);
    sub_1BCA7E0(&EventRewardButtonChangeManager___c_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    byte_4B1116B = 1;
  }
  v14 = Method_EventRewardButtonChangeManager_OnClickDisableCenterButton__;
  if ( (*((_BYTE *)Method_EventRewardButtonChangeManager_OnClickDisableCenterButton__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1BCA7F8(Method_EventRewardButtonChangeManager_OnClickDisableCenterButton__);
  v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  releaseEntityArray = this->fields.releaseEntityArray;
  if ( !releaseEntityArray )
    goto LABEL_16;
  if ( releaseEntityArray->max_length <= 1 )
    sub_1BCAA44(Instance, v17);
  v21 = releaseEntityArray->m_Items[1];
  if ( !v21 )
    goto LABEL_16;
  v22 = (CommonUI_o *)Instance;
  closedMessage = v21->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo, v17);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  v24 = (System_String_o *)StringLiteral_1/*""*/;
  v25 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v25 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v17);
      Instance = EventRewardButtonChangeManager___c_TypeInfo;
    }
    v26 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
    System_Action___ctor(v25, v26, Method_EventRewardButtonChangeManager___c__OnClickDisableCenterButton_b__35_0__, 0LL);
    static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    static_fields->__9__35_0 = v25;
    Instance = (void *)sub_1BCA784(&static_fields->__9__35_0, v25);
  }
  if ( !v22 )
LABEL_16:
    sub_1BCAA3C(Instance, v17);
  CommonUI__OpenNotificationDialog(v22, v24, closedMessage, v25, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


void __fastcall EventRewardButtonChangeManager__OnClickDisableLeftButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  void *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v21; // x8
  CommonUI_o *v22; // x19
  System_String_o *closedMessage; // x20
  System_String_o *v24; // x21
  System_Action_o *v25; // x22
  Il2CppObject *v26; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x0

  if ( (byte_4B1116A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventRewardButtonChangeManager_OnClickDisableLeftButton__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_EventRewardButtonChangeManager___c__OnClickDisableLeftButton_b__34_0__, v8, v9);
    sub_1BCA7E0(&EventRewardButtonChangeManager___c_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    byte_4B1116A = 1;
  }
  v14 = Method_EventRewardButtonChangeManager_OnClickDisableLeftButton__;
  if ( (*((_BYTE *)Method_EventRewardButtonChangeManager_OnClickDisableLeftButton__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1BCA7F8(Method_EventRewardButtonChangeManager_OnClickDisableLeftButton__);
  v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  releaseEntityArray = this->fields.releaseEntityArray;
  if ( !releaseEntityArray )
    goto LABEL_16;
  if ( !releaseEntityArray->max_length )
    sub_1BCAA44(Instance, v17);
  v21 = releaseEntityArray->m_Items[0];
  if ( !v21 )
    goto LABEL_16;
  v22 = (CommonUI_o *)Instance;
  closedMessage = v21->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo, v17);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  v24 = (System_String_o *)StringLiteral_1/*""*/;
  v25 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v25 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v17);
      Instance = EventRewardButtonChangeManager___c_TypeInfo;
    }
    v26 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
    System_Action___ctor(v25, v26, Method_EventRewardButtonChangeManager___c__OnClickDisableLeftButton_b__34_0__, 0LL);
    static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = v25;
    Instance = (void *)sub_1BCA784(&static_fields->__9__34_0, v25);
  }
  if ( !v22 )
LABEL_16:
    sub_1BCAA3C(Instance, v17);
  CommonUI__OpenNotificationDialog(v22, v24, closedMessage, v25, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
}


void __fastcall EventRewardButtonChangeManager__OnClickDisableRightButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  int32_t eventCount; // w8
  void *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v24; // x8
  CommonUI_o *v25; // x19
  System_String_o *closedMessage; // x20
  System_Action_o *v27; // x22
  System_String_o *v28; // x21
  Il2CppObject *v29; // x23
  System_Action_o *v30; // x1
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x0
  struct System_Action_o **p__9__36_0; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  struct EventRewardSceneReleaseEntity_array *v35; // x8
  EventRewardSceneReleaseEntity_o *v36; // x8
  Il2CppObject *v37; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v38; // x0

  if ( (byte_4B1116C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventRewardButtonChangeManager_OnClickDisableRightButton__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_0__, v8, v9);
    sub_1BCA7E0(&Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_1__, v10, v11);
    sub_1BCA7E0(&EventRewardButtonChangeManager___c_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B1116C = 1;
  }
  v16 = Method_EventRewardButtonChangeManager_OnClickDisableRightButton__;
  if ( (*((_BYTE *)Method_EventRewardButtonChangeManager_OnClickDisableRightButton__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1BCA7F8(Method_EventRewardButtonChangeManager_OnClickDisableRightButton__);
  v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0LL);
  eventCount = this->fields.eventCount;
  if ( eventCount != 3 )
  {
    if ( eventCount != 2 )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    releaseEntityArray = this->fields.releaseEntityArray;
    if ( !releaseEntityArray )
LABEL_29:
      sub_1BCAA3C(Instance, v20);
    if ( releaseEntityArray->max_length > 1 )
    {
      v24 = releaseEntityArray->m_Items[1];
      if ( !v24 )
        goto LABEL_29;
      v25 = (CommonUI_o *)Instance;
      closedMessage = v24->fields.closedMessage;
      Instance = EventRewardButtonChangeManager___c_TypeInfo;
      if ( !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo, v20);
        Instance = EventRewardButtonChangeManager___c_TypeInfo;
      }
      v27 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 24LL);
      v28 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v27 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance, v20);
          Instance = EventRewardButtonChangeManager___c_TypeInfo;
        }
        v29 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
        System_Action___ctor(
          v27,
          v29,
          Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_0__,
          0LL);
        v30 = v27;
        static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
        static_fields->__9__36_0 = v27;
        p__9__36_0 = &static_fields->__9__36_0;
LABEL_25:
        Instance = (void *)sub_1BCA784(p__9__36_0, v30);
        goto LABEL_26;
      }
      goto LABEL_26;
    }
LABEL_30:
    sub_1BCAA44(Instance, v20);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35 = this->fields.releaseEntityArray;
  if ( !v35 )
    goto LABEL_29;
  if ( v35->max_length <= 2 )
    goto LABEL_30;
  v36 = v35->m_Items[2];
  if ( !v36 )
    goto LABEL_29;
  v25 = (CommonUI_o *)Instance;
  closedMessage = v36->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo, v20);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  v27 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 32LL);
  v28 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !v27 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v20);
      Instance = EventRewardButtonChangeManager___c_TypeInfo;
    }
    v37 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v33, v34);
    System_Action___ctor(v27, v37, Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_1__, 0LL);
    v30 = v27;
    v38 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v38->__9__36_1 = v27;
    p__9__36_0 = &v38->__9__36_1;
    goto LABEL_25;
  }
LABEL_26:
  if ( !v25 )
    goto LABEL_29;
  CommonUI__OpenNotificationDialog(v25, v28, closedMessage, v27, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
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
  if ( (byte_4B11166 & 1) == 0 )
  {
    this = (EventRewardButtonChangeManager_o *)sub_1BCA7E0(
                                                 &Method_UnityEngine_Component_GetComponent_BoxCollider___,
                                                 isDisp,
                                                 *(_QWORD *)&currentEventSlotIndex);
    byte_4B11166 = 1;
  }
  eventBtns = v6->fields.eventBtns;
  if ( !eventBtns )
LABEL_21:
    sub_1BCAA3C(this, isDisp);
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
                                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
          sub_1BCAA44(this, isDisp);
        this = (EventRewardButtonChangeManager_o *)*((_QWORD *)&v15->obj.klass + i);
        if ( !this )
          goto LABEL_21;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UICommonButton_o *gameObject; // x0
  __int64 v14; // x9
  struct UICommonButton_array *eventBtns; // x8
  UnityEngine_Behaviour_o *v16; // x8
  System_String_o *v17; // x22
  struct UICommonButton_array *v18; // x8
  struct UISprite_array *eventBtnImages; // x8
  struct UnityEngine_GameObject_array *backImgObjs; // x8
  struct UnityEngine_GameObject_array *activeImgObjs; // x8
  const MethodInfo *v22; // x3
  struct UISprite_array *btnTxtSprites; // x8
  UISprite_o *v24; // x22
  __int64 v25; // x1
  System_String_o *v26; // x21
  struct UICommonButton_array *v27; // x8

  if ( (byte_4B11169 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardButtonChangeManager_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&tabPriority);
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v11, v12);
    byte_4B11169 = 1;
  }
  if ( eventCount == 3 )
  {
    gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo, *(_QWORD *)&eventId);
      gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v14 = 8LL;
  }
  else if ( eventCount == 2 )
  {
    gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo, *(_QWORD *)&eventId);
      gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v14 = 24LL;
  }
  else
  {
    gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo, *(_QWORD *)&eventId);
      gameObject = (UICommonButton_o *)EventRewardButtonChangeManager_TypeInfo;
    }
    v14 = 40LL;
  }
  eventBtns = this->fields.eventBtns;
  if ( !eventBtns )
    goto LABEL_39;
  if ( eventBtns->max_length <= tabPriority )
    goto LABEL_40;
  v16 = (UnityEngine_Behaviour_o *)eventBtns->m_Items[tabPriority];
  if ( !v16 )
    goto LABEL_39;
  v17 = *(System_String_o **)(*(_QWORD *)&gameObject[1].fields.specifyHoverColor.fields.b + v14);
  UnityEngine_Behaviour__set_enabled(v16, 0, 0LL);
  v18 = this->fields.eventBtns;
  if ( !v18 )
    goto LABEL_39;
  if ( v18->max_length <= tabPriority )
    goto LABEL_40;
  gameObject = v18->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_39;
  gameObject = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  gameObject = (UICommonButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)gameObject,
                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
  UISprite__set_spriteName((UISprite_o *)gameObject, v17, 0LL);
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
  v24 = btnTxtSprites->m_Items[tabPriority];
  v26 = EventRewardButtonChangeManager__GetReleaseBtnSpriteName(
          (EventRewardButtonChangeManager_o *)gameObject,
          eventId,
          tabPriority,
          v22);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v25);
  gameObject = (UICommonButton_o *)EventRewardRootComponent__setRewardInfoImg(v24, v26, 0LL);
  v27 = this->fields.eventBtns;
  if ( !v27 )
LABEL_39:
    sub_1BCAA3C(gameObject, *(_QWORD *)&eventId);
  if ( v27->max_length <= tabPriority )
LABEL_40:
    sub_1BCAA44(gameObject, *(_QWORD *)&eventId);
  gameObject = v27->m_Items[tabPriority];
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
  sub_1BCA784(&this->fields.releaseEntityArray, entitys);
  v5->fields.RequestEndCallBack = effectEndCallBack;
  v5 = (EventRewardButtonChangeManager_o *)((char *)v5 + 128);
  v5[-1].fields.releaseSlot = closedImageId;
  sub_1BCA784(v5, effectEndCallBack);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 Component_object; // x0
  __int64 v23; // x9
  struct UnityEngine_GameObject_array *effectObject; // x25
  __int64 v25; // x1
  Il2CppObject *Object_object__49237568; // x23
  __int64 v27; // x1
  Il2CppClass **v28; // x0
  struct UnityEngine_GameObject_array *v29; // x8
  TabOpenEffectComponent_o *v30; // x23
  struct UnityEngine_GameObject_array *v31; // x8
  struct UISprite_array *eventBtnImages; // x8
  UnityEngine_Transform_o *v33; // x21
  struct UnityEngine_GameObject_array *v34; // x8
  __int64 v35; // x2
  UnityEngine_Transform_o *v36; // x21
  struct UnityEngine_GameObject_array *v37; // x8
  __int64 v38; // x2
  UnityEngine_Transform_o *v39; // x19
  const MethodInfo *v40; // x1

  if ( (byte_4B11167 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, *(_QWORD *)&eventId, *(_QWORD *)&eventCount);
    sub_1BCA7E0(&EventRewardButtonChangeManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B11167 = 1;
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
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo, v21);
      Component_object = (__int64)EventRewardButtonChangeManager_TypeInfo;
    }
    v23 = 56LL;
  }
  else if ( eventCount == 2 )
  {
    Component_object = (__int64)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo, v21);
      Component_object = (__int64)EventRewardButtonChangeManager_TypeInfo;
    }
    v23 = 64LL;
  }
  else
  {
    Component_object = (__int64)EventRewardButtonChangeManager_TypeInfo;
    if ( !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo, v21);
      Component_object = (__int64)EventRewardButtonChangeManager_TypeInfo;
    }
    v23 = 48LL;
  }
  if ( !this->fields.efffectData )
    goto LABEL_47;
  effectObject = this->fields.effectObject;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              this->fields.efffectData,
                              *(System_String_o **)(*(_QWORD *)(Component_object + 184) + v23),
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                Object_object__49237568,
                                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectObject )
    goto LABEL_47;
  if ( effectObject->max_length <= slot )
    goto LABEL_48;
  v27 = Component_object;
  v28 = &effectObject->obj.klass + slot;
  v28[4] = (Il2CppClass *)v27;
  Component_object = sub_1BCA784(v28 + 4, v27);
  v29 = this->fields.effectObject;
  if ( !v29 )
    goto LABEL_47;
  if ( v29->max_length <= slot )
    goto LABEL_48;
  Component_object = (__int64)v29->m_Items[slot];
  if ( !Component_object )
    goto LABEL_47;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Component_object,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
  if ( !Component_object )
    goto LABEL_47;
  v30 = (TabOpenEffectComponent_o *)Component_object;
  if ( changeCallback )
  {
    *(_QWORD *)(Component_object + 208) = changeCallback;
    Component_object = sub_1BCA784(Component_object + 208, changeCallback);
  }
  if ( endCallback )
  {
    v30->fields.animEndCallback = endCallback;
    Component_object = sub_1BCA784(&v30->fields.animEndCallback, endCallback);
  }
  v31 = this->fields.effectObject;
  if ( !v31 )
LABEL_47:
    sub_1BCAA3C(Component_object, v21);
  if ( v31->max_length <= slot )
    goto LABEL_48;
  Component_object = (__int64)v31->m_Items[slot];
  if ( !Component_object )
    goto LABEL_47;
  Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  eventBtnImages = this->fields.eventBtnImages;
  if ( !eventBtnImages )
    goto LABEL_47;
  if ( eventBtnImages->max_length <= slot )
    goto LABEL_48;
  v33 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (__int64)eventBtnImages->m_Items[slot];
  if ( !Component_object )
    goto LABEL_47;
  Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
  if ( !v33 )
    goto LABEL_47;
  UnityEngine_Transform__set_parent(v33, (UnityEngine_Transform_o *)Component_object, 0LL);
  v34 = this->fields.effectObject;
  if ( !v34 )
    goto LABEL_47;
  if ( v34->max_length <= slot )
LABEL_48:
    sub_1BCAA44(Component_object, v21);
  Component_object = (__int64)v34->m_Items[slot];
  if ( !Component_object )
    goto LABEL_47;
  Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  v36 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C1 )
  {
    Component_object = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v21, v35);
    byte_4B109C1 = 1;
  }
  if ( !v36 )
    goto LABEL_47;
  UnityEngine_Transform__set_localPosition(v36, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  v37 = this->fields.effectObject;
  if ( !v37 )
    goto LABEL_47;
  if ( v37->max_length <= slot )
    goto LABEL_48;
  Component_object = (__int64)v37->m_Items[slot];
  if ( !Component_object )
    goto LABEL_47;
  Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  v39 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C6 )
  {
    Component_object = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v21, v38);
    byte_4B109C6 = 1;
  }
  if ( !v39 )
    goto LABEL_47;
  UnityEngine_Transform__set_localScale(v39, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  TabOpenEffectComponent__PlayAnimation(v30, v40);
}


void __fastcall EventRewardButtonChangeManager__SetReleaseEffectData(
        EventRewardButtonChangeManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( data )
  {
    this->fields.efffectData = data;
    sub_1BCA784(&this->fields.efffectData, data);
  }
}


void __fastcall EventRewardButtonChangeManager__StartTutorialRequest(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  unsigned int releaseSlot; // w22
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  __int64 v13; // x1
  Il2CppObject *Request_object; // x0
  __int64 v15; // x1
  int32_t v16; // w1

  if ( (byte_4B1116D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventRewardButtonChangeManager_EndTutorialRequest__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    byte_4B1116D = 1;
  }
  releaseSlot = this->fields.releaseSlot;
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_EventRewardButtonChangeManager_EndTutorialRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Request_object = NetworkManager__getRequest_object_(
                     v12,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v15);
  if ( releaseSlot >= 3 )
    v16 = -1;
  else
    v16 = releaseSlot + 25;
  TutorialEventSetRequest__beginRequest((TutorialEventSetRequest_o *)Request_object, v16, this->fields.eventId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardButtonChangeManager__TabInitialize(
        EventRewardButtonChangeManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct UnityEngine_GameObject_array *tabColliders; // x8
  DataManager_o *v12; // x20
  __int64 v13; // x22
  int max_length; // w9
  struct UnityEngine_GameObject_array *v15; // x0

  if ( (byte_4B11164 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B11164 = 1;
  }
  this->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)EventRewardSceneMaster__GetEntityList((EventRewardSceneMaster_o *)Instance, eventId, 0LL);
  tabColliders = this->fields.tabColliders;
  if ( !tabColliders )
    goto LABEL_12;
  v12 = Instance;
  v13 = 0LL;
  while ( 1 )
  {
    max_length = tabColliders->max_length;
    if ( (int)v13 >= max_length )
      break;
    if ( (unsigned int)v13 >= max_length )
      sub_1BCAA44(Instance, v10);
    Instance = (DataManager_o *)tabColliders->m_Items[v13];
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        tabColliders = this->fields.tabColliders;
        ++v13;
        if ( tabColliders )
          continue;
      }
    }
    goto LABEL_12;
  }
  if ( !v12 )
LABEL_12:
    sub_1BCAA3C(Instance, v10);
  v15 = (struct UnityEngine_GameObject_array *)sub_1BCA888(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 LODWORD(v12->fields.m_CancellationTokenSource));
  this->fields.effectObject = v15;
  sub_1BCA784(&this->fields.effectObject, v15);
}


void __fastcall EventRewardButtonChangeManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B1116F & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardButtonChangeManager___c_TypeInfo, v1, v2);
    byte_4B1116F = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventRewardButtonChangeManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventRewardButtonChangeManager___c_TypeInfo->static_fields->__9 = (struct EventRewardButtonChangeManager___c_o *)v4;
  sub_1BCA784(EventRewardButtonChangeManager___c_TypeInfo->static_fields, v4);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B11171 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B11171 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableLeftButton_b__34_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B11170 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B11170 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableRightButton_b__36_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B11172 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B11172 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableRightButton_b__36_1(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B11173 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B11173 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}