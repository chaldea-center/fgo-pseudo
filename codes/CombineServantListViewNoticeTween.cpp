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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4188046 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__,
      monoBehaviour);
    sub_B2C35C(&System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo, v5);
    byte_4188046 = 1;
  }
  this->fields.to = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  p_monoBehaviour = &this->fields.monoBehaviour;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_monoBehaviour,
    (System_Int32_array **)monoBehaviour,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__);
  *(p_monoBehaviour - 1) = (struct UnityEngine_MonoBehaviour_o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(p_monoBehaviour - 1),
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall CombineServantListViewNoticeTween__AddTarget(
        CombineServantListViewNoticeTween_o *this,
        UILabel_o *tweenTarget,
        System_Collections_Generic_List_string__o *texts,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x21
  CombineServantListViewNoticeTween_TweenController_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4188047 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__,
      tweenTarget);
    sub_B2C35C(&CombineServantListViewNoticeTween_TweenController_TypeInfo, v7);
    byte_4188047 = 1;
  }
  if ( !CombineServantListViewNoticeTween__IsTweenControllersContainsTarget(
          this,
          tweenTarget,
          (const MethodInfo *)texts) )
  {
    tweenControllers = this->fields.tweenControllers;
    v9 = (CombineServantListViewNoticeTween_TweenController_o *)sub_B2C42C(CombineServantListViewNoticeTween_TweenController_TypeInfo);
    CombineServantListViewNoticeTween_TweenController___ctor(v9, tweenTarget, texts, 0LL);
    if ( !tweenControllers )
      sub_B2C434(v10, v11);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)tweenControllers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__);
  }
}


void __fastcall CombineServantListViewNoticeTween__Clear(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x0

  if ( (byte_418804A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Clear__,
      method);
    byte_418804A = 1;
  }
  tweenControllers = this->fields.tweenControllers;
  if ( tweenControllers )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)tweenControllers,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Clear__);
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

  if ( (byte_418804C & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, tweenAlphas);
    byte_418804C = 1;
  }
  if ( !tweenAlphas )
LABEL_16:
    sub_B2C434(this, tweenAlphas);
  max_length = tweenAlphas->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
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
  if ( (byte_4188048 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      tweenTarget);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
      v5);
    this = (CombineServantListViewNoticeTween_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4188048 = 1;
  }
  tweenControllers = v4->fields.tweenControllers;
  if ( !tweenControllers )
LABEL_14:
    sub_B2C434(this, tweenTarget);
  v8 = 0LL;
  while ( 1 )
  {
    size = tweenControllers->fields._size;
    if ( (int)v8 >= size )
      return 0;
    if ( size <= (unsigned int)v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x20

  if ( (byte_4188049 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__,
      tweenTarget);
    sub_B2C35C(&Method_System_Predicate_CombineServantListViewNoticeTween_TweenController___ctor__, v5);
    sub_B2C35C(&System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo, v6);
    sub_B2C35C(&Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__, v7);
    sub_B2C35C(&CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo, v8);
    byte_4188049 = 1;
  }
  v9 = sub_B2C42C(CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo);
  CombineServantListViewNoticeTween___c__DisplayClass9_0___ctor(
    (CombineServantListViewNoticeTween___c__DisplayClass9_0_o *)v9,
    0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = tweenTarget,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v9 + 16),
          (System_Int32_array **)tweenTarget,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        tweenControllers = this->fields.tweenControllers,
        v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v19,
          (Il2CppObject *)v9,
          Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_CombineServantListViewNoticeTween_TweenController___ctor__),
        !tweenControllers) )
  {
    sub_B2C434(v10, v11);
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)tweenControllers,
    (System_Predicate_T__o *)v19,
    (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__);
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
  if ( (byte_418804D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      isSwitch);
    this = (CombineServantListViewNoticeTween_o *)sub_B2C35C(
                                                    &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
                                                    v5);
    byte_418804D = 1;
  }
  tweenControllers = v4->fields.tweenControllers;
  if ( !isSwitch )
  {
    if ( tweenControllers )
      goto LABEL_13;
LABEL_19:
    sub_B2C434(this, isSwitch);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
      started = UnityEngine_MonoBehaviour__StartCoroutine_35309748(v6, monoBehaviour, 0LL);
      this->fields.coroutine = started;
      sub_B2C2F8(
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
    sub_B2C434(monoBehaviour, v3);
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
      sub_B2C434(0LL, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_35310416(monoBehaviour, coroutine, 0LL);
    p_coroutine->klass = 0LL;
    sub_B2C2F8(p_coroutine, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


System_Collections_IEnumerator_o *__fastcall CombineServantListViewNoticeTween__TweenLoop(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418804B & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo, method);
    byte_418804B = 1;
  }
  v3 = sub_B2C42C(CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo);
  CombineServantListViewNoticeTween__TweenLoop_d__13___ctor(
    (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
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
  sub_B2C2F8(&v6->fields, tweenTarget);
  v6->fields._Texts_k__BackingField = texts;
  v6 = (CombineServantListViewNoticeTween_TweenController_o *)((char *)v6 + 24);
  sub_B2C2F8(v6, texts);
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
  if ( (byte_4184F3A & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_TweenController_o *)sub_B2C35C(
                                                                    &Method_System_Collections_Generic_List_string__get_Count__,
                                                                    method);
    byte_4184F3A = 1;
  }
  Texts_k__BackingField = v2->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField )
    sub_B2C434(this, method);
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
  if ( (byte_4184F3B & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_TweenController_o *)sub_B2C35C(
                                                                    &Method_System_Collections_Generic_List_string__get_Item__,
                                                                    method);
    byte_4184F3B = 1;
  }
  Texts_k__BackingField = v2->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField )
    goto LABEL_8;
  index_k__BackingField = v2->fields._index_k__BackingField;
  TweenTarget_k__BackingField = v2->fields._TweenTarget_k__BackingField;
  if ( Texts_k__BackingField->fields._size <= (unsigned int)index_k__BackingField )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  if ( !TweenTarget_k__BackingField )
LABEL_8:
    sub_B2C434(this, method);
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
  sub_B2C2F8(&this->fields._Texts_k__BackingField, value);
}


void __fastcall CombineServantListViewNoticeTween_TweenController__set_TweenTarget(
        CombineServantListViewNoticeTween_TweenController_o *this,
        UILabel_o *value,
        const MethodInfo *method)
{
  this->fields._TweenTarget_k__BackingField = value;
  sub_B2C2F8(&this->fields, value);
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
  CombineServantListViewNoticeTween__TweenLoop_d__13_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CombineServantListViewNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v8; // x21
  Il2CppObject *loopWaitOnShow_5__2; // x1
  bool result; // w0
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x8
  __int64 size; // x1
  __int64 v13; // x0
  struct TweenAlpha_array **p_tweenAlphas_5__3; // x21
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *v15; // x22
  unsigned int v16; // w23
  __int64 v17; // x24
  int32_t v18; // w8
  __int64 v19; // x8
  UnityEngine_Object_o *v20; // x22
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *v21; // x22
  struct TweenAlpha_array *v22; // x27
  __int64 v23; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  CombineServantListViewNoticeTween__TweenLoop_d__13_o *v25; // x22
  struct TweenAlpha_array *v26; // x8
  __int64 v27; // x8
  bool v28; // zf
  float v29; // s0
  Il2CppObject **p__2__current; // x19
  int v31; // w8
  Il2CppObject *v32; // x1
  __int64 v33; // x0
  __int64 v34; // x0

  v2 = this;
  if ( (byte_4184F39 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
      v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&TweenAlpha___TypeInfo, v5);
    this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v6);
    byte_4184F39 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v8 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v8, 3.0, 0LL);
      v2->fields._loopWaitOnShow_5__2 = v8;
      sub_B2C2F8(&v2->fields._loopWaitOnShow_5__2, v8);
      if ( !_4__this )
        goto LABEL_41;
      if ( _4__this->fields.to == 0.0 )
      {
        loopWaitOnShow_5__2 = (Il2CppObject *)v2->fields._loopWaitOnShow_5__2;
        v2->fields.__2__current = loopWaitOnShow_5__2;
        sub_B2C2F8(&v2->fields.__2__current, loopWaitOnShow_5__2);
        result = 1;
        v2->fields.__1__state = 1;
        return result;
      }
      break;
    case 1:
    case 2:
      v2->fields.__1__state = -1;
      goto LABEL_13;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_41;
      goto LABEL_42;
    case 4:
      v2->fields.__1__state = -1;
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
      sub_B2C434(this, method);
    if ( !_4__this->fields.isTween )
      return 0;
    tweenControllers = _4__this->fields.tweenControllers;
    if ( !tweenControllers || (size = (unsigned int)tweenControllers->fields._size, !(_DWORD)size) )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, 0LL);
      v31 = 2;
LABEL_53:
      *((_DWORD *)p__2__current - 2) = v31;
      return 1;
    }
    v13 = sub_B2C374(TweenAlpha___TypeInfo, size);
    v2->fields._tweenAlphas_5__3 = (struct TweenAlpha_array *)v13;
    p_tweenAlphas_5__3 = &v2->fields._tweenAlphas_5__3;
    sub_B2C2F8(&v2->fields._tweenAlphas_5__3, v13);
    v15 = _4__this->fields.tweenControllers;
    if ( !v15 )
      goto LABEL_41;
    v16 = 0;
    v17 = 32LL;
    while ( 1 )
    {
      v18 = v15->fields._size;
      if ( (int)v16 >= v18 )
        break;
      if ( v18 <= v16 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v19 = *(__int64 *)((char *)&v15->fields._items->obj.klass + v17);
      if ( !v19 )
        goto LABEL_41;
      v20 = *(UnityEngine_Object_o **)(v19 + 16);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)UnityEngine_Object__op_Equality(v20, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v21 = _4__this->fields.tweenControllers;
        if ( !v21 )
          goto LABEL_41;
        v22 = *p_tweenAlphas_5__3;
        if ( v21->fields._size <= v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v23 = *(__int64 *)((char *)&v21->fields._items->obj.klass + v17);
        if ( !v23 )
          goto LABEL_41;
        this = *(CombineServantListViewNoticeTween__TweenLoop_d__13_o **)(v23 + 16);
        if ( !this )
          goto LABEL_41;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)TweenAlpha__Begin(
                                                                         gameObject,
                                                                         0.5,
                                                                         _4__this->fields.to,
                                                                         0LL);
        if ( !v22 )
          goto LABEL_41;
        v25 = this;
        if ( this )
        {
          this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)sub_B2C41C(
                                                                           this,
                                                                           v22->obj.klass->_1.element_class);
          if ( !this )
          {
            v34 = sub_B2C454();
            sub_B2C400(v34, 0LL);
          }
        }
        if ( v16 >= v22->max_length )
          goto LABEL_56;
        *(Il2CppClass **)((char *)&v22->obj.klass + v17) = (Il2CppClass *)v25;
        sub_B2C2F8((char *)v22 + v17, v25);
        v26 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_41;
        if ( v16 >= v26->max_length )
        {
LABEL_56:
          v33 = sub_B2C460(this);
          sub_B2C400(v33, 0LL);
        }
        v27 = *(__int64 *)((char *)&v26->obj.klass + v17);
        if ( !v27 )
          goto LABEL_41;
        *(_DWORD *)(v27 + 24) = 6;
      }
      v15 = _4__this->fields.tweenControllers;
      ++v16;
      v17 += 8LL;
      if ( !v15 )
        goto LABEL_41;
    }
LABEL_42:
    if ( CombineServantListViewNoticeTween__GetIsTweenAlphaEnabled(_4__this, v2->fields._tweenAlphas_5__3, 0LL) )
    {
      if ( !_4__this->fields.isTween )
        return 0;
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, 0LL);
      v31 = 3;
      goto LABEL_53;
    }
    if ( !_4__this->fields.isTween )
      return 0;
    v28 = _4__this->fields.to == 1.0;
    v29 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v29 = 1.0;
    _4__this->fields.to = v29;
    if ( v28 )
      break;
LABEL_47:
    if ( _4__this->fields.to == 1.0 )
      CombineServantListViewNoticeTween__SetTexts(_4__this, 1, 0LL);
    v2->fields._tweenAlphas_5__3 = 0LL;
    sub_B2C2F8(&v2->fields._tweenAlphas_5__3, 0LL);
  }
  v32 = (Il2CppObject *)v2->fields._loopWaitOnShow_5__2;
  v2->fields.__2__current = v32;
  sub_B2C2F8(&v2->fields.__2__current, v32);
  v2->fields.__1__state = 4;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_CombineServantListViewNoticeTween__TweenLoop_d__13_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  if ( (byte_4184F38 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween___c__DisplayClass9_0_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, t);
    byte_4184F38 = 1;
  }
  if ( !t )
    sub_B2C434(this, t);
  TweenTarget_k__BackingField = (UnityEngine_Object_o *)t->fields._TweenTarget_k__BackingField;
  tweenTarget = (UnityEngine_Object_o *)v4->fields.tweenTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality(TweenTarget_k__BackingField, tweenTarget, 0LL);
}