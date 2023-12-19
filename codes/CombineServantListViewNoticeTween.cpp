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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40FA4FD & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__,
      monoBehaviour);
    sub_B16FFC(&System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo, v5);
    byte_40FA4FD = 1;
  }
  this->fields.to = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  p_monoBehaviour = &this->fields.monoBehaviour;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_monoBehaviour,
    (System_Int32_array **)monoBehaviour,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__);
  *(p_monoBehaviour - 1) = (struct UnityEngine_MonoBehaviour_o *)v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)(p_monoBehaviour - 1),
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
  __int64 v10; // x3
  __int64 v11; // x4
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x21
  CombineServantListViewNoticeTween_TweenController_o *v13; // x22

  if ( (byte_40FA4FE & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__,
      tweenTarget);
    sub_B16FFC(&CombineServantListViewNoticeTween_TweenController_TypeInfo, v7);
    byte_40FA4FE = 1;
  }
  if ( !CombineServantListViewNoticeTween__IsTweenControllersContainsTarget(
          this,
          tweenTarget,
          (const MethodInfo *)texts) )
  {
    tweenControllers = this->fields.tweenControllers;
    v13 = (CombineServantListViewNoticeTween_TweenController_o *)sub_B170CC(
                                                                   CombineServantListViewNoticeTween_TweenController_TypeInfo,
                                                                   v8,
                                                                   v9,
                                                                   v10,
                                                                   v11);
    CombineServantListViewNoticeTween_TweenController___ctor(v13, tweenTarget, texts, 0LL);
    if ( !tweenControllers )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)tweenControllers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__);
  }
}


void __fastcall CombineServantListViewNoticeTween__Clear(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x0

  if ( (byte_40FA501 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Clear__,
      method);
    byte_40FA501 = 1;
  }
  tweenControllers = this->fields.tweenControllers;
  if ( tweenControllers )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)tweenControllers,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Clear__);
}


bool __fastcall CombineServantListViewNoticeTween__GetIsTweenAlphaEnabled(
        CombineServantListViewNoticeTween_o *this,
        TweenAlpha_array *tweenAlphas,
        const MethodInfo *method)
{
  signed int max_length; // w8
  unsigned int v5; // w21
  UnityEngine_Object_o *v6; // x20

  if ( (byte_40FA503 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, tweenAlphas);
    byte_40FA503 = 1;
  }
  if ( !tweenAlphas )
LABEL_16:
    sub_B170D4();
  max_length = tweenAlphas->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      sub_B17100(this, tweenAlphas, method);
      sub_B170A0();
    }
    v6 = (UnityEngine_Object_o *)tweenAlphas->m_Items[v5];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
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
  __int64 v6; // x1
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x21
  __int64 v8; // x22
  int size; // w8
  CombineServantListViewNoticeTween_TweenController_o *v10; // x8
  UnityEngine_Object_o *TweenTarget_k__BackingField; // x21

  if ( (byte_40FA4FF & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      tweenTarget);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
      v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FA4FF = 1;
  }
  tweenControllers = this->fields.tweenControllers;
  if ( !tweenControllers )
LABEL_14:
    sub_B170D4();
  v8 = 0LL;
  while ( 1 )
  {
    size = tweenControllers->fields._size;
    if ( (int)v8 >= size )
      return 0;
    if ( size <= (unsigned int)v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v10 = tweenControllers->fields._items->m_Items[v8];
    if ( !v10 )
      goto LABEL_14;
    TweenTarget_k__BackingField = (UnityEngine_Object_o *)v10->fields._TweenTarget_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(TweenTarget_k__BackingField, (UnityEngine_Object_o *)tweenTarget, 0LL) )
      return 1;
    tweenControllers = this->fields.tweenControllers;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v23; // x20

  if ( (byte_40FA500 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__,
      tweenTarget);
    sub_B16FFC(&Method_System_Predicate_CombineServantListViewNoticeTween_TweenController___ctor__, v7);
    sub_B16FFC(&System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo, v8);
    sub_B16FFC(&Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__, v9);
    sub_B16FFC(&CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo, v10);
    byte_40FA500 = 1;
  }
  v11 = sub_B170CC(CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo, tweenTarget, method, v3, v4);
  CombineServantListViewNoticeTween___c__DisplayClass9_0___ctor(
    (CombineServantListViewNoticeTween___c__DisplayClass9_0_o *)v11,
    0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = tweenTarget,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v11 + 16),
          (System_Int32_array **)tweenTarget,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        tweenControllers = this->fields.tweenControllers,
        v23 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo,
                                                                         v19,
                                                                         v20,
                                                                         v21,
                                                                         v22),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v23,
          (Il2CppObject *)v11,
          Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_CombineServantListViewNoticeTween_TweenController___ctor__),
        !tweenControllers) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)tweenControllers,
    (System_Predicate_T__o *)v23,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewNoticeTween__SetTexts(
        CombineServantListViewNoticeTween_o *this,
        bool isSwitch,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x21
  __int64 v7; // x20
  int size; // w8
  CombineServantListViewNoticeTween_TweenController_o *v9; // x0
  __int64 v10; // x20
  int v11; // w8
  CombineServantListViewNoticeTween_TweenController_o *v12; // x0

  if ( (byte_40FA504 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      isSwitch);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
      v5);
    byte_40FA504 = 1;
  }
  tweenControllers = this->fields.tweenControllers;
  if ( !isSwitch )
  {
    if ( tweenControllers )
      goto LABEL_13;
LABEL_19:
    sub_B170D4();
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v9 = tweenControllers->fields._items->m_Items[v7];
    if ( v9 )
    {
      CombineServantListViewNoticeTween_TweenController__SetNextIndex(v9, 0LL);
      tweenControllers = this->fields.tweenControllers;
      ++v7;
      if ( tweenControllers )
        continue;
    }
    goto LABEL_19;
  }
LABEL_13:
  v10 = 0LL;
  while ( 1 )
  {
    v11 = tweenControllers->fields._size;
    if ( (int)v10 >= v11 )
      break;
    if ( v11 <= (unsigned int)v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v12 = tweenControllers->fields._items->m_Items[v10];
    if ( v12 )
    {
      CombineServantListViewNoticeTween_TweenController__SetTextToLabel(v12, 0LL);
      tweenControllers = this->fields.tweenControllers;
      ++v10;
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
  UnityEngine_Behaviour_o *monoBehaviour; // x0
  const MethodInfo *v4; // x1
  UnityEngine_MonoBehaviour_o *v5; // x20
  System_Collections_IEnumerator_o *v6; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  CombineServantListViewNoticeTween__Stop(this, method);
  monoBehaviour = (UnityEngine_Behaviour_o *)this->fields.monoBehaviour;
  if ( !monoBehaviour )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled(monoBehaviour, 0LL) )
  {
    v5 = this->fields.monoBehaviour;
    this->fields.isTween = 1;
    v6 = CombineServantListViewNoticeTween__TweenLoop(this, v4);
    if ( v5 )
    {
      started = UnityEngine_MonoBehaviour__StartCoroutine_34804316(v5, v6, 0LL);
      this->fields.coroutine = started;
      sub_B16F98(
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
    sub_B170D4();
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
      sub_B170D4();
    UnityEngine_MonoBehaviour__StopCoroutine_34804984(monoBehaviour, coroutine, 0LL);
    p_coroutine->klass = 0LL;
    sub_B16F98(p_coroutine, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


System_Collections_IEnumerator_o *__fastcall CombineServantListViewNoticeTween__TweenLoop(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA502 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo, method);
    byte_40FA502 = 1;
  }
  v6 = sub_B170CC(CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo, method, v2, v3, v4);
  CombineServantListViewNoticeTween__TweenLoop_d__13___ctor(
    (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall CombineServantListViewNoticeTween_TweenController___ctor(
        CombineServantListViewNoticeTween_TweenController_o *this,
        UILabel_o *tweenTarget,
        System_Collections_Generic_List_string__o *texts,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_TweenController_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._TweenTarget_k__BackingField = tweenTarget;
  sub_B16F98((BattleServantConfConponent_o *)&v6->fields, (System_Int32_array **)tweenTarget, v7, v8, v9, v10, v11, v12);
  v6->fields._Texts_k__BackingField = texts;
  v6 = (CombineServantListViewNoticeTween_TweenController_o *)((char *)v6 + 24);
  sub_B16F98((BattleServantConfConponent_o *)v6, (System_Int32_array **)texts, v13, v14, v15, v16, v17, v18);
  LODWORD(v6->monitor) = 0;
}


void __fastcall CombineServantListViewNoticeTween_TweenController__SetNextIndex(
        CombineServantListViewNoticeTween_TweenController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *Texts_k__BackingField; // x8
  int32_t index_k__BackingField; // w9
  int32_t v5; // w8

  if ( (byte_40F7131 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, method);
    byte_40F7131 = 1;
  }
  Texts_k__BackingField = this->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField )
    sub_B170D4();
  index_k__BackingField = this->fields._index_k__BackingField;
  if ( index_k__BackingField == Texts_k__BackingField->fields._size - 1 )
    v5 = 0;
  else
    v5 = index_k__BackingField + 1;
  this->fields._index_k__BackingField = v5;
}


void __fastcall CombineServantListViewNoticeTween_TweenController__SetTextToLabel(
        CombineServantListViewNoticeTween_TweenController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *Texts_k__BackingField; // x20
  __int64 index_k__BackingField; // x21
  UILabel_o *TweenTarget_k__BackingField; // x19

  if ( (byte_40F7132 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, method);
    byte_40F7132 = 1;
  }
  Texts_k__BackingField = this->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField )
    goto LABEL_8;
  index_k__BackingField = this->fields._index_k__BackingField;
  TweenTarget_k__BackingField = this->fields._TweenTarget_k__BackingField;
  if ( Texts_k__BackingField->fields._size <= (unsigned int)index_k__BackingField )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  if ( !TweenTarget_k__BackingField )
LABEL_8:
    sub_B170D4();
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Texts_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Texts_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._TweenTarget_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct CombineServantListViewNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  Il2CppObject *loopWaitOnShow_5__2; // x1
  bool result; // w0
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x8
  __int64 size; // x1
  struct TweenAlpha_array *v25; // x0
  struct TweenAlpha_array **p_tweenAlphas_5__3; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *v33; // x22
  unsigned int v34; // w23
  __int64 v35; // x24
  int32_t v36; // w8
  __int64 v37; // x8
  UnityEngine_Object_o *v38; // x22
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *v39; // x22
  struct TweenAlpha_array *v40; // x27
  __int64 v41; // x8
  UnityEngine_Component_o *v42; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TweenAlpha_o *v44; // x0
  __int64 v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x22
  struct TweenAlpha_array *v53; // x8
  __int64 v54; // x8
  bool v55; // zf
  float v56; // s0
  Il2CppObject **p__2__current; // x19
  int v58; // w8
  Il2CppObject *v59; // x1

  if ( (byte_40F7130 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
      v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&TweenAlpha___TypeInfo, v11);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v12);
    byte_40F7130 = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v14 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
      UnityEngine_WaitForSeconds___ctor(v14, 3.0, 0LL);
      this->fields._loopWaitOnShow_5__2 = v14;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._loopWaitOnShow_5__2,
        (System_Int32_array **)v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      if ( !_4__this )
        goto LABEL_41;
      if ( _4__this->fields.to == 0.0 )
      {
        loopWaitOnShow_5__2 = (Il2CppObject *)this->fields._loopWaitOnShow_5__2;
        this->fields.__2__current = loopWaitOnShow_5__2;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.__2__current,
          (System_Int32_array **)loopWaitOnShow_5__2,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7);
        result = 1;
        this->fields.__1__state = 1;
        return result;
      }
      break;
    case 1:
    case 2:
      this->fields.__1__state = -1;
      goto LABEL_13;
    case 3:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_41;
      goto LABEL_42;
    case 4:
      this->fields.__1__state = -1;
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
      sub_B170D4();
    if ( !_4__this->fields.isTween )
      return 0;
    tweenControllers = _4__this->fields.tweenControllers;
    if ( !tweenControllers || (size = (unsigned int)tweenControllers->fields._size, !(_DWORD)size) )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      v58 = 2;
LABEL_53:
      *((_DWORD *)p__2__current - 2) = v58;
      return 1;
    }
    v25 = (struct TweenAlpha_array *)sub_B17014(TweenAlpha___TypeInfo, size, v2);
    this->fields._tweenAlphas_5__3 = v25;
    p_tweenAlphas_5__3 = &this->fields._tweenAlphas_5__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._tweenAlphas_5__3,
      (System_Int32_array **)v25,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    v33 = _4__this->fields.tweenControllers;
    if ( !v33 )
      goto LABEL_41;
    v34 = 0;
    v35 = 32LL;
    while ( 1 )
    {
      v36 = v33->fields._size;
      if ( (int)v34 >= v36 )
        break;
      if ( v36 <= v34 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v37 = *(__int64 *)((char *)&v33->fields._items->obj.klass + v35);
      if ( !v37 )
        goto LABEL_41;
      v38 = *(UnityEngine_Object_o **)(v37 + 16);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(v38, 0LL, 0LL) )
      {
        v39 = _4__this->fields.tweenControllers;
        if ( !v39 )
          goto LABEL_41;
        v40 = *p_tweenAlphas_5__3;
        if ( v39->fields._size <= v34 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v41 = *(__int64 *)((char *)&v39->fields._items->obj.klass + v35);
        if ( !v41 )
          goto LABEL_41;
        v42 = *(UnityEngine_Component_o **)(v41 + 16);
        if ( !v42 )
          goto LABEL_41;
        gameObject = UnityEngine_Component__get_gameObject(v42, 0LL);
        v44 = TweenAlpha__Begin(gameObject, 0.5, _4__this->fields.to, 0LL);
        if ( !v40 )
          goto LABEL_41;
        v52 = (System_Int32_array **)v44;
        if ( v44 )
        {
          v44 = (TweenAlpha_o *)sub_B170BC(v44, v40->obj.klass->_1.element_class);
          if ( !v44 )
          {
            sub_B170F4(0LL);
            sub_B170A0();
          }
        }
        if ( v34 >= v40->max_length )
          goto LABEL_56;
        *(Il2CppClass **)((char *)&v40->obj.klass + v35) = (Il2CppClass *)v52;
        sub_B16F98((BattleServantConfConponent_o *)((char *)v40 + v35), v52, v46, v47, v48, v49, v50, v51);
        v53 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_41;
        if ( v34 >= v53->max_length )
        {
LABEL_56:
          sub_B17100(v44, v45, v46);
          sub_B170A0();
        }
        v54 = *(__int64 *)((char *)&v53->obj.klass + v35);
        if ( !v54 )
          goto LABEL_41;
        *(_DWORD *)(v54 + 24) = 6;
      }
      v33 = _4__this->fields.tweenControllers;
      ++v34;
      v35 += 8LL;
      if ( !v33 )
        goto LABEL_41;
    }
LABEL_42:
    if ( CombineServantListViewNoticeTween__GetIsTweenAlphaEnabled(_4__this, this->fields._tweenAlphas_5__3, 0LL) )
    {
      if ( !_4__this->fields.isTween )
        return 0;
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      v58 = 3;
      goto LABEL_53;
    }
    if ( !_4__this->fields.isTween )
      return 0;
    v55 = _4__this->fields.to == 1.0;
    v56 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v56 = 1.0;
    _4__this->fields.to = v56;
    if ( v55 )
      break;
LABEL_47:
    if ( _4__this->fields.to == 1.0 )
      CombineServantListViewNoticeTween__SetTexts(_4__this, 1, 0LL);
    this->fields._tweenAlphas_5__3 = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields._tweenAlphas_5__3, 0LL, v2, v3, v4, v5, v6, v7);
  }
  v59 = (Il2CppObject *)this->fields._loopWaitOnShow_5__2;
  this->fields.__2__current = v59;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v59,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.__1__state = 4;
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_CombineServantListViewNoticeTween__TweenLoop_d__13_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  UnityEngine_Object_o *TweenTarget_k__BackingField; // x19
  UnityEngine_Object_o *tweenTarget; // x20

  if ( (byte_40F712F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, t);
    byte_40F712F = 1;
  }
  if ( !t )
    sub_B170D4();
  TweenTarget_k__BackingField = (UnityEngine_Object_o *)t->fields._TweenTarget_k__BackingField;
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality(TweenTarget_k__BackingField, tweenTarget, 0LL);
}