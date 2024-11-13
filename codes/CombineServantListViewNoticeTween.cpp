void __fastcall CombineServantListViewNoticeTween___ctor(
        CombineServantListViewNoticeTween_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_List_object__o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B19E13 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__,
      monoBehaviour,
      method);
    sub_1BCA7E0(&System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo, v5, v6);
    byte_4B19E13 = 1;
  }
  this->fields.to = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.monoBehaviour,
    (int64_t)monoBehaviour,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo,
                                                       v13,
                                                       v14,
                                                       v15);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__);
  this->fields.tweenControllers = (struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *)v16;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v16, v17, v18, v19, v20, v21, v22);
}


void __fastcall CombineServantListViewNoticeTween__AddTarget(
        CombineServantListViewNoticeTween_o *this,
        UILabel_o *tweenTarget,
        System_Collections_Generic_List_string__o *texts,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Collections_Generic_List_object__o *tweenControllers; // x19
  CombineServantListViewNoticeTween_TweenController_o *v13; // x20
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4B19E14 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__,
      tweenTarget,
      texts);
    sub_1BCA7E0(&CombineServantListViewNoticeTween_TweenController_TypeInfo, v7, v8);
    byte_4B19E14 = 1;
  }
  if ( !CombineServantListViewNoticeTween__IsTweenControllersContainsTarget(
          this,
          tweenTarget,
          (const MethodInfo *)texts) )
  {
    tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
    v13 = (CombineServantListViewNoticeTween_TweenController_o *)sub_1BCAA2C(
                                                                   CombineServantListViewNoticeTween_TweenController_TypeInfo,
                                                                   v9,
                                                                   v10,
                                                                   v11);
    CombineServantListViewNoticeTween_TweenController___ctor(v13, tweenTarget, texts, v14);
    if ( !tweenControllers
      || (items = tweenControllers->fields._items,
          v24 = Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__,
          ++tweenControllers->fields._version,
          !items) )
    {
      sub_1BCAA3C(v15, v16);
    }
    size = tweenControllers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        tweenControllers,
        (Il2CppObject *)v13,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      tweenControllers->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v13;
      sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v13, v17, v18, v19, v20, v21, v22);
    }
  }
}


void __fastcall CombineServantListViewNoticeTween__Clear(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4B19E17 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Clear__,
      method,
      v2);
    byte_4B19E17 = 1;
  }
  tweenControllers = this->fields.tweenControllers;
  if ( tweenControllers )
  {
    size = tweenControllers->fields._size;
    v6 = tweenControllers->fields._version + 1;
    tweenControllers->fields._size = 0;
    tweenControllers->fields._version = v6;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)tweenControllers->fields._items, 0, size, 0LL);
  }
}


bool __fastcall CombineServantListViewNoticeTween__GetIsTweenAlphaEnabled(
        CombineServantListViewNoticeTween_o *this,
        TweenAlpha_array *tweenAlphas,
        const MethodInfo *method)
{
  signed int max_length; // w8
  unsigned int v5; // w21
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4B19E19 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, tweenAlphas, method);
    byte_4B19E19 = 1;
  }
  if ( !tweenAlphas )
LABEL_16:
    sub_1BCAA3C(this, tweenAlphas);
  max_length = tweenAlphas->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
      sub_1BCAA44(this, tweenAlphas);
    v6 = (UnityEngine_Object_o *)tweenAlphas->m_Items[v5];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, tweenAlphas);
    this = (CombineServantListViewNoticeTween_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    if ( !v6 )
      goto LABEL_16;
    this = (CombineServantListViewNoticeTween_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    max_length = tweenAlphas->max_length;
    if ( (int)++v5 >= max_length )
      return 0;
  }
}


bool __fastcall CombineServantListViewNoticeTween__IsTweenControllersContainsTarget(
        CombineServantListViewNoticeTween_o *this,
        UILabel_o *tweenTarget,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *tweenControllers; // x0
  int32_t v10; // w21
  int32_t size; // w25
  UnityEngine_Object_o *items; // x22

  if ( (byte_4B19E15 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      tweenTarget,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
      v5,
      v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B19E15 = 1;
  }
  tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
  if ( !tweenControllers )
LABEL_11:
    sub_1BCAA3C(tweenControllers, tweenTarget);
  v10 = 0;
  while ( 1 )
  {
    size = tweenControllers->fields._size;
    if ( v10 >= size )
      break;
    tweenControllers = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      tweenControllers,
                                                                      v10,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    if ( !tweenControllers )
      goto LABEL_11;
    items = (UnityEngine_Object_o *)tweenControllers->fields._items;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, tweenTarget);
    if ( UnityEngine_Object__op_Equality(items, (UnityEngine_Object_o *)tweenTarget, 0LL) )
      break;
    tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
    ++v10;
    if ( !tweenControllers )
      goto LABEL_11;
  }
  return v10 < size;
}


void __fastcall CombineServantListViewNoticeTween__RemoveTarget(
        CombineServantListViewNoticeTween_o *this,
        UILabel_o *tweenTarget,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *tweenControllers; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Predicate_object__o *v25; // x20

  if ( (byte_4B19E16 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__,
      tweenTarget,
      method);
    sub_1BCA7E0(&System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__, v8, v9);
    sub_1BCA7E0(&CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo, v10, v11);
    byte_4B19E16 = 1;
  }
  v12 = sub_1BCAA2C(CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo, tweenTarget, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = tweenTarget,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)tweenTarget, v15, v16, v17, v18, v19, v20),
        tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers,
        v25 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo,
                                              v22,
                                              v23,
                                              v24),
        System_Predicate_object____ctor(
          v25,
          (Il2CppObject *)v12,
          Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__,
          0LL),
        !tweenControllers) )
  {
    sub_1BCAA3C(v13, v14);
  }
  System_Collections_Generic_List_object___RemoveAll(
    tweenControllers,
    (System_Predicate_T__o *)v25,
    (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewNoticeTween__SetTexts(
        CombineServantListViewNoticeTween_o *this,
        bool isSwitch,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *tweenControllers; // x0
  int32_t v8; // w20
  int32_t v9; // w20

  if ( (byte_4B19E1A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      isSwitch,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
      v5,
      v6);
    byte_4B19E1A = 1;
  }
  tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
  if ( !isSwitch )
  {
    if ( tweenControllers )
      goto LABEL_11;
LABEL_15:
    sub_1BCAA3C(tweenControllers, isSwitch);
  }
  if ( !tweenControllers )
    goto LABEL_15;
  v8 = 0;
  while ( v8 < tweenControllers->fields._size )
  {
    tweenControllers = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      tweenControllers,
                                                                      v8,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    if ( tweenControllers )
    {
      CombineServantListViewNoticeTween_TweenController__SetNextIndex(
        (CombineServantListViewNoticeTween_TweenController_o *)tweenControllers,
        (const MethodInfo *)isSwitch);
      tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
      ++v8;
      if ( tweenControllers )
        continue;
    }
    goto LABEL_15;
  }
LABEL_11:
  v9 = 0;
  while ( v9 < tweenControllers->fields._size )
  {
    tweenControllers = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      tweenControllers,
                                                                      v9,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    if ( tweenControllers )
    {
      CombineServantListViewNoticeTween_TweenController__SetTextToLabel(
        (CombineServantListViewNoticeTween_TweenController_o *)tweenControllers,
        (const MethodInfo *)isSwitch);
      tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
      ++v9;
      if ( tweenControllers )
        continue;
    }
    goto LABEL_15;
  }
}


void __fastcall CombineServantListViewNoticeTween__Start(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_IEnumerator_o *monoBehaviour; // x0
  const MethodInfo *v5; // x1
  UnityEngine_MonoBehaviour_o *v6; // x20
  struct UnityEngine_Coroutine_o *started; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  CombineServantListViewNoticeTween__Stop(this, method);
  monoBehaviour = (System_Collections_IEnumerator_o *)this->fields.monoBehaviour;
  if ( !monoBehaviour )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)monoBehaviour, 0LL) )
  {
    v6 = this->fields.monoBehaviour;
    this->fields.isTween = 1;
    monoBehaviour = CombineServantListViewNoticeTween__TweenLoop(this, v5);
    if ( v6 )
    {
      started = UnityEngine_MonoBehaviour__StartCoroutine_70139516(v6, monoBehaviour, 0LL);
      this->fields.coroutine = started;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.coroutine, (int64_t)started, v8, v9, v10, v11, v12, v13);
      return;
    }
LABEL_6:
    sub_1BCAA3C(monoBehaviour, v3);
  }
}


void __fastcall CombineServantListViewNoticeTween__Stop(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  PartyOrganizationUtility_o *p_coroutine; // x19
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  p_coroutine = (PartyOrganizationUtility_o *)&this->fields.coroutine;
  coroutine = this->fields.coroutine;
  this->fields.isTween = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
      sub_1BCAA3C(0LL, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_70140136(monoBehaviour, coroutine, 0LL);
    p_coroutine->klass = 0LL;
    sub_1BCA784(p_coroutine, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


System_Collections_IEnumerator_o *__fastcall CombineServantListViewNoticeTween__TweenLoop(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B19E18 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo, method, v2);
    byte_4B19E18 = 1;
  }
  v5 = sub_1BCAA2C(CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall CombineServantListViewNoticeTween_TweenController___ctor(
        CombineServantListViewNoticeTween_TweenController_o *this,
        UILabel_o *tweenTarget,
        System_Collections_Generic_List_string__o *texts,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_TweenController_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._TweenTarget_k__BackingField = tweenTarget;
  sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields, (int64_t)tweenTarget, v7, v8, v9, v10, v11, v12);
  v6->fields._Texts_k__BackingField = texts;
  v6 = (CombineServantListViewNoticeTween_TweenController_o *)((char *)v6 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)v6, (int64_t)texts, v13, v14, v15, v16, v17, v18);
  LODWORD(v6->monitor) = 0;
}


void __fastcall CombineServantListViewNoticeTween_TweenController__SetNextIndex(
        CombineServantListViewNoticeTween_TweenController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CombineServantListViewNoticeTween_TweenController_o *v3; // x19
  struct System_Collections_Generic_List_string__o *Texts_k__BackingField; // x8
  int32_t index_k__BackingField; // w9
  int32_t v6; // w8

  v3 = this;
  if ( (byte_4B19E1B & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_TweenController_o *)sub_1BCA7E0(
                                                                    &Method_System_Collections_Generic_List_string__get_Count__,
                                                                    method,
                                                                    v2);
    byte_4B19E1B = 1;
  }
  Texts_k__BackingField = v3->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField )
    sub_1BCAA3C(this, method);
  index_k__BackingField = v3->fields._index_k__BackingField;
  if ( index_k__BackingField == Texts_k__BackingField->fields._size - 1 )
    v6 = 0;
  else
    v6 = index_k__BackingField + 1;
  v3->fields._index_k__BackingField = v6;
}


void __fastcall CombineServantListViewNoticeTween_TweenController__SetTextToLabel(
        CombineServantListViewNoticeTween_TweenController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_List_object__o *Texts_k__BackingField; // x0
  UILabel_o *TweenTarget_k__BackingField; // x20

  if ( (byte_4B19E1C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, method, v2);
    byte_4B19E1C = 1;
  }
  Texts_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField
    || (TweenTarget_k__BackingField = this->fields._TweenTarget_k__BackingField,
        Texts_k__BackingField = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               Texts_k__BackingField,
                                                                               this->fields._index_k__BackingField,
                                                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__),
        !TweenTarget_k__BackingField) )
  {
    sub_1BCAA3C(Texts_k__BackingField, method);
  }
  UILabel__set_text(TweenTarget_k__BackingField, (System_String_o *)Texts_k__BackingField, 0LL);
}


System_Collections_Generic_List_string__o *__fastcall CombineServantListViewNoticeTween_TweenController__get_Texts(
        CombineServantListViewNoticeTween_TweenController_o *this,
        const MethodInfo *method)
{
  return this->fields._Texts_k__BackingField;
}


UILabel_o *__fastcall CombineServantListViewNoticeTween_TweenController__get_TweenTarget(
        CombineServantListViewNoticeTween_TweenController_o *this,
        const MethodInfo *method)
{
  return this->fields._TweenTarget_k__BackingField;
}


int32_t __fastcall CombineServantListViewNoticeTween_TweenController__get_index(
        CombineServantListViewNoticeTween_TweenController_o *this,
        const MethodInfo *method)
{
  return this->fields._index_k__BackingField;
}


void __fastcall CombineServantListViewNoticeTween_TweenController__set_Texts(
        CombineServantListViewNoticeTween_TweenController_o *this,
        System_Collections_Generic_List_string__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Texts_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Texts_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CombineServantListViewNoticeTween_TweenController__set_TweenTarget(
        CombineServantListViewNoticeTween_TweenController_o *this,
        UILabel_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._TweenTarget_k__BackingField = value;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall CombineServantListViewNoticeTween_TweenController__set_index(
        CombineServantListViewNoticeTween_TweenController_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._index_k__BackingField = value;
}


void __fastcall CombineServantListViewNoticeTween__TweenLoop_d__13___ctor(
        CombineServantListViewNoticeTween__TweenLoop_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CombineServantListViewNoticeTween__TweenLoop_d__13__MoveNext(
        CombineServantListViewNoticeTween__TweenLoop_d__13_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  CombineServantListViewNoticeTween__TweenLoop_d__13_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct CombineServantListViewNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t loopWaitOnShow_5__2; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  bool v28; // zf
  float v29; // s0
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x8
  __int64 size; // x1
  int64_t v32; // x0
  unsigned int **p_tweenAlphas_5__3; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  unsigned __int64 v40; // x22
  UnityEngine_Object_o *v41; // x23
  unsigned int *v42; // x27
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  CombineServantListViewNoticeTween__TweenLoop_d__13_o *v50; // x23
  unsigned int *v51; // x0
  unsigned int *v52; // x8
  __int64 v53; // x8
  PartyOrganizationUtility_o *v54; // x19
  int v55; // w8
  int64_t v56; // x1
  __int64 v57; // x0

  v8 = this;
  if ( (byte_4B19E1E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
      v9,
      v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&TweenAlpha___TypeInfo, v13, v14);
    this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)sub_1BCA7E0(
                                                                     &UnityEngine_WaitForSeconds_TypeInfo,
                                                                     v15,
                                                                     v16);
    byte_4B19E1E = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v18 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
      UnityEngine_WaitForSeconds___ctor(v18, 3.0, 0LL);
      v8->fields._loopWaitOnShow_5__2 = v18;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._loopWaitOnShow_5__2,
        (int64_t)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      if ( !_4__this )
        goto LABEL_40;
      if ( _4__this->fields.to == 0.0 )
      {
        loopWaitOnShow_5__2 = (int64_t)v8->fields._loopWaitOnShow_5__2;
        v8->fields.__2__current = (Il2CppObject *)loopWaitOnShow_5__2;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(p__2__current, loopWaitOnShow_5__2, (int64_t)v2, v3, v4, v5, v6, v7);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
      break;
    case 1:
    case 2:
      v8->fields.__1__state = -1;
      goto LABEL_17;
    case 3:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_9;
      goto LABEL_40;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_40;
      goto LABEL_14;
    default:
      return 0;
  }
  while ( 1 )
  {
LABEL_17:
    if ( !_4__this )
LABEL_40:
      sub_1BCAA3C(this, method);
    if ( !_4__this->fields.isTween )
      return 0;
    tweenControllers = _4__this->fields.tweenControllers;
    if ( !tweenControllers || (size = (unsigned int)tweenControllers->fields._size, !(_DWORD)size) )
    {
      v8->fields.__2__current = 0LL;
      v54 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v54, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
      v55 = 2;
      goto LABEL_48;
    }
    v32 = sub_1BCA888(TweenAlpha___TypeInfo, size);
    v8->fields._tweenAlphas_5__3 = (struct TweenAlpha_array *)v32;
    p_tweenAlphas_5__3 = (unsigned int **)&v8->fields._tweenAlphas_5__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._tweenAlphas_5__3, v32, v34, v35, v36, v37, v38, v39);
    this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)_4__this->fields.tweenControllers;
    if ( !this )
      goto LABEL_40;
    v40 = 0LL;
    while ( (__int64)v40 < SLODWORD(this->fields.__2__current) )
    {
      this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v40,
                                                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
      if ( !this )
        goto LABEL_40;
      v41 = *(UnityEngine_Object_o **)&this->fields.__1__state;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( !UnityEngine_Object__op_Equality(v41, 0LL, 0LL) )
      {
        this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)_4__this->fields.tweenControllers;
        if ( !this )
          goto LABEL_40;
        v42 = *p_tweenAlphas_5__3;
        this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)System_Collections_Generic_List_object___get_Item(
                                                                         (System_Collections_Generic_List_object__o *)this,
                                                                         v40,
                                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
        if ( !this )
          goto LABEL_40;
        this = *(CombineServantListViewNoticeTween__TweenLoop_d__13_o **)&this->fields.__1__state;
        if ( !this )
          goto LABEL_40;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)TweenAlpha__Begin(
                                                                         gameObject,
                                                                         0.5,
                                                                         _4__this->fields.to,
                                                                         0LL);
        if ( !v42 )
          goto LABEL_40;
        v50 = this;
        if ( this )
        {
          this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)sub_1BCA91C(
                                                                           this,
                                                                           *(_QWORD *)(*(_QWORD *)v42 + 64LL));
          if ( !this )
          {
            v57 = sub_1BCAA60(0LL);
            sub_1BCA908(v57, 0LL);
          }
        }
        if ( v40 >= v42[6] )
          goto LABEL_49;
        v51 = &v42[2 * v40];
        *((_QWORD *)v51 + 4) = v50;
        sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 8), (int64_t)v50, v44, v45, v46, v47, v48, v49);
        v52 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_40;
        if ( v40 >= v52[6] )
LABEL_49:
          sub_1BCAA44(this, method);
        v53 = *(_QWORD *)&v52[2 * v40 + 8];
        if ( !v53 )
          goto LABEL_40;
        *(_DWORD *)(v53 + 32) = 6;
      }
      this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)_4__this->fields.tweenControllers;
      ++v40;
      if ( !this )
        goto LABEL_40;
    }
LABEL_9:
    if ( CombineServantListViewNoticeTween__GetIsTweenAlphaEnabled(
           (CombineServantListViewNoticeTween_o *)this,
           v8->fields._tweenAlphas_5__3,
           v2) )
    {
      break;
    }
    if ( !_4__this->fields.isTween )
      return 0;
    v28 = _4__this->fields.to == 1.0;
    v29 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v29 = 1.0;
    _4__this->fields.to = v29;
    if ( v28 )
    {
      v56 = (int64_t)v8->fields._loopWaitOnShow_5__2;
      v8->fields.__2__current = (Il2CppObject *)v56;
      v54 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v54, v56, (int64_t)v2, v3, v4, v5, v6, v7);
      v55 = 4;
      goto LABEL_48;
    }
LABEL_14:
    if ( _4__this->fields.to == 1.0 )
      CombineServantListViewNoticeTween__SetTexts(_4__this, 1, v2);
    v8->fields._tweenAlphas_5__3 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._tweenAlphas_5__3, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
  }
  if ( !_4__this->fields.isTween )
    return 0;
  v8->fields.__2__current = 0LL;
  v54 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BCA784(v54, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
  v55 = 3;
LABEL_48:
  *(_DWORD *)&v54[-1].fields._IsQuestStartMenuMode_k__BackingField = v55;
  return 1;
}


Il2CppObject *__fastcall CombineServantListViewNoticeTween__TweenLoop_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CombineServantListViewNoticeTween__TweenLoop_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CombineServantListViewNoticeTween__TweenLoop_d__13__System_Collections_IEnumerator_Reset(
        CombineServantListViewNoticeTween__TweenLoop_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_CombineServantListViewNoticeTween__TweenLoop_d__13_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall CombineServantListViewNoticeTween__TweenLoop_d__13__System_Collections_IEnumerator_get_Current(
        CombineServantListViewNoticeTween__TweenLoop_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CombineServantListViewNoticeTween__TweenLoop_d__13__System_IDisposable_Dispose(
        CombineServantListViewNoticeTween__TweenLoop_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CombineServantListViewNoticeTween___c__DisplayClass9_0___ctor(
        CombineServantListViewNoticeTween___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineServantListViewNoticeTween___c__DisplayClass9_0___RemoveTarget_b__0(
        CombineServantListViewNoticeTween___c__DisplayClass9_0_o *this,
        CombineServantListViewNoticeTween_TweenController_o *t,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween___c__DisplayClass9_0_o *v4; // x20
  UnityEngine_Object_o *TweenTarget_k__BackingField; // x19
  UnityEngine_Object_o *tweenTarget; // x20

  v4 = this;
  if ( (byte_4B19E1D & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween___c__DisplayClass9_0_o *)sub_1BCA7E0(
                                                                         &UnityEngine_Object_TypeInfo,
                                                                         t,
                                                                         method);
    byte_4B19E1D = 1;
  }
  if ( !t )
    sub_1BCAA3C(this, t);
  TweenTarget_k__BackingField = (UnityEngine_Object_o *)t->fields._TweenTarget_k__BackingField;
  tweenTarget = (UnityEngine_Object_o *)v4->fields.tweenTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, t);
  return UnityEngine_Object__op_Equality(TweenTarget_k__BackingField, tweenTarget, 0LL);
}