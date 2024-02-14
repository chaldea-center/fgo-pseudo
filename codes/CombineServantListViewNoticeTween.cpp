void __fastcall CombineServantListViewNoticeTween___ctor(
        CombineServantListViewNoticeTween_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_MonoBehaviour_o **p_monoBehaviour; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4214788 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__,
      monoBehaviour);
    sub_B0D8A4(&System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo, v5);
    byte_4214788 = 1;
  }
  this->fields.to = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  p_monoBehaviour = &this->fields.monoBehaviour;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_monoBehaviour,
    (System_Int32_array **)monoBehaviour,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__);
  *(p_monoBehaviour - 1) = (struct UnityEngine_MonoBehaviour_o *)v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)(p_monoBehaviour - 1),
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall CombineServantListViewNoticeTween__AddTarget(
        CombineServantListViewNoticeTween_o *this,
        UILabel_o *tweenTarget,
        System_Collections_Generic_List_string__o *texts,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x21
  CombineServantListViewNoticeTween_TweenController_o *v11; // x22
  __int64 v12; // x0

  if ( (byte_4214789 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__,
      tweenTarget);
    sub_B0D8A4(&CombineServantListViewNoticeTween_TweenController_TypeInfo, v7);
    byte_4214789 = 1;
  }
  if ( !CombineServantListViewNoticeTween__IsTweenControllersContainsTarget(
          this,
          tweenTarget,
          (const MethodInfo *)texts) )
  {
    tweenControllers = this->fields.tweenControllers;
    v11 = (CombineServantListViewNoticeTween_TweenController_o *)sub_B0D974(
                                                                   CombineServantListViewNoticeTween_TweenController_TypeInfo,
                                                                   v8,
                                                                   v9);
    CombineServantListViewNoticeTween_TweenController___ctor(v11, tweenTarget, texts, 0LL);
    if ( !tweenControllers )
      sub_B0D97C(v12);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)tweenControllers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__);
  }
}


void __fastcall CombineServantListViewNoticeTween__Clear(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x0

  if ( (byte_421478C & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Clear__,
      method);
    byte_421478C = 1;
  }
  tweenControllers = this->fields.tweenControllers;
  if ( tweenControllers )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)tweenControllers,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Clear__);
}


bool __fastcall CombineServantListViewNoticeTween__GetIsTweenAlphaEnabled(
        CombineServantListViewNoticeTween_o *this,
        TweenAlpha_array *tweenAlphas,
        const MethodInfo *method)
{
  signed int max_length; // w8
  unsigned int v5; // w21
  UnityEngine_Object_o *v6; // x20
  __int64 v8; // x0

  if ( (byte_421478E & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, tweenAlphas);
    byte_421478E = 1;
  }
  if ( !tweenAlphas )
LABEL_16:
    sub_B0D97C(this);
  max_length = tweenAlphas->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B0D9A8(this);
      sub_B0D948(v8, 0LL);
    }
    v6 = (UnityEngine_Object_o *)tweenAlphas->m_Items[v5];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
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
  CombineServantListViewNoticeTween_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x21
  __int64 v8; // x22
  int size; // w8
  CombineServantListViewNoticeTween_TweenController_o *v10; // x8
  UnityEngine_Object_o *TweenTarget_k__BackingField; // x21

  v4 = this;
  if ( (byte_421478A & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      tweenTarget);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
      v5);
    this = (CombineServantListViewNoticeTween_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_421478A = 1;
  }
  tweenControllers = v4->fields.tweenControllers;
  if ( !tweenControllers )
LABEL_14:
    sub_B0D97C(this);
  v8 = 0LL;
  while ( 1 )
  {
    size = tweenControllers->fields._size;
    if ( (int)v8 >= size )
      return 0;
    if ( size <= (unsigned int)v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v10 = tweenControllers->fields._items->m_Items[v8];
    if ( !v10 )
      goto LABEL_14;
    TweenTarget_k__BackingField = (UnityEngine_Object_o *)v10->fields._TweenTarget_k__BackingField;
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
    tweenControllers = v4->fields.tweenControllers;
    ++v8;
    if ( !tweenControllers )
      goto LABEL_14;
  }
}


void __fastcall CombineServantListViewNoticeTween__RemoveTarget(
        CombineServantListViewNoticeTween_o *this,
        UILabel_o *tweenTarget,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v20; // x20

  if ( (byte_421478B & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__,
      tweenTarget);
    sub_B0D8A4(&Method_System_Predicate_CombineServantListViewNoticeTween_TweenController___ctor__, v5);
    sub_B0D8A4(&System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo, v6);
    sub_B0D8A4(&Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__, v7);
    sub_B0D8A4(&CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo, v8);
    byte_421478B = 1;
  }
  v9 = sub_B0D974(CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo, tweenTarget, method);
  CombineServantListViewNoticeTween___c__DisplayClass9_0___ctor(
    (CombineServantListViewNoticeTween___c__DisplayClass9_0_o *)v9,
    0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = tweenTarget,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v9 + 16),
          (System_Int32_array **)tweenTarget,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        tweenControllers = this->fields.tweenControllers,
        v20 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo,
                                                                         v18,
                                                                         v19),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v20,
          (Il2CppObject *)v9,
          Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_CombineServantListViewNoticeTween_TweenController___ctor__),
        !tweenControllers) )
  {
    sub_B0D97C(v10);
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)tweenControllers,
    (System_Predicate_T__o *)v20,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewNoticeTween__SetTexts(
        CombineServantListViewNoticeTween_o *this,
        bool isSwitch,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_o *v4; // x19
  __int64 v5; // x1
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x21
  __int64 v7; // x20
  int size; // w8
  __int64 v9; // x20
  int v10; // w8

  v4 = this;
  if ( (byte_421478F & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      isSwitch);
    this = (CombineServantListViewNoticeTween_o *)sub_B0D8A4(
                                                    &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
                                                    v5);
    byte_421478F = 1;
  }
  tweenControllers = v4->fields.tweenControllers;
  if ( !isSwitch )
  {
    if ( tweenControllers )
      goto LABEL_13;
LABEL_19:
    sub_B0D97C(this);
  }
  if ( !tweenControllers )
    goto LABEL_19;
  v7 = 0LL;
  while ( 1 )
  {
    size = tweenControllers->fields._size;
    if ( (int)v7 >= size )
      break;
    if ( size <= (unsigned int)v7 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (CombineServantListViewNoticeTween_o *)tweenControllers->fields._items->m_Items[v7];
    if ( this )
    {
      CombineServantListViewNoticeTween_TweenController__SetNextIndex(
        (CombineServantListViewNoticeTween_TweenController_o *)this,
        0LL);
      tweenControllers = v4->fields.tweenControllers;
      ++v7;
      if ( tweenControllers )
        continue;
    }
    goto LABEL_19;
  }
LABEL_13:
  v9 = 0LL;
  while ( 1 )
  {
    v10 = tweenControllers->fields._size;
    if ( (int)v9 >= v10 )
      break;
    if ( v10 <= (unsigned int)v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (CombineServantListViewNoticeTween_o *)tweenControllers->fields._items->m_Items[v9];
    if ( this )
    {
      CombineServantListViewNoticeTween_TweenController__SetTextToLabel(
        (CombineServantListViewNoticeTween_TweenController_o *)this,
        0LL);
      tweenControllers = v4->fields.tweenControllers;
      ++v9;
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
  System_Collections_IEnumerator_o *monoBehaviour; // x0
  const MethodInfo *v4; // x1
  UnityEngine_MonoBehaviour_o *v5; // x20
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  CombineServantListViewNoticeTween__Stop(this, method);
  monoBehaviour = (System_Collections_IEnumerator_o *)this->fields.monoBehaviour;
  if ( !monoBehaviour )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)monoBehaviour, 0LL) )
  {
    v5 = this->fields.monoBehaviour;
    this->fields.isTween = 1;
    monoBehaviour = CombineServantListViewNoticeTween__TweenLoop(this, v4);
    if ( v5 )
    {
      started = UnityEngine_MonoBehaviour__StartCoroutine_34930128(v5, monoBehaviour, 0LL);
      this->fields.coroutine = started;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.coroutine,
        (System_Int32_array **)started,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      return;
    }
LABEL_6:
    sub_B0D97C(monoBehaviour);
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
      sub_B0D97C(0LL);
    UnityEngine_MonoBehaviour__StopCoroutine_34930796(monoBehaviour, coroutine, 0LL);
    p_coroutine->klass = 0LL;
    sub_B0D840(p_coroutine, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


System_Collections_IEnumerator_o *__fastcall CombineServantListViewNoticeTween__TweenLoop(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_421478D & 1) == 0 )
  {
    sub_B0D8A4(&CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo, method);
    byte_421478D = 1;
  }
  v4 = sub_B0D974(CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo, method, v2);
  CombineServantListViewNoticeTween__TweenLoop_d__13___ctor(
    (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
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
  sub_B0D840(&v6->fields, tweenTarget);
  v6->fields._Texts_k__BackingField = texts;
  v6 = (CombineServantListViewNoticeTween_TweenController_o *)((char *)v6 + 24);
  sub_B0D840(v6, texts);
  LODWORD(v6->monitor) = 0;
}


void __fastcall CombineServantListViewNoticeTween_TweenController__SetNextIndex(
        CombineServantListViewNoticeTween_TweenController_o *this,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_TweenController_o *v2; // x19
  struct System_Collections_Generic_List_string__o *Texts_k__BackingField; // x8
  int32_t index_k__BackingField; // w9
  int32_t v5; // w8

  v2 = this;
  if ( (byte_4211E77 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_TweenController_o *)sub_B0D8A4(
                                                                    &Method_System_Collections_Generic_List_string__get_Count__,
                                                                    method);
    byte_4211E77 = 1;
  }
  Texts_k__BackingField = v2->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField )
    sub_B0D97C(this);
  index_k__BackingField = v2->fields._index_k__BackingField;
  if ( index_k__BackingField == Texts_k__BackingField->fields._size - 1 )
    v5 = 0;
  else
    v5 = index_k__BackingField + 1;
  v2->fields._index_k__BackingField = v5;
}


void __fastcall CombineServantListViewNoticeTween_TweenController__SetTextToLabel(
        CombineServantListViewNoticeTween_TweenController_o *this,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_TweenController_o *v2; // x19
  struct System_Collections_Generic_List_string__o *Texts_k__BackingField; // x20
  __int64 index_k__BackingField; // x21
  UILabel_o *TweenTarget_k__BackingField; // x19

  v2 = this;
  if ( (byte_4211E78 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_TweenController_o *)sub_B0D8A4(
                                                                    &Method_System_Collections_Generic_List_string__get_Item__,
                                                                    method);
    byte_4211E78 = 1;
  }
  Texts_k__BackingField = v2->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField )
    goto LABEL_8;
  index_k__BackingField = v2->fields._index_k__BackingField;
  TweenTarget_k__BackingField = v2->fields._TweenTarget_k__BackingField;
  if ( Texts_k__BackingField->fields._size <= (unsigned int)index_k__BackingField )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  if ( !TweenTarget_k__BackingField )
LABEL_8:
    sub_B0D97C(this);
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
  sub_B0D840(&this->fields._Texts_k__BackingField, value);
}


void __fastcall CombineServantListViewNoticeTween_TweenController__set_TweenTarget(
        CombineServantListViewNoticeTween_TweenController_o *this,
        UILabel_o *value,
        const MethodInfo *method)
{
  this->fields._TweenTarget_k__BackingField = value;
  sub_B0D840(&this->fields, value);
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
  __int64 v2; // x2
  CombineServantListViewNoticeTween__TweenLoop_d__13_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CombineServantListViewNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v9; // x21
  Il2CppObject *loopWaitOnShow_5__2; // x1
  bool result; // w0
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x8
  __int64 size; // x1
  __int64 v14; // x0
  struct TweenAlpha_array **p_tweenAlphas_5__3; // x21
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *v16; // x22
  unsigned int v17; // w23
  __int64 v18; // x24
  int32_t v19; // w8
  __int64 v20; // x8
  UnityEngine_Object_o *v21; // x22
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *v22; // x22
  struct TweenAlpha_array *v23; // x27
  __int64 v24; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  CombineServantListViewNoticeTween__TweenLoop_d__13_o *v26; // x22
  struct TweenAlpha_array *v27; // x8
  __int64 v28; // x8
  bool v29; // zf
  float v30; // s0
  Il2CppObject **p__2__current; // x19
  int v32; // w8
  Il2CppObject *v33; // x1
  __int64 v34; // x0
  __int64 v35; // x0

  v3 = this;
  if ( (byte_4211E76 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
      v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&TweenAlpha___TypeInfo, v6);
    this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v7);
    byte_4211E76 = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      v9 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
      UnityEngine_WaitForSeconds___ctor(v9, 3.0, 0LL);
      v3->fields._loopWaitOnShow_5__2 = v9;
      sub_B0D840(&v3->fields._loopWaitOnShow_5__2, v9);
      if ( !_4__this )
        goto LABEL_41;
      if ( _4__this->fields.to == 0.0 )
      {
        loopWaitOnShow_5__2 = (Il2CppObject *)v3->fields._loopWaitOnShow_5__2;
        v3->fields.__2__current = loopWaitOnShow_5__2;
        sub_B0D840(&v3->fields.__2__current, loopWaitOnShow_5__2);
        result = 1;
        v3->fields.__1__state = 1;
        return result;
      }
      break;
    case 1:
    case 2:
      v3->fields.__1__state = -1;
      goto LABEL_13;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_41;
      goto LABEL_42;
    case 4:
      v3->fields.__1__state = -1;
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
      sub_B0D97C(this);
    if ( !_4__this->fields.isTween )
      return 0;
    tweenControllers = _4__this->fields.tweenControllers;
    if ( !tweenControllers || (size = (unsigned int)tweenControllers->fields._size, !(_DWORD)size) )
    {
      v3->fields.__2__current = 0LL;
      p__2__current = &v3->fields.__2__current;
      sub_B0D840(p__2__current, 0LL);
      v32 = 2;
LABEL_53:
      *((_DWORD *)p__2__current - 2) = v32;
      return 1;
    }
    v14 = sub_B0D8BC(TweenAlpha___TypeInfo, size);
    v3->fields._tweenAlphas_5__3 = (struct TweenAlpha_array *)v14;
    p_tweenAlphas_5__3 = &v3->fields._tweenAlphas_5__3;
    sub_B0D840(&v3->fields._tweenAlphas_5__3, v14);
    v16 = _4__this->fields.tweenControllers;
    if ( !v16 )
      goto LABEL_41;
    v17 = 0;
    v18 = 32LL;
    while ( 1 )
    {
      v19 = v16->fields._size;
      if ( (int)v17 >= v19 )
        break;
      if ( v19 <= v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v20 = *(__int64 *)((char *)&v16->fields._items->obj.klass + v18);
      if ( !v20 )
        goto LABEL_41;
      v21 = *(UnityEngine_Object_o **)(v20 + 16);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)UnityEngine_Object__op_Equality(v21, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v22 = _4__this->fields.tweenControllers;
        if ( !v22 )
          goto LABEL_41;
        v23 = *p_tweenAlphas_5__3;
        if ( v22->fields._size <= v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v24 = *(__int64 *)((char *)&v22->fields._items->obj.klass + v18);
        if ( !v24 )
          goto LABEL_41;
        this = *(CombineServantListViewNoticeTween__TweenLoop_d__13_o **)(v24 + 16);
        if ( !this )
          goto LABEL_41;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)TweenAlpha__Begin(
                                                                         gameObject,
                                                                         0.5,
                                                                         _4__this->fields.to,
                                                                         0LL);
        if ( !v23 )
          goto LABEL_41;
        v26 = this;
        if ( this )
        {
          this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)sub_B0D964(
                                                                           this,
                                                                           v23->obj.klass->_1.element_class);
          if ( !this )
          {
            v35 = sub_B0D99C();
            sub_B0D948(v35, 0LL);
          }
        }
        if ( v17 >= v23->max_length )
          goto LABEL_56;
        *(Il2CppClass **)((char *)&v23->obj.klass + v18) = (Il2CppClass *)v26;
        sub_B0D840((char *)v23 + v18, v26);
        v27 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_41;
        if ( v17 >= v27->max_length )
        {
LABEL_56:
          v34 = sub_B0D9A8(this);
          sub_B0D948(v34, 0LL);
        }
        v28 = *(__int64 *)((char *)&v27->obj.klass + v18);
        if ( !v28 )
          goto LABEL_41;
        *(_DWORD *)(v28 + 24) = 6;
      }
      v16 = _4__this->fields.tweenControllers;
      ++v17;
      v18 += 8LL;
      if ( !v16 )
        goto LABEL_41;
    }
LABEL_42:
    if ( CombineServantListViewNoticeTween__GetIsTweenAlphaEnabled(_4__this, v3->fields._tweenAlphas_5__3, 0LL) )
    {
      if ( !_4__this->fields.isTween )
        return 0;
      v3->fields.__2__current = 0LL;
      p__2__current = &v3->fields.__2__current;
      sub_B0D840(p__2__current, 0LL);
      v32 = 3;
      goto LABEL_53;
    }
    if ( !_4__this->fields.isTween )
      return 0;
    v29 = _4__this->fields.to == 1.0;
    v30 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v30 = 1.0;
    _4__this->fields.to = v30;
    if ( v29 )
      break;
LABEL_47:
    if ( _4__this->fields.to == 1.0 )
      CombineServantListViewNoticeTween__SetTexts(_4__this, 1, 0LL);
    v3->fields._tweenAlphas_5__3 = 0LL;
    sub_B0D840(&v3->fields._tweenAlphas_5__3, 0LL);
  }
  v33 = (Il2CppObject *)v3->fields._loopWaitOnShow_5__2;
  v3->fields.__2__current = v33;
  sub_B0D840(&v3->fields.__2__current, v33);
  v3->fields.__1__state = 4;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_CombineServantListViewNoticeTween__TweenLoop_d__13_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  if ( (byte_4211E75 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween___c__DisplayClass9_0_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, t);
    byte_4211E75 = 1;
  }
  if ( !t )
    sub_B0D97C(this);
  TweenTarget_k__BackingField = (UnityEngine_Object_o *)t->fields._TweenTarget_k__BackingField;
  tweenTarget = (UnityEngine_Object_o *)v4->fields.tweenTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality(TweenTarget_k__BackingField, tweenTarget, 0LL);
}