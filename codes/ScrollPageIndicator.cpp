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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct UISprite_array *v16; // x0
  struct UISprite_array **p_Indicator; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_Transform_o *transform; // x22
  __int64 Component_object; // x0
  __int64 v26; // x1
  float y; // s8
  int v28; // s2
  float v29; // s0
  float v30; // s1
  int v31; // w27
  unsigned __int64 v32; // x26
  __int64 v33; // x28
  __int64 v34; // x29
  __int64 v35; // x22
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  Il2CppObject *PageIndicatorPrefab; // x23
  Il2CppObject *v43; // x23
  unsigned __int64 v44; // x21
  System_String_o *v45; // x0
  UnityEngine_Transform_o *v46; // x24
  UnityEngine_Transform_o *v47; // x24
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  unsigned int *v54; // x25
  UISprite_o *v55; // x24
  __int64 v56; // x8
  int32_t layer; // w24
  __int64 v58; // x23
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  EventDelegate_Callback_o *v65; // x24
  EventDelegate_o *v66; // x22
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  __int64 v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  __int64 v76; // x8
  __int64 v77; // x0
  int32_t IndicatorStep; // [xsp+8h] [xbp-68h]
  int v79; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C20B98 & 1) == 0 )
  {
    sub_1C3B764(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&count);
    sub_1C3B764(&EventDelegate_TypeInfo, v5);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v6);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8);
    sub_1C3B764(&NGUITools_TypeInfo, v9);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v11);
    sub_1C3B764(&Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__, v12);
    sub_1C3B764(&ScrollPageIndicator___c__DisplayClass10_0_TypeInfo, v13);
    sub_1C3B764(&UISprite___TypeInfo, v14);
    sub_1C3B764(&StringLiteral_21060/*"menu_txt_remaining"*/, v15);
    byte_4C20B98 = 1;
  }
  v79 = 0;
  if ( count > 1 )
  {
    v16 = (struct UISprite_array *)sub_1C3B80C(UISprite___TypeInfo, (unsigned int)count);
    this->fields.Indicator = v16;
    p_Indicator = &this->fields.Indicator;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.Indicator, (int64_t)v16, v18, v19, v20, v21, v22, v23);
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
        *(UnityEngine_Vector3_o *)(&v28 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)Component_object,
                                                 0LL);
        if ( transform )
        {
          v29 = (float)(IndicatorStep * (1 - count)) * 0.5;
          v30 = y;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v28 - 2), 0LL);
          v31 = 0;
          v32 = 0LL;
          v33 = (unsigned int)count;
          v34 = 8LL;
          this->fields.nowIndex = 0;
          while ( 1 )
          {
            v35 = sub_1C3B9B0(ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v35, 0LL);
            if ( !v35 )
              break;
            *(_QWORD *)(v35 + 24) = this;
            sub_1C3B708((PartyOrganizationUtility_o *)(v35 + 24), (int64_t)this, v36, v37, v38, v39, v40, v41);
            PageIndicatorPrefab = (Il2CppObject *)this->fields.PageIndicatorPrefab;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v43 = UnityEngine_Object__Instantiate_object_(
                    PageIndicatorPrefab,
                    (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            v44 = v32 + 1;
            v79 = v32 + 1;
            v45 = System_Int32__ToString((int32_t)&v79, 0LL);
            Component_object = (__int64)System_String__Concat_63368612((System_String_o *)StringLiteral_21060/*"menu_txt_remaining"*/, v45, 0LL);
            if ( !v43 )
              break;
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v43, (System_String_o *)Component_object, 0LL);
            v46 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0LL);
            Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( !v46 )
              break;
            UnityEngine_Transform__set_parent(v46, (UnityEngine_Transform_o *)Component_object, 0LL);
            Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0LL);
            if ( !Component_object )
              break;
            v81.fields.x = (float)v31;
            v81.fields.y = 0.0;
            v81.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v81, 0LL);
            Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0LL);
            v47 = (UnityEngine_Transform_o *)Component_object;
            if ( !byte_4C1C516 )
            {
              Component_object = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v26);
              byte_4C1C516 = 1;
            }
            if ( !v47 )
              break;
            UnityEngine_Transform__set_localScale(v47, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v43,
                                          (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v54 = (unsigned int *)*p_Indicator;
            if ( !*p_Indicator )
              break;
            v55 = (UISprite_o *)Component_object;
            if ( Component_object )
            {
              Component_object = sub_1C3B8A0(Component_object, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
              if ( !Component_object )
              {
                v77 = sub_1C3B9E4(0LL);
                sub_1C3B88C(v77, 0LL);
              }
            }
            if ( v32 >= v54[6] )
              sub_1C3B9C8(Component_object, v26);
            *(_QWORD *)&v54[2 * v32 + 8] = v55;
            sub_1C3B708((PartyOrganizationUtility_o *)&v54[v34], (int64_t)v55, v48, v49, v50, v51, v52, v53);
            if ( !v55 )
              break;
            UISprite__set_atlas(v55, this->fields.IndicatorAtlas, 0LL);
            v56 = 64LL;
            if ( !v32 )
              v56 = 56LL;
            UISprite__set_spriteName(v55, *(System_String_o **)((char *)&this->klass + v56), 0LL);
            ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v55->klass->vtable._33_MakePixelPerfect.method)(
              v55,
              v55->klass->vtable._34_get_minWidth.methodPtr);
            Component_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !Component_object )
              break;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            NGUITools__SetLayer((UnityEngine_GameObject_o *)v43, layer, 0LL);
            Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v43,
                                          (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
            if ( !Component_object )
              break;
            v58 = Component_object;
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)Component_object + 536LL))(
              Component_object,
              0LL,
              0LL,
              *(_QWORD *)(*(_QWORD *)Component_object + 544LL));
            *(_QWORD *)(v58 + 32) = 0LL;
            v58 += 32LL;
            sub_1C3B708((PartyOrganizationUtility_o *)v58, 0LL, v59, v60, v61, v62, v63, v64);
            *(_DWORD *)(v35 + 16) = v32;
            v65 = (EventDelegate_Callback_o *)sub_1C3B9B0(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v65,
              (Il2CppObject *)v35,
              Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__,
              0LL);
            v66 = (EventDelegate_o *)sub_1C3B9B0(EventDelegate_TypeInfo);
            EventDelegate___ctor_48222576(v66, v65, 0LL);
            Component_object = *(_QWORD *)(v58 + 168);
            if ( !Component_object )
              break;
            v73 = *(_QWORD *)(Component_object + 16);
            v74 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++*(_DWORD *)(Component_object + 28);
            if ( !v73 )
              break;
            v75 = *(int *)(Component_object + 24);
            if ( (unsigned int)v75 >= *(_DWORD *)(v73 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Component_object,
                (Il2CppObject *)v66,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
            }
            else
            {
              v76 = v73 + 8 * v75;
              *(_DWORD *)(Component_object + 24) = v75 + 1;
              *(_QWORD *)(v76 + 32) = v66;
              sub_1C3B708((PartyOrganizationUtility_o *)(v76 + 32), (int64_t)v66, v67, v68, v69, v70, v71, v72);
            }
            v34 += 2LL;
            ++v32;
            v31 += IndicatorStep;
            if ( v33 == v44 )
              return;
          }
        }
      }
    }
    sub_1C3B9C0(Component_object, v26);
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
  UnityEngine_Object_o *gameObject; // x20

  v8 = this;
  if ( (byte_4C20B97 & 1) == 0 )
  {
    this = (ScrollPageIndicator_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C20B97 = 1;
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
          sub_1C3B9C8(this, method);
        v14 = (UnityEngine_Object_o *)v10->m_Items[v13];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ScrollPageIndicator_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v14 )
            sub_1C3B9C0(this, method);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v14,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
        }
        LODWORD(v12) = v10->max_length;
        ++v13;
      }
      while ( (__int64)v13 < (int)v12 );
    }
    p_Indicator->klass = 0LL;
    sub_1C3B708(p_Indicator, 0LL, v2, v3, v4, v5, v6, v7);
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
      sub_1C3B9C0(this, *(_QWORD *)&idx);
    }
LABEL_16:
    sub_1C3B9C8(this, *(_QWORD *)&idx);
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
  sub_1C3B708(
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
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A7B888;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A7B840;
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
  if ( (byte_4C20B99 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, *(_QWORD *)&pageIndex);
    byte_4C20B99 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall ScrollPageIndicator_OnPageChangeCallback__EndInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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
    sub_1C3B9C0(this, method);
  onPageChange = _4__this->fields.onPageChange;
  if ( onPageChange )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onPageChange->fields.m_target)(
      onPageChange->fields.original_method_info,
      (unsigned int)this->fields.idx,
      *(_QWORD *)&onPageChange->fields.extra_arg);
}