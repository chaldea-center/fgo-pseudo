void __fastcall ShopNoticeTween___ctor(
        ShopNoticeTween_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  this->fields.to = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.monoBehaviour, (int32_t)monoBehaviour, v5, v6);
}


void __fastcall ShopNoticeTween__AddTargets(
        ShopNoticeTween_o *this,
        UnityEngine_GameObject_o *tweenTarget,
        System_Collections_Generic_List_GameObject__o *switchingTarget,
        System_Collections_Generic_List_GameObject__o *switchingLabel,
        const MethodInfo *method)
{
  ShopNoticeTween_Fields *p_fields; // x24
  System_Collections_Generic_List_object__o *v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Collections_Generic_List_List_GameObject___o **p_switchingTargets; // x23
  System_Collections_Generic_List_object__o *v14; // x25
  int32_t v15; // w2
  int32_t v16; // w3
  ServantStatusBattleListViewItem_o *p_switchingLabels; // x20
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // t1
  System_Collections_Generic_List_object__o *v19; // x25
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_List_object__o *tweenTargets; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x8
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x8

  if ( (byte_4A577E1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_GameObject___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_GameObject___Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_GameObject____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_List_GameObject___TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4A577E1 = 1;
  }
  p_fields = &this->fields;
  if ( !this->fields.tweenTargets )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    p_fields->tweenTargets = (struct System_Collections_Generic_List_GameObject__o *)v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v10, v11, v12);
  }
  p_switchingTargets = &this->fields.switchingTargets;
  if ( !this->fields.switchingTargets )
  {
    v14 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v14,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    *p_switchingTargets = (struct System_Collections_Generic_List_List_GameObject___o *)v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.switchingTargets, (int32_t)v14, v15, v16);
  }
  switchingLabels = this->fields.switchingLabels;
  p_switchingLabels = (ServantStatusBattleListViewItem_o *)&this->fields.switchingLabels;
  if ( !switchingLabels )
  {
    v19 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    p_switchingLabels->klass = (ServantStatusBattleListViewItem_c *)v19;
    sub_1B88554(p_switchingLabels, (int32_t)v19, v20, v21);
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_fields->tweenTargets;
  if ( !p_fields->tweenTargets )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_object___Contains(
          tweenTargets,
          (Il2CppObject *)tweenTarget,
          (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_object__o *)p_fields->tweenTargets;
    if ( !p_fields->tweenTargets )
      goto LABEL_30;
    items = tweenTargets->fields._items;
    v26 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++tweenTargets->fields._version;
    if ( !items )
      goto LABEL_30;
    size = tweenTargets->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        tweenTargets,
        (Il2CppObject *)tweenTarget,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    }
    else
    {
      v28 = &items->obj.klass + size;
      tweenTargets->fields._size = size + 1;
      v28[4] = (Il2CppClass *)tweenTarget;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)tweenTarget, v23, v24);
    }
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)*p_switchingTargets;
  if ( !*p_switchingTargets )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_object___Contains(
          tweenTargets,
          (Il2CppObject *)switchingTarget,
          (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_object__o *)*p_switchingTargets;
    if ( !*p_switchingTargets )
      goto LABEL_30;
    v31 = tweenTargets->fields._items;
    v32 = Method_System_Collections_Generic_List_List_GameObject___Add__;
    ++tweenTargets->fields._version;
    if ( !v31 )
      goto LABEL_30;
    v33 = tweenTargets->fields._size;
    if ( (unsigned int)v33 >= v31->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        tweenTargets,
        (Il2CppObject *)switchingTarget,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &v31->obj.klass + v33;
      tweenTargets->fields._size = v33 + 1;
      v34[4] = (Il2CppClass *)switchingTarget;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)switchingTarget, v29, v30);
    }
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass )
    goto LABEL_30;
  if ( System_Collections_Generic_List_object___Contains(
         tweenTargets,
         (Il2CppObject *)switchingLabel,
         (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    return;
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass
    || (v37 = tweenTargets->fields._items,
        v38 = Method_System_Collections_Generic_List_List_GameObject___Add__,
        ++tweenTargets->fields._version,
        !v37) )
  {
LABEL_30:
    sub_1B8880C(tweenTargets, tweenTarget);
  }
  v39 = tweenTargets->fields._size;
  if ( (unsigned int)v39 >= v37->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      tweenTargets,
      (Il2CppObject *)switchingLabel,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &v37->obj.klass + v39;
    tweenTargets->fields._size = v39 + 1;
    v40[4] = (Il2CppClass *)switchingLabel;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)switchingLabel, v35, v36);
  }
}


void __fastcall ShopNoticeTween__DestroyTargetList(ShopNoticeTween_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x8
  int32_t size; // w2
  int v5; // w9
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x8
  int32_t v7; // w2
  int v8; // w9
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x8
  int32_t v10; // w2
  int v11; // w9

  if ( (byte_4A577E4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_GameObject___Clear__);
    byte_4A577E4 = 1;
  }
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets )
  {
    size = tweenTargets->fields._size;
    v5 = tweenTargets->fields._version + 1;
    tweenTargets->fields._size = 0;
    tweenTargets->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)tweenTargets->fields._items, 0, size, 0LL);
  }
  switchingTargets = this->fields.switchingTargets;
  if ( switchingTargets )
  {
    v7 = switchingTargets->fields._size;
    v8 = switchingTargets->fields._version + 1;
    switchingTargets->fields._size = 0;
    switchingTargets->fields._version = v8;
    if ( v7 >= 1 )
      System_Array__Clear((System_Array_o *)switchingTargets->fields._items, 0, v7, 0LL);
  }
  switchingLabels = this->fields.switchingLabels;
  if ( switchingLabels )
  {
    v10 = switchingLabels->fields._size;
    v11 = switchingLabels->fields._version + 1;
    switchingLabels->fields._size = 0;
    switchingLabels->fields._version = v11;
    if ( v10 >= 1 )
      System_Array__Clear((System_Array_o *)switchingLabels->fields._items, 0, v10, 0LL);
  }
}


bool __fastcall ShopNoticeTween__GetIsTweenAlphasEnabled(
        ShopNoticeTween_o *this,
        TweenAlpha_array *tweenAlphas,
        const MethodInfo *method)
{
  __int64 v4; // x8
  bool v5; // w21
  unsigned __int64 v6; // x22
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4A577E6 & 1) == 0 )
  {
    this = (ShopNoticeTween_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A577E6 = 1;
  }
  if ( !tweenAlphas )
LABEL_15:
    sub_1B8880C(this, tweenAlphas);
  v4 = *(_QWORD *)&tweenAlphas->max_length;
  v5 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v4 )
        sub_1B88814(this, tweenAlphas);
      v7 = (UnityEngine_Object_o *)tweenAlphas->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ShopNoticeTween_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7 )
          goto LABEL_15;
        this = (ShopNoticeTween_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v7, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      LODWORD(v4) = tweenAlphas->max_length;
      v5 = (__int64)++v6 < (int)v4;
    }
    while ( (__int64)v6 < (int)v4 );
  }
  return v5;
}


void __fastcall ShopNoticeTween__RemoveTargets(
        ShopNoticeTween_o *this,
        UnityEngine_GameObject_o *tweenTarget,
        System_Collections_Generic_List_GameObject__o *switchingTarget,
        System_Collections_Generic_List_GameObject__o *switchingLabel,
        const MethodInfo *method)
{
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x21
  System_Predicate_object__o *v19; // x22
  System_Collections_Generic_List_object__o *switchingTargets; // x21
  System_Predicate_object__o *v21; // x22
  System_Collections_Generic_List_object__o *switchingLabels; // x19
  System_Predicate_object__o *v23; // x21

  if ( (byte_4A577E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
    sub_1B885B0(&System_Predicate_GameObject__TypeInfo);
    sub_1B885B0(&System_Predicate_List_GameObject___TypeInfo);
    sub_1B885B0(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__);
    sub_1B885B0(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__);
    sub_1B885B0(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__);
    sub_1B885B0(&ShopNoticeTween___c__DisplayClass10_0_TypeInfo);
    byte_4A577E2 = 1;
  }
  v9 = sub_1B887FC(ShopNoticeTween___c__DisplayClass10_0_TypeInfo);
  ShopNoticeTween___c__DisplayClass10_0___ctor((ShopNoticeTween___c__DisplayClass10_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = tweenTarget;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)tweenTarget, v12, v13);
  *(_QWORD *)(v9 + 24) = switchingTarget;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)switchingTarget, v14, v15);
  *(_QWORD *)(v9 + 32) = switchingLabel;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)switchingLabel, v16, v17);
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets && this->fields.switchingTargets && this->fields.switchingLabels )
  {
    v19 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_GameObject__TypeInfo);
    System_Predicate_object____ctor(
      v19,
      (Il2CppObject *)v9,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__,
      0LL);
    System_Collections_Generic_List_object___RemoveAll(
      (System_Collections_Generic_List_object__o *)tweenTargets,
      (System_Predicate_T__o *)v19,
      (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
    v21 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_List_GameObject___TypeInfo);
    System_Predicate_object____ctor(
      v21,
      (Il2CppObject *)v9,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__,
      0LL);
    if ( switchingTargets )
    {
      System_Collections_Generic_List_object___RemoveAll(
        switchingTargets,
        (System_Predicate_T__o *)v21,
        (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
      switchingLabels = (System_Collections_Generic_List_object__o *)this->fields.switchingLabels;
      v23 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_List_GameObject___TypeInfo);
      System_Predicate_object____ctor(
        v23,
        (Il2CppObject *)v9,
        Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__,
        0LL);
      if ( switchingLabels )
      {
        System_Collections_Generic_List_object___RemoveAll(
          switchingLabels,
          (System_Predicate_T__o *)v23,
          (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
        return;
      }
    }
LABEL_11:
    sub_1B8880C(v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopNoticeTween__SetActiveSwitchingTargets(
        ShopNoticeTween_o *this,
        bool isSwitch,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *switchingTargets; // x0
  int32_t switchingIndex; // w20
  int32_t v7; // w20
  int32_t v8; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v10; // x22

  if ( (byte_4A577E7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_GameObject___get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_GameObject___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A577E7 = 1;
  }
  if ( !isSwitch )
    goto LABEL_10;
  switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
  if ( !switchingTargets )
    goto LABEL_37;
  if ( switchingTargets->fields._size >= 1
    && System_Collections_Generic_List_object___get_Item(
         switchingTargets,
         0,
         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__) )
  {
    switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
    if ( !switchingTargets
      || (switchingIndex = this->fields.switchingIndex,
          (switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                             switchingTargets,
                                                                             0,
                                                                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__)) == 0LL) )
    {
LABEL_37:
      sub_1B8880C(switchingTargets, isSwitch);
    }
    this->fields.switchingIndex = (switchingIndex + 1) % switchingTargets->fields._size;
  }
  else
  {
LABEL_10:
    this->fields.switchingIndex = 0;
  }
  switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
  if ( !switchingTargets )
    goto LABEL_37;
  v7 = 0;
  while ( v7 < switchingTargets->fields._size )
  {
    v8 = 0;
    while ( 1 )
    {
      switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        switchingTargets,
                                                                        v7,
                                                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
      if ( !switchingTargets )
        goto LABEL_37;
      if ( v8 >= switchingTargets->fields._size )
        break;
      switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
      if ( !switchingTargets )
        goto LABEL_37;
      switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        switchingTargets,
                                                                        v7,
                                                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
      if ( !switchingTargets )
        goto LABEL_37;
      Item = System_Collections_Generic_List_object___get_Item(
               switchingTargets,
               v8,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
      {
        switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingLabels;
        if ( !switchingTargets )
          goto LABEL_37;
        switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          switchingTargets,
                                                                          v7,
                                                                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
        if ( !switchingTargets )
          goto LABEL_37;
        v10 = System_Collections_Generic_List_object___get_Item(
                switchingTargets,
                v8,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0LL, 0LL) )
        {
          switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
          if ( !switchingTargets )
            goto LABEL_37;
          switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            switchingTargets,
                                                                            v7,
                                                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
          if ( !switchingTargets )
            goto LABEL_37;
          switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            switchingTargets,
                                                                            v8,
                                                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !switchingTargets )
            goto LABEL_37;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)switchingTargets,
            v8 == this->fields.switchingIndex,
            0LL);
          switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingLabels;
          if ( !switchingTargets )
            goto LABEL_37;
          switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            switchingTargets,
                                                                            v7,
                                                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
          if ( !switchingTargets )
            goto LABEL_37;
          switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            switchingTargets,
                                                                            v8,
                                                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !switchingTargets )
            goto LABEL_37;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)switchingTargets,
            v8 == this->fields.switchingIndex,
            0LL);
        }
      }
      switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
      ++v8;
      if ( !switchingTargets )
        goto LABEL_37;
    }
    switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
    ++v7;
    if ( !switchingTargets )
      goto LABEL_37;
  }
}


void __fastcall ShopNoticeTween__Start(ShopNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_IEnumerator_o *monoBehaviour; // x0
  const MethodInfo *v5; // x1
  UnityEngine_MonoBehaviour_o *v6; // x20
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  ShopNoticeTween__Stop(this, method);
  monoBehaviour = (System_Collections_IEnumerator_o *)this->fields.monoBehaviour;
  if ( !monoBehaviour )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)monoBehaviour, 0LL) )
  {
    v6 = this->fields.monoBehaviour;
    this->fields.isTween = 1;
    monoBehaviour = ShopNoticeTween__TweenLoop(this, v5);
    if ( v6 )
    {
      started = UnityEngine_MonoBehaviour__StartCoroutine_69444652(v6, monoBehaviour, 0LL);
      this->fields.coroutine = started;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.coroutine, (int32_t)started, v8, v9);
      return;
    }
LABEL_6:
    sub_1B8880C(monoBehaviour, v3);
  }
}


void __fastcall ShopNoticeTween__Stop(ShopNoticeTween_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w20
  Il2CppObject *Item; // x21
  Il2CppObject *v9; // x0

  if ( (byte_4A577E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A577E3 = 1;
  }
  coroutine = this->fields.coroutine;
  this->fields.isTween = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
LABEL_14:
      sub_1B8880C(monoBehaviour, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_69445272(monoBehaviour, coroutine, 0LL);
    this->fields.coroutine = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.coroutine, 0, v5, v6);
    monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
    if ( monoBehaviour )
    {
      v7 = 0;
      while ( v7 < SLODWORD(monoBehaviour->fields.m_CancellationTokenSource) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)monoBehaviour,
                 v7,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
        {
          monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
          if ( !monoBehaviour )
            goto LABEL_14;
          v9 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)monoBehaviour,
                 v7,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          TweenAlpha__Begin((UnityEngine_GameObject_o *)v9, 0.0, 1.0, 0LL);
        }
        monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
        ++v7;
        if ( !monoBehaviour )
          goto LABEL_14;
      }
    }
    ShopNoticeTween__DestroyTargetList(this, (const MethodInfo *)coroutine);
  }
}


System_Collections_IEnumerator_o *__fastcall ShopNoticeTween__TweenLoop(
        ShopNoticeTween_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A577E5 & 1) == 0 )
  {
    sub_1B885B0(&ShopNoticeTween__TweenLoop_d__14_TypeInfo);
    byte_4A577E5 = 1;
  }
  v3 = sub_1B887FC(ShopNoticeTween__TweenLoop_d__14_TypeInfo);
  ShopNoticeTween__TweenLoop_d__14___ctor((ShopNoticeTween__TweenLoop_d__14_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall ShopNoticeTween__TweenLoop_d__14___ctor(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ShopNoticeTween__TweenLoop_d__14__MoveNext(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ShopNoticeTween__TweenLoop_d__14_o *v4; // x19
  struct ShopNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v6; // x21
  ServantStatusBattleListViewItem_o *p_loopWaitOnShow_5__2; // x0
  int32_t v8; // w1
  bool v9; // zf
  float v10; // s0
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x8
  __int64 v12; // x0
  unsigned int **p_tweenAlphas_5__3; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  unsigned __int64 v16; // x22
  Il2CppObject *Item; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  unsigned int *v20; // x27
  unsigned int *v21; // x0
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  ShopNoticeTween__TweenLoop_d__14_o *v25; // x23
  unsigned int *v26; // x0
  unsigned int *v27; // x8
  __int64 v28; // x8
  ServantStatusBattleListViewItem_o *v29; // x19
  int v30; // w8
  bool result; // w0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  Il2CppObject *loopWaitOnShow_5__2; // x1
  __int64 v34; // x0

  v4 = this;
  if ( (byte_4A577ED & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TweenAlpha___TypeInfo);
    this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4A577ED = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, 3.0, 0LL);
      v4->fields._loopWaitOnShow_5__2 = v6;
      p_loopWaitOnShow_5__2 = (ServantStatusBattleListViewItem_o *)&v4->fields._loopWaitOnShow_5__2;
      v8 = (int)v6;
      goto LABEL_16;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      goto LABEL_17;
    case 2:
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_8;
      goto LABEL_38;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( _4__this->fields.to == 1.0 )
      ShopNoticeTween__SetActiveSwitchingTargets(_4__this, 1, 0LL);
    v4->fields._tweenAlphas_5__3 = 0LL;
    p_loopWaitOnShow_5__2 = (ServantStatusBattleListViewItem_o *)&v4->fields._tweenAlphas_5__3;
    v8 = 0;
LABEL_16:
    sub_1B88554(p_loopWaitOnShow_5__2, v8, v2, v3);
    if ( !_4__this )
LABEL_38:
      sub_1B8880C(this, method);
LABEL_17:
    if ( !_4__this->fields.isTween )
      return 0;
    tweenTargets = _4__this->fields.tweenTargets;
    if ( !tweenTargets )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(p__2__current, 0, v2, v3);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
    v12 = sub_1B88658(TweenAlpha___TypeInfo, (unsigned int)tweenTargets->fields._size);
    v4->fields._tweenAlphas_5__3 = (struct TweenAlpha_array *)v12;
    p_tweenAlphas_5__3 = (unsigned int **)&v4->fields._tweenAlphas_5__3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._tweenAlphas_5__3, v12, v14, v15);
    this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
    if ( !this )
      goto LABEL_38;
    v16 = 0LL;
    while ( (__int64)v16 < SLODWORD(this->fields.__2__current) )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v16,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ShopNoticeTween__TweenLoop_d__14_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Item,
                                                     0LL,
                                                     0LL);
      v20 = *p_tweenAlphas_5__3;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_38;
        if ( v16 >= v20[6] )
          goto LABEL_47;
        v21 = &v20[2 * v16];
        *((_QWORD *)v21 + 4) = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 8), 0, v18, v19);
      }
      else
      {
        this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
        if ( !this )
          goto LABEL_38;
        v22 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this,
                v16,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        this = (ShopNoticeTween__TweenLoop_d__14_o *)TweenAlpha__Begin(
                                                       (UnityEngine_GameObject_o *)v22,
                                                       0.5,
                                                       _4__this->fields.to,
                                                       0LL);
        if ( !v20 )
          goto LABEL_38;
        v25 = this;
        if ( this )
        {
          this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
          if ( !this )
          {
            v34 = sub_1B88830();
            sub_1B886D8(v34, 0LL);
          }
        }
        if ( v16 >= v20[6] )
          goto LABEL_47;
        v26 = &v20[2 * v16];
        *((_QWORD *)v26 + 4) = v25;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 8), (int32_t)v25, v23, v24);
        v27 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_38;
        if ( v16 >= v27[6] )
LABEL_47:
          sub_1B88814(this, method);
        v28 = *(_QWORD *)&v27[2 * v16 + 8];
        if ( !v28 )
          goto LABEL_38;
        *(_DWORD *)(v28 + 32) = 6;
      }
      this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
      ++v16;
      if ( !this )
        goto LABEL_38;
    }
LABEL_8:
    if ( ShopNoticeTween__GetIsTweenAlphasEnabled(_4__this, v4->fields._tweenAlphas_5__3, 0LL) )
      break;
    if ( !_4__this->fields.isTween )
      return 0;
    v9 = _4__this->fields.to == 1.0;
    v10 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v10 = 1.0;
    _4__this->fields.to = v10;
    if ( v9 )
    {
      loopWaitOnShow_5__2 = (Il2CppObject *)v4->fields._loopWaitOnShow_5__2;
      v4->fields.__2__current = loopWaitOnShow_5__2;
      v29 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v29, (int32_t)loopWaitOnShow_5__2, v2, v3);
      v30 = 3;
      goto LABEL_46;
    }
  }
  if ( !_4__this->fields.isTween )
    return 0;
  v4->fields.__2__current = 0LL;
  v29 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B88554(v29, 0, v2, v3);
  v30 = 2;
LABEL_46:
  *(_DWORD *)&v29[-1].fields.isMine = v30;
  return 1;
}


Il2CppObject *__fastcall ShopNoticeTween__TweenLoop_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ShopNoticeTween__TweenLoop_d__14__System_Collections_IEnumerator_Reset(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_ShopNoticeTween__TweenLoop_d__14_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall ShopNoticeTween__TweenLoop_d__14__System_Collections_IEnumerator_get_Current(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ShopNoticeTween__TweenLoop_d__14__System_IDisposable_Dispose(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ShopNoticeTween___c__DisplayClass10_0___ctor(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__0(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        UnityEngine_GameObject_o *t,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x21
  bool v6; // w20
  UnityEngine_Object_o *v7; // x21

  if ( (byte_4A577EC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A577EC = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)t, tweenTarget, 0LL);
  if ( v6 )
  {
    v7 = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
      TweenAlpha__Begin(this->fields.tweenTarget, 0.0, 1.0, 0LL);
  }
  return v6;
}


bool __fastcall ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__1(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        System_Collections_Generic_List_GameObject__o *t,
        const MethodInfo *method)
{
  return t == this->fields.switchingTarget;
}


bool __fastcall ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__2(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        System_Collections_Generic_List_GameObject__o *t,
        const MethodInfo *method)
{
  return t == this->fields.switchingLabel;
}