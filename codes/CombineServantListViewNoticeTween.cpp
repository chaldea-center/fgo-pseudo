void __fastcall CombineServantListViewNoticeTween___ctor(
        CombineServantListViewNoticeTween_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4AB98E7 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__,
      monoBehaviour);
    sub_1BAB41C(&System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo, v5);
    byte_4AB98E7 = 1;
  }
  this->fields.to = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.monoBehaviour, (int32_t)monoBehaviour, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__);
  this->fields.tweenControllers = (struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *)v8;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v8, v9, v10);
}


void __fastcall CombineServantListViewNoticeTween__AddTarget(
        CombineServantListViewNoticeTween_o *this,
        UILabel_o *tweenTarget,
        System_Collections_Generic_List_string__o *texts,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *tweenControllers; // x19
  CombineServantListViewNoticeTween_TweenController_o *v9; // x20
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4AB98E8 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__,
      tweenTarget);
    sub_1BAB41C(&CombineServantListViewNoticeTween_TweenController_TypeInfo, v7);
    byte_4AB98E8 = 1;
  }
  if ( !CombineServantListViewNoticeTween__IsTweenControllersContainsTarget(
          this,
          tweenTarget,
          (const MethodInfo *)texts) )
  {
    tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
    v9 = (CombineServantListViewNoticeTween_TweenController_o *)sub_1BAB668(CombineServantListViewNoticeTween_TweenController_TypeInfo);
    CombineServantListViewNoticeTween_TweenController___ctor(v9, tweenTarget, texts, v10);
    if ( !tweenControllers
      || (items = tweenControllers->fields._items,
          v16 = Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__,
          ++tweenControllers->fields._version,
          !items) )
    {
      sub_1BAB678(v11, v12);
    }
    size = tweenControllers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        tweenControllers,
        (Il2CppObject *)v9,
        *(const MethodInfo_354D8BC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      tweenControllers->fields._size = size + 1;
      v18[4] = (Il2CppClass *)v9;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v9, v13, v14);
    }
  }
}


void __fastcall CombineServantListViewNoticeTween__Clear(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4AB98EB & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Clear__,
      method);
    byte_4AB98EB = 1;
  }
  tweenControllers = this->fields.tweenControllers;
  if ( tweenControllers )
  {
    size = tweenControllers->fields._size;
    v5 = tweenControllers->fields._version + 1;
    tweenControllers->fields._size = 0;
    tweenControllers->fields._version = v5;
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

  if ( (byte_4AB98ED & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_o *)sub_1BAB41C(&UnityEngine_Object_TypeInfo, tweenAlphas);
    byte_4AB98ED = 1;
  }
  if ( !tweenAlphas )
LABEL_16:
    sub_1BAB678(this, tweenAlphas);
  max_length = tweenAlphas->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
      sub_1BAB680(this, tweenAlphas);
    v6 = (UnityEngine_Object_o *)tweenAlphas->m_Items[v5];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *tweenControllers; // x0
  int32_t v8; // w21
  int32_t size; // w25
  UnityEngine_Object_o *items; // x22

  if ( (byte_4AB98E9 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      tweenTarget);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
      v5);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v6);
    byte_4AB98E9 = 1;
  }
  tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
  if ( !tweenControllers )
LABEL_11:
    sub_1BAB678(tweenControllers, tweenTarget);
  v8 = 0;
  while ( 1 )
  {
    size = tweenControllers->fields._size;
    if ( v8 >= size )
      break;
    tweenControllers = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      tweenControllers,
                                                                      v8,
                                                                      (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    if ( !tweenControllers )
      goto LABEL_11;
    items = (UnityEngine_Object_o *)tweenControllers->fields._items;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(items, (UnityEngine_Object_o *)tweenTarget, 0LL) )
      break;
    tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
    ++v8;
    if ( !tweenControllers )
      goto LABEL_11;
  }
  return v8 < size;
}


void __fastcall CombineServantListViewNoticeTween__RemoveTarget(
        CombineServantListViewNoticeTween_o *this,
        UILabel_o *tweenTarget,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_List_object__o *tweenControllers; // x19
  System_Predicate_object__o *v14; // x20

  if ( (byte_4AB98EA & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__,
      tweenTarget);
    sub_1BAB41C(&System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo, v5);
    sub_1BAB41C(&Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__, v6);
    sub_1BAB41C(&CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo, v7);
    byte_4AB98EA = 1;
  }
  v8 = sub_1BAB668(CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = tweenTarget,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)tweenTarget, v11, v12),
        tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers,
        v14 = (System_Predicate_object__o *)sub_1BAB668(System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo),
        System_Predicate_object____ctor(
          v14,
          (Il2CppObject *)v8,
          Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__,
          0LL),
        !tweenControllers) )
  {
    sub_1BAB678(v9, v10);
  }
  System_Collections_Generic_List_object___RemoveAll(
    tweenControllers,
    (System_Predicate_T__o *)v14,
    (const MethodInfo_354EF18 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewNoticeTween__SetTexts(
        CombineServantListViewNoticeTween_o *this,
        bool isSwitch,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *tweenControllers; // x0
  int32_t v7; // w20
  int32_t v8; // w20

  if ( (byte_4AB98EE & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      isSwitch);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
      v5);
    byte_4AB98EE = 1;
  }
  tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
  if ( !isSwitch )
  {
    if ( tweenControllers )
      goto LABEL_11;
LABEL_15:
    sub_1BAB678(tweenControllers, isSwitch);
  }
  if ( !tweenControllers )
    goto LABEL_15;
  v7 = 0;
  while ( v7 < tweenControllers->fields._size )
  {
    tweenControllers = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      tweenControllers,
                                                                      v7,
                                                                      (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    if ( tweenControllers )
    {
      CombineServantListViewNoticeTween_TweenController__SetNextIndex(
        (CombineServantListViewNoticeTween_TweenController_o *)tweenControllers,
        (const MethodInfo *)isSwitch);
      tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
      ++v7;
      if ( tweenControllers )
        continue;
    }
    goto LABEL_15;
  }
LABEL_11:
  v8 = 0;
  while ( v8 < tweenControllers->fields._size )
  {
    tweenControllers = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      tweenControllers,
                                                                      v8,
                                                                      (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    if ( tweenControllers )
    {
      CombineServantListViewNoticeTween_TweenController__SetTextToLabel(
        (CombineServantListViewNoticeTween_TweenController_o *)tweenControllers,
        (const MethodInfo *)isSwitch);
      tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
      ++v8;
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
  int32_t v8; // w2
  int32_t v9; // w3

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
      started = UnityEngine_MonoBehaviour__StartCoroutine_69785892(v6, monoBehaviour, 0LL);
      this->fields.coroutine = started;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.coroutine, (int32_t)started, v8, v9);
      return;
    }
LABEL_6:
    sub_1BAB678(monoBehaviour, v3);
  }
}


void __fastcall CombineServantListViewNoticeTween__Stop(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  ServantStatusBattleListViewItem_o *p_coroutine; // x19
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  p_coroutine = (ServantStatusBattleListViewItem_o *)&this->fields.coroutine;
  coroutine = this->fields.coroutine;
  this->fields.isTween = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
      sub_1BAB678(0LL, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_69786512(monoBehaviour, coroutine, 0LL);
    p_coroutine->klass = 0LL;
    sub_1BAB3C0(p_coroutine, 0, v5, v6);
  }
}


System_Collections_IEnumerator_o *__fastcall CombineServantListViewNoticeTween__TweenLoop(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4AB98EC & 1) == 0 )
  {
    sub_1BAB41C(&CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo, method);
    byte_4AB98EC = 1;
  }
  v3 = sub_1BAB668(CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall CombineServantListViewNoticeTween_TweenController___ctor(
        CombineServantListViewNoticeTween_TweenController_o *this,
        UILabel_o *tweenTarget,
        System_Collections_Generic_List_string__o *texts,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_TweenController_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._TweenTarget_k__BackingField = tweenTarget;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v6->fields, (int32_t)tweenTarget, v7, v8);
  v6->fields._Texts_k__BackingField = texts;
  v6 = (CombineServantListViewNoticeTween_TweenController_o *)((char *)v6 + 24);
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v6, (int32_t)texts, v9, v10);
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
  if ( (byte_4AB98EF & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_TweenController_o *)sub_1BAB41C(
                                                                    &Method_System_Collections_Generic_List_string__get_Count__,
                                                                    method);
    byte_4AB98EF = 1;
  }
  Texts_k__BackingField = v2->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField )
    sub_1BAB678(this, method);
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
  System_Collections_Generic_List_object__o *Texts_k__BackingField; // x0
  UILabel_o *TweenTarget_k__BackingField; // x20

  if ( (byte_4AB98F0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__get_Item__, method);
    byte_4AB98F0 = 1;
  }
  Texts_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField
    || (TweenTarget_k__BackingField = this->fields._TweenTarget_k__BackingField,
        Texts_k__BackingField = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               Texts_k__BackingField,
                                                                               this->fields._index_k__BackingField,
                                                                               (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_string__get_Item__),
        !TweenTarget_k__BackingField) )
  {
    sub_1BAB678(Texts_k__BackingField, method);
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

  this->fields._Texts_k__BackingField = value;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._Texts_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CombineServantListViewNoticeTween_TweenController__set_TweenTarget(
        CombineServantListViewNoticeTween_TweenController_o *this,
        UILabel_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._TweenTarget_k__BackingField = value;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
  int32_t v3; // w3
  CombineServantListViewNoticeTween__TweenLoop_d__13_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CombineServantListViewNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *loopWaitOnShow_5__2; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  bool v16; // zf
  float v17; // s0
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x8
  __int64 size; // x1
  __int64 v20; // x0
  unsigned int **p_tweenAlphas_5__3; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  unsigned __int64 v24; // x22
  UnityEngine_Object_o *v25; // x23
  unsigned int *v26; // x27
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  CombineServantListViewNoticeTween__TweenLoop_d__13_o *v30; // x23
  unsigned int *v31; // x0
  unsigned int *v32; // x8
  __int64 v33; // x8
  ServantStatusBattleListViewItem_o *v34; // x19
  int v35; // w8
  Il2CppObject *v36; // x1
  __int64 v37; // x0

  v4 = this;
  if ( (byte_4AB98F2 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__,
      method);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__,
      v5);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v6);
    sub_1BAB41C(&TweenAlpha___TypeInfo, v7);
    this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)sub_1BAB41C(&UnityEngine_WaitForSeconds_TypeInfo, v8);
    byte_4AB98F2 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v10 = (UnityEngine_WaitForSeconds_o *)sub_1BAB668(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v10, 3.0, 0LL);
      v4->fields._loopWaitOnShow_5__2 = v10;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v4->fields._loopWaitOnShow_5__2, (int32_t)v10, v11, v12);
      if ( !_4__this )
        goto LABEL_40;
      if ( _4__this->fields.to == 0.0 )
      {
        loopWaitOnShow_5__2 = (Il2CppObject *)v4->fields._loopWaitOnShow_5__2;
        v4->fields.__2__current = loopWaitOnShow_5__2;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1BAB3C0(p__2__current, (int32_t)loopWaitOnShow_5__2, (int32_t)v2, v3);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
      break;
    case 1:
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_17;
    case 3:
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_9;
      goto LABEL_40;
    case 4:
      v4->fields.__1__state = -1;
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
      sub_1BAB678(this, method);
    if ( !_4__this->fields.isTween )
      return 0;
    tweenControllers = _4__this->fields.tweenControllers;
    if ( !tweenControllers || (size = (unsigned int)tweenControllers->fields._size, !(_DWORD)size) )
    {
      v4->fields.__2__current = 0LL;
      v34 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1BAB3C0(v34, 0, (int32_t)v2, v3);
      v35 = 2;
      goto LABEL_48;
    }
    v20 = sub_1BAB4C4(TweenAlpha___TypeInfo, size);
    v4->fields._tweenAlphas_5__3 = (struct TweenAlpha_array *)v20;
    p_tweenAlphas_5__3 = (unsigned int **)&v4->fields._tweenAlphas_5__3;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v4->fields._tweenAlphas_5__3, v20, v22, v23);
    this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)_4__this->fields.tweenControllers;
    if ( !this )
      goto LABEL_40;
    v24 = 0LL;
    while ( (__int64)v24 < SLODWORD(this->fields.__2__current) )
    {
      this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v24,
                                                                       (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
      if ( !this )
        goto LABEL_40;
      v25 = *(UnityEngine_Object_o **)&this->fields.__1__state;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v25, 0LL, 0LL) )
      {
        this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)_4__this->fields.tweenControllers;
        if ( !this )
          goto LABEL_40;
        v26 = *p_tweenAlphas_5__3;
        this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)System_Collections_Generic_List_object___get_Item(
                                                                         (System_Collections_Generic_List_object__o *)this,
                                                                         v24,
                                                                         (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
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
        if ( !v26 )
          goto LABEL_40;
        v30 = this;
        if ( this )
        {
          this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)sub_1BAB558(
                                                                           this,
                                                                           *(_QWORD *)(*(_QWORD *)v26 + 64LL));
          if ( !this )
          {
            v37 = sub_1BAB69C(0LL);
            sub_1BAB544(v37, 0LL);
          }
        }
        if ( v24 >= v26[6] )
          goto LABEL_49;
        v31 = &v26[2 * v24];
        *((_QWORD *)v31 + 4) = v30;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v31 + 8), (int32_t)v30, v28, v29);
        v32 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_40;
        if ( v24 >= v32[6] )
LABEL_49:
          sub_1BAB680(this, method);
        v33 = *(_QWORD *)&v32[2 * v24 + 8];
        if ( !v33 )
          goto LABEL_40;
        *(_DWORD *)(v33 + 32) = 6;
      }
      this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)_4__this->fields.tweenControllers;
      ++v24;
      if ( !this )
        goto LABEL_40;
    }
LABEL_9:
    if ( CombineServantListViewNoticeTween__GetIsTweenAlphaEnabled(
           (CombineServantListViewNoticeTween_o *)this,
           v4->fields._tweenAlphas_5__3,
           v2) )
    {
      break;
    }
    if ( !_4__this->fields.isTween )
      return 0;
    v16 = _4__this->fields.to == 1.0;
    v17 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v17 = 1.0;
    _4__this->fields.to = v17;
    if ( v16 )
    {
      v36 = (Il2CppObject *)v4->fields._loopWaitOnShow_5__2;
      v4->fields.__2__current = v36;
      v34 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1BAB3C0(v34, (int32_t)v36, (int32_t)v2, v3);
      v35 = 4;
      goto LABEL_48;
    }
LABEL_14:
    if ( _4__this->fields.to == 1.0 )
      CombineServantListViewNoticeTween__SetTexts(_4__this, 1, v2);
    v4->fields._tweenAlphas_5__3 = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v4->fields._tweenAlphas_5__3, 0, (int32_t)v2, v3);
  }
  if ( !_4__this->fields.isTween )
    return 0;
  v4->fields.__2__current = 0LL;
  v34 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1BAB3C0(v34, 0, (int32_t)v2, v3);
  v35 = 3;
LABEL_48:
  *(_DWORD *)&v34[-1].fields.isMine = v35;
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_CombineServantListViewNoticeTween__TweenLoop_d__13_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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
  if ( (byte_4AB98F1 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween___c__DisplayClass9_0_o *)sub_1BAB41C(&UnityEngine_Object_TypeInfo, t);
    byte_4AB98F1 = 1;
  }
  if ( !t )
    sub_1BAB678(this, t);
  TweenTarget_k__BackingField = (UnityEngine_Object_o *)t->fields._TweenTarget_k__BackingField;
  tweenTarget = (UnityEngine_Object_o *)v4->fields.tweenTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(TweenTarget_k__BackingField, tweenTarget, 0LL);
}