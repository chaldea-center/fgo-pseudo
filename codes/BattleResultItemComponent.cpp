void BattleResultItemComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct BattleResultItemComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  MissionNaviTransitionBoardItem_o *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5974502 & 1) == 0 )
  {
    sub_2213A60(&BattleResultItemComponent_TypeInfo);
    sub_2213A60(&StringLiteral_21316/*"img_bg_total_dp"*/);
    sub_2213A60(&StringLiteral_2959/*"BATTLE_RESULT_GET_EP"*/);
    sub_2213A60(&StringLiteral_21317/*"img_bg_total_ep"*/);
    byte_5974502 = 1;
  }
  v7 = StringLiteral_21317/*"img_bg_total_ep"*/;
  BattleResultItemComponent_TypeInfo->static_fields->EP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_21317/*"img_bg_total_ep"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleResultItemComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_21316/*"img_bg_total_dp"*/;
  static_fields = BattleResultItemComponent_TypeInfo->static_fields;
  static_fields->DP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_21316/*"img_bg_total_dp"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->DP_SP_BASE_NAME, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_2959/*"BATTLE_RESULT_GET_EP"*/;
  v17 = (MissionNaviTransitionBoardItem_o *)BattleResultItemComponent_TypeInfo->static_fields;
  v17->fields.sortValue0 = StringLiteral_2959/*"BATTLE_RESULT_GET_EP"*/;
  v17 = (MissionNaviTransitionBoardItem_o *)((char *)v17 + 32);
  v17[-1].fields._NaviAction_k__BackingField = (struct System_Action_o *)3245342720LL;
  *(_QWORD *)&v17[-1].fields._BoardType_k__BackingField = 0x130000001ALL;
  sub_2213A04(v17, v16, v18, v19, v20, v21, v22, v23);
  BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH = 142;
}


void BattleResultItemComponent___ctor(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5974501 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Color___TypeInfo);
    byte_5974501 = 1;
  }
  v3 = (struct UnityEngine_Color_array *)sub_2213B20(UnityEngine_Color___TypeInfo, 2);
  this->fields.showModeChanButtonLabelEffectColors = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.showModeChanButtonLabelEffectColors,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleResultItemComponent__AddItemNewLine(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleResultItemComponent_o *v2; // x19
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Object_o *v4; // x20
  int32_t v5; // w24
  int32_t v6; // w21
  BattleResultItemComponent_o *v7; // x22
  struct UILabel_o *getEventPointLabel; // x8
  int v9; // w9
  struct BattleViewItemlistComponent_o *v10; // x8
  int v11; // w20
  int v12; // w21
  float v13; // s9
  float y; // s1
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_59744E5 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (BattleResultItemComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59744E5 = 1;
  }
  itemWindow = v2->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_27;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    this = (BattleResultItemComponent_o *)itemWindow->fields.itemObjectList;
    if ( !this )
      goto LABEL_27;
    if ( v6 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      break;
    this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v6,
                                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( this )
    {
      v7 = this;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( this )
      {
        getEventPointLabel = this->fields.getEventPointLabel;
        if ( getEventPointLabel )
        {
          v9 = BYTE5(getEventPointLabel->fields.mGo);
          itemWindow = v2->fields.itemWindow;
          if ( !v9 )
          {
            v5 = v6;
            v4 = (UnityEngine_Object_o *)v7;
          }
          ++v6;
          if ( itemWindow )
            continue;
        }
      }
    }
    goto LABEL_27;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleResultItemComponent_o *)UnityEngine_Object__op_Equality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v4 )
    {
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v4, 0);
      if ( this )
      {
        y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y;
        v10 = v2->fields.itemWindow;
        if ( v10 )
        {
          v11 = 0;
          v12 = v5 + 1;
          v13 = y + -113.57;
          do
          {
            this = (BattleResultItemComponent_o *)v10->fields.itemObjectList;
            if ( !this )
              break;
            if ( v12 + v11 >= SLODWORD(this->fields.m_CancellationTokenSource) )
              return;
            this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v12 + v11,
                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( !this )
              break;
            this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)this,
                                                    0);
            if ( !this )
              break;
            v15.fields.z = 0.0;
            v15.fields.y = v13 + (float)((float)(v11 / 7) * -113.57);
            v15.fields.x = (float)((float)(v11 % 7) * 110.0) + -22.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v15, 0);
            v10 = v2->fields.itemWindow;
            ++v11;
          }
          while ( v10 );
        }
      }
    }
LABEL_27:
    sub_2213CDC(this, method);
  }
}


void BattleResultItemComponent__Close(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_59744F8 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultItemComponent_endClose__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_59744F8 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_endClose__, 0),
        !window) )
  {
    sub_2213CDC(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._12_Close.methodPtr)(
    window,
    v5,
    window->klass->vtable._12_Close.method);
}


void BattleResultItemComponent__DialogCallBack(BattleResultItemComponent_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_59744EE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleResultItemComponent_EndCloseDialogCallBack__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59744EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    sub_2213CDC(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void BattleResultItemComponent__EndCloseDialogCallBack(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_59744EF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3639/*"CLOSE"*/);
    byte_59744EF = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3639/*"CLOSE"*/, 0);
}


int32_t BattleResultItemComponent__GetEventPointUpperPriority(
        BattleResultItemComponent_o *this,
        int32_t eventPointUpperId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  BattleResultItemComponent_o *EntitiesFromEventPointUpperId; // x0
  const MethodInfo *v7; // x2
  int32_t v8; // w19
  __int64 v9; // x1
  int32_t key; // w29
  BattleResultItemComponent_o *v11; // x20
  const MethodInfo *v12; // x2
  _BOOL8 IsOpen; // x0
  __int64 v14; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  bool v16; // w21
  signed __int64 i; // x25
  _DWORD *v18; // x8
  int64_t v19; // x24
  int32_t v20; // w22
  int32_t v21; // w23
  int64_t v22; // x24
  int32_t v23; // w22
  int32_t v24; // w23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_59744FE & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59744FE = 1;
  }
  memset(&v27, 0, sizeof(v27));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___)) == 0
    || (EntitiesFromEventPointUpperId = (BattleResultItemComponent_o *)EventPointUpperReleaseMaster__GetEntitiesFromEventPointUpperId(
                                                                         (EventPointUpperReleaseMaster_o *)Instance,
                                                                         eventPointUpperId,
                                                                         0),
        (Instance = (DataManager_o *)BattleResultItemComponent__GetEventPointUpperReleases(
                                       EntitiesFromEventPointUpperId,
                                       (EventPointUpperReleaseEntity_array *)EntitiesFromEventPointUpperId,
                                       v7)) == 0) )
  {
    sub_2213CDC(Instance, v5);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
  v8 = 0;
  v27 = v26;
  v26.fields._dictionary = 0;
  *(_QWORD *)&v26.fields._version = &v27;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v27,
            (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__) )
  {
    if ( !v27.fields._current.fields.value )
      sub_2213CDC(0, v9);
    key = (int32_t)v27.fields._current.fields.key;
    v11 = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___ToArray(
                                           (System_Collections_Generic_List_object__o *)v27.fields._current.fields.value,
                                           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    IsOpen = BattleResultItemComponent__GetIsAndCondGroup(v11, (EventPointUpperReleaseEntity_array *)v11, v12);
    if ( !v11 )
      sub_2213CDC(IsOpen, v14);
    m_CancellationTokenSource = v11->fields.m_CancellationTokenSource;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v16 = IsOpen;
      for ( i = 0; i < (int)m_CancellationTokenSource; ++i )
      {
        if ( i >= (unsigned __int64)(unsigned int)m_CancellationTokenSource )
          sub_2213CE4(IsOpen);
        v18 = (_DWORD *)*((_QWORD *)&v11->fields.parentComp + i);
        if ( v16 )
        {
          if ( !v18 )
            sub_2213CDC(IsOpen, v14);
          v19 = (int)v18[11];
          v20 = v18[9];
          v21 = v18[10];
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v14);
          IsOpen = CondType__IsOpen(v20, v21, v19, 0, 0, 0);
          if ( !IsOpen )
            goto LABEL_27;
        }
        else
        {
          if ( !v18 )
            sub_2213CDC(IsOpen, v14);
          v22 = (int)v18[11];
          v23 = v18[9];
          v24 = v18[10];
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v14);
          IsOpen = CondType__IsOpen(v23, v24, v22, 0, 0, 0);
          if ( IsOpen )
            break;
          if ( i >= LODWORD(v11->fields.m_CancellationTokenSource) - 1 )
            goto LABEL_27;
        }
        LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
      }
    }
    if ( v8 <= key )
      v8 = key;
  }
LABEL_27:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v27,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
  return v8;
}


System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *BattleResultItemComponent__GetEventPointUpperReleases(
        BattleResultItemComponent_o *this,
        EventPointUpperReleaseEntity_array *entities,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v6; // x1
  int max_length; // w8
  unsigned int v8; // w27
  EventPointUpperReleaseEntity_o *v9; // x21
  int32_t priority; // w22
  System_Collections_Generic_List_object__o *v11; // x23
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_59744FF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
    byte_59744FF = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
  if ( !entities )
    goto LABEL_18;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_2213CE4(Item);
      v9 = entities->m_Items[v8];
      if ( !v9 || !v4 )
        break;
      priority = v9->fields.priority;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v4,
              priority,
              (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__) )
      {
        v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v11,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v4,
          priority,
          (Il2CppObject *)v11,
          (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
      }
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                            v4,
                                                            priority,
                                                            (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
      if ( !Item )
        break;
      items = Item->fields._items;
      v19 = Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__;
      ++Item->fields._version;
      if ( !items )
        break;
      size = Item->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          (Il2CppObject *)v9,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        Item->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v9;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v9, v12, v13, v14, v15, v16, v17);
      }
      max_length = entities->max_length;
      if ( (int)++v8 >= max_length )
        return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v4;
    }
LABEL_18:
    sub_2213CDC(Item, v6);
  }
  return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v4;
}


// local variable allocation has failed, the output may be wrong!
int64_t BattleResultItemComponent__GetEventPointUpperValue(
        BattleResultItemComponent_o *this,
        int32_t priority,
        EventPointUpperEntity_array *entities,
        const MethodInfo *method)
{
  int max_length; // w8
  int v7; // w10
  EventPointUpperEntity_o *v8; // x11
  BalanceConfig_c *v9; // x0

  if ( (byte_5974500 & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_2213A60(&BalanceConfig_TypeInfo);
    byte_5974500 = 1;
  }
  if ( !entities )
LABEL_14:
    sub_2213CDC(this, *(_QWORD *)&priority);
  max_length = entities->max_length;
  if ( max_length < 1 )
  {
LABEL_10:
    v9 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&priority);
      v9 = BalanceConfig_TypeInfo;
    }
    return v9->static_fields->UserPointEventMax;
  }
  else
  {
    v7 = 0;
    while ( 1 )
    {
      if ( max_length == v7 )
        sub_2213CE4(this);
      v8 = entities->m_Items[v7];
      if ( !v8 )
        goto LABEL_14;
      if ( v8->fields.priority == priority )
        return v8->fields.value;
      if ( (max_length & ~(max_length >> 31)) == ++v7 )
        goto LABEL_10;
    }
  }
}


bool BattleResultItemComponent__GetIsAndCondGroup(
        BattleResultItemComponent_o *this,
        EventPointUpperReleaseEntity_array *entities,
        const MethodInfo *method)
{
  int max_length; // w8
  int v4; // w9
  int v5; // w11
  EventPointUpperReleaseEntity_o *v6; // x12
  int32_t condGroup; // w12

  if ( !entities )
    goto LABEL_11;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    v5 = -1;
    while ( 1 )
    {
      if ( max_length == v4 )
        sub_2213CE4(this);
      v6 = entities->m_Items[v4];
      if ( !v6 )
        break;
      condGroup = v6->fields.condGroup;
      if ( condGroup != v5 )
      {
        ++v4;
        v5 = condGroup;
        if ( (max_length & ~(max_length >> 31)) != v4 )
          continue;
      }
      return v4 < max_length;
    }
LABEL_11:
    sub_2213CDC(this, entities);
  }
  v4 = 0;
  return v4 < max_length;
}


bool BattleResultItemComponent__GetIsShowEventPointMax(
        BattleResultItemComponent_o *this,
        EventDetailEntity_o *eventDetailEntity,
        int64_t userEventPoint,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v6; // x20
  const MethodInfo *v7; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleResultItemComponent_o *v9; // x21
  struct BattleResultComponent_o *parentComp; // x8
  BattleResultItemComponent_o *EventPointUpperPriority; // x0
  const MethodInfo *v12; // x3

  v6 = this;
  if ( (byte_59744FD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventPointUpperMaster___);
    this = (BattleResultItemComponent_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59744FD = 1;
  }
  if ( !eventDetailEntity )
    goto LABEL_14;
  if ( !EventDetailEntity__IsEventPointByQp(eventDetailEntity, 0) )
    goto LABEL_12;
  this = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPointUpperMaster___);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)EventPointUpperMaster__GetEntitiesFromEventId(
                                          (EventPointUpperMaster_o *)this,
                                          eventDetailEntity->fields.eventId,
                                          0);
  if ( !this )
    return (char)this;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v9 = this;
  if ( !m_CancellationTokenSource )
  {
LABEL_12:
    LOBYTE(this) = 0;
    return (char)this;
  }
  if ( !(_DWORD)m_CancellationTokenSource )
    sub_2213CE4(this);
  parentComp = this->fields.parentComp;
  if ( !parentComp )
LABEL_14:
    sub_2213CDC(this, eventDetailEntity);
  EventPointUpperPriority = (BattleResultItemComponent_o *)BattleResultItemComponent__GetEventPointUpperPriority(
                                                             v6,
                                                             HIDWORD(parentComp->fields.m_CachedPtr),
                                                             v7);
  LOBYTE(this) = BattleResultItemComponent__GetEventPointUpperValue(
                   EventPointUpperPriority,
                   (int32_t)EventPointUpperPriority,
                   (EventPointUpperEntity_array *)v9,
                   v12) <= userEventPoint;
  return (char)this;
}


void BattleResultItemComponent__Init(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *window; // x0
  __int64 v4; // x1
  System_String_o *v5; // x20

  if ( (byte_59744DE & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2952/*"BATTLE_RESULTITEM_TITLECONF"*/);
    byte_59744DE = 1;
  }
  window = this->fields.window;
  if ( !window )
    goto LABEL_14;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0);
  window = this->fields.window;
  if ( !window )
    goto LABEL_14;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))window->klass->vtable._9_setClose.methodPtr)(
    window,
    window->klass->vtable._9_setClose.method);
  window = (BattleWindowComponent_o *)this->fields.itemDialog;
  if ( !window )
    goto LABEL_14;
  ItemDetailInfoComponent__Init((ItemDetailInfoComponent_o *)window, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2952/*"BATTLE_RESULTITEM_TITLECONF"*/, 0);
  if ( !window )
    goto LABEL_14;
  v5 = (System_String_o *)window;
  if ( !System_String__Equals_75686512((System_String_o *)window, (System_String_o *)StringLiteral_2952/*"BATTLE_RESULTITEM_TITLECONF"*/, 0) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_14;
    UILabel__set_text((UILabel_o *)window, v5, 0);
  }
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  if ( !window )
LABEL_14:
    sub_2213CDC(window, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
}


void BattleResultItemComponent__OnClickSwitchShowMode(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *showModeChangeButton; // x0
  __int64 *v8; // x8
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59744FB & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultItemComponent_OnClickSwitchShowMode__);
    sub_2213A60(&StringLiteral_18209/*"btn_bg_20"*/);
    sub_2213A60(&StringLiteral_18211/*"btn_bg_21"*/);
    byte_59744FB = 1;
  }
  v3 = Method_BattleResultItemComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_BattleResultItemComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  showModeChangeButton = this->fields.showModeChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !showModeChangeButton )
LABEL_19:
    sub_2213CDC(showModeChangeButton, v5);
  if ( isShowPossessionNum )
    v8 = &StringLiteral_18209/*"btn_bg_20"*/;
  else
    v8 = &StringLiteral_18211/*"btn_bg_21"*/;
  UIButton__set_normalSprite(showModeChangeButton, (System_String_o *)*v8, 0);
  showModeChangeButton = (UIButton_o *)this->fields.showModeChangeButtonLabel;
  showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( !showModeChanButtonLabelEffectColors )
      goto LABEL_19;
    if ( LODWORD(showModeChanButtonLabelEffectColors->max_length) )
    {
      p_r = &showModeChanButtonLabelEffectColors->m_Items[0].fields.r;
      p_g = &showModeChanButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &showModeChanButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &showModeChanButtonLabelEffectColors->m_Items[0].fields.a;
      if ( !showModeChangeButton )
        goto LABEL_19;
      goto LABEL_17;
    }
LABEL_20:
    sub_2213CE4(showModeChangeButton);
  }
  if ( !showModeChanButtonLabelEffectColors )
    goto LABEL_19;
  if ( (showModeChanButtonLabelEffectColors->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_20;
  p_r = &showModeChanButtonLabelEffectColors->m_Items[1].fields.r;
  p_g = &showModeChanButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &showModeChanButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &showModeChanButtonLabelEffectColors->m_Items[1].fields.a;
  if ( !showModeChangeButton )
    goto LABEL_19;
LABEL_17:
  v14.fields.a = *p_a;
  v14.fields.b = *p_b;
  v14.fields.g = *p_g;
  v14.fields.r = *p_r;
  UILabel__set_effectColor((UILabel_o *)showModeChangeButton, v14, 0);
  showModeChangeButton = (UIButton_o *)this->fields.itemWindow;
  if ( !showModeChangeButton )
    goto LABEL_19;
  BattleViewItemlistComponent__SwitchShowNumMode(
    (BattleViewItemlistComponent_o *)showModeChangeButton,
    this->fields.isShowPossessionNum,
    0);
}


void BattleResultItemComponent__Open(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchNextRoot; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  const MethodInfo *v6; // x1

  if ( (byte_59744DF & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultItemComponent_endOpen__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&StringLiteral_5652/*"END_OPEN"*/);
    byte_59744DF = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0);
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot
    || (touchNextRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      touchNextRoot,
                                                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0
    || (UIWidget__set_depth((UIWidget_o *)touchNextRoot, 200, 0),
        (touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5652/*"END_OPEN"*/, 0),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_endOpen__, 0),
        !window) )
  {
LABEL_9:
    sub_2213CDC(touchNextRoot, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._10_Open.methodPtr)(
    window,
    v5,
    window->klass->vtable._10_Open.method);
  BattleResultItemComponent__setCondensedScale(this, v6);
}


System_Collections_IEnumerator_o *BattleResultItemComponent__PlayItemIconEffectCoroutine(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59744EA & 1) == 0 )
  {
    sub_2213A60(&BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_TypeInfo);
    byte_59744EA = 1;
  }
  v3 = sub_2213CCC(BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_TypeInfo);
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58___ctor(
    (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *BattleResultItemComponent__PlayVoiceCoroutine(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_59744E9 & 1) == 0 )
  {
    sub_2213A60(&BattleResultItemComponent__PlayVoiceCoroutine_d__57_TypeInfo);
    byte_59744E9 = 1;
  }
  v5 = sub_2213CCC(BattleResultItemComponent__PlayVoiceCoroutine_d__57_TypeInfo);
  BattleResultItemComponent__PlayVoiceCoroutine_d__57___ctor(
    (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 48), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattleResultItemComponent__SetAddItemIconEffect(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleResultItemComponent_o *v2; // x19
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  int32_t size; // w8
  int v6; // w22
  int v7; // w23
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  struct BattleViewItemlistComponent_o *v12; // x8
  int32_t v13; // w28
  Il2CppObject *v14; // x20
  int32_t v15; // w21
  struct UILabel_o *getEventPointLabel; // x8
  BattleResultItemComponent_o *v17; // x23
  BattleResultItemComponent_o *v18; // x24
  BattleResultItemComponent_o *v19; // x25
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t animationSvtId; // [xsp+8h] [xbp-68h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-64h] BYREF

  v2 = this;
  if ( (byte_59744E7 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_19654/*"ef_additem"*/);
    this = (BattleResultItemComponent_o *)sub_2213A60(&StringLiteral_6105/*"Effect/BattleResult/{0}/{1}"*/);
    byte_59744E7 = 1;
  }
  itemWindow = v2->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_30;
  itemObjectList = itemWindow->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_30;
  size = itemObjectList->fields._size;
  v6 = 7 * (size / 7);
  if ( size == v6 )
    v7 = -21;
  else
    v7 = -14;
  g_eventId = v2->fields.g_eventId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &g_eventId);
  animationSvtId = v2->fields.animationSvtId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &animationSvtId);
  v11 = System_String__Format_75697880((System_String_o *)StringLiteral_6105/*"Effect/BattleResult/{0}/{1}"*/, v8, v9, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10);
  this = (BattleResultItemComponent_o *)AssetManager__getAssetStorage(v11, 0);
  if ( !this
    || (this = (BattleResultItemComponent_o *)AssetData__GetObject_object__58532980(
                                                (AssetData_o *)this,
                                                (System_String_o *)StringLiteral_19654/*"ef_additem"*/,
                                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320),
        (v12 = v2->fields.itemWindow) == 0) )
  {
LABEL_30:
    sub_2213CDC(this, method);
  }
  v13 = v7 + v6;
  v14 = (Il2CppObject *)this;
  v15 = 0;
  while ( 1 )
  {
    this = (BattleResultItemComponent_o *)v12->fields.itemObjectList;
    if ( !this )
      goto LABEL_30;
    if ( v15 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      break;
    if ( v13 <= v15 )
    {
      this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v15,
                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_30;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( !this )
        goto LABEL_30;
      getEventPointLabel = this->fields.getEventPointLabel;
      v17 = this;
      if ( !getEventPointLabel )
        goto LABEL_30;
      if ( BYTE5(getEventPointLabel->fields.mGo) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        this = (BattleResultItemComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                v14,
                                                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_30;
        v18 = this;
        this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( !this )
          goto LABEL_30;
        v19 = this;
        UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v2->fields.effectRoot, 0);
        if ( !byte_5969AE0 )
        {
          sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v19,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        if ( !byte_5969AE5 )
        {
          sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE5 = 1;
        }
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v19,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v18, 0, 0);
        v17->fields.eventPointMaxSprite = (struct UISprite_o *)v18;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v17->fields.eventPointMaxSprite,
          (int32_t)v18,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
      }
    }
    v12 = v2->fields.itemWindow;
    ++v15;
    if ( !v12 )
      goto LABEL_30;
  }
}


void BattleResultItemComponent__SetAddItemSvtAnimation(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  Il2CppObject *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Object_object__58532980; // x20
  UnityEngine_GameObject_o *v11; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Transform_o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t animationSvtId; // [xsp+8h] [xbp-38h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_59744E6 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_19721/*"ef_presenter"*/);
    sub_2213A60(&StringLiteral_6105/*"Effect/BattleResult/{0}/{1}"*/);
    byte_59744E6 = 1;
  }
  g_eventId = this->fields.g_eventId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &g_eventId);
  animationSvtId = this->fields.animationSvtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &animationSvtId);
  v6 = System_String__Format_75697880((System_String_o *)StringLiteral_6105/*"Effect/BattleResult/{0}/{1}"*/, v3, v4, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
  AssetStorage = AssetManager__getAssetStorage(v6, 0);
  if ( !AssetStorage )
    goto LABEL_16;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              AssetStorage,
                              (System_String_o *)StringLiteral_19721/*"ef_presenter"*/,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                  Object_object__58532980,
                                  (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !AssetStorage
    || (v11 = (UnityEngine_GameObject_o *)AssetStorage,
        AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)AssetStorage, 0),
        (itemWindow = this->fields.itemWindow) == 0)
    || (v13 = (UnityEngine_Transform_o *)AssetStorage) == 0 )
  {
LABEL_16:
    sub_2213CDC(AssetStorage, v8);
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)AssetStorage, itemWindow->fields.listRoot, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  UnityEngine_GameObject__SetActive(v11, 0, 0);
  this->fields.addItemSvtAnimationObj = v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.addItemSvtAnimationObj,
    (int32_t)v11,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void BattleResultItemComponent__SetEventInfo(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        UserEventPointEntity_array *oldUserPoint,
        int64_t addDamagePoint,
        int32_t boostRate,
        int32_t countQp,
        EventConquestInfo_array *eventConquestInfos,
        bool isNotDisplayEventPoint,
        int32_t eventGroupId,
        const MethodInfo *method)
{
  BattleResultItemComponent___c__DisplayClass51_0_o *v17; // x28
  int64_t Master_object; // x0
  __int64 v19; // x1
  DataManager_c *v20; // x0
  int v21; // w8
  __int64 v22; // x1
  Il2CppObject *Entity; // x0
  EventDetailEntity_o *v24; // x21
  il2cpp_array_size_t v25; // x8
  UserEventPointEntity_o *v26; // x8
  int32_t v27; // w26
  int64_t EventPointNoGroup; // x0
  __int64 v29; // x1
  il2cpp_array_size_t max_length; // x8
  EventConquestInfo_o *v31; // x23
  __int64 v32; // x1
  Il2CppObject *v33; // x21
  long double v34; // q0
  EventConquestInfo_o *v35; // x8
  int64_t v36; // x22
  int64_t getNum; // x21
  int32_t ImageId; // w4
  const MethodInfo *v39; // x7
  BattleResultItemComponent_o *v40; // x0
  int32_t v41; // w1
  int64_t v42; // x2
  int64_t v43; // x3
  bool v44; // w5
  int32_t v45; // w6
  Il2CppObject *MasterData_object; // x0
  __int64 v47; // x1
  UserEventRaidMaster_o *v48; // x22
  UnityEngine_Object_o *rootEventDamagePoint; // x23
  __int64 v50; // x1
  int64_t TotalDamagePoint; // x20
  BalanceConfig_c *v52; // x8
  int64_t UserRaidDamagePointMax; // x22
  int64_t v54; // x20
  int64_t v55; // x0
  UILabel_o *getEventDamagePointLabel; // x22
  Il2CppObject *v57; // x0
  UILabel_o *nowEventDamagePointLabel; // x22
  Il2CppObject *v59; // x0
  __int64 v60; // x1
  BattleResultItemComponent_c *v61; // x0
  System_String_o *DP_SP_BASE_NAME; // x20
  System_String_o *v63; // x0
  struct UISprite_o *eventDamageBGSprite; // x8
  Il2CppObject *v65; // x20
  BattleResultItemComponent_c *v66; // x0
  __int64 v67; // x1
  UISprite_o *eventDamageIconSprite; // x20
  int32_t pointImageId; // w21
  int64_t v70; // x25
  System_Func_object__bool__o *v71; // x27
  __int64 v72; // x27
  const MethodInfo *v73; // x3
  UserEventPointEntity_o *v74; // x8
  BattleResultItemComponent_o *v75; // x19
  int64_t v76; // x26
  UserEventPointEntity_o *v77; // x8
  int32_t v78; // w23
  bool IsShowEventPointMax; // w8
  int64_t v81; // [xsp+8h] [xbp-78h] BYREF
  int64_t v82; // [xsp+10h] [xbp-70h] BYREF
  int32_t v83; // [xsp+1Ch] [xbp-64h] BYREF

  v83 = eventId;
  if ( (byte_59744E3 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&BattleResultItemComponent_TypeInfo);
    sub_2213A60(&Method_BetterList_string__Contains__);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_First_UserEventPointEntity___);
    sub_2213A60(&System_Func_UserEventPointEntity__bool__TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_BattleResultItemComponent___c__DisplayClass51_0__SetEventInfo_b__0__);
    sub_2213A60(&BattleResultItemComponent___c__DisplayClass51_0_TypeInfo);
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    sub_2213A60(&StringLiteral_862/*"+ {0:#,0}"*/);
    byte_59744E3 = 1;
  }
  v17 = (BattleResultItemComponent___c__DisplayClass51_0_o *)sub_2213CCC(BattleResultItemComponent___c__DisplayClass51_0_TypeInfo);
  BattleResultItemComponent___c__DisplayClass51_0___ctor(v17, 0);
  if ( !v17 )
    goto LABEL_88;
  v20 = DataManager_TypeInfo;
  v21 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v17->fields.eventGroupId = eventGroupId;
  if ( !v21 )
    j_il2cpp_runtime_class_init_0(v20, v19);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_88;
  if ( !DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          eventId,
          (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_88;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             eventId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v24 = (EventDetailEntity_o *)Entity;
  Master_object = EventDetailEntity__IsEventPoint((EventDetailEntity_o *)Entity, 0);
  if ( (Master_object & 1) == 0 )
  {
    Master_object = EventDetailEntity__IsMakeFarm(v24, 0);
    if ( (Master_object & 1) == 0 )
      return;
  }
  if ( isNotDisplayEventPoint )
    return;
  if ( !oldUserPoint || (v25 = oldUserPoint->max_length) == 0 )
  {
    Master_object = EventDetailEntity__IsMakeFarm(v24, 0);
    if ( (Master_object & 1) != 0 )
    {
      if ( !eventConquestInfos )
        return;
      max_length = eventConquestInfos->max_length;
      if ( !max_length )
        return;
      if ( !(_DWORD)max_length )
        goto LABEL_89;
      v31 = eventConquestInfos->m_Items[0];
      if ( !v31 || v31->fields.rewardNum < 1 )
        return;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
      v33 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v34 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v32);
      Master_object = sub_2417958(0, v34);
      if ( v33 )
      {
        Master_object = (int64_t)UserItemMaster__GetEntityDefinitely(
                                   (UserItemMaster_o *)v33,
                                   Master_object,
                                   v31->fields.objectId,
                                   0);
        if ( !LODWORD(eventConquestInfos->max_length) )
          goto LABEL_89;
        v35 = eventConquestInfos->m_Items[0];
        if ( v35 )
        {
          if ( Master_object )
          {
            v36 = *(int *)(Master_object + 28);
            getNum = v35->fields.getNum;
            Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
            if ( Master_object )
            {
              Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                         v31->fields.objectId,
                                         (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
              if ( Master_object )
              {
                ImageId = ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0);
                v40 = this;
                v41 = eventId;
                v42 = getNum;
                v43 = v36;
                v44 = 0;
                v45 = 0;
LABEL_87:
                BattleResultItemComponent__SetEventPointUi(v40, v41, v42, v43, ImageId, v44, v45, v39);
                return;
              }
            }
          }
        }
      }
    }
    else
    {
      if ( addDamagePoint < 0 )
        return;
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_88;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Master_object,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
      if ( !MasterData_object )
        return;
      v48 = (UserEventRaidMaster_o *)MasterData_object;
      rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
      if ( UnityEngine_Object__op_Equality(rootEventDamagePoint, 0, 0) )
        return;
      TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(v48, eventId, 0);
      v52 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v50);
        v52 = BalanceConfig_TypeInfo;
      }
      UserRaidDamagePointMax = v52->static_fields->UserRaidDamagePointMax;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v50);
      v54 = System_Math__Min_77153608(TotalDamagePoint, UserRaidDamagePointMax, 0);
      v55 = System_Math__Min_77153608(addDamagePoint, BalanceConfig_TypeInfo->static_fields->UserRaidDamagePointMax, 0);
      getEventDamagePointLabel = this->fields.getEventDamagePointLabel;
      v82 = v55;
      v57 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v82);
      Master_object = (int64_t)System_String__Format((System_String_o *)StringLiteral_862/*"+ {0:#,0}"*/, v57, 0);
      if ( getEventDamagePointLabel )
      {
        UILabel__set_text(getEventDamagePointLabel, (System_String_o *)Master_object, 0);
        nowEventDamagePointLabel = this->fields.nowEventDamagePointLabel;
        v81 = v54;
        v59 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v81);
        Master_object = (int64_t)System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v59, 0);
        if ( nowEventDamagePointLabel )
        {
          UILabel__set_text(nowEventDamagePointLabel, (System_String_o *)Master_object, 0);
          v61 = BattleResultItemComponent_TypeInfo;
          if ( !*(&BattleResultItemComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, v60);
            v61 = BattleResultItemComponent_TypeInfo;
          }
          DP_SP_BASE_NAME = v61->static_fields->DP_SP_BASE_NAME;
          v63 = System_Int32__ToString((int32_t)&v83, 0);
          Master_object = (int64_t)System_String__Concat_75651716(DP_SP_BASE_NAME, v63, 0);
          eventDamageBGSprite = this->fields.eventDamageBGSprite;
          if ( eventDamageBGSprite )
          {
            v65 = (Il2CppObject *)Master_object;
            Master_object = (int64_t)eventDamageBGSprite->fields.mAtlas;
            if ( Master_object )
            {
              Master_object = (int64_t)UIAtlas__GetListOfSprites((UIAtlas_o *)Master_object, 0);
              if ( Master_object )
              {
                if ( !BetterList_object___Contains(
                        (BetterList_T__o *)Master_object,
                        v65,
                        (const MethodInfo_3E6FBB0 *)Method_BetterList_string__Contains__) )
                {
                  v66 = BattleResultItemComponent_TypeInfo;
                  if ( !*(&BattleResultItemComponent_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, v19);
                    v66 = BattleResultItemComponent_TypeInfo;
                  }
                  v65 = (Il2CppObject *)v66->static_fields->DP_SP_BASE_NAME;
                }
                Master_object = (int64_t)this->fields.eventDamageBGSprite;
                if ( Master_object )
                {
                  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)v65, 0);
                  eventDamageIconSprite = this->fields.eventDamageIconSprite;
                  pointImageId = v24->fields.pointImageId;
                  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v67);
                  AtlasManager__SetItem(eventDamageIconSprite, pointImageId, 0);
                  Master_object = (int64_t)this->fields.rootEventDamagePoint;
                  if ( Master_object )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_88:
    sub_2213CDC(Master_object, v19);
  }
  if ( !(_DWORD)v25 )
    goto LABEL_89;
  v26 = oldUserPoint->m_Items[0];
  if ( !v26 )
    goto LABEL_88;
  v27 = v17->fields.eventGroupId;
  if ( !v26->fields.groupId || v27 >= 1 )
  {
    if ( v27 <= 0 )
      EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
    else
      EventPointNoGroup = UserEventPointMaster__GetEventPoint(eventId, v27, 0);
    v70 = EventPointNoGroup;
    v71 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserEventPointEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v71,
      (Il2CppObject *)v17,
      Method_BattleResultItemComponent___c__DisplayClass51_0__SetEventInfo_b__0__,
      0);
    Master_object = (int64_t)System_Linq_Enumerable__First_object__59245928(
                               (System_Collections_Generic_IEnumerable_TSource__o *)oldUserPoint,
                               (System_Func_TSource__bool__o *)v71,
                               (const MethodInfo_3880568 *)Method_System_Linq_Enumerable_First_UserEventPointEntity___);
    if ( v27 <= 0 )
    {
      if ( !LODWORD(oldUserPoint->max_length) )
        goto LABEL_89;
      Master_object = (int64_t)oldUserPoint->m_Items[0];
      if ( !Master_object )
        goto LABEL_88;
    }
    else if ( !Master_object )
    {
      goto LABEL_88;
    }
    v72 = v70 - *(_QWORD *)(Master_object + 32);
    if ( v70 <= 0 && v72 < 1 )
      return;
    Master_object = EventDetailEntity__IsEventPointByQp(v24, 0);
    if ( (Master_object & 1) != 0 )
    {
      if ( !LODWORD(oldUserPoint->max_length) )
        goto LABEL_89;
      v74 = oldUserPoint->m_Items[0];
      v75 = this;
      if ( !v74 )
        goto LABEL_88;
      v76 = v74->fields.value + countQp;
      if ( BattleResultItemComponent__GetIsShowEventPointMax(this, v24, v70, v73) )
      {
        Master_object = BattleResultItemComponent__GetIsShowEventPointMax(this, v24, v76, v73);
        if ( (Master_object & 1) != 0 )
          v76 = v70;
        if ( LODWORD(oldUserPoint->max_length) )
        {
          v77 = oldUserPoint->m_Items[0];
          if ( !v77 )
            goto LABEL_88;
          v72 = v76 - v77->fields.value;
          goto LABEL_86;
        }
LABEL_89:
        sub_2213CE4(Master_object);
      }
      v72 = countQp;
    }
    else
    {
      v75 = this;
      v76 = v70;
    }
LABEL_86:
    v78 = v24->fields.pointImageId;
    IsShowEventPointMax = BattleResultItemComponent__GetIsShowEventPointMax(v75, v24, v76, v73);
    v40 = v75;
    v41 = eventId;
    v44 = IsShowEventPointMax;
    v42 = v72;
    v43 = v76;
    ImageId = v78;
    v45 = boostRate;
    goto LABEL_87;
  }
}


void BattleResultItemComponent__SetEventPointUi(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        int64_t addEventPoint,
        int64_t totalEventPoint,
        int32_t imageId,
        bool isEventPointMax,
        int32_t boostRate,
        const MethodInfo *method)
{
  UILabel_o *getEventPointLabel; // x25
  Il2CppObject *v15; // x0
  System_String_o *IfExists; // x0
  System_String_o *v17; // x1
  UILabel_o *nowEventPointLabel; // x24
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  UISprite_o *eventIconSprite; // x23
  UILabel_o *getTitleLabel; // x22
  int v23; // w8
  int32_t *v24; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  BattleResultItemComponent_c *v27; // x8
  UnityEngine_GameObject_o *v28; // x22
  int v29; // w9
  float *p_EP_GET_POSY_NORMAL; // x8
  UILabel_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  BattleResultItemComponent_c *v34; // x8
  __int64 v35; // x23
  System_String_o *EP_GET_LOCALE_KEY; // x24
  System_String_o *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_String_o *v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  UILabel_o *getBoostLabel; // x22
  System_String_o *v54; // x23
  Il2CppObject *v55; // x0
  __int64 v56; // x1
  BattleResultItemComponent_c *v57; // x0
  System_String_o *EP_SP_BASE_NAME; // x21
  System_String_o *v59; // x0
  struct UISprite_o *eventPointBgSprite; // x8
  Il2CppObject *v61; // x21
  BattleResultItemComponent_c *v62; // x0
  __int64 v63; // x1
  UnityEngine_Object_o *eventPointMaxSprite; // x21
  int64_t v65; // [xsp+8h] [xbp-68h] BYREF
  int64_t v66; // [xsp+10h] [xbp-60h] BYREF
  int32_t v67; // [xsp+1Ch] [xbp-54h] BYREF

  v67 = eventId;
  if ( (byte_59744E4 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BattleResultItemComponent_TypeInfo);
    sub_2213A60(&Method_BetterList_string__Contains__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_2960/*"BATTLE_RESULT_GET_EP_RATE"*/);
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_862/*"+ {0:#,0}"*/);
    byte_59744E4 = 1;
  }
  getEventPointLabel = this->fields.getEventPointLabel;
  v66 = addEventPoint;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v66);
  IfExists = System_String__Format((System_String_o *)StringLiteral_862/*"+ {0:#,0}"*/, v15, 0);
  if ( !getEventPointLabel )
    goto LABEL_55;
  UILabel__set_text(getEventPointLabel, IfExists, 0);
  nowEventPointLabel = this->fields.nowEventPointLabel;
  v65 = totalEventPoint;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v65);
  IfExists = System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v19, 0);
  if ( !nowEventPointLabel )
    goto LABEL_55;
  UILabel__set_text(nowEventPointLabel, IfExists, 0);
  CommonFunction__ScalingLabelWidth(this->fields.getEventPointLabel, 215, 0);
  CommonFunction__ScalingLabelWidth(this->fields.nowEventPointLabel, 215, 0);
  eventIconSprite = this->fields.eventIconSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20);
  AtlasManager__SetItem(eventIconSprite, imageId, 0);
  IfExists = (System_String_o *)BattleResultItemComponent_TypeInfo;
  getTitleLabel = this->fields.getTitleLabel;
  v23 = *(&BattleResultItemComponent_TypeInfo->_2.cctor_finished + 1);
  if ( boostRate <= 0 )
  {
    if ( !v23 )
    {
      j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, v17);
      IfExists = (System_String_o *)BattleResultItemComponent_TypeInfo;
    }
    v24 = (int32_t *)(*(_QWORD *)&IfExists[7].fields + 24LL);
    if ( getTitleLabel )
      goto LABEL_15;
LABEL_55:
    sub_2213CDC(IfExists, v17);
  }
  if ( !v23 )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, v17);
    IfExists = (System_String_o *)BattleResultItemComponent_TypeInfo;
  }
  v24 = (int32_t *)(*(_QWORD *)&IfExists[7].fields + 28LL);
  if ( !getTitleLabel )
    goto LABEL_55;
LABEL_15:
  UILabel__set_fontSize(getTitleLabel, *v24, 0);
  IfExists = (System_String_o *)this->fields.getTitleLabel;
  if ( !IfExists )
    goto LABEL_55;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IfExists, 0);
  v27 = BattleResultItemComponent_TypeInfo;
  v28 = gameObject;
  v29 = *(&BattleResultItemComponent_TypeInfo->_2.cctor_finished + 1);
  if ( boostRate <= 0 )
  {
    if ( !v29 )
    {
      j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, v26);
      v27 = BattleResultItemComponent_TypeInfo;
    }
    p_EP_GET_POSY_NORMAL = &v27->static_fields->EP_GET_POSY_NORMAL;
  }
  else
  {
    if ( !v29 )
    {
      j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, v26);
      v27 = BattleResultItemComponent_TypeInfo;
    }
    p_EP_GET_POSY_NORMAL = &v27->static_fields->EP_GET_POSY_BOOSTED;
  }
  GameObjectExtensions__SetLocalPositionY(v28, *p_EP_GET_POSY_NORMAL, 0);
  v31 = this->fields.getTitleLabel;
  v32 = sub_2213B20(string___TypeInfo, 2);
  v34 = BattleResultItemComponent_TypeInfo;
  v35 = v32;
  if ( !*(&BattleResultItemComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, v33);
    v34 = BattleResultItemComponent_TypeInfo;
  }
  EP_GET_LOCALE_KEY = v34->static_fields->EP_GET_LOCALE_KEY;
  v37 = System_Int32__ToString((int32_t)&v67, 0);
  IfExists = System_String__Concat_75651716(EP_GET_LOCALE_KEY, v37, 0);
  if ( !v35 )
    goto LABEL_55;
  if ( !*(_DWORD *)(v35 + 24)
    || (*(_QWORD *)(v35 + 32) = IfExists,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 32), (int32_t)IfExists, v38, v39, v40, v41, v42, v43),
        (*(_DWORD *)(v35 + 24) & 0xFFFFFFFE) == 0) )
  {
    sub_2213CE4(IfExists);
  }
  v50 = BattleResultItemComponent_TypeInfo->static_fields->EP_GET_LOCALE_KEY;
  *(_QWORD *)(v35 + 40) = v50;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 40), (int32_t)v50, v44, v45, v46, v47, v48, v49);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v35, 0);
  if ( !v31 )
    goto LABEL_55;
  UILabel__set_text(v31, IfExists, 0);
  getBoostLabel = this->fields.getBoostLabel;
  if ( boostRate <= 0 )
  {
    v17 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !getBoostLabel )
      goto LABEL_55;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_2960/*"BATTLE_RESULT_GET_EP_RATE"*/, 0);
    *(float *)&v66 = (float)((float)boostRate / 1000.0) + 1.0;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984378, &v66);
    IfExists = System_String__Format(v54, v55, 0);
    v17 = IfExists;
    if ( !getBoostLabel )
      goto LABEL_55;
  }
  UILabel__set_text(getBoostLabel, v17, 0);
  v57 = BattleResultItemComponent_TypeInfo;
  if ( !*(&BattleResultItemComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, v56);
    v57 = BattleResultItemComponent_TypeInfo;
  }
  EP_SP_BASE_NAME = v57->static_fields->EP_SP_BASE_NAME;
  v59 = System_Int32__ToString((int32_t)&v67, 0);
  IfExists = System_String__Concat_75651716(EP_SP_BASE_NAME, v59, 0);
  eventPointBgSprite = this->fields.eventPointBgSprite;
  if ( !eventPointBgSprite )
    goto LABEL_55;
  v61 = (Il2CppObject *)IfExists;
  IfExists = (System_String_o *)eventPointBgSprite->fields.mAtlas;
  if ( !IfExists )
    goto LABEL_55;
  IfExists = (System_String_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)IfExists, 0);
  if ( !IfExists )
    goto LABEL_55;
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)IfExists,
          v61,
          (const MethodInfo_3E6FBB0 *)Method_BetterList_string__Contains__) )
  {
    v62 = BattleResultItemComponent_TypeInfo;
    if ( !*(&BattleResultItemComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, v17);
      v62 = BattleResultItemComponent_TypeInfo;
    }
    v61 = (Il2CppObject *)v62->static_fields->EP_SP_BASE_NAME;
  }
  IfExists = (System_String_o *)this->fields.eventPointBgSprite;
  if ( !IfExists )
    goto LABEL_55;
  UISprite__set_spriteName((UISprite_o *)IfExists, (System_String_o *)v61, 0);
  eventPointMaxSprite = (UnityEngine_Object_o *)this->fields.eventPointMaxSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
  if ( UnityEngine_Object__op_Inequality(eventPointMaxSprite, 0, 0) )
  {
    IfExists = (System_String_o *)this->fields.eventPointMaxSprite;
    if ( !IfExists )
      goto LABEL_55;
    IfExists = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IfExists, 0);
    if ( !IfExists )
      goto LABEL_55;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IfExists, isEventPointMax, 0);
  }
  IfExists = (System_String_o *)this->fields.rootEventPoint;
  if ( !IfExists )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IfExists, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultItemComponent__SetGroupEventRoot(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        UserEventEntity_array *oldUsrEvent,
        UserEventPointEntity_array *oldUsrPoint,
        int64_t addDamagePoint,
        UserGameEntity_o *userGame,
        int32_t countQp,
        System_Int32_array *viewGroupIds,
        int64_t conquestRewardQp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *nomalRootObj; // x0
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x5

  nomalRootObj = this->fields.nomalRootObj;
  if ( !nomalRootObj
    || (UnityEngine_GameObject__SetActive(nomalRootObj, 0, 0),
        (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0)
    || (nomalRootObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nomalRootObj, 0)) == 0
    || (UnityEngine_GameObject__SetActive(nomalRootObj, 1, 0), !userGame)
    || (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0
    || (BattleResultEventItemGroupComponent__SetQpInfo(
          (BattleResultEventItemGroupComponent_o *)nomalRootObj,
          userGame->fields.qp - conquestRewardQp,
          countQp,
          v17),
        (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0) )
  {
    sub_2213CDC(nomalRootObj, *(_QWORD *)&eventId);
  }
  BattleResultEventItemGroupComponent__SetGroupPointInfo(
    (BattleResultEventItemGroupComponent_o *)nomalRootObj,
    eventId,
    userGame->fields.userId,
    oldUsrPoint,
    viewGroupIds,
    v18);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultItemComponent__SetNormalRoot(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        UserEventPointEntity_array *oldUsrPoint,
        int64_t addDamagePoint,
        UserGameEntity_o *userGame,
        int32_t countQp,
        int32_t boostRate,
        int32_t conquestRewardQp,
        int32_t firstClearRewardQp,
        UserGameEntity_o *oldGame,
        EventConquestInfo_array *eventConquestInfos,
        bool isNotDisplayEventPoint,
        int32_t eventGroupId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *groupRootObj; // x0
  UILabel_o *getQpLabel; // x27
  Il2CppObject *v24; // x0
  int64_t qp; // x29
  int64_t QpMax; // x8
  int64_t v27; // x26
  UILabel_o *nowQpLabel; // x25
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  UnityEngine_Object_o *rootEventDamagePoint; // x25
  const MethodInfo *v32; // [xsp+8h] [xbp-78h]
  int64_t v33; // [xsp+10h] [xbp-70h] BYREF
  int32_t v34; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_59744E2 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    sub_2213A60(&StringLiteral_862/*"+ {0:#,0}"*/);
    byte_59744E2 = 1;
  }
  groupRootObj = (UnityEngine_Component_o *)this->fields.groupRootObj;
  if ( !groupRootObj )
    goto LABEL_30;
  groupRootObj = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(groupRootObj, 0);
  if ( !groupRootObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0);
  groupRootObj = (UnityEngine_Component_o *)this->fields.nomalRootObj;
  if ( !groupRootObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 1, 0);
  getQpLabel = this->fields.getQpLabel;
  v34 = countQp;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v34);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_862/*"+ {0:#,0}"*/, v24, 0);
  if ( !getQpLabel )
    goto LABEL_30;
  UILabel__set_text(getQpLabel, (System_String_o *)groupRootObj, 0);
  if ( !userGame )
    goto LABEL_30;
  qp = userGame->fields.qp;
  groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  }
  QpMax = *(_QWORD *)(groupRootObj[7].fields.m_CachedPtr + 8);
  if ( qp >= QpMax )
  {
    if ( !oldGame )
      goto LABEL_30;
    v27 = oldGame->fields.qp + countQp;
    if ( v27 < 0 )
      goto LABEL_33;
    if ( !HIDWORD(groupRootObj[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(groupRootObj, *(_QWORD *)&eventId);
      groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v27 > QpMax )
    {
LABEL_33:
      if ( !HIDWORD(groupRootObj[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(groupRootObj, *(_QWORD *)&eventId);
        groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      }
      v27 = *(_QWORD *)(groupRootObj[7].fields.m_CachedPtr + 8);
    }
  }
  else
  {
    v27 = userGame->fields.qp - (firstClearRewardQp + (__int64)conquestRewardQp);
  }
  nowQpLabel = this->fields.nowQpLabel;
  v33 = v27;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v33);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v29, 0);
  if ( !nowQpLabel
    || (UILabel__set_text(nowQpLabel, (System_String_o *)groupRootObj, 0),
        CommonFunction__ScalingLabelWidth(this->fields.getQpLabel, 215, 0),
        CommonFunction__ScalingLabelWidth(this->fields.nowQpLabel, 215, 0),
        (groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventPoint) == 0) )
  {
LABEL_30:
    sub_2213CDC(groupRootObj, *(_QWORD *)&eventId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0);
  rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  if ( UnityEngine_Object__op_Inequality(rootEventDamagePoint, 0, 0) )
  {
    groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventDamagePoint;
    if ( groupRootObj )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0);
      goto LABEL_27;
    }
    goto LABEL_30;
  }
LABEL_27:
  if ( eventId >= 1 )
    BattleResultItemComponent__SetEventInfo(
      this,
      eventId,
      oldUsrPoint,
      addDamagePoint,
      boostRate,
      countQp,
      eventConquestInfos,
      isNotDisplayEventPoint,
      eventGroupId,
      v32);
}


void BattleResultItemComponent__StartPresenterAnimation(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *addItemSvtAnimationObj; // x0
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  const MethodInfo *v7; // x2
  struct BattleViewItemlistComponent_o *v8; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  System_Collections_IEnumerator_o *v10; // x1
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o localPosition; // 0:kr14_12.12
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59744E8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_59744E8 = 1;
  }
  addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(addItemSvtAnimationObj, 1, 0);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)itemWindow->fields.itemObjectList;
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                         (System_Collections_Generic_List_object__o *)addItemSvtAnimationObj,
                                                         LODWORD(addItemSvtAnimationObj[1].klass) - 1,
                                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(addItemSvtAnimationObj, 0);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)addItemSvtAnimationObj, 0);
  addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(addItemSvtAnimationObj, 0);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  v13.fields.y = position.fields.y;
  v13.fields.z = position.fields.z;
  v13.fields.x = position.fields.x + 0.05;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)addItemSvtAnimationObj, v13, 0);
  v8 = this->fields.itemWindow;
  if ( !v8 )
    goto LABEL_19;
  itemObjectList = v8->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_19;
  if ( itemObjectList->fields._size >= 8 )
  {
    addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
    if ( addItemSvtAnimationObj )
    {
      addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             addItemSvtAnimationObj,
                                                             0);
      if ( addItemSvtAnimationObj )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)addItemSvtAnimationObj, 0);
        addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
        if ( addItemSvtAnimationObj )
        {
          addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                 addItemSvtAnimationObj,
                                                                 0);
          if ( addItemSvtAnimationObj )
          {
            v14.fields.z = localPosition.fields.z;
            v14.fields.y = localPosition.fields.y + 9.0;
            v14.fields.x = localPosition.fields.x;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)addItemSvtAnimationObj, v14, 0);
            goto LABEL_18;
          }
        }
      }
    }
LABEL_19:
    sub_2213CDC(addItemSvtAnimationObj, callback);
  }
LABEL_18:
  v10 = BattleResultItemComponent__PlayVoiceCoroutine(this, callback, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v10, 0);
}


void BattleResultItemComponent__commandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_59744F6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleResultItemComponent_EndCloseDialogCallBack__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59744F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    sub_2213CDC(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void BattleResultItemComponent__endClose(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_59744F9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_59744F9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)gameObject, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_2213CDC(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattleResultItemComponent__endCommandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_59744F7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3639/*"CLOSE"*/);
    byte_59744F7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3639/*"CLOSE"*/, 0);
}


void BattleResultItemComponent__endItemDialogCallBack(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_59744F3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3639/*"CLOSE"*/);
    byte_59744F3 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3639/*"CLOSE"*/, 0);
}


void BattleResultItemComponent__endOpen(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_59744E0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9649/*"NEXT"*/);
    byte_59744E0 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9649/*"NEXT"*/, 0),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0) )
  {
    sub_2213CDC(myFsm, method);
  }
  BattleViewItemlistComponent__setShow((BattleViewItemlistComponent_o *)myFsm, 0);
}


BattleDropItem_o *BattleResultItemComponent__getNewDrop(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *newDroplist; // x0
  Il2CppObject *Item; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_BattleDropItem__o *v6; // x8
  BattleDropItem_o *v7; // x19

  if ( (byte_59744FA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    byte_59744FA = 1;
  }
  newDroplist = (System_Collections_Generic_List_object__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0;
  Item = System_Collections_Generic_List_object___get_Item(
           newDroplist,
           0,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
  v6 = this->fields.newDroplist;
  if ( !v6 )
    sub_2213CDC(Item, v5);
  v7 = (BattleDropItem_o *)Item;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)v6,
    0,
    (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v7;
}


void BattleResultItemComponent__itemDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_59744F2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleResultItemComponent_endItemDialogCallBack__);
    sub_2213A60(&Method_BattleResultItemComponent_itemDialogCallBack__);
    byte_59744F2 = 1;
  }
  v4 = Method_BattleResultItemComponent_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_itemDialogCallBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_BattleResultItemComponent_itemDialogCallBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  itemDialog = this->fields.itemDialog;
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultItemComponent_endItemDialogCallBack__, 0);
  if ( !itemDialog )
    sub_2213CDC(v8, v9);
  ItemDetailInfoComponent__Close_39909252(itemDialog, v7, 0);
}


System_Collections_IEnumerator_o *BattleResultItemComponent__itemFlashAnimationCoroutine(
        BattleResultItemComponent_o *this,
        UnityEngine_GameObject_o *itemIconEffectObj,
        BattleDropItemComponent_o *dropItem,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_59744EB & 1) == 0 )
  {
    sub_2213A60(&BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_TypeInfo);
    byte_59744EB = 1;
  }
  v6 = sub_2213CCC(BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_TypeInfo);
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__59___ctor(
    (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)v6,
    0,
    0);
  if ( !v6 )
    sub_2213CDC(v7, v8);
  *(_QWORD *)(v6 + 32) = itemIconEffectObj;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 32), (int32_t)itemIconEffectObj, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = dropItem;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 40), (int32_t)dropItem, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void BattleResultItemComponent__setCondensedScale(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UILabel_o *getBoostLabel; // x0
  UILabel_o *getTitleLabel; // x20

  if ( (byte_59744FC & 1) == 0 )
  {
    sub_2213A60(&BattleResultItemComponent_TypeInfo);
    byte_59744FC = 1;
  }
  getBoostLabel = (UILabel_o *)BattleResultItemComponent_TypeInfo;
  getTitleLabel = this->fields.getTitleLabel;
  if ( !*(&BattleResultItemComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, method);
  if ( !getTitleLabel
    || (UILabel__SetCondensedScale(
          getTitleLabel,
          BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH,
          0,
          0),
        (getBoostLabel = this->fields.getBoostLabel) == 0) )
  {
    sub_2213CDC(getBoostLabel, method);
  }
  UILabel__SetCondensedScale(
    getBoostLabel,
    BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH,
    0,
    0);
}


void BattleResultItemComponent__setResultData(
        BattleResultItemComponent_o *this,
        BattleDropItem_array *drop,
        int32_t getqp,
        int32_t originalGetQp,
        UserGameEntity_o *oldGame,
        int32_t eventId,
        UserEventEntity_array *oldUsrEvent,
        UserEventPointEntity_array *oldUsrPoint,
        int64_t addDamagePoint,
        System_Int32_array *viewGroupIds,
        int32_t boostRate,
        DropUpInfo_array *dropupinfos,
        EventConquestInfo_array *eventConquestInfos,
        int32_t firstClearRewardQp,
        bool isNotDisplayEventPoint,
        BattleResultAddRewardBonus_o *rewardBonus,
        const MethodInfo *method)
{
  __int64 v23; // x26
  System_Collections_Generic_List_BattleDropItem__c *v24; // x0
  System_Collections_Generic_List_object__o *v25; // x21
  void *object; // x0
  struct BattleDropItem_array *gifts; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_List_object__o **v34; // x24
  System_Collections_Generic_List_object__o *v35; // x27
  struct BattleResultItemComponent___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__48_0; // x21
  Il2CppObject *v38; // x28
  struct BattleResultItemComponent___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Collections_Generic_List_T__o *All; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x21
  __int64 v54; // x8
  int v55; // w9
  System_Predicate_object__o *v56; // x21
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  _DWORD *v63; // x21
  int max_length; // w8
  BattleDropItem_o **m_Items; // x9
  BattleDropItem_o *v66; // x11
  struct System_String_array *voiceIds; // x1
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  System_Collections_Generic_List_object__o *v74; // x23
  __int64 v75; // x1
  BattleResultItemComponent___c_c *v76; // x0
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x25
  struct BattleResultItemComponent___c_StaticFields *v78; // x8
  System_Predicate_object__o *_9__48_2; // x21
  Il2CppObject *v80; // x26
  struct BattleResultItemComponent___c_StaticFields *v81; // x0
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  BattleViewItemlistComponent_o *itemWindow; // x21
  BattleDropItem_array *v89; // x23
  BattleDropItemComponent_ClickDelegate_o *v90; // x25
  const MethodInfo *v91; // x1
  const MethodInfo *v92; // x1
  const MethodInfo *v93; // x1
  UserGameEntity_o *SelfUserGame; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v95; // x28
  __int128 v96; // q0
  int32_t v97; // w26
  _BOOL8 v98; // x0
  __int64 v99; // x1
  BattleDropItem_o *current; // x21
  _BOOL8 isAutoSellItem; // x0
  __int64 v102; // x1
  Il2CppObject *v103; // x0
  __int64 v104; // x1
  int klass; // w8
  struct System_Collections_Generic_List_T__o *list; // x21
  UserEventEntity_array *v107; // x2
  int64_t v108; // x4
  int v109; // w8
  int v110; // w19
  int32_t v111; // w29
  EventConquestInfo_o *v112; // x20
  int v113; // w8
  il2cpp_array_size_t v114; // x8
  UserGameEntity_o *oldGamea; // [xsp+8h] [xbp-118h]
  const MethodInfo *v116; // [xsp+28h] [xbp-F8h]
  UserGameEntity_o *v117; // [xsp+60h] [xbp-C0h]
  UserEventPointEntity_array *oldUsrPointa; // [xsp+68h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v120; // [xsp+78h] [xbp-A8h] BYREF
  int v121; // [xsp+98h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o v122; // [xsp+A0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+B8h] [xbp-68h] BYREF

  if ( (byte_59744E1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Find_DropUpInfo___);
    sub_2213A60(&BattleDropItem_TypeInfo);
    sub_2213A60(&Method_BattleResultItemComponent_setShowConf__);
    sub_2213A60(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__Insert__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_BattleDropItem__TypeInfo);
    sub_2213A60(&System_Predicate_DropUpInfo__TypeInfo);
    sub_2213A60(&System_Predicate_BattleDropItem__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_BattleResultItemComponent___c__setResultData_b__48_0__);
    sub_2213A60(&Method_BattleResultItemComponent___c__setResultData_b__48_2__);
    sub_2213A60(&Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__);
    sub_2213A60(&BattleResultItemComponent___c__DisplayClass48_0_TypeInfo);
    sub_2213A60(&BattleResultItemComponent___c_TypeInfo);
    byte_59744E1 = 1;
  }
  entity = 0;
  memset(&v122, 0, sizeof(v122));
  v121 = 0;
  v23 = sub_2213CCC(BattleResultItemComponent___c__DisplayClass48_0_TypeInfo);
  BattleResultItemComponent___c__DisplayClass48_0___ctor((BattleResultItemComponent___c__DisplayClass48_0_o *)v23, 0);
  v24 = System_Collections_Generic_List_BattleDropItem__TypeInfo;
  this->fields.g_eventId = eventId;
  v25 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
  if ( !v23 )
    goto LABEL_27;
  v117 = oldGame;
  oldUsrPointa = oldUsrPoint;
  *(_QWORD *)(v23 + 16) = v25;
  v34 = (System_Collections_Generic_List_object__o **)(v23 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 16), (int32_t)v25, v28, v29, v30, v31, v32, v33);
  object = *(void **)(v23 + 16);
  if ( !object )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)object,
    (System_Collections_Generic_IEnumerable_T__o *)drop,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
  object = BattleResultItemComponent___c_TypeInfo;
  v35 = *v34;
  if ( !*(&BattleResultItemComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo, gifts);
    object = BattleResultItemComponent___c_TypeInfo;
  }
  static_fields = (struct BattleResultItemComponent___c_StaticFields *)*((_QWORD *)object + 23);
  _9__48_0 = (System_Predicate_object__o *)static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !*((_DWORD *)object + 57) )
    {
      j_il2cpp_runtime_class_init_0(object, gifts);
      static_fields = BattleResultItemComponent___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__48_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleDropItem__TypeInfo);
    System_Predicate_object____ctor(_9__48_0, v38, Method_BattleResultItemComponent___c__setResultData_b__48_0__, 0);
    v39 = BattleResultItemComponent___c_TypeInfo->static_fields;
    v39->__9__48_0 = (struct System_Predicate_BattleDropItem__o *)_9__48_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v39->__9__48_0, (int32_t)_9__48_0, v40, v41, v42, v43, v44, v45);
  }
  if ( !v35 )
    goto LABEL_27;
  All = System_Collections_Generic_List_object___FindAll(
          v35,
          (System_Predicate_T__o *)_9__48_0,
          (const MethodInfo_448436C *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
  this->fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)All;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.newDroplist, (int32_t)All, v47, v48, v49, v50, v51, v52);
  if ( getqp >= 1 )
  {
    v53 = sub_2213CCC(BattleDropItem_TypeInfo);
    BattleDropItem___ctor((BattleDropItem_o *)v53, 0);
    if ( !v53 )
      goto LABEL_27;
    *(_QWORD *)(v53 + 20) = 0x500000002LL;
    BattleDropItem__setNum((BattleDropItem_o *)v53, getqp, originalGetQp, 0);
    object = *v34;
    if ( !*v34 )
      goto LABEL_27;
    System_Collections_Generic_List_object___Insert(
      (System_Collections_Generic_List_object__o *)object,
      0,
      (Il2CppObject *)v53,
      (const MethodInfo_4484A00 *)Method_System_Collections_Generic_List_BattleDropItem__Insert__);
  }
  if ( dropupinfos )
  {
    v54 = *(_QWORD *)(v23 + 16);
    *(_DWORD *)(v23 + 24) = 0;
    if ( !v54 )
      goto LABEL_27;
    v55 = 0;
    while ( v55 < *(_DWORD *)(v54 + 24) )
    {
      v56 = *(System_Predicate_object__o **)(v23 + 32);
      if ( !v56 )
      {
        v56 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_DropUpInfo__TypeInfo);
        System_Predicate_object____ctor(
          v56,
          (Il2CppObject *)v23,
          Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__,
          0);
        *(_QWORD *)(v23 + 32) = v56;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 32), (int32_t)v56, v57, v58, v59, v60, v61, v62);
      }
      object = System_Array__Find_object_(
                 (System_Object_array *)dropupinfos,
                 (System_Predicate_T__o *)v56,
                 (const MethodInfo_39A8FD8 *)Method_System_Array_Find_DropUpInfo___);
      if ( object )
      {
        v63 = object;
        object = *v34;
        if ( !*v34 )
          goto LABEL_27;
        object = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)object,
                   *(_DWORD *)(v23 + 24),
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !object )
          goto LABEL_27;
        *((_DWORD *)object + 18) = v63[5];
      }
      v54 = *(_QWORD *)(v23 + 16);
      v55 = *(_DWORD *)(v23 + 24) + 1;
      *(_DWORD *)(v23 + 24) = v55;
      if ( !v54 )
        goto LABEL_27;
    }
  }
  if ( rewardBonus )
  {
    gifts = rewardBonus->fields.gifts;
    if ( gifts )
    {
      max_length = gifts->max_length;
      if ( max_length >= 1 )
      {
        m_Items = gifts->m_Items;
        while ( 1 )
        {
          v66 = *m_Items;
          if ( !*m_Items )
            break;
          --max_length;
          ++m_Items;
          v66->fields.isAddReward = 1;
          if ( !max_length )
            goto LABEL_34;
        }
LABEL_27:
        sub_2213CDC(object, gifts);
      }
LABEL_34:
      object = *v34;
      if ( !*v34 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)object,
        (System_Collections_Generic_IEnumerable_T__o *)gifts,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      this->fields.animationSvtId = rewardBonus->fields.animationId;
      voiceIds = rewardBonus->fields.voiceIds;
      this->fields.voiceIds = voiceIds;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.voiceIds,
        (int32_t)voiceIds,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      v74 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleDropItem__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v74,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
      if ( !v74 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        v74,
        (System_Collections_Generic_IEnumerable_T__o *)rewardBonus->fields.gifts,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      v76 = BattleResultItemComponent___c_TypeInfo;
      newDroplist = this->fields.newDroplist;
      if ( !*(&BattleResultItemComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo, v75);
        v76 = BattleResultItemComponent___c_TypeInfo;
      }
      v78 = v76->static_fields;
      _9__48_2 = (System_Predicate_object__o *)v78->__9__48_2;
      if ( !_9__48_2 )
      {
        if ( !*(&v76->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v76, v75);
          v78 = BattleResultItemComponent___c_TypeInfo->static_fields;
        }
        v80 = (Il2CppObject *)v78->__9;
        _9__48_2 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleDropItem__TypeInfo);
        System_Predicate_object____ctor(_9__48_2, v80, Method_BattleResultItemComponent___c__setResultData_b__48_2__, 0);
        v81 = BattleResultItemComponent___c_TypeInfo->static_fields;
        v81->__9__48_2 = (struct System_Predicate_BattleDropItem__o *)_9__48_2;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v81->__9__48_2,
          (int32_t)_9__48_2,
          v82,
          v83,
          v84,
          v85,
          v86,
          v87);
      }
      object = System_Collections_Generic_List_object___FindAll(
                 v74,
                 (System_Predicate_T__o *)_9__48_2,
                 (const MethodInfo_448436C *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
      if ( !newDroplist )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)newDroplist,
        (System_Collections_Generic_IEnumerable_T__o *)object,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    }
  }
  object = *v34;
  if ( !*v34 )
    goto LABEL_27;
  itemWindow = this->fields.itemWindow;
  v89 = (BattleDropItem_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)object,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  v90 = (BattleDropItemComponent_ClickDelegate_o *)sub_2213CCC(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(
    v90,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_setShowConf__,
    0);
  if ( !itemWindow )
    goto LABEL_27;
  BattleViewItemlistComponent__setListDataCustomColumn_54891780(
    itemWindow,
    v89,
    eventId,
    v90,
    this->fields.itemColumnCount,
    0);
  object = this->fields.itemWindow;
  if ( !object )
    goto LABEL_27;
  BattleViewItemlistComponent__setHide((BattleViewItemlistComponent_o *)object, 0);
  if ( rewardBonus )
  {
    BattleResultItemComponent__AddItemNewLine(this, v91);
    BattleResultItemComponent__SetAddItemSvtAnimation(this, v92);
    BattleResultItemComponent__SetAddItemIconEffect(this, v93);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !object )
    goto LABEL_27;
  object = DataManager__GetMasterData_object_(
             (DataManager_o *)object,
             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*v34 )
    goto LABEL_27;
  v95 = (DataMasterBase_TMaster__TEntity__PKType__o *)object;
  System_Collections_Generic_List_object___GetEnumerator(
    &v120,
    *v34,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
  v96 = *(_OWORD *)&v120.fields._list;
  v97 = 0;
  v120.fields._list = 0;
  *(_QWORD *)&v120.fields._index = &v122;
  *(_OWORD *)&v122.fields._list = v96;
  v122.fields._current = v120.fields._current;
  while ( 1 )
  {
    v98 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v122,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    if ( !v98 )
      break;
    current = (BattleDropItem_o *)v122.fields._current;
    if ( !v122.fields._current )
      sub_2213CDC(v98, v99);
    isAutoSellItem = BattleDropItem__isAutoSellItem((BattleDropItem_o *)v122.fields._current, 0);
    if ( current->fields.type == 2 )
    {
      if ( !v95 )
        sub_2213CDC(isAutoSellItem, v102);
      v103 = DataMasterBase_object__object__int___GetEntity(
               v95,
               current->fields.objectId,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v103 )
        sub_2213CDC(0, v104);
      klass = (int)v103[3].klass;
      if ( klass == 1 || klass == 16 )
        v97 += BattleDropItem__getTotalNum(current, 0);
    }
    v97 += current->fields.num * current->fields.sellQp;
  }
  list = v120.fields._list;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    *(System_Collections_Generic_List_Enumerator_object__o **)&v120.fields._index,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
  if ( list )
    sub_2213CD4(list);
  if ( !eventConquestInfos )
    goto LABEL_27;
  v109 = eventConquestInfos->max_length;
  if ( v109 < 1 )
  {
    v111 = 0;
    if ( !viewGroupIds )
      goto LABEL_27;
  }
  else
  {
    v110 = 0;
    v111 = 0;
    do
    {
      if ( v110 >= (unsigned int)v109 )
        goto LABEL_93;
      v112 = eventConquestInfos->m_Items[v110];
      if ( !v112 )
        goto LABEL_27;
      if ( v112->fields.type == 2 )
      {
        if ( !v95 )
          goto LABEL_27;
        object = DataMasterBase_object__object__int___GetEntity(
                   v95,
                   v112->fields.objectId,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( object )
        {
          v113 = *((_DWORD *)object + 12);
          if ( v113 == 16 || v113 == 1 )
            v111 += v112->fields.getNum;
        }
      }
      v109 = eventConquestInfos->max_length;
      ++v110;
    }
    while ( v110 < v109 );
    if ( !viewGroupIds )
      goto LABEL_27;
  }
  v114 = viewGroupIds->max_length;
  if ( (_DWORD)v114 != 1 )
    goto LABEL_90;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, gifts);
  object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !object )
    goto LABEL_27;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)object,
          &entity,
          eventId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_89;
  object = entity;
  if ( !entity )
    goto LABEL_27;
  object = (void *)EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)entity, 0);
  if ( ((unsigned __int8)object & 1) == 0 )
  {
LABEL_89:
    v114 = viewGroupIds->max_length;
LABEL_90:
    if ( v114 )
      BattleResultItemComponent__SetGroupEventRoot(
        this,
        eventId,
        v107,
        oldUsrPointa,
        v108,
        SelfUserGame,
        v97,
        viewGroupIds,
        v111,
        (const MethodInfo *)oldGamea);
    else
      BattleResultItemComponent__SetNormalRoot(
        this,
        eventId,
        oldUsrPointa,
        addDamagePoint,
        SelfUserGame,
        v97,
        boostRate,
        v111,
        firstClearRewardQp,
        v117,
        eventConquestInfos,
        isNotDisplayEventPoint,
        0,
        v116);
    return;
  }
  if ( !LODWORD(viewGroupIds->max_length) )
LABEL_93:
    sub_2213CE4(object);
  BattleResultItemComponent__SetNormalRoot(
    this,
    eventId,
    oldUsrPointa,
    addDamagePoint,
    SelfUserGame,
    v97,
    boostRate,
    v111,
    firstClearRewardQp,
    v117,
    eventConquestInfos,
    isNotDisplayEventPoint,
    viewGroupIds->m_Items[0],
    v116);
}


void BattleResultItemComponent__setShowCommandCodeConf(
        BattleResultItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_59744F4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10035/*"OPEN_COMMANDCODE"*/);
    byte_59744F4 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_2213CDC(0, commandCodeId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_10035/*"OPEN_COMMANDCODE"*/, 0);
}


void BattleResultItemComponent__setShowConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *item,
        const MethodInfo *method)
{
  int32_t type; // w21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( !item )
    sub_2213CDC(this, 0);
  type = item->fields.type;
  if ( Gift__IsServant(type, 0) )
  {
    BattleResultItemComponent__setShowServantConf(this, item, v6);
  }
  else if ( Gift__IsItem(type, 0) )
  {
    BattleResultItemComponent__setShowItemConf(this, item->fields.objectId, v7);
  }
  else if ( Gift__IsCommandCode(type, 0) )
  {
    BattleResultItemComponent__setShowCommandCodeConf(this, item->fields.userSvtId, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleResultItemComponent__setShowItemConf(
        BattleResultItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_59744F0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10042/*"OPEN_ITEM"*/);
    byte_59744F0 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_2213CDC(0, *(_QWORD *)&itemId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_10042/*"OPEN_ITEM"*/, 0);
}


void BattleResultItemComponent__setShowServantConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v4; // x19

  v4 = this;
  if ( (byte_59744EC & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_2213A60(&StringLiteral_10050/*"OPEN_SERVANT"*/);
    byte_59744EC = 1;
  }
  v4->fields.tmp_userSvtId = 0;
  v4->fields.tmp_svtId = 0;
  if ( !dropItem
    || (!BattleDropItem__isAutoSellItem(dropItem, 0)
      ? (v4->fields.tmp_userSvtId = dropItem->fields.userSvtId)
      : (v4->fields.tmp_svtId = dropItem->fields.objectId),
        (this = (BattleResultItemComponent_o *)v4->fields.myFsm) == 0) )
  {
    sub_2213CDC(this, dropItem);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_10050/*"OPEN_SERVANT"*/, 0);
}


void BattleResultItemComponent__showCommandCodeDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v6; // x21
  ServantStatusDialog_EndDelegate_o *v7; // x22

  if ( (byte_59744F5 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultItemComponent_commandCodeDialogCallBack__);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59744F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v7 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattleResultItemComponent_commandCodeDialogCallBack__,
          0),
        !v6) )
  {
    sub_2213CDC(Instance, v4);
  }
  CommonUI__OpenServantStatusDialog_37385832((CommonUI_o *)v6, 0, (UserCommandCodeEntity_o *)Entity, v7, 0, 0);
}


void BattleResultItemComponent__showItemDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v7; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v8; // x22

  if ( (byte_59744F1 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultItemComponent_itemDialogCallBack__);
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59744F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v7 = (ItemEntity_o *)Entity,
        v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultItemComponent_itemDialogCallBack__,
          0),
        !itemDialog) )
  {
    sub_2213CDC(Instance, v4);
  }
  ItemDetailInfoComponent__Open(itemDialog, v7, v8, 50, 0);
}


void BattleResultItemComponent__showServantDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  int64_t tmp_userSvtId; // x21
  Il2CppObject *Instance; // x20
  int64_t v5; // x21
  ServantStatusDialog_EndDelegate_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t tmp_svtId; // w21
  ServantStatusDialog_EndDelegate_o *v10; // x22

  if ( (byte_59744ED & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultItemComponent_DialogCallBack__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59744ED = 1;
  }
  tmp_userSvtId = this->fields.tmp_userSvtId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( tmp_userSvtId >= 1 )
  {
    v5 = this->fields.tmp_userSvtId;
    v6 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v6,
      (Il2CppObject *)this,
      Method_BattleResultItemComponent_DialogCallBack__,
      0);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_37382644((CommonUI_o *)Instance, 0, v5, v6, 0, 0);
      return;
    }
LABEL_8:
    sub_2213CDC(v7, v8);
  }
  tmp_svtId = this->fields.tmp_svtId;
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_DialogCallBack__,
    0);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_37386528((CommonUI_o *)Instance, 0, tmp_svtId, v10, 0);
}


void BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58___ctor(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__MoveNext(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v2; // x20
  int32_t _1__state; // w8
  BattleResultItemComponent_o *_4__this; // x19
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  System_Collections_Generic_List_object__o *itemObjectList; // x0
  Il2CppObject *current; // x8
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v8; // x9
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_o *v16; // x0
  BattleDropItemComponent_o *Component_object; // x0
  __int64 v18; // x1
  struct BattleDropItem_o *itemData; // x8
  System_Collections_IEnumerator_o *v20; // x1
  UnityEngine_Coroutine_o *started; // x0
  __int64 v22; // x1
  struct BattleResultComponent_o *parentComp; // x8
  __int64 v24; // x0
  __int64 v25; // x1
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v26; // x8
  BattleResultComponent_o *v27; // x0
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v29; // x19
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x19
  System_Collections_Generic_List_Enumerator_T__o v38[2]; // [xsp+8h] [xbp-78h] BYREF
  __int64 v39; // [xsp+40h] [xbp-40h]
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o **v40; // [xsp+48h] [xbp-38h] BYREF
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v41; // [xsp+58h] [xbp-28h] BYREF

  v41 = this;
  v2 = this;
  if ( (byte_5974505 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    this = (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *)sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5974505 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  v39 = 0;
  v40 = &v41;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      goto LABEL_22;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_2213CDC(this, method);
    itemWindow = _4__this->fields.itemWindow;
    if ( !itemWindow )
      sub_2213CDC(this, method);
    itemObjectList = (System_Collections_Generic_List_object__o *)itemWindow->fields.itemObjectList;
    if ( !itemObjectList )
      sub_2213CDC(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      v38,
      itemObjectList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    current = v38[0].fields._current;
    v8 = v41;
    v38[1] = v38[0];
    *(_OWORD *)&v41->fields.__7__wrap1.fields._list = *(_OWORD *)&v38[0].fields._list;
    v8->fields.__7__wrap1.fields._current = (struct UnityEngine_GameObject_o *)current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.__7__wrap1, 0, v9, v10, v11, v12, v13, v14);
    v2 = v41;
  }
  v2->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v16 = v41->fields.__7__wrap1.fields._current;
    if ( !v16 )
      sub_2213CDC(0, v15);
    Component_object = (BattleDropItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      v16,
                                                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    if ( !Component_object )
      sub_2213CDC(0, v18);
    itemData = Component_object->fields.itemData;
    if ( !itemData )
      sub_2213CDC(Component_object, v18);
    if ( itemData->fields.isAddReward )
    {
      if ( !_4__this )
        sub_2213CDC(Component_object, v18);
      v20 = BattleResultItemComponent__itemFlashAnimationCoroutine(
              _4__this,
              Component_object->fields.itemIconEffectObj,
              Component_object,
              0);
      started = UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, v20, 0);
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        sub_2213CDC(started, v22);
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v29 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v29, 0.01, 0);
        v30 = v41;
        v41->fields.__2__current = (Il2CppObject *)v29;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v30->fields.__2__current,
          (int32_t)v29,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        result = 1;
        v41->fields.__1__state = 1;
        goto LABEL_24;
      }
    }
    v2 = v41;
  }
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58____m__Finally1(v41, v15);
  v26 = v41;
  *(_QWORD *)&v41->fields.__7__wrap1.fields._index = 0;
  v26->fields.__7__wrap1.fields._current = 0;
  v26->fields.__7__wrap1.fields._list = 0;
  if ( !_4__this )
    sub_2213CDC(v24, v25);
  v27 = _4__this->fields.parentComp;
  if ( !v27 )
    sub_2213CDC(0, v25);
  BattleResultComponent__QpFix(v27, 0);
LABEL_22:
  result = 0;
LABEL_24:
  v37 = v39;
  if ( v39 )
  {
    sub_2014370(&v40, method);
    sub_2213CD4(v37);
  }
  return result;
}


Il2CppObject *BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_IDisposable_Dispose(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58____m__Finally1(this, method);
}


void BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58____m__Finally1(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  const MethodInfo_40FBAD4 *v3; // x1

  if ( (byte_5974506 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    byte_5974506 = 1;
  }
  v3 = (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    v3);
}


void BattleResultItemComponent__PlayVoiceCoroutine_d__57___ctor(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleResultItemComponent__PlayVoiceCoroutine_d__57__MoveNext(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *v8; // x19
  int32_t _1__state; // w8
  BattleResultItemComponent_o *_4__this; // x20
  Il2CppObject *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_WaitForSeconds_o *v19; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_IEnumerator_o *v28; // x0
  System_Random_o *v29; // x21
  struct System_String_array *voiceIds; // x8
  struct BattleResultItemComponent___c__DisplayClass57_0_o *_8__1; // x8
  unsigned int v32; // w22
  System_String_o *v33; // x0
  struct System_String_array *v34; // x8
  BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *v35; // x21
  System_String_o *v36; // x22
  SeManager_c *v37; // x0
  Il2CppObject *v38; // x24
  float DEFAULT_VOLUME; // s8
  System_Action_o *v40; // x23
  __int64 v41; // x1
  struct BattleResultItemComponent___c__DisplayClass57_0_o *v42; // x8
  struct BattleResultComponent_o *v43; // x8
  MissionNaviTransitionBoardItem_o *v44; // x19

  v8 = this;
  if ( (byte_5974507 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&System_Random_TypeInfo);
    sub_2213A60(&SeManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_BattleResultItemComponent___c__DisplayClass57_0__PlayVoiceCoroutine_b__0__);
    sub_2213A60(&BattleResultItemComponent___c__DisplayClass57_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)sub_2213A60(&StringLiteral_13301/*"Servants_"*/);
    byte_5974507 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state == 1 )
    {
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_30;
    }
    else
    {
      if ( _1__state )
        return 0;
      v8->fields.__1__state = -1;
      v11 = (Il2CppObject *)sub_2213CCC(BattleResultItemComponent___c__DisplayClass57_0_TypeInfo);
      System_Object___ctor(v11, 0);
      v8->fields.__8__1 = (struct BattleResultItemComponent___c__DisplayClass57_0_o *)v11;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.__8__1, (int32_t)v11, v12, v13, v14, v15, v16, v17);
      if ( !_4__this )
        goto LABEL_30;
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        goto LABEL_30;
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v19 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v19, 0.3, 0);
        v8->fields.__2__current = (Il2CppObject *)v19;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)v19, v21, v22, v23, v24, v25, v26);
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return 1;
      }
    }
    v28 = BattleResultItemComponent__PlayItemIconEffectCoroutine(_4__this, 0);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, v28, 0);
    v29 = (System_Random_o *)sub_2213CCC(System_Random_TypeInfo);
    System_Random___ctor(v29, 0);
    voiceIds = _4__this->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_30;
    if ( !v29 )
      goto LABEL_30;
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, _QWORD, const MethodInfo *))v29->klass->vtable._6_Next.methodPtr)(
                                                                      v29,
                                                                      0,
                                                                      LODWORD(voiceIds->max_length),
                                                                      v29->klass->vtable._6_Next.method);
    _8__1 = v8->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_30;
    v32 = (unsigned int)this;
    _8__1->fields.IsVoiceComp = 0;
    v33 = System_Int32__ToString((int)_4__this + 272, 0);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)System_String__Concat_75651716(
                                                                      (System_String_o *)StringLiteral_13301/*"Servants_"*/,
                                                                      v33,
                                                                      0);
    v34 = _4__this->fields.voiceIds;
    if ( !v34 )
      goto LABEL_30;
    if ( v32 >= LODWORD(v34->max_length) )
      sub_2213CE4(this);
    v35 = this;
    v36 = v34->m_Items[v32];
    v37 = SeManager_TypeInfo;
    if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
      v37 = SeManager_TypeInfo;
    }
    v38 = (Il2CppObject *)v8->fields.__8__1;
    DEFAULT_VOLUME = v37->static_fields->DEFAULT_VOLUME;
    v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v40, v38, Method_BattleResultItemComponent___c__DisplayClass57_0__PlayVoiceCoroutine_b__0__, 0);
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v41);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)SoundManager__playVoice_48511684(
                                                                      (System_String_o *)v35,
                                                                      v36,
                                                                      DEFAULT_VOLUME,
                                                                      v40,
                                                                      0,
                                                                      0);
  }
  v42 = v8->fields.__8__1;
  if ( !v42 )
    goto LABEL_30;
  if ( v42->fields.IsVoiceComp )
  {
LABEL_27:
    ActionExtensions__Call(v8->fields.callback, 0);
    return 0;
  }
  if ( !_4__this || (v43 = _4__this->fields.parentComp) == 0 )
LABEL_30:
    sub_2213CDC(this, method);
  if ( v43->fields.isAddRewardEffectSkip )
    goto LABEL_27;
  v8->fields.__2__current = 0;
  v44 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
  sub_2213A04(v44, 0, v2, v3, v4, v5, v6, v7);
  v44[-1].fields._BoardType_k__BackingField = 2;
  return 1;
}


Il2CppObject *BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleResultItemComponent__PlayVoiceCoroutine_d__57_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_IDisposable_Dispose(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleResultItemComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974503 & 1) == 0 )
  {
    sub_2213A60(&BattleResultItemComponent___c_TypeInfo);
    byte_5974503 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleResultItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultItemComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultItemComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleResultItemComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleResultItemComponent___c___ctor(BattleResultItemComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleResultItemComponent___c___setResultData_b__48_0(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_47387968(s->fields.type, 0) )
    return 1;
  return Gift__IsCommandCode_47388336(s->fields.type, 0);
}


bool BattleResultItemComponent___c___setResultData_b__48_2(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_47387968(s->fields.type, 0) )
    return 1;
  return Gift__IsCommandCode_47388336(s->fields.type, 0);
}


void BattleResultItemComponent___c__DisplayClass48_0___ctor(
        BattleResultItemComponent___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleResultItemComponent___c__DisplayClass48_0___setResultData_b__1(
        BattleResultItemComponent___c__DisplayClass48_0_o *this,
        DropUpInfo_o *e,
        const MethodInfo *method)
{
  BattleResultItemComponent___c__DisplayClass48_0_o *v4; // x20
  int32_t itemId; // w19

  v4 = this;
  if ( (byte_5974504 & 1) == 0 )
  {
    this = (BattleResultItemComponent___c__DisplayClass48_0_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    byte_5974504 = 1;
  }
  if ( !e
    || (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)v4->fields.list) == 0
    || (itemId = e->fields.itemId,
        (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v4->fields.i,
                                                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__)) == 0) )
  {
    sub_2213CDC(this, e);
  }
  return itemId == this->fields.i;
}


void BattleResultItemComponent___c__DisplayClass51_0___ctor(
        BattleResultItemComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleResultItemComponent___c__DisplayClass51_0___SetEventInfo_b__0(
        BattleResultItemComponent___c__DisplayClass51_0_o *this,
        UserEventPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.groupId == this->fields.eventGroupId;
}


void BattleResultItemComponent___c__DisplayClass57_0___ctor(
        BattleResultItemComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleResultItemComponent___c__DisplayClass57_0___PlayVoiceCoroutine_b__0(
        BattleResultItemComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  this->fields.IsVoiceComp = 1;
}


void BattleResultItemComponent__itemFlashAnimationCoroutine_d__59___ctor(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__MoveNext(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *v2; // x19
  int32_t _1__state; // w21
  struct BattleDropItemComponent_o *dropItem; // x8
  UnityEngine_Object_o *itemIconEffectObj; // x20
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *v6; // x20
  UnityEngine_WaitForSeconds_o *v7; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_5974508 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5974508 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( !_1__state )
  {
    itemIconEffectObj = (UnityEngine_Object_o *)v2->fields.itemIconEffectObj;
    v2->fields.__1__state = -1;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(itemIconEffectObj, 0, 0) )
    {
      this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)v2->fields.itemIconEffectObj;
      if ( !this )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)v2->fields.itemIconEffectObj;
      if ( !this )
        goto LABEL_19;
      this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)UnityEngine_GameObject__get_transform(
                                                                                 (UnityEngine_GameObject_o *)this,
                                                                                 0);
      if ( !v2->fields.dropItem )
        goto LABEL_19;
      v6 = this;
      this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)UnityEngine_Component__get_transform(
                                                                                 (UnityEngine_Component_o *)v2->fields.dropItem,
                                                                                 0);
      if ( !this )
        goto LABEL_19;
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
      if ( !v6 )
        goto LABEL_19;
      UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v6, position, 0);
    }
    v7 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v7, 0.2333, 0);
    v2->fields.__2__current = (Il2CppObject *)v7;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
    sub_2213A04(p__2__current, (int32_t)v7, v9, v10, v11, v12, v13, v14);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
    return _1__state == 0;
  }
  if ( _1__state == 1 )
  {
    dropItem = v2->fields.dropItem;
    v2->fields.__1__state = -1;
    if ( dropItem )
    {
      this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)dropItem->fields.root;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        return _1__state == 0;
      }
    }
LABEL_19:
    sub_2213CDC(this, method);
  }
  return _1__state == 0;
}


Il2CppObject *BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_IDisposable_Dispose(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  ;
}