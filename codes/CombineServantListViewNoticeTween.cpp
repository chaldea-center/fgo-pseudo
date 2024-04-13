void __fastcall CombineServantListViewNoticeTween___ctor(
        CombineServantListViewNoticeTween_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct UnityEngine_MonoBehaviour_o **p_monoBehaviour; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42E8B31 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__,
      (_DWORD)monoBehaviour,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo, v6, v7, v8);
    byte_42E8B31 = 1;
  }
  this->fields.to = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  p_monoBehaviour = &this->fields.monoBehaviour;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_monoBehaviour,
    (System_Int32_array **)monoBehaviour,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__);
  *(p_monoBehaviour - 1) = (struct UnityEngine_MonoBehaviour_o *)v16;
  sub_B5D560(
    (BattleServantConfConponent_o *)(p_monoBehaviour - 1),
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void __fastcall CombineServantListViewNoticeTween__AddTarget(
        CombineServantListViewNoticeTween_o *this,
        UILabel_o *tweenTarget,
        System_Collections_Generic_List_string__o *texts,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x21
  CombineServantListViewNoticeTween_TweenController_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_42E8B32 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__,
      (_DWORD)tweenTarget,
      (_DWORD)texts,
      method);
    sub_B5D5C4(&CombineServantListViewNoticeTween_TweenController_TypeInfo, v7, v8, v9);
    byte_42E8B32 = 1;
  }
  if ( !CombineServantListViewNoticeTween__IsTweenControllersContainsTarget(
          this,
          tweenTarget,
          (const MethodInfo *)texts) )
  {
    tweenControllers = this->fields.tweenControllers;
    v11 = (CombineServantListViewNoticeTween_TweenController_o *)sub_B5D694(CombineServantListViewNoticeTween_TweenController_TypeInfo);
    CombineServantListViewNoticeTween_TweenController___ctor(v11, tweenTarget, texts, 0LL);
    if ( !tweenControllers )
      sub_B5D69C(v12, v13);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)tweenControllers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__);
  }
}


void __fastcall CombineServantListViewNoticeTween__Clear(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x0

  if ( (byte_42E8B35 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Clear__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E8B35 = 1;
  }
  tweenControllers = this->fields.tweenControllers;
  if ( tweenControllers )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)tweenControllers,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Clear__);
}


bool __fastcall CombineServantListViewNoticeTween__GetIsTweenAlphaEnabled(
        CombineServantListViewNoticeTween_o *this,
        TweenAlpha_array *tweenAlphas,
        const MethodInfo *method)
{
  __int64 v3; // x3
  signed int max_length; // w8
  unsigned int v6; // w21
  UnityEngine_Object_o *v7; // x20
  __int64 v9; // x0

  if ( (byte_42E8B37 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_o *)sub_B5D5C4(
                                                    &UnityEngine_Object_TypeInfo,
                                                    (_DWORD)tweenAlphas,
                                                    (_DWORD)method,
                                                    v3);
    byte_42E8B37 = 1;
  }
  if ( !tweenAlphas )
LABEL_16:
    sub_B5D69C(this, tweenAlphas);
  max_length = tweenAlphas->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= max_length )
    {
      v9 = sub_B5D6C8(this);
      sub_B5D668(v9, 0LL);
    }
    v7 = (UnityEngine_Object_o *)tweenAlphas->m_Items[v6];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (CombineServantListViewNoticeTween_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    if ( !v7 )
      goto LABEL_16;
    this = (CombineServantListViewNoticeTween_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v7, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    max_length = tweenAlphas->max_length;
    if ( (int)++v6 >= max_length )
      return 0;
  }
}


bool __fastcall CombineServantListViewNoticeTween__IsTweenControllersContainsTarget(
        CombineServantListViewNoticeTween_o *this,
        UILabel_o *tweenTarget,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CombineServantListViewNoticeTween_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x21
  __int64 v13; // x22
  int size; // w8
  CombineServantListViewNoticeTween_TweenController_o *v15; // x8
  UnityEngine_Object_o *TweenTarget_k__BackingField; // x21

  v5 = this;
  if ( (byte_42E8B33 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      (_DWORD)tweenTarget,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
      v6,
      v7,
      v8);
    this = (CombineServantListViewNoticeTween_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E8B33 = 1;
  }
  tweenControllers = v5->fields.tweenControllers;
  if ( !tweenControllers )
LABEL_14:
    sub_B5D69C(this, tweenTarget);
  v13 = 0LL;
  while ( 1 )
  {
    size = tweenControllers->fields._size;
    if ( (int)v13 >= size )
      return 0;
    if ( size <= (unsigned int)v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v15 = tweenControllers->fields._items->m_Items[v13];
    if ( !v15 )
      goto LABEL_14;
    TweenTarget_k__BackingField = (UnityEngine_Object_o *)v15->fields._TweenTarget_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (CombineServantListViewNoticeTween_o *)UnityEngine_Object__op_Equality(
                                                    TweenTarget_k__BackingField,
                                                    (UnityEngine_Object_o *)tweenTarget,
                                                    0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    tweenControllers = v5->fields.tweenControllers;
    ++v13;
    if ( !tweenControllers )
      goto LABEL_14;
  }
}


void __fastcall CombineServantListViewNoticeTween__RemoveTarget(
        CombineServantListViewNoticeTween_o *this,
        UILabel_o *tweenTarget,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x20

  if ( (byte_42E8B34 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__,
      (_DWORD)tweenTarget,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Predicate_CombineServantListViewNoticeTween_TweenController___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__, v12, v13, v14);
    sub_B5D5C4(&CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo, v15, v16, v17);
    byte_42E8B34 = 1;
  }
  v18 = sub_B5D694(CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo);
  CombineServantListViewNoticeTween___c__DisplayClass9_0___ctor(
    (CombineServantListViewNoticeTween___c__DisplayClass9_0_o *)v18,
    0LL);
  if ( !v18
    || (*(_QWORD *)(v18 + 16) = tweenTarget,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v18 + 16),
          (System_Int32_array **)tweenTarget,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        tweenControllers = this->fields.tweenControllers,
        v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v28,
          (Il2CppObject *)v18,
          Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_CombineServantListViewNoticeTween_TweenController___ctor__),
        !tweenControllers) )
  {
    sub_B5D69C(v19, v20);
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)tweenControllers,
    (System_Predicate_T__o *)v28,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewNoticeTween__SetTexts(
        CombineServantListViewNoticeTween_o *this,
        bool isSwitch,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CombineServantListViewNoticeTween_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x21
  __int64 v10; // x20
  int size; // w8
  __int64 v12; // x20
  int v13; // w8

  v5 = this;
  if ( (byte_42E8B38 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      isSwitch,
      (_DWORD)method,
      v3);
    this = (CombineServantListViewNoticeTween_o *)sub_B5D5C4(
                                                    &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
                                                    v6,
                                                    v7,
                                                    v8);
    byte_42E8B38 = 1;
  }
  tweenControllers = v5->fields.tweenControllers;
  if ( !isSwitch )
  {
    if ( tweenControllers )
      goto LABEL_13;
LABEL_19:
    sub_B5D69C(this, isSwitch);
  }
  if ( !tweenControllers )
    goto LABEL_19;
  v10 = 0LL;
  while ( 1 )
  {
    size = tweenControllers->fields._size;
    if ( (int)v10 >= size )
      break;
    if ( size <= (unsigned int)v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (CombineServantListViewNoticeTween_o *)tweenControllers->fields._items->m_Items[v10];
    if ( this )
    {
      CombineServantListViewNoticeTween_TweenController__SetNextIndex(
        (CombineServantListViewNoticeTween_TweenController_o *)this,
        0LL);
      tweenControllers = v5->fields.tweenControllers;
      ++v10;
      if ( tweenControllers )
        continue;
    }
    goto LABEL_19;
  }
LABEL_13:
  v12 = 0LL;
  while ( 1 )
  {
    v13 = tweenControllers->fields._size;
    if ( (int)v12 >= v13 )
      break;
    if ( v13 <= (unsigned int)v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (CombineServantListViewNoticeTween_o *)tweenControllers->fields._items->m_Items[v12];
    if ( this )
    {
      CombineServantListViewNoticeTween_TweenController__SetTextToLabel(
        (CombineServantListViewNoticeTween_TweenController_o *)this,
        0LL);
      tweenControllers = v5->fields.tweenControllers;
      ++v12;
      if ( tweenControllers )
        continue;
    }
    goto LABEL_19;
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

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
      started = UnityEngine_MonoBehaviour__StartCoroutine_35615088(v6, monoBehaviour, 0LL);
      this->fields.coroutine = started;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.coroutine,
        (System_Int32_array **)started,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      return;
    }
LABEL_6:
    sub_B5D69C(monoBehaviour, v3);
  }
}


void __fastcall CombineServantListViewNoticeTween__Stop(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  BattleServantConfConponent_o *p_coroutine; // x19
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  p_coroutine = (BattleServantConfConponent_o *)&this->fields.coroutine;
  coroutine = this->fields.coroutine;
  this->fields.isTween = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
      sub_B5D69C(0LL, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_35615756(monoBehaviour, coroutine, 0LL);
    p_coroutine->klass = 0LL;
    sub_B5D560(p_coroutine, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


System_Collections_IEnumerator_o *__fastcall CombineServantListViewNoticeTween__TweenLoop(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E8B36 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8B36 = 1;
  }
  v5 = sub_B5D694(CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo);
  CombineServantListViewNoticeTween__TweenLoop_d__13___ctor(
    (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall CombineServantListViewNoticeTween_TweenController___ctor(
        CombineServantListViewNoticeTween_TweenController_o *this,
        UILabel_o *tweenTarget,
        System_Collections_Generic_List_string__o *texts,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_TweenController_o *v6; // x21

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._TweenTarget_k__BackingField = tweenTarget;
  sub_B5D560(&v6->fields);
  v6->fields._Texts_k__BackingField = texts;
  v6 = (CombineServantListViewNoticeTween_TweenController_o *)((char *)v6 + 24);
  sub_B5D560(v6);
  LODWORD(v6->monitor) = 0;
}


void __fastcall CombineServantListViewNoticeTween_TweenController__SetNextIndex(
        CombineServantListViewNoticeTween_TweenController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CombineServantListViewNoticeTween_TweenController_o *v4; // x19
  struct System_Collections_Generic_List_string__o *Texts_k__BackingField; // x8
  int32_t index_k__BackingField; // w9
  int32_t v7; // w8

  v4 = this;
  if ( (byte_42E5ED0 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_TweenController_o *)sub_B5D5C4(
                                                                    &Method_System_Collections_Generic_List_string__get_Count__,
                                                                    (_DWORD)method,
                                                                    v2,
                                                                    v3);
    byte_42E5ED0 = 1;
  }
  Texts_k__BackingField = v4->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField )
    sub_B5D69C(this, method);
  index_k__BackingField = v4->fields._index_k__BackingField;
  if ( index_k__BackingField == Texts_k__BackingField->fields._size - 1 )
    v7 = 0;
  else
    v7 = index_k__BackingField + 1;
  v4->fields._index_k__BackingField = v7;
}


void __fastcall CombineServantListViewNoticeTween_TweenController__SetTextToLabel(
        CombineServantListViewNoticeTween_TweenController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CombineServantListViewNoticeTween_TweenController_o *v4; // x19
  struct System_Collections_Generic_List_string__o *Texts_k__BackingField; // x20
  __int64 index_k__BackingField; // x21
  UILabel_o *TweenTarget_k__BackingField; // x19

  v4 = this;
  if ( (byte_42E5ED1 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_TweenController_o *)sub_B5D5C4(
                                                                    &Method_System_Collections_Generic_List_string__get_Item__,
                                                                    (_DWORD)method,
                                                                    v2,
                                                                    v3);
    byte_42E5ED1 = 1;
  }
  Texts_k__BackingField = v4->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField )
    goto LABEL_8;
  index_k__BackingField = v4->fields._index_k__BackingField;
  TweenTarget_k__BackingField = v4->fields._TweenTarget_k__BackingField;
  if ( Texts_k__BackingField->fields._size <= (unsigned int)index_k__BackingField )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  if ( !TweenTarget_k__BackingField )
LABEL_8:
    sub_B5D69C(this, method);
  UILabel__set_text(
    TweenTarget_k__BackingField,
    Texts_k__BackingField->fields._items->m_Items[index_k__BackingField],
    0LL);
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
  this->fields._Texts_k__BackingField = value;
  sub_B5D560(&this->fields._Texts_k__BackingField);
}


void __fastcall CombineServantListViewNoticeTween_TweenController__set_TweenTarget(
        CombineServantListViewNoticeTween_TweenController_o *this,
        UILabel_o *value,
        const MethodInfo *method)
{
  this->fields._TweenTarget_k__BackingField = value;
  sub_B5D560(&this->fields);
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
  int v2; // w2
  __int64 v3; // x3
  CombineServantListViewNoticeTween__TweenLoop_d__13_o *v4; // x19
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
  CombineServantListViewNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v18; // x21
  bool result; // w0
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x8
  __int64 size; // x1
  struct TweenAlpha_array **p_tweenAlphas_5__3; // x21
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *v23; // x22
  unsigned int v24; // w23
  __int64 v25; // x24
  int32_t v26; // w8
  __int64 v27; // x8
  UnityEngine_Object_o *v28; // x22
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *v29; // x22
  struct TweenAlpha_array *v30; // x27
  __int64 v31; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  CombineServantListViewNoticeTween__TweenLoop_d__13_o *v33; // x22
  struct TweenAlpha_array *v34; // x8
  __int64 v35; // x8
  bool v36; // zf
  float v37; // s0
  Il2CppObject **p__2__current; // x19
  int v39; // w8
  __int64 v40; // x0
  __int64 v41; // x0

  v4 = this;
  if ( (byte_42E5ECF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
      v5,
      v6,
      v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&TweenAlpha___TypeInfo, v11, v12, v13);
    this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)sub_B5D5C4(
                                                                     &UnityEngine_WaitForSeconds_TypeInfo,
                                                                     v14,
                                                                     v15,
                                                                     v16);
    byte_42E5ECF = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v18 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v18, 3.0, 0LL);
      v4->fields._loopWaitOnShow_5__2 = v18;
      sub_B5D560(&v4->fields._loopWaitOnShow_5__2);
      if ( !_4__this )
        goto LABEL_41;
      if ( _4__this->fields.to == 0.0 )
      {
        v4->fields.__2__current = (Il2CppObject *)v4->fields._loopWaitOnShow_5__2;
        sub_B5D560(&v4->fields.__2__current);
        result = 1;
        v4->fields.__1__state = 1;
        return result;
      }
      break;
    case 1:
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_13;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_41;
      goto LABEL_42;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_41;
      goto LABEL_47;
    default:
      return 0;
  }
  while ( 1 )
  {
LABEL_13:
    if ( !_4__this )
LABEL_41:
      sub_B5D69C(this, method);
    if ( !_4__this->fields.isTween )
      return 0;
    tweenControllers = _4__this->fields.tweenControllers;
    if ( !tweenControllers || (size = (unsigned int)tweenControllers->fields._size, !(_DWORD)size) )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      v39 = 2;
LABEL_53:
      *((_DWORD *)p__2__current - 2) = v39;
      return 1;
    }
    v4->fields._tweenAlphas_5__3 = (struct TweenAlpha_array *)sub_B5D5DC(TweenAlpha___TypeInfo, size);
    p_tweenAlphas_5__3 = &v4->fields._tweenAlphas_5__3;
    sub_B5D560(&v4->fields._tweenAlphas_5__3);
    v23 = _4__this->fields.tweenControllers;
    if ( !v23 )
      goto LABEL_41;
    v24 = 0;
    v25 = 32LL;
    while ( 1 )
    {
      v26 = v23->fields._size;
      if ( (int)v24 >= v26 )
        break;
      if ( v26 <= v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v27 = *(__int64 *)((char *)&v23->fields._items->obj.klass + v25);
      if ( !v27 )
        goto LABEL_41;
      v28 = *(UnityEngine_Object_o **)(v27 + 16);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)UnityEngine_Object__op_Equality(v28, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v29 = _4__this->fields.tweenControllers;
        if ( !v29 )
          goto LABEL_41;
        v30 = *p_tweenAlphas_5__3;
        if ( v29->fields._size <= v24 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v31 = *(__int64 *)((char *)&v29->fields._items->obj.klass + v25);
        if ( !v31 )
          goto LABEL_41;
        this = *(CombineServantListViewNoticeTween__TweenLoop_d__13_o **)(v31 + 16);
        if ( !this )
          goto LABEL_41;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)TweenAlpha__Begin(
                                                                         gameObject,
                                                                         0.5,
                                                                         _4__this->fields.to,
                                                                         0LL);
        if ( !v30 )
          goto LABEL_41;
        v33 = this;
        if ( this )
        {
          this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)sub_B5D684(
                                                                           this,
                                                                           v30->obj.klass->_1.element_class);
          if ( !this )
          {
            v41 = sub_B5D6BC();
            sub_B5D668(v41, 0LL);
          }
        }
        if ( v24 >= v30->max_length )
          goto LABEL_56;
        *(Il2CppClass **)((char *)&v30->obj.klass + v25) = (Il2CppClass *)v33;
        sub_B5D560((char *)v30 + v25);
        v34 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_41;
        if ( v24 >= v34->max_length )
        {
LABEL_56:
          v40 = sub_B5D6C8(this);
          sub_B5D668(v40, 0LL);
        }
        v35 = *(__int64 *)((char *)&v34->obj.klass + v25);
        if ( !v35 )
          goto LABEL_41;
        *(_DWORD *)(v35 + 24) = 6;
      }
      v23 = _4__this->fields.tweenControllers;
      ++v24;
      v25 += 8LL;
      if ( !v23 )
        goto LABEL_41;
    }
LABEL_42:
    if ( CombineServantListViewNoticeTween__GetIsTweenAlphaEnabled(_4__this, v4->fields._tweenAlphas_5__3, 0LL) )
    {
      if ( !_4__this->fields.isTween )
        return 0;
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      v39 = 3;
      goto LABEL_53;
    }
    if ( !_4__this->fields.isTween )
      return 0;
    v36 = _4__this->fields.to == 1.0;
    v37 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v37 = 1.0;
    _4__this->fields.to = v37;
    if ( v36 )
      break;
LABEL_47:
    if ( _4__this->fields.to == 1.0 )
      CombineServantListViewNoticeTween__SetTexts(_4__this, 1, 0LL);
    v4->fields._tweenAlphas_5__3 = 0LL;
    sub_B5D560(&v4->fields._tweenAlphas_5__3);
  }
  v4->fields.__2__current = (Il2CppObject *)v4->fields._loopWaitOnShow_5__2;
  sub_B5D560(&v4->fields.__2__current);
  v4->fields.__1__state = 4;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_CombineServantListViewNoticeTween__TweenLoop_d__13_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  __int64 v3; // x3
  CombineServantListViewNoticeTween___c__DisplayClass9_0_o *v5; // x20
  UnityEngine_Object_o *TweenTarget_k__BackingField; // x19
  UnityEngine_Object_o *tweenTarget; // x20

  v5 = this;
  if ( (byte_42E5ECE & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween___c__DisplayClass9_0_o *)sub_B5D5C4(
                                                                         &UnityEngine_Object_TypeInfo,
                                                                         (_DWORD)t,
                                                                         (_DWORD)method,
                                                                         v3);
    byte_42E5ECE = 1;
  }
  if ( !t )
    sub_B5D69C(this, t);
  TweenTarget_k__BackingField = (UnityEngine_Object_o *)t->fields._TweenTarget_k__BackingField;
  tweenTarget = (UnityEngine_Object_o *)v5->fields.tweenTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality(TweenTarget_k__BackingField, tweenTarget, 0LL);
}