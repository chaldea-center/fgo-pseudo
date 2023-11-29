void __fastcall ShopNoticeTween___ctor(
        ShopNoticeTween_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  this->fields.to = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.monoBehaviour,
    (System_Int32_array **)monoBehaviour,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ShopNoticeTween__AddTargets(
        ShopNoticeTween_o *this,
        UnityEngine_GameObject_o *tweenTarget,
        System_Collections_Generic_List_GameObject__o *switchingTarget,
        System_Collections_Generic_List_GameObject__o *switchingLabel,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_fields; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x23
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_switchingTargets; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x25
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  BattleServantConfConponent_o *p_switchingLabels; // x20
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // t1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x25
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40FB766 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, tweenTarget);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_GameObject___Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_GameObject___Contains__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Contains__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_GameObject____ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_List_GameObject___TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v15);
    byte_40FB766 = 1;
  }
  p_fields = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields;
  if ( !this->fields.tweenTargets )
  {
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                    tweenTarget,
                                                                                                    switchingTarget,
                                                                                                    switchingLabel,
                                                                                                    method);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v17,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *p_fields = v17;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
  }
  p_switchingTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.switchingTargets;
  if ( !this->fields.switchingTargets )
  {
    v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_List_GameObject___TypeInfo,
                                                                                                    tweenTarget,
                                                                                                    switchingTarget,
                                                                                                    switchingLabel,
                                                                                                    method);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v25,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    *p_switchingTargets = v25;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.switchingTargets,
      (System_Int32_array **)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  switchingLabels = this->fields.switchingLabels;
  p_switchingLabels = (BattleServantConfConponent_o *)&this->fields.switchingLabels;
  if ( !switchingLabels )
  {
    v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_List_GameObject___TypeInfo,
                                                                                                    tweenTarget,
                                                                                                    switchingTarget,
                                                                                                    switchingLabel,
                                                                                                    method);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v34,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    p_switchingLabels->klass = (BattleServantConfConponent_c *)v34;
    sub_B16F98(p_switchingLabels, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
  }
  if ( !*p_fields )
    goto LABEL_21;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)*p_fields,
          (WarBoardManager_TaskList_o *)tweenTarget,
          (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    if ( !*p_fields )
      goto LABEL_21;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      *p_fields,
      (EventMissionProgressRequest_Argument_ProgressData_o *)tweenTarget,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  }
  if ( !*p_switchingTargets )
    goto LABEL_21;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)*p_switchingTargets,
          (WarBoardManager_TaskList_o *)switchingTarget,
          (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    if ( !*p_switchingTargets )
      goto LABEL_21;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      *p_switchingTargets,
      (EventMissionProgressRequest_Argument_ProgressData_o *)switchingTarget,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_List_GameObject___Add__);
  }
  if ( !p_switchingLabels->klass )
    goto LABEL_21;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)p_switchingLabels->klass,
         (WarBoardManager_TaskList_o *)switchingLabel,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    return;
  }
  if ( !p_switchingLabels->klass )
LABEL_21:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_switchingLabels->klass,
    (EventMissionProgressRequest_Argument_ProgressData_o *)switchingLabel,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_List_GameObject___Add__);
}


void __fastcall ShopNoticeTween__DestroyTargetList(ShopNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x0
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x0
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x0

  if ( (byte_40FB769 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_GameObject___Clear__, v3);
    byte_40FB769 = 1;
  }
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)tweenTargets,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  switchingTargets = this->fields.switchingTargets;
  if ( switchingTargets )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchingTargets,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_List_GameObject___Clear__);
  switchingLabels = this->fields.switchingLabels;
  if ( switchingLabels )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchingLabels,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_List_GameObject___Clear__);
}


bool __fastcall ShopNoticeTween__GetIsTweenAlphasEnabled(
        ShopNoticeTween_o *this,
        TweenAlpha_array *tweenAlphas,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x20

  if ( (byte_40FB76B & 1) == 0 )
  {
    this = (ShopNoticeTween_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, tweenAlphas);
    byte_40FB76B = 1;
  }
  if ( !tweenAlphas )
LABEL_17:
    sub_B170D4();
  v4 = *(_QWORD *)&tweenAlphas->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v5 = 0LL;
  while ( 1 )
  {
    if ( v5 >= (unsigned int)v4 )
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
    this = (ShopNoticeTween_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_17;
      this = (ShopNoticeTween_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
    }
    LODWORD(v4) = tweenAlphas->max_length;
    if ( (__int64)++v5 >= (int)v4 )
      return 0;
  }
}


void __fastcall ShopNoticeTween__RemoveTargets(
        ShopNoticeTween_o *this,
        UnityEngine_GameObject_o *tweenTarget,
        System_Collections_Generic_List_GameObject__o *switchingTarget,
        System_Collections_Generic_List_GameObject__o *switchingLabel,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v42; // x22
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v48; // x22
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x19
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v54; // x21

  if ( (byte_40FB767 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_List_GameObject___RemoveAll__, tweenTarget);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__RemoveAll__, v9);
    sub_B16FFC(&Method_System_Predicate_GameObject___ctor__, v10);
    sub_B16FFC(&Method_System_Predicate_List_GameObject____ctor__, v11);
    sub_B16FFC(&System_Predicate_List_GameObject___TypeInfo, v12);
    sub_B16FFC(&System_Predicate_GameObject__TypeInfo, v13);
    sub_B16FFC(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__, v14);
    sub_B16FFC(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__, v15);
    sub_B16FFC(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__, v16);
    sub_B16FFC(&ShopNoticeTween___c__DisplayClass10_0_TypeInfo, v17);
    byte_40FB767 = 1;
  }
  v18 = sub_B170CC(ShopNoticeTween___c__DisplayClass10_0_TypeInfo, tweenTarget, switchingTarget, switchingLabel, method);
  ShopNoticeTween___c__DisplayClass10_0___ctor((ShopNoticeTween___c__DisplayClass10_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_11;
  *(_QWORD *)(v18 + 16) = tweenTarget;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v18 + 16),
    (System_Int32_array **)tweenTarget,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  *(_QWORD *)(v18 + 24) = switchingTarget;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v18 + 24),
    (System_Int32_array **)switchingTarget,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  *(_QWORD *)(v18 + 32) = switchingLabel;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v18 + 32),
    (System_Int32_array **)switchingLabel,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets && this->fields.switchingTargets && this->fields.switchingLabels )
  {
    v42 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                     System_Predicate_GameObject__TypeInfo,
                                                                     v37,
                                                                     v38,
                                                                     v39,
                                                                     v40);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v42,
      (Il2CppObject *)v18,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_GameObject___ctor__);
    System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
      (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)tweenTargets,
      (System_Predicate_T__o *)v42,
      (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    switchingTargets = this->fields.switchingTargets;
    v48 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                     System_Predicate_List_GameObject___TypeInfo,
                                                                     v44,
                                                                     v45,
                                                                     v46,
                                                                     v47);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v48,
      (Il2CppObject *)v18,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_List_GameObject____ctor__);
    if ( switchingTargets )
    {
      System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
        (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)switchingTargets,
        (System_Predicate_T__o *)v48,
        (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
      switchingLabels = this->fields.switchingLabels;
      v54 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                       System_Predicate_List_GameObject___TypeInfo,
                                                                       v50,
                                                                       v51,
                                                                       v52,
                                                                       v53);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v54,
        (Il2CppObject *)v18,
        Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_List_GameObject____ctor__);
      if ( switchingLabels )
      {
        System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)switchingLabels,
          (System_Predicate_T__o *)v54,
          (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
        return;
      }
    }
LABEL_11:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopNoticeTween__SetActiveSwitchingTargets(
        ShopNoticeTween_o *this,
        bool isSwitch,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x8
  System_Collections_Generic_List_GameObject__o *v10; // x8
  struct System_Collections_Generic_List_List_GameObject___o *v11; // x20
  unsigned int v12; // w21
  int32_t size; // w8
  __int64 i; // x24
  struct System_Collections_Generic_List_List_GameObject___o *v15; // x20
  System_Collections_Generic_List_GameObject__o *v16; // x20
  UnityEngine_Object_o *v17; // x20
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x20
  System_Collections_Generic_List_GameObject__o *v19; // x20
  UnityEngine_Object_o *v20; // x20
  struct System_Collections_Generic_List_List_GameObject___o *v21; // x20
  System_Collections_Generic_List_GameObject__o *v22; // x20
  UnityEngine_GameObject_o *v23; // x0
  struct System_Collections_Generic_List_List_GameObject___o *v24; // x20
  System_Collections_Generic_List_GameObject__o *v25; // x20
  UnityEngine_GameObject_o *v26; // x0
  System_Collections_Generic_List_GameObject__o *v27; // x8
  unsigned __int64 v28; // x25

  if ( (byte_40FB76C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_List_GameObject___get_Count__, isSwitch);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_GameObject___get_Item__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FB76C = 1;
  }
  if ( !isSwitch )
    goto LABEL_8;
  switchingTargets = this->fields.switchingTargets;
  if ( !switchingTargets )
    goto LABEL_55;
  if ( switchingTargets->fields._size >= 1 && (v10 = switchingTargets->fields._items->m_Items[0]) != 0LL )
    this->fields.switchingIndex = (this->fields.switchingIndex + 1) % v10->fields._size;
  else
LABEL_8:
    this->fields.switchingIndex = 0;
  v11 = this->fields.switchingTargets;
  if ( !v11 )
LABEL_55:
    sub_B170D4();
  v12 = 0;
  while ( 1 )
  {
    size = v11->fields._size;
    if ( (int)v12 >= size )
      break;
    for ( i = 4LL; ; ++i )
    {
      if ( size <= v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v27 = v11->fields._items->m_Items[v12];
      if ( !v27 )
        goto LABEL_55;
      v28 = i - 4;
      if ( i - 4 >= v27->fields._size )
        break;
      v15 = this->fields.switchingTargets;
      if ( !v15 )
        goto LABEL_55;
      if ( v15->fields._size <= v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v16 = v15->fields._items->m_Items[v12];
      if ( !v16 )
        goto LABEL_55;
      if ( v28 >= (unsigned int)v16->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v17 = (UnityEngine_Object_o *)*((_QWORD *)&v16->fields._items->obj.klass + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(v17, 0LL, 0LL) )
      {
        switchingLabels = this->fields.switchingLabels;
        if ( !switchingLabels )
          goto LABEL_55;
        if ( switchingLabels->fields._size <= v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v19 = switchingLabels->fields._items->m_Items[v12];
        if ( !v19 )
          goto LABEL_55;
        if ( v28 >= (unsigned int)v19->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v20 = (UnityEngine_Object_o *)*((_QWORD *)&v19->fields._items->obj.klass + i);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(v20, 0LL, 0LL) )
        {
          v21 = this->fields.switchingTargets;
          if ( !v21 )
            goto LABEL_55;
          if ( v21->fields._size <= v12 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v22 = v21->fields._items->m_Items[v12];
          if ( !v22 )
            goto LABEL_55;
          if ( v28 >= (unsigned int)v22->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v23 = (UnityEngine_GameObject_o *)*((_QWORD *)&v22->fields._items->obj.klass + i);
          if ( !v23 )
            goto LABEL_55;
          UnityEngine_GameObject__SetActive(v23, v28 == this->fields.switchingIndex, 0LL);
          v24 = this->fields.switchingLabels;
          if ( !v24 )
            goto LABEL_55;
          if ( v24->fields._size <= v12 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v25 = v24->fields._items->m_Items[v12];
          if ( !v25 )
            goto LABEL_55;
          if ( v28 >= (unsigned int)v25->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v26 = (UnityEngine_GameObject_o *)*((_QWORD *)&v25->fields._items->obj.klass + i);
          if ( !v26 )
            goto LABEL_55;
          UnityEngine_GameObject__SetActive(v26, v28 == this->fields.switchingIndex, 0LL);
        }
      }
      v11 = this->fields.switchingTargets;
      if ( !v11 )
        goto LABEL_55;
      size = v11->fields._size;
    }
    v11 = this->fields.switchingTargets;
    ++v12;
    if ( !v11 )
      goto LABEL_55;
  }
}


void __fastcall ShopNoticeTween__Start(ShopNoticeTween_o *this, const MethodInfo *method)
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

  ShopNoticeTween__Stop(this, method);
  monoBehaviour = (UnityEngine_Behaviour_o *)this->fields.monoBehaviour;
  if ( !monoBehaviour )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled(monoBehaviour, 0LL) )
  {
    v5 = this->fields.monoBehaviour;
    this->fields.isTween = 1;
    v6 = ShopNoticeTween__TweenLoop(this, v4);
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


void __fastcall ShopNoticeTween__Stop(ShopNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Coroutine_o *coroutine; // x1
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x20
  __int64 v15; // x21
  unsigned __int64 v16; // x23
  UnityEngine_Object_o *v17; // x20
  struct System_Collections_Generic_List_GameObject__o *v18; // x20

  if ( (byte_40FB768 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FB768 = 1;
  }
  coroutine = this->fields.coroutine;
  this->fields.isTween = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
LABEL_19:
      sub_B170D4();
    UnityEngine_MonoBehaviour__StopCoroutine_34804984(monoBehaviour, coroutine, 0LL);
    this->fields.coroutine = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.coroutine, 0LL, v7, v8, v9, v10, v11, v12);
    tweenTargets = this->fields.tweenTargets;
    if ( tweenTargets )
    {
      v15 = 4LL;
      while ( 1 )
      {
        v16 = v15 - 4;
        if ( v15 - 4 >= tweenTargets->fields._size )
          break;
        if ( v16 >= (unsigned int)tweenTargets->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v17 = (UnityEngine_Object_o *)*((_QWORD *)&tweenTargets->fields._items->obj.klass + v15);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(v17, 0LL, 0LL) )
        {
          v18 = this->fields.tweenTargets;
          if ( !v18 )
            goto LABEL_19;
          if ( v16 >= (unsigned int)v18->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          TweenAlpha__Begin(*((UnityEngine_GameObject_o **)&v18->fields._items->obj.klass + v15), 0.0, 1.0, 0LL);
        }
        tweenTargets = this->fields.tweenTargets;
        ++v15;
        if ( !tweenTargets )
          goto LABEL_19;
      }
    }
    ShopNoticeTween__DestroyTargetList(this, v13);
  }
}


System_Collections_IEnumerator_o *__fastcall ShopNoticeTween__TweenLoop(
        ShopNoticeTween_o *this,
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

  if ( (byte_40FB76A & 1) == 0 )
  {
    sub_B16FFC(&ShopNoticeTween__TweenLoop_d__14_TypeInfo, method);
    byte_40FB76A = 1;
  }
  v6 = sub_B170CC(ShopNoticeTween__TweenLoop_d__14_TypeInfo, method, v2, v3, v4);
  ShopNoticeTween__TweenLoop_d__14___ctor((ShopNoticeTween__TweenLoop_d__14_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  struct ShopNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v14; // x21
  BattleServantConfConponent_o *p_loopWaitOnShow_5__2; // x0
  System_Int32_array **v16; // x1
  bool result; // w0
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x8
  struct TweenAlpha_array *v19; // x0
  struct TweenAlpha_array **p_tweenAlphas_5__3; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_GameObject__o *v27; // x22
  unsigned __int64 v28; // x23
  UnityEngine_Object_o *v29; // x22
  TweenAlpha_o *v30; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  unsigned int *v38; // x26
  unsigned int *v39; // x0
  struct System_Collections_Generic_List_GameObject__o *v40; // x22
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x22
  unsigned int *v47; // x0
  struct TweenAlpha_array *v48; // x8
  TweenAlpha_o *v49; // x8
  bool v50; // zf
  float v51; // s0
  Il2CppObject **v52; // x19
  Il2CppObject **p__2__current; // x19
  Il2CppObject *loopWaitOnShow_5__2; // x1

  if ( (byte_40F79EC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&TweenAlpha___TypeInfo, v11);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v12);
    byte_40F79EC = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v14 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
      UnityEngine_WaitForSeconds___ctor(v14, 3.0, 0LL);
      p_loopWaitOnShow_5__2 = (BattleServantConfConponent_o *)&this->fields._loopWaitOnShow_5__2;
      v16 = (System_Int32_array **)v14;
      this->fields._loopWaitOnShow_5__2 = v14;
      goto LABEL_12;
    case 1:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_39;
      goto LABEL_13;
    case 2:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_39;
      goto LABEL_40;
    case 3:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_39;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( _4__this->fields.to == 1.0 )
      ShopNoticeTween__SetActiveSwitchingTargets(_4__this, 1, 0LL);
    this->fields._tweenAlphas_5__3 = 0LL;
    p_loopWaitOnShow_5__2 = (BattleServantConfConponent_o *)&this->fields._tweenAlphas_5__3;
    v16 = 0LL;
LABEL_12:
    sub_B16F98(p_loopWaitOnShow_5__2, v16, v2, v3, v4, v5, v6, v7);
    if ( !_4__this )
LABEL_39:
      sub_B170D4();
LABEL_13:
    if ( !_4__this->fields.isTween )
      return 0;
    tweenTargets = _4__this->fields.tweenTargets;
    if ( !tweenTargets )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    v19 = (struct TweenAlpha_array *)sub_B17014(TweenAlpha___TypeInfo, (unsigned int)tweenTargets->fields._size, v2);
    this->fields._tweenAlphas_5__3 = v19;
    p_tweenAlphas_5__3 = &this->fields._tweenAlphas_5__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._tweenAlphas_5__3,
      (System_Int32_array **)v19,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v27 = _4__this->fields.tweenTargets;
    if ( !v27 )
      goto LABEL_39;
    v28 = 0LL;
    while ( (__int64)v28 < v27->fields._size )
    {
      if ( v28 >= (unsigned int)v27->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v29 = (UnityEngine_Object_o *)v27->fields._items->m_Items[v28];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v30 = (TweenAlpha_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
      v38 = (unsigned int *)*p_tweenAlphas_5__3;
      if ( ((unsigned __int8)v30 & 1) != 0 )
      {
        if ( !v38 )
          goto LABEL_39;
        if ( v28 >= v38[6] )
          goto LABEL_53;
        v39 = &v38[2 * v28];
        *((_QWORD *)v39 + 4) = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)(v39 + 8), 0LL, v32, v33, v34, v35, v36, v37);
      }
      else
      {
        v40 = _4__this->fields.tweenTargets;
        if ( !v40 )
          goto LABEL_39;
        if ( v28 >= (unsigned int)v40->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v30 = TweenAlpha__Begin(v40->fields._items->m_Items[v28], 0.5, _4__this->fields.to, 0LL);
        if ( !v38 )
          goto LABEL_39;
        v46 = (System_Int32_array **)v30;
        if ( v30 )
        {
          v30 = (TweenAlpha_o *)sub_B170BC(v30, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
          if ( !v30 )
          {
            sub_B170F4(0LL);
            sub_B170A0();
          }
        }
        if ( v28 >= v38[6] )
          goto LABEL_53;
        v47 = &v38[2 * v28];
        *((_QWORD *)v47 + 4) = v46;
        sub_B16F98((BattleServantConfConponent_o *)(v47 + 8), v46, v32, v41, v42, v43, v44, v45);
        v48 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_39;
        if ( v28 >= v48->max_length )
        {
LABEL_53:
          sub_B17100(v30, v31, v32);
          sub_B170A0();
        }
        v49 = v48->m_Items[v28];
        if ( !v49 )
          goto LABEL_39;
        v49->fields.style = 6;
      }
      v27 = _4__this->fields.tweenTargets;
      ++v28;
      if ( !v27 )
        goto LABEL_39;
    }
LABEL_40:
    if ( ShopNoticeTween__GetIsTweenAlphasEnabled(_4__this, this->fields._tweenAlphas_5__3, 0LL) )
      break;
    if ( !_4__this->fields.isTween )
      return 0;
    v50 = _4__this->fields.to == 1.0;
    v51 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v51 = 1.0;
    _4__this->fields.to = v51;
    if ( v50 )
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
      this->fields.__1__state = 3;
      return 1;
    }
  }
  if ( !_4__this->fields.isTween )
    return 0;
  this->fields.__2__current = 0LL;
  v52 = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)v52, 0LL, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)v52 - 2) = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_ShopNoticeTween__TweenLoop_d__14_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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
  UnityEngine_Object_o *v6; // x20

  if ( (byte_40F79EB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, t);
    byte_40F79EB = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)t, tweenTarget, 0LL) )
    return 0;
  v6 = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
    TweenAlpha__Begin(this->fields.tweenTarget, 0.0, 1.0, 0LL);
  return 1;
}


bool __fastcall ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__1(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        System_Collections_Generic_List_GameObject__o *t,
        const MethodInfo *method)
{
  return this->fields.switchingTarget == t;
}


bool __fastcall ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__2(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        System_Collections_Generic_List_GameObject__o *t,
        const MethodInfo *method)
{
  return this->fields.switchingLabel == t;
}