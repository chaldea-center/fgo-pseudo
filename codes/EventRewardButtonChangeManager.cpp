void __fastcall EventRewardButtonChangeManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  struct EventRewardButtonChangeManager_StaticFields *static_fields; // x0
  struct EventRewardButtonChangeManager_StaticFields *v35; // x0
  struct EventRewardButtonChangeManager_StaticFields *v36; // x0
  struct EventRewardButtonChangeManager_StaticFields *v37; // x0
  struct EventRewardButtonChangeManager_StaticFields *v38; // x0
  struct EventRewardButtonChangeManager_StaticFields *v39; // x0
  struct EventRewardButtonChangeManager_StaticFields *v40; // x0
  struct EventRewardButtonChangeManager_StaticFields *v41; // x0
  struct EventRewardButtonChangeManager_StaticFields *v42; // x0
  struct EventRewardButtonChangeManager_StaticFields *v43; // x0

  if ( (byte_42E552E & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardButtonChangeManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_17186/*"btn_bg_on_1"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_17187/*"btn_bg_on_2"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_17188/*"btn_bg_on_4"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_18380/*"ef_2tab_open"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_17183/*"btn_bg_off_4"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_17181/*"btn_bg_off_1"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_18382/*"ef_4tab_open"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_18381/*"ef_3tab_open"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_17182/*"btn_bg_off_2"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_17196/*"btn_disable_txt_"*/, v31, v32, v33);
    byte_42E552E = 1;
  }
  static_fields = EventRewardButtonChangeManager_TypeInfo->static_fields;
  static_fields->BTN_NAME_TYPE3_ON = (struct System_String_o *)StringLiteral_17186/*"btn_bg_on_1"*/;
  sub_B5D560(static_fields);
  v35 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v35->BTN_NAME_TYPE3_OFF = (struct System_String_o *)StringLiteral_17181/*"btn_bg_off_1"*/;
  sub_B5D560(&v35->BTN_NAME_TYPE3_OFF);
  v36 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v36->BTN_NAME_TYPE2_ON = (struct System_String_o *)StringLiteral_17187/*"btn_bg_on_2"*/;
  sub_B5D560(&v36->BTN_NAME_TYPE2_ON);
  v37 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v37->BTN_NAME_TYPE2_OFF = (struct System_String_o *)StringLiteral_17182/*"btn_bg_off_2"*/;
  sub_B5D560(&v37->BTN_NAME_TYPE2_OFF);
  v38 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v38->BTN_NAME_TYPE4_ON = (struct System_String_o *)StringLiteral_17188/*"btn_bg_on_4"*/;
  sub_B5D560(&v38->BTN_NAME_TYPE4_ON);
  v39 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v39->BTN_NAME_TYPE4_OFF = (struct System_String_o *)StringLiteral_17183/*"btn_bg_off_4"*/;
  sub_B5D560(&v39->BTN_NAME_TYPE4_OFF);
  v40 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v40->RELEASE_EFFECT_4TAB_NAME = (struct System_String_o *)StringLiteral_18382/*"ef_4tab_open"*/;
  sub_B5D560(&v40->RELEASE_EFFECT_4TAB_NAME);
  v41 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v41->RELEASE_EFFECT_3TAB_NAME = (struct System_String_o *)StringLiteral_18381/*"ef_3tab_open"*/;
  sub_B5D560(&v41->RELEASE_EFFECT_3TAB_NAME);
  v42 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v42->RELEASE_EFFECT_2TAB_NAME = (struct System_String_o *)StringLiteral_18380/*"ef_2tab_open"*/;
  sub_B5D560(&v42->RELEASE_EFFECT_2TAB_NAME);
  v43 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v43->DISABLE_BTN_TXT = (struct System_String_o *)StringLiteral_17196/*"btn_disable_txt_"*/;
  sub_B5D560(&v43->DISABLE_BTN_TXT);
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
  EventRewardSceneEntity_array *v9; // x27
  EventRewardButtonChangeManager_o *v11; // x20
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int32_t max_length; // w8
  struct UISprite_array *btnTxtSprites; // x9
  System_String_o **p_max_length; // x8
  struct UISprite_array *p_bounds; // x9
  struct UISprite_array *v31; // x9
  System_String_o *v32; // x24
  unsigned __int64 v33; // x28
  int v34; // w21
  EventRewardSceneEntity_o **m_Items; // x22
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  struct UICommonButton_array *eventBtns; // x8
  struct UICommonButton_array *v38; // x8
  struct UISprite_array *eventBtnImages; // x8
  struct UnityEngine_GameObject_array *backImgObjs; // x8
  struct UnityEngine_GameObject_array *activeImgObjs; // x8
  struct UISprite_array *v42; // x8
  UISprite_o *v43; // x25
  struct EventRewardSceneReleaseEntity_array *v44; // x8
  EventRewardSceneReleaseEntity_o *v45; // x8
  System_String_o *v46; // x26
  System_String_o *v47; // x0
  const MethodInfo *v48; // x2
  System_String_o *v49; // x26
  struct UICommonButton_array *v50; // x8
  struct UnityEngine_GameObject_array *tabColliders; // x8
  struct UICommonButton_array *v52; // x8
  bool v53; // w25
  struct UICommonButton_array *v54; // x8
  struct UISprite_array *v55; // x8
  System_String_o *v56; // x1
  struct UnityEngine_GameObject_array *v57; // x8
  struct UnityEngine_GameObject_array *v58; // x8
  System_String_o **v59; // x25
  struct UISprite_array *v60; // x8
  System_String_o *v61; // x26
  UISprite_o *v62; // x25
  EventRewardSceneEntity_o *v63; // x8
  EventRewardSceneEntity_array *v64; // x19
  System_String_o *v65; // x27
  System_String_o *v66; // x0
  const MethodInfo *v67; // x2
  System_String_o *v68; // x26
  struct UICommonButton_array *v69; // x8
  struct UISprite_array *v70; // x8
  UISprite_o *v71; // x21
  EventRewardButtonChangeManager_c *v72; // x0
  System_String_o *DISABLE_BTN_TXT; // x22
  System_String_o *v74; // x0
  const MethodInfo *v75; // x2
  System_String_o *v76; // x22
  struct UICommonButton_array *v77; // x8
  __int64 v78; // x0
  int32_t v79; // [xsp+0h] [xbp-70h]
  bool v80; // [xsp+Ch] [xbp-64h]
  Il2CppClass *klass; // [xsp+10h] [xbp-60h]
  int32_t v82; // [xsp+1Ch] [xbp-54h] BYREF

  v9 = eventRewardSceneEnt;
  v11 = this;
  v82 = currentEventId;
  if ( (byte_42E5525 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardButtonChangeManager_TypeInfo, priorityId, currentEventId, eventRewardSceneEnt);
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17278/*"btn_txt_on_"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v21, v22, v23);
    this = (EventRewardButtonChangeManager_o *)sub_B5D5C4(&StringLiteral_17272/*"btn_txt_off_"*/, v24, v25, v26);
    byte_42E5525 = 1;
  }
  if ( !v9 )
    goto LABEL_107;
  max_length = v9->max_length;
  v79 = openSlot;
  v80 = openedTab;
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
      v31 = this[1].fields.btnTxtSprites;
      p_max_length = (System_String_o **)&v31->m_Items[1];
      p_bounds = (struct UISprite_array *)v31->m_Items;
    }
  }
  if ( v11->fields.eventCount >= 1 )
  {
    v32 = *p_max_length;
    v33 = 0LL;
    v34 = 0;
    m_Items = v9->m_Items;
    klass = p_bounds->obj.klass;
    do
    {
      releaseEntityArray = v11->fields.releaseEntityArray;
      if ( !releaseEntityArray )
        goto LABEL_58;
      if ( v33 >= releaseEntityArray->max_length )
        goto LABEL_108;
      if ( releaseEntityArray->m_Items[v33] )
      {
        eventBtns = v11->fields.eventBtns;
        if ( !eventBtns )
          goto LABEL_107;
        if ( v33 >= eventBtns->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)eventBtns->m_Items[v33];
        if ( !this )
          goto LABEL_107;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        v38 = v11->fields.eventBtns;
        if ( !v38 )
          goto LABEL_107;
        if ( v33 >= v38->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v38->m_Items[v33];
        if ( !this )
          goto LABEL_107;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_107;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( !this )
          goto LABEL_107;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
        eventBtnImages = v11->fields.eventBtnImages;
        if ( !eventBtnImages )
          goto LABEL_107;
        if ( v33 >= eventBtnImages->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)eventBtnImages->m_Items[v33];
        if ( !this )
          goto LABEL_107;
        UISprite__set_spriteName((UISprite_o *)this, v32, 0LL);
        backImgObjs = v11->fields.backImgObjs;
        if ( !backImgObjs )
          goto LABEL_107;
        if ( v33 >= backImgObjs->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)backImgObjs->m_Items[v33];
        if ( !this )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        activeImgObjs = v11->fields.activeImgObjs;
        if ( !activeImgObjs )
          goto LABEL_107;
        if ( v33 >= activeImgObjs->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)activeImgObjs->m_Items[v33];
        if ( !this )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v42 = v11->fields.btnTxtSprites;
        if ( !v42 )
          goto LABEL_107;
        if ( v33 >= v42->max_length )
          goto LABEL_108;
        v43 = v42->m_Items[v33];
        this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
        if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
          this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
        }
        v44 = v11->fields.releaseEntityArray;
        if ( !v44 )
          goto LABEL_107;
        if ( v33 >= v44->max_length )
          goto LABEL_108;
        v45 = v44->m_Items[v33];
        if ( !v45 )
          goto LABEL_107;
        v46 = (System_String_o *)this[1].fields.btnTxtSprites->m_Items[5];
        v47 = System_Int32__ToString((int)v45 + 36, 0LL);
        v49 = System_String__Concat_44577788(v46, v47, 0LL);
        if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        }
        this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v43, v49, v48);
        v50 = v11->fields.eventBtns;
        if ( !v50 )
          goto LABEL_107;
        if ( v33 >= v50->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v50->m_Items[v33];
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
        if ( v33 >= tabColliders->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)tabColliders->m_Items[v33];
        if ( !this )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      }
      else
      {
LABEL_58:
        v52 = v11->fields.eventBtns;
        if ( !v52 )
          goto LABEL_107;
        if ( v33 >= v52->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v52->m_Items[v33];
        if ( !this )
          goto LABEL_107;
        v53 = v34 != priorityId;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v34 != priorityId, 0LL);
        v54 = v11->fields.eventBtns;
        if ( !v54 )
          goto LABEL_107;
        if ( v33 >= v54->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v54->m_Items[v33];
        if ( !this )
          goto LABEL_107;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_107;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( !this )
          goto LABEL_107;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v53, 0LL);
        v55 = v11->fields.eventBtnImages;
        if ( !v55 )
          goto LABEL_107;
        if ( v33 >= v55->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v55->m_Items[v33];
        if ( !this )
          goto LABEL_107;
        v56 = v34 == priorityId ? (System_String_o *)klass : v32;
        UISprite__set_spriteName((UISprite_o *)this, v56, 0LL);
        v57 = v11->fields.backImgObjs;
        if ( !v57 )
          goto LABEL_107;
        if ( v33 >= v57->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v57->m_Items[v33];
        if ( !this )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v53, 0LL);
        v58 = v11->fields.activeImgObjs;
        if ( !v58 )
          goto LABEL_107;
        if ( v33 >= v58->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v58->m_Items[v33];
        if ( !this )
          goto LABEL_107;
        v59 = (System_String_o **)(v34 == priorityId ? &StringLiteral_17278/*"btn_txt_on_"*/ : &StringLiteral_17272/*"btn_txt_off_"*/);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v34 == priorityId, 0LL);
        v60 = v11->fields.btnTxtSprites;
        if ( !v60 )
          goto LABEL_107;
        if ( v33 >= v60->max_length )
          goto LABEL_108;
        v61 = *v59;
        v62 = v60->m_Items[v33];
        this = (EventRewardButtonChangeManager_o *)System_Int32__ToString((int32_t)&v82, 0LL);
        if ( v33 >= v9->max_length )
          goto LABEL_108;
        v63 = m_Items[v33];
        if ( !v63 )
          goto LABEL_107;
        v64 = v9;
        v65 = (System_String_o *)this;
        v66 = System_Int32__ToString((int)v63 + 20, 0LL);
        v68 = System_String__Concat_44581200(v61, v65, (System_String_o *)StringLiteral_16096/*"_"*/, v66, 0LL);
        if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        }
        this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v62, v68, v67);
        v69 = v11->fields.eventBtns;
        if ( !v69 )
          goto LABEL_107;
        if ( v33 >= v69->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v69->m_Items[v33];
        if ( !this )
          goto LABEL_107;
        v9 = v64;
        this = (EventRewardButtonChangeManager_o *)((__int64 (__fastcall *)(EventRewardButtonChangeManager_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                                     this,
                                                     0LL,
                                                     0LL,
                                                     this->klass[1]._1.interfaceOffsets);
        ++v34;
      }
      ++v33;
    }
    while ( (__int64)v33 < v11->fields.eventCount );
  }
  if ( v80 )
  {
    v70 = v11->fields.btnTxtSprites;
    if ( !v70 )
      goto LABEL_107;
    if ( v70->max_length <= v79 )
      goto LABEL_108;
    v71 = v70->m_Items[v79];
    v72 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v72 = EventRewardButtonChangeManager_TypeInfo;
    }
    DISABLE_BTN_TXT = v72->static_fields->DISABLE_BTN_TXT;
    v74 = System_Int32__ToString((int)v11 + 108, 0LL);
    v76 = System_String__Concat_44577788(DISABLE_BTN_TXT, v74, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v71, v76, v75);
    v77 = v11->fields.eventBtns;
    if ( !v77 )
      goto LABEL_107;
    if ( v77->max_length <= v79 )
    {
LABEL_108:
      v78 = sub_B5D6C8(this);
      sub_B5D668(v78, 0LL);
    }
    this = (EventRewardButtonChangeManager_o *)v77->m_Items[v79];
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
    sub_B5D69C(this, *(_QWORD *)&priorityId);
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
    sub_B5D560(p_RequestEndCallBack);
    System_Action__Invoke(v4, 0LL);
  }
}


System_String_o *__fastcall EventRewardButtonChangeManager__GetReleaseBtnSpriteName(
        EventRewardButtonChangeManager_o *this,
        int32_t eventId,
        int32_t releaseTabPriority,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  EventRewardButtonChangeManager_c *v14; // x8
  System_String_o *DISABLE_BTN_TXT; // x19
  System_String_o *v16; // x0
  int32_t ReleaseTabImageId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E5528 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRewardSceneReleaseMaster___, eventId, releaseTabPriority, method);
    sub_B5D5C4(&EventRewardButtonChangeManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E5528 = 1;
  }
  ReleaseTabImageId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRewardSceneReleaseMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  ReleaseTabImageId = EventRewardSceneReleaseMaster__getReleaseTabImageId(
                        (EventRewardSceneReleaseMaster_o *)Instance,
                        eventId,
                        releaseTabPriority,
                        0LL);
  v14 = EventRewardButtonChangeManager_TypeInfo;
  if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
    v14 = EventRewardButtonChangeManager_TypeInfo;
  }
  DISABLE_BTN_TXT = v14->static_fields->DISABLE_BTN_TXT;
  v16 = System_Int32__ToString((int32_t)&ReleaseTabImageId, 0LL);
  return System_String__Concat_44577788(DISABLE_BTN_TXT, v16, 0LL);
}


void __fastcall EventRewardButtonChangeManager__OnClickDisableCenterButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  void *Instance; // x0
  __int64 v21; // x1
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v23; // x8
  CommonUI_o *v24; // x19
  System_String_o *closedMessage; // x20
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__35_0; // x22
  System_String_o *v28; // x21
  Il2CppObject *v29; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v30; // x0
  __int64 v31; // x0

  if ( (byte_42E552B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_EventRewardButtonChangeManager___c__OnClickDisableCenterButton_b__35_0__, v11, v12, v13);
    sub_B5D5C4(&EventRewardButtonChangeManager___c_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    byte_42E552B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  releaseEntityArray = this->fields.releaseEntityArray;
  if ( !releaseEntityArray )
    goto LABEL_19;
  if ( releaseEntityArray->max_length <= 1 )
  {
    v31 = sub_B5D6C8(Instance);
    sub_B5D668(v31, 0LL);
  }
  v23 = releaseEntityArray->m_Items[1];
  if ( !v23 )
    goto LABEL_19;
  v24 = (CommonUI_o *)Instance;
  closedMessage = v23->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( (BYTE3(EventRewardButtonChangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  static_fields = (struct EventRewardButtonChangeManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__35_0 = static_fields->__9__35_0;
  v28 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__35_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__35_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__35_0,
      v29,
      Method_EventRewardButtonChangeManager___c__OnClickDisableCenterButton_b__35_0__,
      0LL);
    v30 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v30->__9__35_0 = _9__35_0;
    sub_B5D560(&v30->__9__35_0);
  }
  if ( !v24 )
LABEL_19:
    sub_B5D69C(Instance, v21);
  CommonUI__OpenNotificationDialog(v24, v28, closedMessage, _9__35_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall EventRewardButtonChangeManager__OnClickDisableLeftButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  void *Instance; // x0
  __int64 v21; // x1
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v23; // x8
  CommonUI_o *v24; // x19
  System_String_o *closedMessage; // x20
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__34_0; // x22
  System_String_o *v28; // x21
  Il2CppObject *v29; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v30; // x0
  __int64 v31; // x0

  if ( (byte_42E552A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_EventRewardButtonChangeManager___c__OnClickDisableLeftButton_b__34_0__, v11, v12, v13);
    sub_B5D5C4(&EventRewardButtonChangeManager___c_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    byte_42E552A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  releaseEntityArray = this->fields.releaseEntityArray;
  if ( !releaseEntityArray )
    goto LABEL_19;
  if ( !releaseEntityArray->max_length )
  {
    v31 = sub_B5D6C8(Instance);
    sub_B5D668(v31, 0LL);
  }
  v23 = releaseEntityArray->m_Items[0];
  if ( !v23 )
    goto LABEL_19;
  v24 = (CommonUI_o *)Instance;
  closedMessage = v23->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( (BYTE3(EventRewardButtonChangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  static_fields = (struct EventRewardButtonChangeManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__34_0 = static_fields->__9__34_0;
  v28 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__34_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__34_0,
      v29,
      Method_EventRewardButtonChangeManager___c__OnClickDisableLeftButton_b__34_0__,
      0LL);
    v30 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v30->__9__34_0 = _9__34_0;
    sub_B5D560(&v30->__9__34_0);
  }
  if ( !v24 )
LABEL_19:
    sub_B5D69C(Instance, v21);
  CommonUI__OpenNotificationDialog(v24, v28, closedMessage, _9__34_0, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
}


void __fastcall EventRewardButtonChangeManager__OnClickDisableRightButton(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int32_t eventCount; // w8
  void *Instance; // x0
  __int64 v25; // x1
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v27; // x8
  CommonUI_o *v28; // x19
  System_String_o *closedMessage; // x20
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__36_0; // x22
  System_String_o *v32; // x21
  Il2CppObject *v33; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v34; // x0
  struct System_Action_o **p__9__36_0; // x0
  struct EventRewardSceneReleaseEntity_array *v36; // x8
  EventRewardSceneReleaseEntity_o *v37; // x8
  struct EventRewardButtonChangeManager___c_StaticFields *v38; // x8
  Il2CppObject *v39; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v40; // x0
  __int64 v41; // x0

  if ( (byte_42E552C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_0__, v11, v12, v13);
    sub_B5D5C4(&Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_1__, v14, v15, v16);
    sub_B5D5C4(&EventRewardButtonChangeManager___c_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42E552C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  eventCount = this->fields.eventCount;
  if ( eventCount != 3 )
  {
    if ( eventCount != 2 )
      return;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    releaseEntityArray = this->fields.releaseEntityArray;
    if ( !releaseEntityArray )
LABEL_34:
      sub_B5D69C(Instance, v25);
    if ( releaseEntityArray->max_length > 1 )
    {
      v27 = releaseEntityArray->m_Items[1];
      if ( !v27 )
        goto LABEL_34;
      v28 = (CommonUI_o *)Instance;
      closedMessage = v27->fields.closedMessage;
      Instance = EventRewardButtonChangeManager___c_TypeInfo;
      if ( (BYTE3(EventRewardButtonChangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
        Instance = EventRewardButtonChangeManager___c_TypeInfo;
      }
      static_fields = (struct EventRewardButtonChangeManager___c_StaticFields *)*((_QWORD *)Instance + 23);
      _9__36_0 = static_fields->__9__36_0;
      v32 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__36_0 )
      {
        if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
        }
        v33 = (Il2CppObject *)static_fields->__9;
        _9__36_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          _9__36_0,
          v33,
          Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_0__,
          0LL);
        v34 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
        v34->__9__36_0 = _9__36_0;
        p__9__36_0 = &v34->__9__36_0;
LABEL_30:
        sub_B5D560(p__9__36_0);
        goto LABEL_31;
      }
      goto LABEL_31;
    }
LABEL_35:
    v41 = sub_B5D6C8(Instance);
    sub_B5D668(v41, 0LL);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v36 = this->fields.releaseEntityArray;
  if ( !v36 )
    goto LABEL_34;
  if ( v36->max_length <= 2 )
    goto LABEL_35;
  v37 = v36->m_Items[2];
  if ( !v37 )
    goto LABEL_34;
  v28 = (CommonUI_o *)Instance;
  closedMessage = v37->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( (BYTE3(EventRewardButtonChangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  v38 = (struct EventRewardButtonChangeManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__36_0 = v38->__9__36_1;
  v32 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__36_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      v38 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)v38->__9;
    _9__36_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__36_0,
      v39,
      Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_1__,
      0LL);
    v40 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v40->__9__36_1 = _9__36_0;
    p__9__36_0 = &v40->__9__36_1;
    goto LABEL_30;
  }
LABEL_31:
  if ( !v28 )
    goto LABEL_34;
  CommonUI__OpenNotificationDialog(v28, v32, closedMessage, _9__36_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
  if ( (byte_42E5526 & 1) == 0 )
  {
    this = (EventRewardButtonChangeManager_o *)sub_B5D5C4(
                                                 &Method_UnityEngine_Component_GetComponent_BoxCollider___,
                                                 isDisp,
                                                 currentEventSlotIndex,
                                                 method);
    byte_42E5526 = 1;
  }
  eventBtns = v6->fields.eventBtns;
  if ( !eventBtns )
LABEL_21:
    sub_B5D69C(this, isDisp);
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
                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
          v17 = sub_B5D6C8(this);
          sub_B5D668(v17, 0LL);
        }
        this = (EventRewardButtonChangeManager_o *)*((_QWORD *)&v15->obj.klass + v11);
        if ( !this )
          goto LABEL_21;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UICommonButton_o *gameObject; // x0
  System_String_o **v16; // x8
  struct UICommonButton_array *eventBtns; // x9
  System_String_o *v18; // x22
  struct UICommonButton_array *v19; // x8
  struct UISprite_array *eventBtnImages; // x8
  struct UnityEngine_GameObject_array *backImgObjs; // x8
  struct UnityEngine_GameObject_array *activeImgObjs; // x8
  const MethodInfo *v23; // x3
  struct UISprite_array *btnTxtSprites; // x8
  UISprite_o *v25; // x22
  const MethodInfo *v26; // x2
  System_String_o *v27; // x21
  struct UICommonButton_array *v28; // x8
  __int64 v29; // x0

  if ( (byte_42E5529 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardButtonChangeManager_TypeInfo, eventId, tabPriority, *(_QWORD *)&eventCount);
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v12, v13, v14);
    byte_42E5529 = 1;
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
    v16 = (System_String_o **)(*(_QWORD *)&gameObject[1].fields.specifyPressedColor.fields.b + 8LL);
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
    v16 = (System_String_o **)(*(_QWORD *)&gameObject[1].fields.specifyPressedColor.fields.b + 24LL);
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
    v16 = (System_String_o **)(*(_QWORD *)&gameObject[1].fields.specifyPressedColor.fields.b + 40LL);
  }
  eventBtns = this->fields.eventBtns;
  if ( !eventBtns )
    goto LABEL_43;
  if ( eventBtns->max_length <= tabPriority )
    goto LABEL_44;
  gameObject = eventBtns->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_43;
  v18 = *v16;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
  v19 = this->fields.eventBtns;
  if ( !v19 )
    goto LABEL_43;
  if ( v19->max_length <= tabPriority )
    goto LABEL_44;
  gameObject = v19->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_43;
  gameObject = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  gameObject = (UICommonButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     (UnityEngine_GameObject_o *)gameObject,
                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
  UISprite__set_spriteName((UISprite_o *)gameObject, v18, 0LL);
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
  v25 = btnTxtSprites->m_Items[tabPriority];
  v27 = EventRewardButtonChangeManager__GetReleaseBtnSpriteName(
          (EventRewardButtonChangeManager_o *)gameObject,
          eventId,
          tabPriority,
          v23);
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  gameObject = (UICommonButton_o *)EventRewardRootComponent__setRewardInfoImg(v25, v27, v26);
  v28 = this->fields.eventBtns;
  if ( !v28 )
LABEL_43:
    sub_B5D69C(gameObject, *(_QWORD *)&eventId);
  if ( v28->max_length <= tabPriority )
  {
LABEL_44:
    v29 = sub_B5D6C8(gameObject);
    sub_B5D668(v29, 0LL);
  }
  gameObject = v28->m_Items[tabPriority];
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
  sub_B5D560(&this->fields.releaseEntityArray);
  v5->fields.RequestEndCallBack = effectEndCallBack;
  v5 = (EventRewardButtonChangeManager_o *)((char *)v5 + 120);
  v5[-1].fields.releaseSlot = closedImageId;
  sub_B5D560(v5);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x1
  EventRewardButtonChangeManager_c *v26; // x0
  System_String_o **p_RELEASE_EFFECT_3TAB_NAME; // x8
  EventRewardButtonChangeManager_c *v28; // x0
  EventRewardButtonChangeManager_c *v29; // x0
  AssetData_o *efffectData; // x0
  struct UnityEngine_GameObject_array *effectObject; // x25
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x23
  AssetData_o *v33; // x23
  Il2CppClass **v34; // x0
  struct UnityEngine_GameObject_array *v35; // x8
  TabOpenEffectComponent_o *v36; // x23
  struct UnityEngine_GameObject_array *v37; // x8
  struct UISprite_array *eventBtnImages; // x8
  UnityEngine_Transform_o *v39; // x21
  struct UnityEngine_GameObject_array *v40; // x8
  UnityEngine_Transform_o *transform; // x21
  int v42; // s0
  struct UnityEngine_GameObject_array *v45; // x8
  UnityEngine_Transform_o *v46; // x19
  int v47; // s0
  __int64 v50; // x0
  __int64 v51; // x0

  if ( (byte_42E5527 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, eventId, eventCount, *(_QWORD *)&slot);
    sub_B5D5C4(&EventRewardButtonChangeManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___, v16, v17, v18);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    byte_42E5527 = 1;
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
    v28 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v28 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_RELEASE_EFFECT_3TAB_NAME = &v28->static_fields->RELEASE_EFFECT_3TAB_NAME;
  }
  else if ( eventCount == 2 )
  {
    v26 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v26 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_RELEASE_EFFECT_3TAB_NAME = &v26->static_fields->RELEASE_EFFECT_2TAB_NAME;
  }
  else
  {
    v29 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v29 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_RELEASE_EFFECT_3TAB_NAME = &v29->static_fields->RELEASE_EFFECT_4TAB_NAME;
  }
  efffectData = this->fields.efffectData;
  if ( !efffectData )
    goto LABEL_45;
  effectObject = this->fields.effectObject;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               efffectData,
                                                                               *p_RELEASE_EFFECT_3TAB_NAME,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  efffectData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 Object_WarBoardWaitTimeSetting,
                                 (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectObject )
    goto LABEL_45;
  v33 = efffectData;
  if ( efffectData )
  {
    efffectData = (AssetData_o *)sub_B5D684(efffectData, effectObject->obj.klass->_1.element_class);
    if ( !efffectData )
    {
      v51 = sub_B5D6BC();
      sub_B5D668(v51, 0LL);
    }
  }
  if ( effectObject->max_length <= slot )
    goto LABEL_46;
  v34 = &effectObject->obj.klass + slot;
  v34[4] = (Il2CppClass *)v33;
  sub_B5D560(v34 + 4);
  v35 = this->fields.effectObject;
  if ( !v35 )
    goto LABEL_45;
  if ( v35->max_length <= slot )
  {
LABEL_46:
    v50 = sub_B5D6C8(efffectData);
    sub_B5D668(v50, 0LL);
  }
  efffectData = (AssetData_o *)v35->m_Items[slot];
  if ( !efffectData )
    goto LABEL_45;
  efffectData = (AssetData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 (UnityEngine_GameObject_o *)efffectData,
                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
  if ( !efffectData )
    goto LABEL_45;
  v36 = (TabOpenEffectComponent_o *)efffectData;
  TabOpenEffectComponent__SetChangeUICallback((TabOpenEffectComponent_o *)efffectData, changeCallback, 0LL);
  TabOpenEffectComponent__SetAnimationEndCallback(v36, endCallback, 0LL);
  v37 = this->fields.effectObject;
  if ( !v37 )
    goto LABEL_45;
  if ( v37->max_length <= slot )
    goto LABEL_46;
  efffectData = (AssetData_o *)v37->m_Items[slot];
  if ( !efffectData )
    goto LABEL_45;
  efffectData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)efffectData, 0LL);
  eventBtnImages = this->fields.eventBtnImages;
  if ( !eventBtnImages )
    goto LABEL_45;
  if ( eventBtnImages->max_length <= slot )
    goto LABEL_46;
  v39 = (UnityEngine_Transform_o *)efffectData;
  efffectData = (AssetData_o *)eventBtnImages->m_Items[slot];
  if ( !efffectData )
    goto LABEL_45;
  efffectData = (AssetData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)efffectData, 0LL);
  if ( !v39 )
    goto LABEL_45;
  UnityEngine_Transform__set_parent(v39, (UnityEngine_Transform_o *)efffectData, 0LL);
  v40 = this->fields.effectObject;
  if ( !v40 )
    goto LABEL_45;
  if ( v40->max_length <= slot )
    goto LABEL_46;
  efffectData = (AssetData_o *)v40->m_Items[slot];
  if ( !efffectData
    || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)efffectData, 0LL),
        *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v42, 0LL),
        (v45 = this->fields.effectObject) == 0LL) )
  {
LABEL_45:
    sub_B5D69C(efffectData, v25);
  }
  if ( v45->max_length <= slot )
    goto LABEL_46;
  efffectData = (AssetData_o *)v45->m_Items[slot];
  if ( !efffectData )
    goto LABEL_45;
  v46 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)efffectData, 0LL);
  *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Vector3__get_one(0LL);
  if ( !v46 )
    goto LABEL_45;
  UnityEngine_Transform__set_localScale(v46, *(UnityEngine_Vector3_o *)&v47, 0LL);
  TabOpenEffectComponent__PlayAnimation(v36, 0LL);
}


void __fastcall EventRewardButtonChangeManager__SetReleaseEffectData(
        EventRewardButtonChangeManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( data )
  {
    this->fields.efffectData = data;
    sub_B5D560(&this->fields.efffectData);
  }
}


void __fastcall EventRewardButtonChangeManager__StartTutorialRequest(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  unsigned int releaseSlot; // w8
  int32_t v15; // w20
  NetworkManager_ResultCallbackFunc_o *v16; // x21
  TutorialEventSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v18; // x1

  if ( (byte_42E552D & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventRewardButtonChangeManager_EndTutorialRequest__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    byte_42E552D = 1;
  }
  releaseSlot = this->fields.releaseSlot;
  if ( releaseSlot >= 3 )
    v15 = -1;
  else
    v15 = releaseSlot + 25;
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_EventRewardButtonChangeManager_EndTutorialRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v16,
                                                                     (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B5D69C(0LL, v18);
  TutorialEventSetRequest__beginRequest(Request_WarBoardWallAttackRequest, v15, this->fields.eventId, 0LL);
}


void __fastcall EventRewardButtonChangeManager__TabInitialize(
        EventRewardButtonChangeManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  struct UnityEngine_GameObject_array *tabColliders; // x8
  DataManager_o *v15; // x20
  __int64 v16; // x21
  int max_length; // w9
  __int64 v18; // x0

  if ( (byte_42E5524 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E5524 = 1;
  }
  this->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)EventRewardSceneMaster__GetEntityList((EventRewardSceneMaster_o *)Instance, eventId, 0LL);
  tabColliders = this->fields.tabColliders;
  if ( !tabColliders )
    goto LABEL_12;
  v15 = Instance;
  v16 = 0LL;
  while ( 1 )
  {
    max_length = tabColliders->max_length;
    if ( (int)v16 >= max_length )
      break;
    if ( (unsigned int)v16 >= max_length )
    {
      v18 = sub_B5D6C8(Instance);
      sub_B5D668(v18, 0LL);
    }
    Instance = (DataManager_o *)tabColliders->m_Items[v16];
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        tabColliders = this->fields.tabColliders;
        ++v16;
        if ( tabColliders )
          continue;
      }
    }
    goto LABEL_12;
  }
  if ( !v15 )
LABEL_12:
    sub_B5D69C(Instance, v13);
  this->fields.effectObject = (struct UnityEngine_GameObject_array *)sub_B5D5DC(
                                                                       UnityEngine_GameObject___TypeInfo,
                                                                       LODWORD(v15->fields.datalist));
  sub_B5D560(&this->fields.effectObject);
}


void __fastcall EventRewardButtonChangeManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5656 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardButtonChangeManager___c_TypeInfo, v1, v2, v3);
    byte_42E5656 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventRewardButtonChangeManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRewardButtonChangeManager___c_o *)v4;
  sub_B5D560(static_fields);
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
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E5658 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5658 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableLeftButton_b__34_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E5657 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5657 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableRightButton_b__36_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E5659 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5659 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableRightButton_b__36_1(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E565A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E565A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}