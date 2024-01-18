void __fastcall EventRewardButtonChangeManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct EventRewardButtonChangeManager_StaticFields *static_fields; // x0
  __int64 v13; // x1
  struct EventRewardButtonChangeManager_StaticFields *v14; // x0
  __int64 v15; // x1
  struct EventRewardButtonChangeManager_StaticFields *v16; // x0
  __int64 v17; // x1
  struct EventRewardButtonChangeManager_StaticFields *v18; // x0
  __int64 v19; // x1
  struct EventRewardButtonChangeManager_StaticFields *v20; // x0
  __int64 v21; // x1
  struct EventRewardButtonChangeManager_StaticFields *v22; // x0
  __int64 v23; // x1
  struct EventRewardButtonChangeManager_StaticFields *v24; // x0
  __int64 v25; // x1
  struct EventRewardButtonChangeManager_StaticFields *v26; // x0
  __int64 v27; // x1
  struct EventRewardButtonChangeManager_StaticFields *v28; // x0
  __int64 v29; // x1
  struct EventRewardButtonChangeManager_StaticFields *v30; // x0
  __int64 v31; // x1

  if ( (byte_4184855 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardButtonChangeManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_16977/*"btn_bg_on_1"*/, v2);
    sub_B2C35C(&StringLiteral_16978/*"btn_bg_on_2"*/, v3);
    sub_B2C35C(&StringLiteral_16979/*"btn_bg_on_4"*/, v4);
    sub_B2C35C(&StringLiteral_18152/*"ef_2tab_open"*/, v5);
    sub_B2C35C(&StringLiteral_16974/*"btn_bg_off_4"*/, v6);
    sub_B2C35C(&StringLiteral_16972/*"btn_bg_off_1"*/, v7);
    sub_B2C35C(&StringLiteral_18154/*"ef_4tab_open"*/, v8);
    sub_B2C35C(&StringLiteral_18153/*"ef_3tab_open"*/, v9);
    sub_B2C35C(&StringLiteral_16973/*"btn_bg_off_2"*/, v10);
    sub_B2C35C(&StringLiteral_16987/*"btn_disable_txt_"*/, v11);
    byte_4184855 = 1;
  }
  static_fields = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v13 = StringLiteral_16977/*"btn_bg_on_1"*/;
  static_fields->BTN_NAME_TYPE3_ON = (struct System_String_o *)StringLiteral_16977/*"btn_bg_on_1"*/;
  sub_B2C2F8(static_fields, v13);
  v14 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v15 = StringLiteral_16972/*"btn_bg_off_1"*/;
  v14->BTN_NAME_TYPE3_OFF = (struct System_String_o *)StringLiteral_16972/*"btn_bg_off_1"*/;
  sub_B2C2F8(&v14->BTN_NAME_TYPE3_OFF, v15);
  v16 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v17 = StringLiteral_16978/*"btn_bg_on_2"*/;
  v16->BTN_NAME_TYPE2_ON = (struct System_String_o *)StringLiteral_16978/*"btn_bg_on_2"*/;
  sub_B2C2F8(&v16->BTN_NAME_TYPE2_ON, v17);
  v18 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v19 = StringLiteral_16973/*"btn_bg_off_2"*/;
  v18->BTN_NAME_TYPE2_OFF = (struct System_String_o *)StringLiteral_16973/*"btn_bg_off_2"*/;
  sub_B2C2F8(&v18->BTN_NAME_TYPE2_OFF, v19);
  v20 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v21 = StringLiteral_16979/*"btn_bg_on_4"*/;
  v20->BTN_NAME_TYPE4_ON = (struct System_String_o *)StringLiteral_16979/*"btn_bg_on_4"*/;
  sub_B2C2F8(&v20->BTN_NAME_TYPE4_ON, v21);
  v22 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v23 = StringLiteral_16974/*"btn_bg_off_4"*/;
  v22->BTN_NAME_TYPE4_OFF = (struct System_String_o *)StringLiteral_16974/*"btn_bg_off_4"*/;
  sub_B2C2F8(&v22->BTN_NAME_TYPE4_OFF, v23);
  v24 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v25 = StringLiteral_18154/*"ef_4tab_open"*/;
  v24->RELEASE_EFFECT_4TAB_NAME = (struct System_String_o *)StringLiteral_18154/*"ef_4tab_open"*/;
  sub_B2C2F8(&v24->RELEASE_EFFECT_4TAB_NAME, v25);
  v26 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v27 = StringLiteral_18153/*"ef_3tab_open"*/;
  v26->RELEASE_EFFECT_3TAB_NAME = (struct System_String_o *)StringLiteral_18153/*"ef_3tab_open"*/;
  sub_B2C2F8(&v26->RELEASE_EFFECT_3TAB_NAME, v27);
  v28 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v29 = StringLiteral_18152/*"ef_2tab_open"*/;
  v28->RELEASE_EFFECT_2TAB_NAME = (struct System_String_o *)StringLiteral_18152/*"ef_2tab_open"*/;
  sub_B2C2F8(&v28->RELEASE_EFFECT_2TAB_NAME, v29);
  v30 = EventRewardButtonChangeManager_TypeInfo->static_fields;
  v31 = StringLiteral_16987/*"btn_disable_txt_"*/;
  v30->DISABLE_BTN_TXT = (struct System_String_o *)StringLiteral_16987/*"btn_disable_txt_"*/;
  sub_B2C2F8(&v30->DISABLE_BTN_TXT, v31);
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
  il2cpp_array_size_t max_length; // w8
  struct UISprite_array *btnTxtSprites; // x9
  System_String_o **p_max_length; // x8
  struct UISprite_array *p_bounds; // x9
  struct UISprite_array *v21; // x9
  System_String_o *v22; // x24
  unsigned __int64 v23; // x28
  int v24; // w21
  EventRewardSceneEntity_o **m_Items; // x22
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  struct UICommonButton_array *eventBtns; // x8
  struct UICommonButton_array *v28; // x8
  struct UISprite_array *eventBtnImages; // x8
  struct UnityEngine_GameObject_array *backImgObjs; // x8
  struct UnityEngine_GameObject_array *activeImgObjs; // x8
  struct UISprite_array *v32; // x8
  UISprite_o *v33; // x25
  struct EventRewardSceneReleaseEntity_array *v34; // x8
  EventRewardSceneReleaseEntity_o *v35; // x8
  System_String_o *v36; // x26
  System_String_o *v37; // x0
  const MethodInfo *v38; // x2
  System_String_o *v39; // x26
  struct UICommonButton_array *v40; // x8
  struct UnityEngine_GameObject_array *tabColliders; // x8
  struct UICommonButton_array *v42; // x8
  bool v43; // w25
  struct UICommonButton_array *v44; // x8
  struct UISprite_array *v45; // x8
  System_String_o *v46; // x1
  struct UnityEngine_GameObject_array *v47; // x8
  struct UnityEngine_GameObject_array *v48; // x8
  System_String_o **v49; // x25
  struct UISprite_array *v50; // x8
  System_String_o *v51; // x26
  UISprite_o *v52; // x25
  EventRewardSceneEntity_o *v53; // x8
  EventRewardSceneEntity_array *v54; // x19
  System_String_o *v55; // x27
  System_String_o *v56; // x0
  const MethodInfo *v57; // x2
  System_String_o *v58; // x26
  struct UICommonButton_array *v59; // x8
  struct UISprite_array *v60; // x8
  UISprite_o *v61; // x21
  EventRewardButtonChangeManager_c *v62; // x0
  System_String_o *DISABLE_BTN_TXT; // x22
  System_String_o *v64; // x0
  const MethodInfo *v65; // x2
  System_String_o *v66; // x22
  struct UICommonButton_array *v67; // x8
  __int64 v68; // x0
  int32_t v69; // [xsp+0h] [xbp-70h]
  bool v70; // [xsp+Ch] [xbp-64h]
  Il2CppClass *klass; // [xsp+10h] [xbp-60h]
  int32_t v72; // [xsp+1Ch] [xbp-54h] BYREF

  v11 = this;
  v72 = currentEventId;
  if ( (byte_418484C & 1) == 0 )
  {
    sub_B2C35C(&EventRewardButtonChangeManager_TypeInfo, *(_QWORD *)&priorityId);
    sub_B2C35C(&EventRewardRootComponent_TypeInfo, v12);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v13);
    sub_B2C35C(&StringLiteral_17069/*"btn_txt_on_"*/, v14);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v15);
    this = (EventRewardButtonChangeManager_o *)sub_B2C35C(&StringLiteral_17063/*"btn_txt_off_"*/, v16);
    byte_418484C = 1;
  }
  if ( !eventRewardSceneEnt )
    goto LABEL_107;
  max_length = eventRewardSceneEnt->max_length;
  v69 = openSlot;
  v70 = openedTab;
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
      v21 = this[1].fields.btnTxtSprites;
      p_max_length = (System_String_o **)&v21->m_Items[1];
      p_bounds = (struct UISprite_array *)v21->m_Items;
    }
  }
  if ( v11->fields.eventCount >= 1 )
  {
    v22 = *p_max_length;
    v23 = 0LL;
    v24 = 0;
    m_Items = eventRewardSceneEnt->m_Items;
    klass = p_bounds->obj.klass;
    do
    {
      releaseEntityArray = v11->fields.releaseEntityArray;
      if ( !releaseEntityArray )
        goto LABEL_58;
      if ( v23 >= releaseEntityArray->max_length )
        goto LABEL_108;
      if ( releaseEntityArray->m_Items[v23] )
      {
        eventBtns = v11->fields.eventBtns;
        if ( !eventBtns )
          goto LABEL_107;
        if ( v23 >= eventBtns->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)eventBtns->m_Items[v23];
        if ( !this )
          goto LABEL_107;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        v28 = v11->fields.eventBtns;
        if ( !v28 )
          goto LABEL_107;
        if ( v23 >= v28->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v28->m_Items[v23];
        if ( !this )
          goto LABEL_107;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_107;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( !this )
          goto LABEL_107;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
        eventBtnImages = v11->fields.eventBtnImages;
        if ( !eventBtnImages )
          goto LABEL_107;
        if ( v23 >= eventBtnImages->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)eventBtnImages->m_Items[v23];
        if ( !this )
          goto LABEL_107;
        UISprite__set_spriteName((UISprite_o *)this, v22, 0LL);
        backImgObjs = v11->fields.backImgObjs;
        if ( !backImgObjs )
          goto LABEL_107;
        if ( v23 >= backImgObjs->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)backImgObjs->m_Items[v23];
        if ( !this )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        activeImgObjs = v11->fields.activeImgObjs;
        if ( !activeImgObjs )
          goto LABEL_107;
        if ( v23 >= activeImgObjs->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)activeImgObjs->m_Items[v23];
        if ( !this )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v32 = v11->fields.btnTxtSprites;
        if ( !v32 )
          goto LABEL_107;
        if ( v23 >= v32->max_length )
          goto LABEL_108;
        v33 = v32->m_Items[v23];
        this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
        if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
          this = (EventRewardButtonChangeManager_o *)EventRewardButtonChangeManager_TypeInfo;
        }
        v34 = v11->fields.releaseEntityArray;
        if ( !v34 )
          goto LABEL_107;
        if ( v23 >= v34->max_length )
          goto LABEL_108;
        v35 = v34->m_Items[v23];
        if ( !v35 )
          goto LABEL_107;
        v36 = (System_String_o *)this[1].fields.btnTxtSprites->m_Items[5];
        v37 = System_Int32__ToString((int)v35 + 36, 0LL);
        v39 = System_String__Concat_44305532(v36, v37, 0LL);
        if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        }
        this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v33, v39, v38);
        v40 = v11->fields.eventBtns;
        if ( !v40 )
          goto LABEL_107;
        if ( v23 >= v40->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v40->m_Items[v23];
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
        if ( v23 >= tabColliders->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)tabColliders->m_Items[v23];
        if ( !this )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      }
      else
      {
LABEL_58:
        v42 = v11->fields.eventBtns;
        if ( !v42 )
          goto LABEL_107;
        if ( v23 >= v42->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v42->m_Items[v23];
        if ( !this )
          goto LABEL_107;
        v43 = v24 != priorityId;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v24 != priorityId, 0LL);
        v44 = v11->fields.eventBtns;
        if ( !v44 )
          goto LABEL_107;
        if ( v23 >= v44->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v44->m_Items[v23];
        if ( !this )
          goto LABEL_107;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_107;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( !this )
          goto LABEL_107;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v43, 0LL);
        v45 = v11->fields.eventBtnImages;
        if ( !v45 )
          goto LABEL_107;
        if ( v23 >= v45->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v45->m_Items[v23];
        if ( !this )
          goto LABEL_107;
        v46 = v24 == priorityId ? (System_String_o *)klass : v22;
        UISprite__set_spriteName((UISprite_o *)this, v46, 0LL);
        v47 = v11->fields.backImgObjs;
        if ( !v47 )
          goto LABEL_107;
        if ( v23 >= v47->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v47->m_Items[v23];
        if ( !this )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v43, 0LL);
        v48 = v11->fields.activeImgObjs;
        if ( !v48 )
          goto LABEL_107;
        if ( v23 >= v48->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v48->m_Items[v23];
        if ( !this )
          goto LABEL_107;
        v49 = (System_String_o **)(v24 == priorityId ? &StringLiteral_17069/*"btn_txt_on_"*/ : &StringLiteral_17063/*"btn_txt_off_"*/);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v24 == priorityId, 0LL);
        v50 = v11->fields.btnTxtSprites;
        if ( !v50 )
          goto LABEL_107;
        if ( v23 >= v50->max_length )
          goto LABEL_108;
        v51 = *v49;
        v52 = v50->m_Items[v23];
        this = (EventRewardButtonChangeManager_o *)System_Int32__ToString((int32_t)&v72, 0LL);
        if ( v23 >= eventRewardSceneEnt->max_length )
          goto LABEL_108;
        v53 = m_Items[v23];
        if ( !v53 )
          goto LABEL_107;
        v54 = eventRewardSceneEnt;
        v55 = (System_String_o *)this;
        v56 = System_Int32__ToString((int)v53 + 20, 0LL);
        v58 = System_String__Concat_44308944(v51, v55, (System_String_o *)StringLiteral_15905/*"_"*/, v56, 0LL);
        if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        }
        this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v52, v58, v57);
        v59 = v11->fields.eventBtns;
        if ( !v59 )
          goto LABEL_107;
        if ( v23 >= v59->max_length )
          goto LABEL_108;
        this = (EventRewardButtonChangeManager_o *)v59->m_Items[v23];
        if ( !this )
          goto LABEL_107;
        eventRewardSceneEnt = v54;
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
  if ( v70 )
  {
    v60 = v11->fields.btnTxtSprites;
    if ( !v60 )
      goto LABEL_107;
    if ( v60->max_length <= v69 )
      goto LABEL_108;
    v61 = v60->m_Items[v69];
    v62 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v62 = EventRewardButtonChangeManager_TypeInfo;
    }
    DISABLE_BTN_TXT = v62->static_fields->DISABLE_BTN_TXT;
    v64 = System_Int32__ToString((int)v11 + 108, 0LL);
    v66 = System_String__Concat_44305532(DISABLE_BTN_TXT, v64, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    this = (EventRewardButtonChangeManager_o *)EventRewardRootComponent__setRewardInfoImg(v61, v66, v65);
    v67 = v11->fields.eventBtns;
    if ( !v67 )
      goto LABEL_107;
    if ( v67->max_length <= v69 )
    {
LABEL_108:
      v68 = sub_B2C460(this);
      sub_B2C400(v68, 0LL);
    }
    this = (EventRewardButtonChangeManager_o *)v67->m_Items[v69];
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
    sub_B2C434(this, *(_QWORD *)&priorityId);
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
    sub_B2C2F8(p_RequestEndCallBack, 0LL);
    System_Action__Invoke(v4, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  EventRewardButtonChangeManager_c *v10; // x8
  System_String_o *DISABLE_BTN_TXT; // x19
  System_String_o *v12; // x0
  int32_t ReleaseTabImageId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418484F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRewardSceneReleaseMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&EventRewardButtonChangeManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418484F = 1;
  }
  ReleaseTabImageId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRewardSceneReleaseMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v9);
  }
  ReleaseTabImageId = EventRewardSceneReleaseMaster__getReleaseTabImageId(
                        (EventRewardSceneReleaseMaster_o *)Instance,
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
  return System_String__Concat_44305532(DISABLE_BTN_TXT, v12, 0LL);
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
  void *Instance; // x0
  __int64 v9; // x1
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v11; // x8
  CommonUI_o *v12; // x19
  System_String_o *closedMessage; // x20
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__35_0; // x22
  System_String_o *v16; // x21
  Il2CppObject *v17; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v18; // x0
  __int64 v19; // x0

  if ( (byte_4184852 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&Method_EventRewardButtonChangeManager___c__OnClickDisableCenterButton_b__35_0__, v5);
    sub_B2C35C(&EventRewardButtonChangeManager___c_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4184852 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  releaseEntityArray = this->fields.releaseEntityArray;
  if ( !releaseEntityArray )
    goto LABEL_19;
  if ( releaseEntityArray->max_length <= 1 )
  {
    v19 = sub_B2C460(Instance);
    sub_B2C400(v19, 0LL);
  }
  v11 = releaseEntityArray->m_Items[1];
  if ( !v11 )
    goto LABEL_19;
  v12 = (CommonUI_o *)Instance;
  closedMessage = v11->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( (BYTE3(EventRewardButtonChangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  static_fields = (struct EventRewardButtonChangeManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__35_0 = static_fields->__9__35_0;
  v16 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__35_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__35_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__35_0,
      v17,
      Method_EventRewardButtonChangeManager___c__OnClickDisableCenterButton_b__35_0__,
      0LL);
    v18 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v18->__9__35_0 = _9__35_0;
    sub_B2C2F8(&v18->__9__35_0, _9__35_0);
  }
  if ( !v12 )
LABEL_19:
    sub_B2C434(Instance, v9);
  CommonUI__OpenNotificationDialog(v12, v16, closedMessage, _9__35_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
  void *Instance; // x0
  __int64 v9; // x1
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v11; // x8
  CommonUI_o *v12; // x19
  System_String_o *closedMessage; // x20
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__34_0; // x22
  System_String_o *v16; // x21
  Il2CppObject *v17; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v18; // x0
  __int64 v19; // x0

  if ( (byte_4184851 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&Method_EventRewardButtonChangeManager___c__OnClickDisableLeftButton_b__34_0__, v5);
    sub_B2C35C(&EventRewardButtonChangeManager___c_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4184851 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  releaseEntityArray = this->fields.releaseEntityArray;
  if ( !releaseEntityArray )
    goto LABEL_19;
  if ( !releaseEntityArray->max_length )
  {
    v19 = sub_B2C460(Instance);
    sub_B2C400(v19, 0LL);
  }
  v11 = releaseEntityArray->m_Items[0];
  if ( !v11 )
    goto LABEL_19;
  v12 = (CommonUI_o *)Instance;
  closedMessage = v11->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( (BYTE3(EventRewardButtonChangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  static_fields = (struct EventRewardButtonChangeManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__34_0 = static_fields->__9__34_0;
  v16 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__34_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__34_0,
      v17,
      Method_EventRewardButtonChangeManager___c__OnClickDisableLeftButton_b__34_0__,
      0LL);
    v18 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v18->__9__34_0 = _9__34_0;
    sub_B2C2F8(&v18->__9__34_0, _9__34_0);
  }
  if ( !v12 )
LABEL_19:
    sub_B2C434(Instance, v9);
  CommonUI__OpenNotificationDialog(v12, v16, closedMessage, _9__34_0, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
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
  void *Instance; // x0
  __int64 v11; // x1
  struct EventRewardSceneReleaseEntity_array *releaseEntityArray; // x8
  EventRewardSceneReleaseEntity_o *v13; // x8
  CommonUI_o *v14; // x19
  System_String_o *closedMessage; // x20
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__36_0; // x22
  System_String_o *v18; // x21
  Il2CppObject *v19; // x23
  System_Action_o *v20; // x1
  struct EventRewardButtonChangeManager___c_StaticFields *v21; // x0
  struct System_Action_o **p__9__36_0; // x0
  struct EventRewardSceneReleaseEntity_array *v23; // x8
  EventRewardSceneReleaseEntity_o *v24; // x8
  struct EventRewardButtonChangeManager___c_StaticFields *v25; // x8
  Il2CppObject *v26; // x23
  struct EventRewardButtonChangeManager___c_StaticFields *v27; // x0
  __int64 v28; // x0

  if ( (byte_4184853 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_0__, v5);
    sub_B2C35C(&Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_1__, v6);
    sub_B2C35C(&EventRewardButtonChangeManager___c_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_4184853 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  eventCount = this->fields.eventCount;
  if ( eventCount != 3 )
  {
    if ( eventCount != 2 )
      return;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    releaseEntityArray = this->fields.releaseEntityArray;
    if ( !releaseEntityArray )
LABEL_34:
      sub_B2C434(Instance, v11);
    if ( releaseEntityArray->max_length > 1 )
    {
      v13 = releaseEntityArray->m_Items[1];
      if ( !v13 )
        goto LABEL_34;
      v14 = (CommonUI_o *)Instance;
      closedMessage = v13->fields.closedMessage;
      Instance = EventRewardButtonChangeManager___c_TypeInfo;
      if ( (BYTE3(EventRewardButtonChangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
        Instance = EventRewardButtonChangeManager___c_TypeInfo;
      }
      static_fields = (struct EventRewardButtonChangeManager___c_StaticFields *)*((_QWORD *)Instance + 23);
      _9__36_0 = static_fields->__9__36_0;
      v18 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__36_0 )
      {
        if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
        }
        v19 = (Il2CppObject *)static_fields->__9;
        _9__36_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__36_0,
          v19,
          Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_0__,
          0LL);
        v20 = _9__36_0;
        v21 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
        v21->__9__36_0 = _9__36_0;
        p__9__36_0 = &v21->__9__36_0;
LABEL_30:
        sub_B2C2F8(p__9__36_0, v20);
        goto LABEL_31;
      }
      goto LABEL_31;
    }
LABEL_35:
    v28 = sub_B2C460(Instance);
    sub_B2C400(v28, 0LL);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = this->fields.releaseEntityArray;
  if ( !v23 )
    goto LABEL_34;
  if ( v23->max_length <= 2 )
    goto LABEL_35;
  v24 = v23->m_Items[2];
  if ( !v24 )
    goto LABEL_34;
  v14 = (CommonUI_o *)Instance;
  closedMessage = v24->fields.closedMessage;
  Instance = EventRewardButtonChangeManager___c_TypeInfo;
  if ( (BYTE3(EventRewardButtonChangeManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardButtonChangeManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager___c_TypeInfo);
    Instance = EventRewardButtonChangeManager___c_TypeInfo;
  }
  v25 = (struct EventRewardButtonChangeManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__36_0 = v25->__9__36_1;
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__36_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      v25 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)v25->__9;
    _9__36_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__36_0,
      v26,
      Method_EventRewardButtonChangeManager___c__OnClickDisableRightButton_b__36_1__,
      0LL);
    v20 = _9__36_0;
    v27 = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
    v27->__9__36_1 = _9__36_0;
    p__9__36_0 = &v27->__9__36_1;
    goto LABEL_30;
  }
LABEL_31:
  if ( !v14 )
    goto LABEL_34;
  CommonUI__OpenNotificationDialog(v14, v18, closedMessage, _9__36_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
  if ( (byte_418484D & 1) == 0 )
  {
    this = (EventRewardButtonChangeManager_o *)sub_B2C35C(
                                                 &Method_UnityEngine_Component_GetComponent_BoxCollider___,
                                                 isDisp);
    byte_418484D = 1;
  }
  eventBtns = v6->fields.eventBtns;
  if ( !eventBtns )
LABEL_21:
    sub_B2C434(this, isDisp);
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
                                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
          v17 = sub_B2C460(this);
          sub_B2C400(v17, 0LL);
        }
        this = (EventRewardButtonChangeManager_o *)*((_QWORD *)&v15->obj.klass + v11);
        if ( !this )
          goto LABEL_21;
        this = (EventRewardButtonChangeManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
  __int64 v9; // x1
  __int64 v10; // x1
  UICommonButton_o *gameObject; // x0
  System_String_o **v12; // x8
  struct UICommonButton_array *eventBtns; // x9
  System_String_o *v14; // x22
  struct UICommonButton_array *v15; // x8
  struct UISprite_array *eventBtnImages; // x8
  struct UnityEngine_GameObject_array *backImgObjs; // x8
  struct UnityEngine_GameObject_array *activeImgObjs; // x8
  const MethodInfo *v19; // x3
  struct UISprite_array *btnTxtSprites; // x8
  UISprite_o *v21; // x22
  const MethodInfo *v22; // x2
  System_String_o *v23; // x21
  struct UICommonButton_array *v24; // x8
  __int64 v25; // x0

  if ( (byte_4184850 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardButtonChangeManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&EventRewardRootComponent_TypeInfo, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v10);
    byte_4184850 = 1;
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
    v12 = (System_String_o **)(*(_QWORD *)&gameObject[1].fields.specifyPressedColor.fields.b + 8LL);
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
    v12 = (System_String_o **)(*(_QWORD *)&gameObject[1].fields.specifyPressedColor.fields.b + 24LL);
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
    v12 = (System_String_o **)(*(_QWORD *)&gameObject[1].fields.specifyPressedColor.fields.b + 40LL);
  }
  eventBtns = this->fields.eventBtns;
  if ( !eventBtns )
    goto LABEL_43;
  if ( eventBtns->max_length <= tabPriority )
    goto LABEL_44;
  gameObject = eventBtns->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_43;
  v14 = *v12;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
  v15 = this->fields.eventBtns;
  if ( !v15 )
    goto LABEL_43;
  if ( v15->max_length <= tabPriority )
    goto LABEL_44;
  gameObject = v15->m_Items[tabPriority];
  if ( !gameObject )
    goto LABEL_43;
  gameObject = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  gameObject = (UICommonButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     (UnityEngine_GameObject_o *)gameObject,
                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
  UISprite__set_spriteName((UISprite_o *)gameObject, v14, 0LL);
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
  v21 = btnTxtSprites->m_Items[tabPriority];
  v23 = EventRewardButtonChangeManager__GetReleaseBtnSpriteName(
          (EventRewardButtonChangeManager_o *)gameObject,
          eventId,
          tabPriority,
          v19);
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  gameObject = (UICommonButton_o *)EventRewardRootComponent__setRewardInfoImg(v21, v23, v22);
  v24 = this->fields.eventBtns;
  if ( !v24 )
LABEL_43:
    sub_B2C434(gameObject, *(_QWORD *)&eventId);
  if ( v24->max_length <= tabPriority )
  {
LABEL_44:
    v25 = sub_B2C460(gameObject);
    sub_B2C400(v25, 0LL);
  }
  gameObject = v24->m_Items[tabPriority];
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
  sub_B2C2F8(&this->fields.releaseEntityArray, entitys);
  v5->fields.RequestEndCallBack = effectEndCallBack;
  v5 = (EventRewardButtonChangeManager_o *)((char *)v5 + 120);
  v5[-1].fields.releaseSlot = closedImageId;
  sub_B2C2F8(v5, effectEndCallBack);
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
  EventRewardButtonChangeManager_c *v18; // x0
  System_String_o **p_RELEASE_EFFECT_3TAB_NAME; // x8
  EventRewardButtonChangeManager_c *v20; // x0
  EventRewardButtonChangeManager_c *v21; // x0
  AssetData_o *efffectData; // x0
  struct UnityEngine_GameObject_array *effectObject; // x25
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x23
  AssetData_o *v25; // x23
  Il2CppClass **v26; // x0
  struct UnityEngine_GameObject_array *v27; // x8
  TabOpenEffectComponent_o *v28; // x23
  struct UnityEngine_GameObject_array *v29; // x8
  struct UISprite_array *eventBtnImages; // x8
  UnityEngine_Transform_o *v31; // x21
  struct UnityEngine_GameObject_array *v32; // x8
  UnityEngine_Transform_o *transform; // x21
  int v34; // s0
  struct UnityEngine_GameObject_array *v37; // x8
  UnityEngine_Transform_o *v38; // x19
  int v39; // s0
  __int64 v42; // x0
  __int64 v43; // x0

  if ( (byte_418484E & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, *(_QWORD *)&eventId);
    sub_B2C35C(&EventRewardButtonChangeManager_TypeInfo, v13);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___, v14);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    byte_418484E = 1;
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
    v20 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v20 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_RELEASE_EFFECT_3TAB_NAME = &v20->static_fields->RELEASE_EFFECT_3TAB_NAME;
  }
  else if ( eventCount == 2 )
  {
    v18 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v18 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_RELEASE_EFFECT_3TAB_NAME = &v18->static_fields->RELEASE_EFFECT_2TAB_NAME;
  }
  else
  {
    v21 = EventRewardButtonChangeManager_TypeInfo;
    if ( (BYTE3(EventRewardButtonChangeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardButtonChangeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardButtonChangeManager_TypeInfo);
      v21 = EventRewardButtonChangeManager_TypeInfo;
    }
    p_RELEASE_EFFECT_3TAB_NAME = &v21->static_fields->RELEASE_EFFECT_4TAB_NAME;
  }
  efffectData = this->fields.efffectData;
  if ( !efffectData )
    goto LABEL_45;
  effectObject = this->fields.effectObject;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               efffectData,
                                                                               *p_RELEASE_EFFECT_3TAB_NAME,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  efffectData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 Object_WarBoardWaitTimeSetting,
                                 (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectObject )
    goto LABEL_45;
  v25 = efffectData;
  if ( efffectData )
  {
    efffectData = (AssetData_o *)sub_B2C41C(efffectData, effectObject->obj.klass->_1.element_class);
    if ( !efffectData )
    {
      v43 = sub_B2C454();
      sub_B2C400(v43, 0LL);
    }
  }
  if ( effectObject->max_length <= slot )
    goto LABEL_46;
  v26 = &effectObject->obj.klass + slot;
  v26[4] = (Il2CppClass *)v25;
  sub_B2C2F8(v26 + 4, v25);
  v27 = this->fields.effectObject;
  if ( !v27 )
    goto LABEL_45;
  if ( v27->max_length <= slot )
  {
LABEL_46:
    v42 = sub_B2C460(efffectData);
    sub_B2C400(v42, 0LL);
  }
  efffectData = (AssetData_o *)v27->m_Items[slot];
  if ( !efffectData )
    goto LABEL_45;
  efffectData = (AssetData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 (UnityEngine_GameObject_o *)efffectData,
                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
  if ( !efffectData )
    goto LABEL_45;
  v28 = (TabOpenEffectComponent_o *)efffectData;
  TabOpenEffectComponent__SetChangeUICallback((TabOpenEffectComponent_o *)efffectData, changeCallback, 0LL);
  TabOpenEffectComponent__SetAnimationEndCallback(v28, endCallback, 0LL);
  v29 = this->fields.effectObject;
  if ( !v29 )
    goto LABEL_45;
  if ( v29->max_length <= slot )
    goto LABEL_46;
  efffectData = (AssetData_o *)v29->m_Items[slot];
  if ( !efffectData )
    goto LABEL_45;
  efffectData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)efffectData, 0LL);
  eventBtnImages = this->fields.eventBtnImages;
  if ( !eventBtnImages )
    goto LABEL_45;
  if ( eventBtnImages->max_length <= slot )
    goto LABEL_46;
  v31 = (UnityEngine_Transform_o *)efffectData;
  efffectData = (AssetData_o *)eventBtnImages->m_Items[slot];
  if ( !efffectData )
    goto LABEL_45;
  efffectData = (AssetData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)efffectData, 0LL);
  if ( !v31 )
    goto LABEL_45;
  UnityEngine_Transform__set_parent(v31, (UnityEngine_Transform_o *)efffectData, 0LL);
  v32 = this->fields.effectObject;
  if ( !v32 )
    goto LABEL_45;
  if ( v32->max_length <= slot )
    goto LABEL_46;
  efffectData = (AssetData_o *)v32->m_Items[slot];
  if ( !efffectData
    || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)efffectData, 0LL),
        *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v34, 0LL),
        (v37 = this->fields.effectObject) == 0LL) )
  {
LABEL_45:
    sub_B2C434(efffectData, v17);
  }
  if ( v37->max_length <= slot )
    goto LABEL_46;
  efffectData = (AssetData_o *)v37->m_Items[slot];
  if ( !efffectData )
    goto LABEL_45;
  v38 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)efffectData, 0LL);
  *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_one(0LL);
  if ( !v38 )
    goto LABEL_45;
  UnityEngine_Transform__set_localScale(v38, *(UnityEngine_Vector3_o *)&v39, 0LL);
  TabOpenEffectComponent__PlayAnimation(v28, 0LL);
}


void __fastcall EventRewardButtonChangeManager__SetReleaseEffectData(
        EventRewardButtonChangeManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( data )
  {
    this->fields.efffectData = data;
    sub_B2C2F8(&this->fields.efffectData, data);
  }
}


void __fastcall EventRewardButtonChangeManager__StartTutorialRequest(
        EventRewardButtonChangeManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  unsigned int releaseSlot; // w8
  int32_t v7; // w20
  NetworkManager_ResultCallbackFunc_o *v8; // x21
  TutorialEventSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v10; // x1

  if ( (byte_4184854 & 1) == 0 )
  {
    sub_B2C35C(&Method_EventRewardButtonChangeManager_EndTutorialRequest__, method);
    sub_B2C35C(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4184854 = 1;
  }
  releaseSlot = this->fields.releaseSlot;
  if ( releaseSlot >= 3 )
    v7 = -1;
  else
    v7 = releaseSlot + 25;
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EventRewardButtonChangeManager_EndTutorialRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v8,
                                                                     (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B2C434(0LL, v10);
  TutorialEventSetRequest__beginRequest(Request_WarBoardWallAttackRequest, v7, this->fields.eventId, 0LL);
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
  __int64 v11; // x21
  int max_length; // w9
  struct UnityEngine_GameObject_array *v13; // x0
  __int64 v14; // x0

  if ( (byte_418484B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418484B = 1;
  }
  this->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
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
    {
      v14 = sub_B2C460(Instance);
      sub_B2C400(v14, 0LL);
    }
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
    sub_B2C434(Instance, v8);
  v13 = (struct UnityEngine_GameObject_array *)sub_B2C374(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 LODWORD(v10->fields.datalist));
  this->fields.effectObject = v13;
  sub_B2C2F8(&this->fields.effectObject, v13);
}


void __fastcall EventRewardButtonChangeManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventRewardButtonChangeManager___c_StaticFields *static_fields; // x0

  if ( (byte_4184B66 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardButtonChangeManager___c_TypeInfo, v1);
    byte_4184B66 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventRewardButtonChangeManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventRewardButtonChangeManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRewardButtonChangeManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_4184B68 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4184B68 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableLeftButton_b__34_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4184B67 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4184B67 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableRightButton_b__36_0(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4184B69 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4184B69 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall EventRewardButtonChangeManager___c___OnClickDisableRightButton_b__36_1(
        EventRewardButtonChangeManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4184B6A & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4184B6A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}