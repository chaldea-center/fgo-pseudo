void __fastcall CombineServantListViewNoticeTween___ctor(
        CombineServantListViewNoticeTween_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  struct UnityEngine_MonoBehaviour_o **p_monoBehaviour; // x19
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_438DE91 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__);
    sub_B775C4(&System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo);
    byte_438DE91 = 1;
  }
  this->fields.to = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  p_monoBehaviour = &this->fields.monoBehaviour;
  sub_B77560(
    (BattleServantConfConponent_o *)p_monoBehaviour,
    (System_Int32_array **)monoBehaviour,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__);
  *(p_monoBehaviour - 1) = (struct UnityEngine_MonoBehaviour_o *)v12;
  sub_B77560(
    (BattleServantConfConponent_o *)(p_monoBehaviour - 1),
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall CombineServantListViewNoticeTween__AddTarget(
        CombineServantListViewNoticeTween_o *this,
        UILabel_o *tweenTarget,
        System_Collections_Generic_List_string__o *texts,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x21
  CombineServantListViewNoticeTween_TweenController_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_438DE92 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__);
    sub_B775C4(&CombineServantListViewNoticeTween_TweenController_TypeInfo);
    byte_438DE92 = 1;
  }
  if ( !CombineServantListViewNoticeTween__IsTweenControllersContainsTarget(
          this,
          tweenTarget,
          (const MethodInfo *)texts) )
  {
    tweenControllers = this->fields.tweenControllers;
    v8 = (CombineServantListViewNoticeTween_TweenController_o *)sub_B77694(CombineServantListViewNoticeTween_TweenController_TypeInfo);
    CombineServantListViewNoticeTween_TweenController___ctor(v8, tweenTarget, texts, 0LL);
    if ( !tweenControllers )
      sub_B7769C(v9, v10);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)tweenControllers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__);
  }
}


void __fastcall CombineServantListViewNoticeTween__Clear(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x0

  if ( (byte_438DE95 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Clear__);
    byte_438DE95 = 1;
  }
  tweenControllers = this->fields.tweenControllers;
  if ( tweenControllers )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)tweenControllers,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Clear__);
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

  if ( (byte_438DE97 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DE97 = 1;
  }
  if ( !tweenAlphas )
LABEL_16:
    sub_B7769C(this, tweenAlphas);
  max_length = tweenAlphas->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B776C8(this);
      sub_B77668(v8, 0LL);
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
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x21
  __int64 v6; // x22
  int size; // w8
  CombineServantListViewNoticeTween_TweenController_o *v8; // x8
  UnityEngine_Object_o *TweenTarget_k__BackingField; // x21

  v4 = this;
  if ( (byte_438DE93 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    this = (CombineServantListViewNoticeTween_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DE93 = 1;
  }
  tweenControllers = v4->fields.tweenControllers;
  if ( !tweenControllers )
LABEL_14:
    sub_B7769C(this, tweenTarget);
  v6 = 0LL;
  while ( 1 )
  {
    size = tweenControllers->fields._size;
    if ( (int)v6 >= size )
      return 0;
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v8 = tweenControllers->fields._items->m_Items[v6];
    if ( !v8 )
      goto LABEL_14;
    TweenTarget_k__BackingField = (UnityEngine_Object_o *)v8->fields._TweenTarget_k__BackingField;
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
    ++v6;
    if ( !tweenControllers )
      goto LABEL_14;
  }
}


void __fastcall CombineServantListViewNoticeTween__RemoveTarget(
        CombineServantListViewNoticeTween_o *this,
        UILabel_o *tweenTarget,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x20

  if ( (byte_438DE94 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__);
    sub_B775C4(&Method_System_Predicate_CombineServantListViewNoticeTween_TweenController___ctor__);
    sub_B775C4(&System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo);
    sub_B775C4(&Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__);
    sub_B775C4(&CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo);
    byte_438DE94 = 1;
  }
  v5 = sub_B77694(CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo);
  CombineServantListViewNoticeTween___c__DisplayClass9_0___ctor(
    (CombineServantListViewNoticeTween___c__DisplayClass9_0_o *)v5,
    0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = tweenTarget,
        sub_B77560(
          (BattleServantConfConponent_o *)(v5 + 16),
          (System_Int32_array **)tweenTarget,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        tweenControllers = this->fields.tweenControllers,
        v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__,
          (const MethodInfo_2C3248C *)Method_System_Predicate_CombineServantListViewNoticeTween_TweenController___ctor__),
        !tweenControllers) )
  {
    sub_B7769C(v6, v7);
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)tweenControllers,
    (System_Predicate_T__o *)v15,
    (const MethodInfo_3054DE8 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewNoticeTween__SetTexts(
        CombineServantListViewNoticeTween_o *this,
        bool isSwitch,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_o *v4; // x19
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x21
  __int64 v6; // x20
  int size; // w8
  __int64 v8; // x20
  int v9; // w8

  v4 = this;
  if ( (byte_438DE98 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__);
    this = (CombineServantListViewNoticeTween_o *)sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    byte_438DE98 = 1;
  }
  tweenControllers = v4->fields.tweenControllers;
  if ( !isSwitch )
  {
    if ( tweenControllers )
      goto LABEL_13;
LABEL_19:
    sub_B7769C(this, isSwitch);
  }
  if ( !tweenControllers )
    goto LABEL_19;
  v6 = 0LL;
  while ( 1 )
  {
    size = tweenControllers->fields._size;
    if ( (int)v6 >= size )
      break;
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    this = (CombineServantListViewNoticeTween_o *)tweenControllers->fields._items->m_Items[v6];
    if ( this )
    {
      CombineServantListViewNoticeTween_TweenController__SetNextIndex(
        (CombineServantListViewNoticeTween_TweenController_o *)this,
        0LL);
      tweenControllers = v4->fields.tweenControllers;
      ++v6;
      if ( tweenControllers )
        continue;
    }
    goto LABEL_19;
  }
LABEL_13:
  v8 = 0LL;
  while ( 1 )
  {
    v9 = tweenControllers->fields._size;
    if ( (int)v8 >= v9 )
      break;
    if ( v9 <= (unsigned int)v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    this = (CombineServantListViewNoticeTween_o *)tweenControllers->fields._items->m_Items[v8];
    if ( this )
    {
      CombineServantListViewNoticeTween_TweenController__SetTextToLabel(
        (CombineServantListViewNoticeTween_TweenController_o *)this,
        0LL);
      tweenControllers = v4->fields.tweenControllers;
      ++v8;
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
      started = UnityEngine_MonoBehaviour__StartCoroutine_36304832(v6, monoBehaviour, 0LL);
      this->fields.coroutine = started;
      sub_B77560(
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
    sub_B7769C(monoBehaviour, v3);
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
      sub_B7769C(0LL, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_36305500(monoBehaviour, coroutine, 0LL);
    p_coroutine->klass = 0LL;
    sub_B77560(p_coroutine, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_438DE96 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo);
    byte_438DE96 = 1;
  }
  v3 = sub_B77694(CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo);
  CombineServantListViewNoticeTween__TweenLoop_d__13___ctor(
    (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
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
  sub_B77560((BattleServantConfConponent_o *)&v6->fields, (System_Int32_array **)tweenTarget, v7, v8, v9, v10, v11, v12);
  v6->fields._Texts_k__BackingField = texts;
  v6 = (CombineServantListViewNoticeTween_TweenController_o *)((char *)v6 + 24);
  sub_B77560((BattleServantConfConponent_o *)v6, (System_Int32_array **)texts, v13, v14, v15, v16, v17, v18);
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
  if ( (byte_4389095 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_TweenController_o *)sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4389095 = 1;
  }
  Texts_k__BackingField = v2->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField )
    sub_B7769C(this, method);
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
  if ( (byte_4389096 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_TweenController_o *)sub_B775C4(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4389096 = 1;
  }
  Texts_k__BackingField = v2->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField )
    goto LABEL_8;
  index_k__BackingField = v2->fields._index_k__BackingField;
  TweenTarget_k__BackingField = v2->fields._TweenTarget_k__BackingField;
  if ( Texts_k__BackingField->fields._size <= (unsigned int)index_k__BackingField )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  if ( !TweenTarget_k__BackingField )
LABEL_8:
    sub_B7769C(this, method);
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
  sub_B77560(
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
  sub_B77560(
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
  CombineServantListViewNoticeTween__TweenLoop_d__13_o *v8; // x19
  CombineServantListViewNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **loopWaitOnShow_5__2; // x1
  bool result; // w0
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x8
  __int64 size; // x1
  System_Int32_array **v21; // x0
  struct TweenAlpha_array **p_tweenAlphas_5__3; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *v29; // x22
  unsigned int v30; // w23
  __int64 v31; // x24
  int32_t v32; // w8
  __int64 v33; // x8
  UnityEngine_Object_o *v34; // x22
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *v35; // x22
  struct TweenAlpha_array *v36; // x27
  __int64 v37; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x22
  struct TweenAlpha_array *v46; // x8
  __int64 v47; // x8
  bool v48; // zf
  float v49; // s0
  BattleServantConfConponent_o *p__2__current; // x19
  int v51; // w8
  System_Int32_array **v52; // x1
  __int64 v53; // x0
  __int64 v54; // x0

  v8 = this;
  if ( (byte_4389094 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TweenAlpha___TypeInfo);
    this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)sub_B775C4(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4389094 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (UnityEngine_WaitForSeconds_o *)sub_B77694(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v10, 3.0, 0LL);
      v8->fields._loopWaitOnShow_5__2 = v10;
      sub_B77560(
        (BattleServantConfConponent_o *)&v8->fields._loopWaitOnShow_5__2,
        (System_Int32_array **)v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      if ( !_4__this )
        goto LABEL_41;
      if ( _4__this->fields.to == 0.0 )
      {
        loopWaitOnShow_5__2 = (System_Int32_array **)v8->fields._loopWaitOnShow_5__2;
        v8->fields.__2__current = (Il2CppObject *)loopWaitOnShow_5__2;
        sub_B77560(
          (BattleServantConfConponent_o *)&v8->fields.__2__current,
          loopWaitOnShow_5__2,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7);
        result = 1;
        v8->fields.__1__state = 1;
        return result;
      }
      break;
    case 1:
    case 2:
      v8->fields.__1__state = -1;
      goto LABEL_13;
    case 3:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_41;
      goto LABEL_42;
    case 4:
      v8->fields.__1__state = -1;
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
      sub_B7769C(this, method);
    if ( !_4__this->fields.isTween )
      return 0;
    tweenControllers = _4__this->fields.tweenControllers;
    if ( !tweenControllers || (size = (unsigned int)tweenControllers->fields._size, !(_DWORD)size) )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B77560(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      v51 = 2;
LABEL_53:
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v51;
      return 1;
    }
    v21 = (System_Int32_array **)sub_B775DC(TweenAlpha___TypeInfo, size);
    v8->fields._tweenAlphas_5__3 = (struct TweenAlpha_array *)v21;
    p_tweenAlphas_5__3 = &v8->fields._tweenAlphas_5__3;
    sub_B77560((BattleServantConfConponent_o *)&v8->fields._tweenAlphas_5__3, v21, v23, v24, v25, v26, v27, v28);
    v29 = _4__this->fields.tweenControllers;
    if ( !v29 )
      goto LABEL_41;
    v30 = 0;
    v31 = 32LL;
    while ( 1 )
    {
      v32 = v29->fields._size;
      if ( (int)v30 >= v32 )
        break;
      if ( v32 <= v30 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v33 = *(__int64 *)((char *)&v29->fields._items->obj.klass + v31);
      if ( !v33 )
        goto LABEL_41;
      v34 = *(UnityEngine_Object_o **)(v33 + 16);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v35 = _4__this->fields.tweenControllers;
        if ( !v35 )
          goto LABEL_41;
        v36 = *p_tweenAlphas_5__3;
        if ( v35->fields._size <= v30 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v37 = *(__int64 *)((char *)&v35->fields._items->obj.klass + v31);
        if ( !v37 )
          goto LABEL_41;
        this = *(CombineServantListViewNoticeTween__TweenLoop_d__13_o **)(v37 + 16);
        if ( !this )
          goto LABEL_41;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)TweenAlpha__Begin(
                                                                         gameObject,
                                                                         0.5,
                                                                         _4__this->fields.to,
                                                                         0LL);
        if ( !v36 )
          goto LABEL_41;
        v45 = (System_Int32_array **)this;
        if ( this )
        {
          this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)sub_B77684(
                                                                           this,
                                                                           v36->obj.klass->_1.element_class);
          if ( !this )
          {
            v54 = sub_B776BC();
            sub_B77668(v54, 0LL);
          }
        }
        if ( v30 >= v36->max_length )
          goto LABEL_56;
        *(Il2CppClass **)((char *)&v36->obj.klass + v31) = (Il2CppClass *)v45;
        sub_B77560((BattleServantConfConponent_o *)((char *)v36 + v31), v45, v39, v40, v41, v42, v43, v44);
        v46 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_41;
        if ( v30 >= v46->max_length )
        {
LABEL_56:
          v53 = sub_B776C8(this);
          sub_B77668(v53, 0LL);
        }
        v47 = *(__int64 *)((char *)&v46->obj.klass + v31);
        if ( !v47 )
          goto LABEL_41;
        *(_DWORD *)(v47 + 24) = 6;
      }
      v29 = _4__this->fields.tweenControllers;
      ++v30;
      v31 += 8LL;
      if ( !v29 )
        goto LABEL_41;
    }
LABEL_42:
    if ( CombineServantListViewNoticeTween__GetIsTweenAlphaEnabled(_4__this, v8->fields._tweenAlphas_5__3, 0LL) )
    {
      if ( !_4__this->fields.isTween )
        return 0;
      v8->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B77560(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      v51 = 3;
      goto LABEL_53;
    }
    if ( !_4__this->fields.isTween )
      return 0;
    v48 = _4__this->fields.to == 1.0;
    v49 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v49 = 1.0;
    _4__this->fields.to = v49;
    if ( v48 )
      break;
LABEL_47:
    if ( _4__this->fields.to == 1.0 )
      CombineServantListViewNoticeTween__SetTexts(_4__this, 1, 0LL);
    v8->fields._tweenAlphas_5__3 = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&v8->fields._tweenAlphas_5__3, 0LL, v2, v3, v4, v5, v6, v7);
  }
  v52 = (System_Int32_array **)v8->fields._loopWaitOnShow_5__2;
  v8->fields.__2__current = (Il2CppObject *)v52;
  sub_B77560((BattleServantConfConponent_o *)&v8->fields.__2__current, v52, v2, v3, v4, v5, v6, v7);
  v8->fields.__1__state = 4;
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_CombineServantListViewNoticeTween__TweenLoop_d__13_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  if ( (byte_4389093 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween___c__DisplayClass9_0_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389093 = 1;
  }
  if ( !t )
    sub_B7769C(this, t);
  TweenTarget_k__BackingField = (UnityEngine_Object_o *)t->fields._TweenTarget_k__BackingField;
  tweenTarget = (UnityEngine_Object_o *)v4->fields.tweenTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality(TweenTarget_k__BackingField, tweenTarget, 0LL);
}