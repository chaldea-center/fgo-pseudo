void __fastcall ScrollPageIndicator___ctor(ScrollPageIndicator_o *this, const MethodInfo *method)
{
  this->fields.IndicatorStep = 48;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrollPageIndicator__CreateIndicator(
        ScrollPageIndicator_o *this,
        int32_t count,
        const MethodInfo *method)
{
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
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  struct UISprite_array *v27; // x0
  struct UISprite_array **p_Indicator; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UnityEngine_Transform_o *transform; // x22
  __int64 Component_object; // x0
  __int64 v37; // x1
  float y; // s8
  int v39; // s2
  float v40; // s0
  float v41; // s1
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  int v45; // w27
  unsigned __int64 v46; // x26
  __int64 v47; // x28
  __int64 v48; // x29
  __int64 v49; // x22
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x1
  Il2CppObject *PageIndicatorPrefab; // x23
  Il2CppObject *v58; // x23
  unsigned __int64 v59; // x21
  System_String_o *v60; // x0
  UnityEngine_Transform_o *v61; // x24
  __int64 v62; // x2
  UnityEngine_Transform_o *v63; // x24
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  unsigned int *v70; // x25
  UISprite_o *v71; // x24
  __int64 v72; // x8
  __int64 v73; // x1
  int32_t layer; // w24
  __int64 v75; // x23
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  EventDelegate_Callback_o *v85; // x24
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  EventDelegate_o *v89; // x22
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  __int64 v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  __int64 v99; // x8
  __int64 v100; // x0
  int32_t IndicatorStep; // [xsp+8h] [xbp-68h]
  int v102; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14E60 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&count, method);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11, v12);
    sub_1BCA7E0(&NGUITools_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__, v19, v20);
    sub_1BCA7E0(&ScrollPageIndicator___c__DisplayClass10_0_TypeInfo, v21, v22);
    sub_1BCA7E0(&UISprite___TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_20864/*"indicator"*/, v25, v26);
    byte_4B14E60 = 1;
  }
  v102 = 0;
  if ( count > 1 )
  {
    v27 = (struct UISprite_array *)sub_1BCA888(UISprite___TypeInfo, (unsigned int)count);
    this->fields.Indicator = v27;
    p_Indicator = &this->fields.Indicator;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.Indicator, (int64_t)v27, v29, v30, v31, v32, v33, v34);
    IndicatorStep = this->fields.IndicatorStep;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Component_object )
    {
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Component_object, 0LL);
      y = localPosition.fields.y;
      Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( Component_object )
      {
        *(UnityEngine_Vector3_o *)(&v39 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)Component_object,
                                                 0LL);
        if ( transform )
        {
          v40 = (float)(IndicatorStep * (1 - count)) * 0.5;
          v41 = y;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v39 - 2), 0LL);
          v45 = 0;
          v46 = 0LL;
          v47 = (unsigned int)count;
          v48 = 8LL;
          this->fields.nowIndex = 0;
          while ( 1 )
          {
            v49 = sub_1BCAA2C(ScrollPageIndicator___c__DisplayClass10_0_TypeInfo, v42, v43, v44);
            System_Object___ctor((Il2CppObject *)v49, 0LL);
            if ( !v49 )
              break;
            *(_QWORD *)(v49 + 24) = this;
            sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 24), (int64_t)this, v50, v51, v52, v53, v54, v55);
            PageIndicatorPrefab = (Il2CppObject *)this->fields.PageIndicatorPrefab;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
            v58 = UnityEngine_Object__Instantiate_object_(
                    PageIndicatorPrefab,
                    (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
            v59 = v46 + 1;
            v102 = v46 + 1;
            v60 = System_Int32__ToString((int32_t)&v102, 0LL);
            Component_object = (__int64)System_String__Concat_62401220((System_String_o *)StringLiteral_20864/*"indicator"*/, v60, 0LL);
            if ( !v58 )
              break;
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v58, (System_String_o *)Component_object, 0LL);
            v61 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v58, 0LL);
            Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( !v61 )
              break;
            UnityEngine_Transform__set_parent(v61, (UnityEngine_Transform_o *)Component_object, 0LL);
            Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v58, 0LL);
            if ( !Component_object )
              break;
            v104.fields.x = (float)v45;
            v104.fields.y = 0.0;
            v104.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v104, 0LL);
            Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v58, 0LL);
            v63 = (UnityEngine_Transform_o *)Component_object;
            if ( !byte_4B109C6 )
            {
              Component_object = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v37, v62);
              byte_4B109C6 = 1;
            }
            if ( !v63 )
              break;
            UnityEngine_Transform__set_localScale(v63, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v58,
                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v70 = (unsigned int *)*p_Indicator;
            if ( !*p_Indicator )
              break;
            v71 = (UISprite_o *)Component_object;
            if ( Component_object )
            {
              Component_object = sub_1BCA91C(Component_object, *(_QWORD *)(*(_QWORD *)v70 + 64LL));
              if ( !Component_object )
              {
                v100 = sub_1BCAA60(0LL);
                sub_1BCA908(v100, 0LL);
              }
            }
            if ( v46 >= v70[6] )
              sub_1BCAA44(Component_object, v37);
            *(_QWORD *)&v70[2 * v46 + 8] = v71;
            sub_1BCA784((PartyOrganizationUtility_o *)&v70[v48], (int64_t)v71, v64, v65, v66, v67, v68, v69);
            if ( !v71 )
              break;
            UISprite__set_atlas(v71, this->fields.IndicatorAtlas, 0LL);
            v72 = 64LL;
            if ( !v46 )
              v72 = 56LL;
            UISprite__set_spriteName(v71, *(System_String_o **)((char *)&this->klass + v72), 0LL);
            ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v71->klass->vtable._33_MakePixelPerfect.method)(
              v71,
              v71->klass->vtable._34_get_minWidth.methodPtr);
            Component_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !Component_object )
              break;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v73);
            NGUITools__SetLayer((UnityEngine_GameObject_o *)v58, layer, 0LL);
            Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v58,
                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
            if ( !Component_object )
              break;
            v75 = Component_object;
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)Component_object + 536LL))(
              Component_object,
              0LL,
              0LL,
              *(_QWORD *)(*(_QWORD *)Component_object + 544LL));
            *(_QWORD *)(v75 + 32) = 0LL;
            v75 += 32LL;
            sub_1BCA784((PartyOrganizationUtility_o *)v75, 0LL, v76, v77, v78, v79, v80, v81);
            *(_DWORD *)(v49 + 16) = v46;
            v85 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v82, v83, v84);
            EventDelegate_Callback___ctor(
              v85,
              (Il2CppObject *)v49,
              Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__,
              0LL);
            v89 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v86, v87, v88);
            EventDelegate___ctor_47348668(v89, v85, 0LL);
            Component_object = *(_QWORD *)(v75 + 168);
            if ( !Component_object )
              break;
            v96 = *(_QWORD *)(Component_object + 16);
            v97 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++*(_DWORD *)(Component_object + 28);
            if ( !v96 )
              break;
            v98 = *(int *)(Component_object + 24);
            if ( (unsigned int)v98 >= *(_DWORD *)(v96 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Component_object,
                (Il2CppObject *)v89,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
            }
            else
            {
              v99 = v96 + 8 * v98;
              *(_DWORD *)(Component_object + 24) = v98 + 1;
              *(_QWORD *)(v99 + 32) = v89;
              sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 32), (int64_t)v89, v90, v91, v92, v93, v94, v95);
            }
            v48 += 2LL;
            ++v46;
            v45 += IndicatorStep;
            if ( v47 == v59 )
              return;
          }
        }
      }
    }
    sub_1BCAA3C(Component_object, v37);
  }
  ScrollPageIndicator__Init(this, *(const MethodInfo **)&count);
}


void __fastcall ScrollPageIndicator__Init(ScrollPageIndicator_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ScrollPageIndicator_o *v8; // x19
  PartyOrganizationUtility_o *p_Indicator; // x19
  struct UISprite_array *v10; // x21
  struct UISprite_array *Indicator; // t1
  __int64 v12; // x8
  unsigned __int64 v13; // x22
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x1
  UnityEngine_Object_o *gameObject; // x20

  v8 = this;
  if ( (byte_4B14E5F & 1) == 0 )
  {
    this = (ScrollPageIndicator_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14E5F = 1;
  }
  Indicator = v8->fields.Indicator;
  p_Indicator = (PartyOrganizationUtility_o *)&v8->fields.Indicator;
  v10 = Indicator;
  if ( Indicator )
  {
    v12 = *(_QWORD *)&v10->max_length;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      do
      {
        if ( v13 >= (unsigned int)v12 )
          sub_1BCAA44(this, method);
        v14 = (UnityEngine_Object_o *)v10->m_Items[v13];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        this = (ScrollPageIndicator_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v14 )
            sub_1BCAA3C(this, method);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v14,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
          UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
        }
        LODWORD(v12) = v10->max_length;
        ++v13;
      }
      while ( (__int64)v13 < (int)v12 );
    }
    p_Indicator->klass = 0LL;
    sub_1BCA784(p_Indicator, 0LL, v2, v3, v4, v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrollPageIndicator__UpdateIndicator(
        ScrollPageIndicator_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct UISprite_array *Indicator; // x8
  __int64 nowIndex; // x9
  ScrollPageIndicator_o *v5; // x19
  int max_length; // w10
  struct UISprite_array *v8; // x8
  int32_t v9; // w9

  Indicator = this->fields.Indicator;
  if ( Indicator )
  {
    nowIndex = (unsigned int)this->fields.nowIndex;
    v5 = this;
    if ( (nowIndex & 0x80000000) == 0 )
    {
      max_length = Indicator->max_length;
      if ( (int)nowIndex < max_length )
      {
        if ( (unsigned int)nowIndex >= max_length )
          goto LABEL_16;
        this = (ScrollPageIndicator_o *)Indicator->m_Items[nowIndex];
        if ( !this )
          goto LABEL_15;
        UISprite__set_spriteName((UISprite_o *)this, v5->fields.OffIndicatorSpriteName, 0LL);
      }
    }
    if ( (idx & 0x80000000) != 0 )
      goto LABEL_13;
    v8 = v5->fields.Indicator;
    if ( !v8 )
      goto LABEL_15;
    v9 = v8->max_length;
    if ( v9 <= idx )
    {
LABEL_13:
      v5->fields.nowIndex = idx;
      return;
    }
    if ( v9 > (unsigned int)idx )
    {
      this = (ScrollPageIndicator_o *)v8->m_Items[idx];
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, v5->fields.OnIndicatorSpriteName, 0LL);
        goto LABEL_13;
      }
LABEL_15:
      sub_1BCAA3C(this, *(_QWORD *)&idx);
    }
LABEL_16:
    sub_1BCAA44(this, *(_QWORD *)&idx);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrollPageIndicator_OnPageChangeCallback___ctor(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0BF3C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0BEF4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScrollPageIndicator_OnPageChangeCallback__BeginInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        int32_t pageIndex,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = pageIndex;
  if ( (byte_4B14E61 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&pageIndex, callback);
    byte_4B14E61 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall ScrollPageIndicator_OnPageChangeCallback__EndInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall ScrollPageIndicator_OnPageChangeCallback__Invoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        int32_t pageIndex,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    pageIndex,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ScrollPageIndicator___c__DisplayClass10_0___ctor(
        ScrollPageIndicator___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ScrollPageIndicator___c__DisplayClass10_0___CreateIndicator_b__0(
        ScrollPageIndicator___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  struct ScrollPageIndicator_o *_4__this; // x8
  struct ScrollPageIndicator_OnPageChangeCallback_o *onPageChange; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  onPageChange = _4__this->fields.onPageChange;
  if ( onPageChange )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onPageChange->fields.m_target)(
      onPageChange->fields.original_method_info,
      (unsigned int)this->fields.idx,
      *(_QWORD *)&onPageChange->fields.extra_arg);
}