void __fastcall BattleResultItemComponent___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct BattleResultItemComponent_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct BattleResultItemComponent_StaticFields *v15; // x0
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BDF9C0 & 1) == 0 )
  {
    sub_1C21E38(&BattleResultItemComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_20627/*"img_bg_total_dp"*/);
    sub_1C21E38(&StringLiteral_3000/*"BATTLE_RESULT_GET_EP"*/);
    sub_1C21E38(&StringLiteral_20628/*"img_bg_total_ep"*/);
    byte_4BDF9C0 = 1;
  }
  BattleResultItemComponent_TypeInfo->static_fields->EP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_20628/*"img_bg_total_ep"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleResultItemComponent_TypeInfo->static_fields,
    StringLiteral_20628/*"img_bg_total_ep"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_20627/*"img_bg_total_dp"*/;
  static_fields = BattleResultItemComponent_TypeInfo->static_fields;
  static_fields->DP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_20627/*"img_bg_total_dp"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->DP_SP_BASE_NAME, v7, v9, v10, v11, v12, v13, v14);
  v15 = BattleResultItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&v15->EP_GET_POSY_NORMAL = 3245342720LL;
  *(_QWORD *)&v15->EP_GET_FONT_NORMAL = 0x130000001ALL;
  v16 = StringLiteral_3000/*"BATTLE_RESULT_GET_EP"*/;
  v15->EP_GET_LOCALE_KEY = (struct System_String_o *)StringLiteral_3000/*"BATTLE_RESULT_GET_EP"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->EP_GET_LOCALE_KEY, v16, v17, v18, v19, v20, v21, v22);
  BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH = 142;
}


void __fastcall BattleResultItemComponent___ctor(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDF9BF & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Color___TypeInfo);
    byte_4BDF9BF = 1;
  }
  v3 = (struct UnityEngine_Color_array *)sub_1C21EE0(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.showModeChanButtonLabelEffectColors = v3;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.showModeChanButtonLabelEffectColors,
    (int64_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__AddItemNewLine(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleResultItemComponent_o *v2; // x19
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Object_o *v4; // x20
  int32_t v5; // w24
  int32_t v6; // w21
  BattleResultItemComponent_o *v7; // x22
  struct UILabel_o *getEventPointLabel; // x8
  int v9; // w9
  float v10; // s1
  struct BattleViewItemlistComponent_o *v11; // x8
  int v12; // w20
  int v13; // w21
  float v14; // s9
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4BDF9A3 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (BattleResultItemComponent_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF9A3 = 1;
  }
  itemWindow = v2->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_29;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    this = (BattleResultItemComponent_o *)itemWindow->fields.itemObjectList;
    if ( !this )
      goto LABEL_29;
    if ( v6 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      break;
    this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v6,
                                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( this )
    {
      v7 = this;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( this )
      {
        getEventPointLabel = this->fields.getEventPointLabel;
        if ( getEventPointLabel )
        {
          v9 = BYTE5(getEventPointLabel->fields.mGo);
          itemWindow = v2->fields.itemWindow;
          if ( !v9 )
            v5 = v6;
          if ( !v9 )
            v4 = (UnityEngine_Object_o *)v7;
          ++v6;
          if ( itemWindow )
            continue;
        }
      }
    }
    goto LABEL_29;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultItemComponent_o *)UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v4 )
    {
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v4, 0LL);
      if ( this )
      {
        *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        v11 = v2->fields.itemWindow;
        if ( v11 )
        {
          v12 = 0;
          v13 = v5 + 1;
          v14 = v10 + -113.57;
          do
          {
            this = (BattleResultItemComponent_o *)v11->fields.itemObjectList;
            if ( !this )
              break;
            if ( v13 + v12 >= SLODWORD(this->fields.m_CancellationTokenSource) )
              return;
            this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v13 + v12,
                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( !this )
              break;
            this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)this,
                                                    0LL);
            if ( !this )
              break;
            v15.fields.x = (float)((float)(v12 % 7) * 110.0) + -22.0;
            v15.fields.y = v14 + (float)((float)(v12 / 7) * -113.57);
            v15.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v15, 0LL);
            v11 = v2->fields.itemWindow;
            ++v12;
          }
          while ( v11 );
        }
      }
    }
LABEL_29:
    sub_1C22094(this, method);
  }
}


void __fastcall BattleResultItemComponent__Close(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4BDF9B6 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultItemComponent_endClose__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDF9B6 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_endClose__, 0LL),
        !window) )
  {
    sub_1C22094(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v5,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultItemComponent__DialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BDF9AC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleResultItemComponent_EndCloseDialogCallBack__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDF9AC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_1C22094(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0LL);
}


void __fastcall BattleResultItemComponent__EndCloseDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF9AD & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3632/*"CLOSE"*/);
    byte_4BDF9AD = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3632/*"CLOSE"*/, 0LL);
}


int32_t __fastcall BattleResultItemComponent__GetEventPointUpperPriority(
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
  int32_t v19; // w22
  int32_t v20; // w24
  int64_t v21; // x23
  int32_t v22; // w22
  int32_t v23; // w24
  int64_t v24; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4BDF9BC & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Value__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF9BC = 1;
  }
  memset(&v27, 0, sizeof(v27));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___)) == 0LL
    || (EntitiesFromEventPointUpperId = (BattleResultItemComponent_o *)EventPointUpperReleaseMaster__GetEntitiesFromEventPointUpperId(
                                                                         (EventPointUpperReleaseMaster_o *)Instance,
                                                                         eventPointUpperId,
                                                                         0LL),
        (Instance = (DataManager_o *)BattleResultItemComponent__GetEventPointUpperReleases(
                                       EntitiesFromEventPointUpperId,
                                       (EventPointUpperReleaseEntity_array *)EntitiesFromEventPointUpperId,
                                       v7)) == 0LL) )
  {
    sub_1C22094(Instance, v5);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
    (const MethodInfo_32B5E84 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
  v8 = 0;
  v27 = v26;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v27,
            (const MethodInfo_3404840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__) )
  {
    if ( !v27.fields._current.fields.value )
      sub_1C22094(0LL, v9);
    key = (int32_t)v27.fields._current.fields.key;
    v11 = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___ToArray(
                                           (System_Collections_Generic_List_object__o *)v27.fields._current.fields.value,
                                           (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    IsOpen = BattleResultItemComponent__GetIsAndCondGroup(v11, (EventPointUpperReleaseEntity_array *)v11, v12);
    if ( !v11 )
      sub_1C22094(IsOpen, v14);
    m_CancellationTokenSource = v11->fields.m_CancellationTokenSource;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v16 = IsOpen;
      for ( i = 0LL; i < (int)m_CancellationTokenSource; ++i )
      {
        if ( i >= (unsigned __int64)(unsigned int)m_CancellationTokenSource )
          sub_1C2209C(IsOpen, v14);
        v18 = (_DWORD *)*((_QWORD *)&v11->fields.parentComp + i);
        if ( v16 )
        {
          if ( !v18 )
            sub_1C22094(IsOpen, v14);
          v20 = v18[9];
          v19 = v18[10];
          v21 = (int)v18[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v20, v19, v21, 0, 0LL, 0LL);
          if ( !IsOpen )
            goto LABEL_28;
        }
        else
        {
          if ( !v18 )
            sub_1C22094(IsOpen, v14);
          v23 = v18[9];
          v22 = v18[10];
          v24 = (int)v18[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v23, v22, v24, 0, 0LL, 0LL);
          if ( IsOpen )
            break;
          if ( i >= LODWORD(v11->fields.m_CancellationTokenSource) - 1 )
            goto LABEL_28;
        }
        LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
      }
    }
    if ( v8 < key )
      v8 = key;
  }
LABEL_28:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v27,
    (const MethodInfo_3404964 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
  return v8;
}


System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *__fastcall BattleResultItemComponent__GetEventPointUpperReleases(
        BattleResultItemComponent_o *this,
        EventPointUpperReleaseEntity_array *entities,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  unsigned int v8; // w24
  EventPointUpperReleaseEntity_o *v9; // x21
  int32_t priority; // w22
  System_Collections_Generic_List_object__o *v11; // x23
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_4BDF9BD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
    byte_4BDF9BD = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
  if ( !entities )
    goto LABEL_18;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C2209C(Item, v6);
      v9 = entities->m_Items[v8];
      if ( !v9 || !v4 )
        break;
      priority = v9->fields.priority;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v4,
              priority,
              (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__) )
      {
        v11 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v11,
          (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v4,
          priority,
          (Il2CppObject *)v11,
          (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
      }
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                            v4,
                                                            priority,
                                                            (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
      if ( !Item )
        break;
      items = Item->fields._items;
      v19 = Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__;
      ++Item->fields._version;
      if ( !items )
        break;
      size = Item->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          (Il2CppObject *)v9,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        Item->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v9;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)v9, v12, v13, v14, v15, v16, v17);
      }
      max_length = entities->max_length;
      if ( (int)++v8 >= max_length )
        return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v4;
    }
LABEL_18:
    sub_1C22094(Item, v6);
  }
  return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v4;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall BattleResultItemComponent__GetEventPointUpperValue(
        BattleResultItemComponent_o *this,
        int32_t priority,
        EventPointUpperEntity_array *entities,
        const MethodInfo *method)
{
  signed int max_length; // w8
  int v7; // w9
  EventPointUpperEntity_o *v8; // x10
  BalanceConfig_c *v9; // x0

  if ( (byte_4BDF9BE & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BDF9BE = 1;
  }
  if ( !entities )
LABEL_15:
    sub_1C22094(this, *(_QWORD *)&priority);
  max_length = entities->max_length;
  if ( max_length < 1 )
  {
LABEL_10:
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
        sub_1C2209C(this, *(_QWORD *)&priority);
      v8 = entities->m_Items[v7];
      if ( !v8 )
        goto LABEL_15;
      if ( v8->fields.priority == priority )
        return v8->fields.value;
      if ( max_length == ++v7 )
        goto LABEL_10;
    }
  }
}


bool __fastcall BattleResultItemComponent__GetIsAndCondGroup(
        BattleResultItemComponent_o *this,
        EventPointUpperReleaseEntity_array *entities,
        const MethodInfo *method)
{
  signed int max_length; // w8
  signed int v4; // w9
  int v5; // w10
  EventPointUpperReleaseEntity_o *v6; // x11
  int condGroup; // w11

  if ( !entities )
    goto LABEL_12;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    v5 = -1;
    while ( 1 )
    {
      if ( max_length == v4 )
        sub_1C2209C(this, entities);
      v6 = entities->m_Items[v4];
      if ( !v6 )
        break;
      condGroup = v6->fields.condGroup;
      if ( condGroup != v5 )
      {
        ++v4;
        v5 = condGroup;
        if ( max_length != v4 )
          continue;
      }
      return v4 < max_length;
    }
LABEL_12:
    sub_1C22094(this, entities);
  }
  v4 = 0;
  return v4 < max_length;
}


bool __fastcall BattleResultItemComponent__GetIsShowEventPointMax(
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
  if ( (byte_4BDF9BB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventPointUpperMaster___);
    this = (BattleResultItemComponent_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF9BB = 1;
  }
  if ( !eventDetailEntity )
    goto LABEL_14;
  if ( !EventDetailEntity__IsEventPointByQp(eventDetailEntity, 0LL) )
    goto LABEL_12;
  this = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventPointUpperMaster___);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)EventPointUpperMaster__GetEntitiesFromEventId(
                                          (EventPointUpperMaster_o *)this,
                                          eventDetailEntity->fields.eventId,
                                          0LL);
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
    sub_1C2209C(this, eventDetailEntity);
  parentComp = this->fields.parentComp;
  if ( !parentComp )
LABEL_14:
    sub_1C22094(this, eventDetailEntity);
  EventPointUpperPriority = (BattleResultItemComponent_o *)BattleResultItemComponent__GetEventPointUpperPriority(
                                                             v6,
                                                             *((_DWORD *)&parentComp->fields.UnityEngine_Behaviour_Fields
                                                             + 1),
                                                             v7);
  LOBYTE(this) = BattleResultItemComponent__GetEventPointUpperValue(
                   EventPointUpperPriority,
                   (int32_t)EventPointUpperPriority,
                   (EventPointUpperEntity_array *)v9,
                   v12) <= userEventPoint;
  return (char)this;
}


void __fastcall BattleResultItemComponent__Init(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *window; // x0
  System_String_o *v4; // x20

  if ( (byte_4BDF99C & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_2994/*"BATTLE_RESULTITEM_TITLECONF"*/);
    byte_4BDF99C = 1;
  }
  window = this->fields.window;
  if ( !window )
    goto LABEL_14;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.window;
  if ( !window )
    goto LABEL_14;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  window = (BattleWindowComponent_o *)this->fields.itemDialog;
  if ( !window )
    goto LABEL_14;
  ItemDetailInfoComponent__Init((ItemDetailInfoComponent_o *)window, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2994/*"BATTLE_RESULTITEM_TITLECONF"*/, 0LL);
  if ( !window )
    goto LABEL_14;
  v4 = (System_String_o *)window;
  if ( !System_String__Equals_63123792((System_String_o *)window, (System_String_o *)StringLiteral_2994/*"BATTLE_RESULTITEM_TITLECONF"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_14;
    UILabel__set_text((UILabel_o *)window, v4, 0LL);
  }
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  if ( !window )
LABEL_14:
    sub_1C22094(window, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
}


void __fastcall BattleResultItemComponent__OnClickSwitchShowMode(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *showModeChangeButton; // x0
  __int64 *v8; // x8
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDF9B9 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultItemComponent_OnClickSwitchShowMode__);
    sub_1C21E38(&StringLiteral_17768/*"btn_bg_20"*/);
    sub_1C21E38(&StringLiteral_17769/*"btn_bg_21"*/);
    byte_4BDF9B9 = 1;
  }
  v3 = Method_BattleResultItemComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_BattleResultItemComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  showModeChangeButton = this->fields.showModeChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !showModeChangeButton
    || (isShowPossessionNum ? (v8 = &StringLiteral_17768/*"btn_bg_20"*/) : (v8 = &StringLiteral_17769/*"btn_bg_21"*/),
        UIButton__set_normalSprite(showModeChangeButton, (System_String_o *)*v8, 0LL),
        (showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors) == 0LL) )
  {
LABEL_18:
    sub_1C22094(showModeChangeButton, v5);
  }
  showModeChangeButton = (UIButton_o *)this->fields.showModeChangeButtonLabel;
  max_length = showModeChanButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_g = &showModeChanButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &showModeChanButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &showModeChanButtonLabelEffectColors->m_Items[0].fields.a;
      p_r = &showModeChanButtonLabelEffectColors->m_Items[1].fields.r;
      if ( !showModeChangeButton )
        goto LABEL_18;
      goto LABEL_16;
    }
LABEL_19:
    sub_1C2209C(showModeChangeButton, v5);
  }
  if ( max_length <= 1 )
    goto LABEL_19;
  p_g = &showModeChanButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &showModeChanButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &showModeChanButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &showModeChanButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !showModeChangeButton )
    goto LABEL_18;
LABEL_16:
  v15.fields.a = *p_r;
  v15.fields.b = *p_a;
  v15.fields.g = *p_b;
  v15.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)showModeChangeButton, v15, 0LL);
  showModeChangeButton = (UIButton_o *)this->fields.itemWindow;
  if ( !showModeChangeButton )
    goto LABEL_18;
  BattleViewItemlistComponent__SwitchShowNumMode(
    (BattleViewItemlistComponent_o *)showModeChangeButton,
    this->fields.isShowPossessionNum,
    0LL);
}


void __fastcall BattleResultItemComponent__Open(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchNextRoot; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  const MethodInfo *v6; // x1

  if ( (byte_4BDF99D & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultItemComponent_endOpen__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&StringLiteral_5599/*"END_OPEN"*/);
    byte_4BDF99D = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0LL);
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot
    || (touchNextRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      touchNextRoot,
                                                      (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (UIWidget__set_depth((UIWidget_o *)touchNextRoot, 200, 0LL),
        (touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5599/*"END_OPEN"*/, 0LL),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_endOpen__, 0LL),
        !window) )
  {
LABEL_9:
    sub_1C22094(touchNextRoot, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v5,
    window->klass->vtable._11_CompOpen.methodPtr);
  BattleResultItemComponent__setCondensedScale(this, v6);
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDF9A8 & 1) == 0 )
  {
    sub_1C21E38(&BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_TypeInfo);
    byte_4BDF9A8 = 1;
  }
  v3 = sub_1C22084(BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__PlayVoiceCoroutine(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BDF9A7 & 1) == 0 )
  {
    sub_1C21E38(&BattleResultItemComponent__PlayVoiceCoroutine_d__57_TypeInfo);
    byte_4BDF9A7 = 1;
  }
  v5 = sub_1C22084(BattleResultItemComponent__PlayVoiceCoroutine_d__57_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 48) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleResultItemComponent__SetAddItemIconEffect(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleResultItemComponent_o *v5; // x19
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  int32_t size; // w8
  int v9; // w22
  int v10; // w23
  Il2CppObject *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  struct BattleViewItemlistComponent_o *v17; // x8
  int32_t v18; // w28
  Il2CppObject *v19; // x20
  int32_t v20; // w21
  struct UILabel_o *getEventPointLabel; // x8
  BattleResultItemComponent_o *v22; // x23
  BattleResultItemComponent_o *v23; // x24
  BattleResultItemComponent_o *v24; // x25
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int32_t animationSvtId; // [xsp+8h] [xbp-68h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-64h] BYREF

  v5 = this;
  if ( (byte_4BDF9A5 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_19121/*"ef_additem"*/);
    this = (BattleResultItemComponent_o *)sub_1C21E38(&StringLiteral_5973/*"Effect/BattleResult/{0}/{1}"*/);
    byte_4BDF9A5 = 1;
  }
  itemWindow = v5->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_30;
  itemObjectList = itemWindow->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_30;
  size = itemObjectList->fields._size;
  g_eventId = v5->fields.g_eventId;
  v9 = 7 * (size / 7);
  if ( size == v9 )
    v10 = -21;
  else
    v10 = -14;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId, v2, v3, v4);
  animationSvtId = v5->fields.animationSvtId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId, v12, v13, v14);
  v16 = System_String__Format_63129848((System_String_o *)StringLiteral_5973/*"Effect/BattleResult/{0}/{1}"*/, v11, v15, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleResultItemComponent_o *)AssetManager__getAssetStorage(v16, 0LL);
  if ( !this
    || (this = (BattleResultItemComponent_o *)AssetData__GetObject_object__49880776(
                                                (AssetData_o *)this,
                                                (System_String_o *)StringLiteral_19121/*"ef_additem"*/,
                                                (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288),
        (v17 = v5->fields.itemWindow) == 0LL) )
  {
LABEL_30:
    sub_1C22094(this, method);
  }
  v18 = v10 + v9;
  v19 = (Il2CppObject *)this;
  v20 = 0;
  while ( 1 )
  {
    this = (BattleResultItemComponent_o *)v17->fields.itemObjectList;
    if ( !this )
      goto LABEL_30;
    if ( v20 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      break;
    if ( v18 <= v20 )
    {
      this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v20,
                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_30;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( !this )
        goto LABEL_30;
      getEventPointLabel = this->fields.getEventPointLabel;
      v22 = this;
      if ( !getEventPointLabel )
        goto LABEL_30;
      if ( BYTE5(getEventPointLabel->fields.mGo) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleResultItemComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                v19,
                                                (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_30;
        v23 = this;
        this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
        if ( !this )
          goto LABEL_30;
        v24 = this;
        UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v5->fields.effectRoot, 0LL);
        if ( !byte_4BD6BB1 )
        {
          sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB1 = 1;
        }
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v24,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( !byte_4BD6BB6 )
        {
          sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB6 = 1;
        }
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v24,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v23, 0, 0LL);
        v22->fields.eventPointMaxSprite = (struct UISprite_o *)v23;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v22->fields.eventPointMaxSprite,
          (int64_t)v23,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
    }
    v17 = v5->fields.itemWindow;
    ++v20;
    if ( !v17 )
      goto LABEL_30;
  }
}


void __fastcall BattleResultItemComponent__SetAddItemSvtAnimation(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  System_String_o *v11; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v13; // x1
  Il2CppObject *Object_object__49880776; // x20
  UnityEngine_GameObject_o *v15; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Transform_o *v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int32_t animationSvtId; // [xsp+8h] [xbp-38h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDF9A4 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_19173/*"ef_presenter"*/);
    sub_1C21E38(&StringLiteral_5973/*"Effect/BattleResult/{0}/{1}"*/);
    byte_4BDF9A4 = 1;
  }
  g_eventId = this->fields.g_eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId, v2, v3, v4);
  animationSvtId = this->fields.animationSvtId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId, v7, v8, v9);
  v11 = System_String__Format_63129848((System_String_o *)StringLiteral_5973/*"Effect/BattleResult/{0}/{1}"*/, v6, v10, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v11, 0LL);
  if ( !AssetStorage )
    goto LABEL_16;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              AssetStorage,
                              (System_String_o *)StringLiteral_19173/*"ef_presenter"*/,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                  Object_object__49880776,
                                  (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !AssetStorage
    || (v15 = (UnityEngine_GameObject_o *)AssetStorage,
        AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)AssetStorage,
                                        0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (v17 = (UnityEngine_Transform_o *)AssetStorage) == 0LL )
  {
LABEL_16:
    sub_1C22094(AssetStorage, v13);
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)AssetStorage, itemWindow->fields.listRoot, 0LL);
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4BD6BB6 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  UnityEngine_GameObject__SetActive(v15, 0, 0LL);
  this->fields.addItemSvtAnimationObj = v15;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.addItemSvtAnimationObj,
    (int64_t)v15,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void __fastcall BattleResultItemComponent__SetEventInfo(
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
  __int64 v18; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v20; // x1
  Il2CppObject *Entity; // x0
  EventDetailEntity_o *v22; // x21
  __int64 v23; // x8
  UserEventPointEntity_o *v24; // x8
  int32_t v25; // w26
  int64_t EventPointNoGroup; // x0
  __int64 v27; // x8
  EventConquestInfo_o *v28; // x23
  Il2CppObject *v29; // x21
  EventConquestInfo_o *v30; // x8
  int64_t getNum; // x21
  int64_t MasterName_k__BackingField_high; // x22
  int32_t ImageId; // w4
  const MethodInfo *v34; // x7
  BattleResultItemComponent_o *v35; // x0
  int32_t v36; // w1
  int64_t v37; // x2
  int64_t v38; // x3
  bool IsShowEventPointMax; // w5
  int32_t v40; // w6
  Il2CppObject *MasterData_object; // x0
  UserEventRaidMaster_o *v42; // x22
  UnityEngine_Object_o *rootEventDamagePoint; // x23
  int64_t TotalDamagePoint; // x20
  BalanceConfig_c *v45; // x8
  int64_t UserRaidDamagePointMax; // x22
  int64_t v47; // x20
  int64_t v48; // x0
  UILabel_o *getEventDamagePointLabel; // x22
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  UILabel_o *nowEventDamagePointLabel; // x22
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x0
  BattleResultItemComponent_c *v59; // x0
  System_String_o *DP_SP_BASE_NAME; // x20
  System_String_o *v61; // x0
  struct UISprite_o *eventDamageBGSprite; // x8
  Il2CppObject *v63; // x20
  BattleResultItemComponent_c *v64; // x0
  UISprite_o *eventDamageIconSprite; // x20
  int32_t pointImageId; // w21
  int64_t v67; // x25
  System_Func_object__bool__o *v68; // x27
  __int64 v69; // x27
  const MethodInfo *v70; // x3
  UserEventPointEntity_o *v71; // x8
  int64_t v72; // x26
  UserEventPointEntity_o *v73; // x8
  int32_t v74; // w23
  int64_t v75; // [xsp+8h] [xbp-78h] BYREF
  int64_t v76; // [xsp+10h] [xbp-70h] BYREF
  int32_t v77; // [xsp+1Ch] [xbp-64h] BYREF

  v77 = eventId;
  if ( (byte_4BDF9A1 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&BattleResultItemComponent_TypeInfo);
    sub_1C21E38(&Method_BetterList_string__Contains__);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_First_UserEventPointEntity___);
    sub_1C21E38(&System_Func_UserEventPointEntity__bool__TypeInfo);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattleResultItemComponent___c__DisplayClass51_0__SetEventInfo_b__0__);
    sub_1C21E38(&BattleResultItemComponent___c__DisplayClass51_0_TypeInfo);
    sub_1C21E38(&StringLiteral_25376/*"{0:#,0}"*/);
    sub_1C21E38(&StringLiteral_859/*"+ {0:#,0}"*/);
    byte_4BDF9A1 = 1;
  }
  v18 = sub_1C22084(BattleResultItemComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_92;
  *(_DWORD *)(v18 + 16) = eventGroupId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_92;
  if ( !DataMasterBase_object__object__int___GetEntity(
          Master_object,
          eventId,
          (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_92;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             eventId,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v22 = (EventDetailEntity_o *)Entity;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__IsEventPoint(
                                                                  (EventDetailEntity_o *)Entity,
                                                                  0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__IsMakeFarm(v22, 0LL);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      return;
  }
  if ( isNotDisplayEventPoint )
    return;
  if ( !oldUserPoint || (v23 = *(_QWORD *)&oldUserPoint->max_length) == 0 )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__IsMakeFarm(v22, 0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !eventConquestInfos )
        return;
      v27 = *(_QWORD *)&eventConquestInfos->max_length;
      if ( !v27 )
        return;
      if ( !(_DWORD)v27 )
        goto LABEL_93;
      v28 = eventConquestInfos->m_Items[0];
      if ( !v28 || v28->fields.rewardNum < 1 )
        return;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v29 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      }
      if ( v29 )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserItemMaster__GetEntityDefinitely(
                                                                        (UserItemMaster_o *)v29,
                                                                        (int64_t)Master_object[2].fields.list[1].monitor,
                                                                        v28->fields.objectId,
                                                                        0LL);
        if ( !eventConquestInfos->max_length )
          goto LABEL_93;
        v30 = eventConquestInfos->m_Items[0];
        if ( v30 )
        {
          if ( Master_object )
          {
            getNum = v30->fields.getNum;
            MasterName_k__BackingField_high = SHIDWORD(Master_object->fields._MasterName_k__BackingField);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
            if ( Master_object )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                              Master_object,
                                                                              v28->fields.objectId,
                                                                              (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
              if ( Master_object )
              {
                ImageId = ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0LL);
                v35 = this;
                v36 = eventId;
                v37 = getNum;
                v38 = MasterName_k__BackingField_high;
                IsShowEventPointMax = 0;
                v40 = 0;
LABEL_91:
                BattleResultItemComponent__SetEventPointUi(v35, v36, v37, v38, ImageId, IsShowEventPointMax, v40, v34);
                return;
              }
            }
          }
        }
      }
    }
    else
    {
      if ( (addDamagePoint & 0x8000000000000000LL) != 0 )
        return;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_92;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Master_object,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
      if ( !MasterData_object )
        return;
      v42 = (UserEventRaidMaster_o *)MasterData_object;
      rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(rootEventDamagePoint, 0LL, 0LL) )
        return;
      TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(v42, eventId, 0LL);
      v45 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v45 = BalanceConfig_TypeInfo;
      }
      UserRaidDamagePointMax = v45->static_fields->UserRaidDamagePointMax;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v47 = System_Math__Min_63934960(TotalDamagePoint, UserRaidDamagePointMax, 0LL);
      v48 = System_Math__Min_63934960(
              addDamagePoint,
              BalanceConfig_TypeInfo->static_fields->UserRaidDamagePointMax,
              0LL);
      getEventDamagePointLabel = this->fields.getEventDamagePointLabel;
      v76 = v48;
      v53 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v76, v50, v51, v52);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                      (System_String_o *)StringLiteral_859/*"+ {0:#,0}"*/,
                                                                      v53,
                                                                      0LL);
      if ( getEventDamagePointLabel )
      {
        UILabel__set_text(getEventDamagePointLabel, (System_String_o *)Master_object, 0LL);
        nowEventDamagePointLabel = this->fields.nowEventDamagePointLabel;
        v75 = v47;
        v58 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v75, v55, v56, v57);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                        (System_String_o *)StringLiteral_25376/*"{0:#,0}"*/,
                                                                        v58,
                                                                        0LL);
        if ( nowEventDamagePointLabel )
        {
          UILabel__set_text(nowEventDamagePointLabel, (System_String_o *)Master_object, 0LL);
          v59 = BattleResultItemComponent_TypeInfo;
          if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
            v59 = BattleResultItemComponent_TypeInfo;
          }
          DP_SP_BASE_NAME = v59->static_fields->DP_SP_BASE_NAME;
          v61 = System_Int32__ToString((int32_t)&v77, 0LL);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_63115476(
                                                                          DP_SP_BASE_NAME,
                                                                          v61,
                                                                          0LL);
          eventDamageBGSprite = this->fields.eventDamageBGSprite;
          if ( eventDamageBGSprite )
          {
            v63 = (Il2CppObject *)Master_object;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)eventDamageBGSprite->fields.mAtlas;
            if ( Master_object )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UIAtlas__GetListOfSprites(
                                                                              (UIAtlas_o *)Master_object,
                                                                              0LL);
              if ( Master_object )
              {
                if ( !BetterList_object___Contains(
                        (BetterList_T__o *)Master_object,
                        v63,
                        (const MethodInfo_31D3F18 *)Method_BetterList_string__Contains__) )
                {
                  v64 = BattleResultItemComponent_TypeInfo;
                  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v64 = BattleResultItemComponent_TypeInfo;
                  }
                  v63 = (Il2CppObject *)v64->static_fields->DP_SP_BASE_NAME;
                }
                Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.eventDamageBGSprite;
                if ( Master_object )
                {
                  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)v63, 0LL);
                  eventDamageIconSprite = this->fields.eventDamageIconSprite;
                  pointImageId = v22->fields.pointImageId;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  AtlasManager__SetItem(eventDamageIconSprite, pointImageId, 0LL);
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.rootEventDamagePoint;
                  if ( Master_object )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_92:
    sub_1C22094(Master_object, v20);
  }
  if ( !(_DWORD)v23 )
    goto LABEL_93;
  v24 = oldUserPoint->m_Items[0];
  if ( !v24 )
    goto LABEL_92;
  v25 = *(_DWORD *)(v18 + 16);
  if ( v25 > 0 || !v24->fields.groupId )
  {
    if ( v25 <= 0 )
      EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
    else
      EventPointNoGroup = UserEventPointMaster__GetEventPoint(eventId, v25, 0LL);
    v67 = EventPointNoGroup;
    v68 = (System_Func_object__bool__o *)sub_1C22084(System_Func_UserEventPointEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v68,
      (Il2CppObject *)v18,
      Method_BattleResultItemComponent___c__DisplayClass51_0__SetEventInfo_b__0__,
      0LL);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__First_object__50139624(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)oldUserPoint,
                                                                    (System_Func_TSource__bool__o *)v68,
                                                                    (const MethodInfo_2FD11E8 *)Method_System_Linq_Enumerable_First_UserEventPointEntity___);
    if ( v25 <= 0 )
    {
      if ( !oldUserPoint->max_length )
        goto LABEL_93;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)oldUserPoint->m_Items[0];
      if ( !Master_object )
        goto LABEL_92;
    }
    else if ( !Master_object )
    {
      goto LABEL_92;
    }
    v69 = v67 - *(_QWORD *)&Master_object->fields.revision;
    if ( v67 <= 0 && v69 < 1 )
      return;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__IsEventPointByQp(v22, 0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !oldUserPoint->max_length )
        goto LABEL_93;
      v71 = oldUserPoint->m_Items[0];
      if ( !v71 )
        goto LABEL_92;
      v72 = v71->fields.value + countQp;
      if ( BattleResultItemComponent__GetIsShowEventPointMax(this, v22, v67, v70) )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleResultItemComponent__GetIsShowEventPointMax(
                                                                        this,
                                                                        v22,
                                                                        v72,
                                                                        v70);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          v72 = v67;
        if ( oldUserPoint->max_length )
        {
          v73 = oldUserPoint->m_Items[0];
          if ( !v73 )
            goto LABEL_92;
          v69 = v72 - v73->fields.value;
          goto LABEL_90;
        }
LABEL_93:
        sub_1C2209C(Master_object, v20);
      }
      v69 = countQp;
    }
    else
    {
      v72 = v67;
    }
LABEL_90:
    v74 = v22->fields.pointImageId;
    IsShowEventPointMax = BattleResultItemComponent__GetIsShowEventPointMax(this, v22, v72, v70);
    v35 = this;
    v36 = eventId;
    v37 = v69;
    v38 = v72;
    ImageId = v74;
    v40 = boostRate;
    goto LABEL_91;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__SetEventPointUi(
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
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  UISprite_o *eventIconSprite; // x23
  UILabel_o *getTitleLabel; // x22
  __int64 v25; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  BattleResultItemComponent_c *v27; // x8
  UnityEngine_GameObject_o *v28; // x22
  struct BattleResultItemComponent_StaticFields *static_fields; // x8
  __int64 v30; // x9
  UILabel_o *v31; // x22
  __int64 v32; // x0
  BattleResultItemComponent_c *v33; // x8
  __int64 v34; // x23
  System_String_o *EP_GET_LOCALE_KEY; // x24
  System_String_o *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct System_String_o *v49; // x1
  UILabel_o *getBoostLabel; // x22
  System_String_o *v51; // x23
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x0
  BattleResultItemComponent_c *v56; // x0
  System_String_o *EP_SP_BASE_NAME; // x21
  System_String_o *v58; // x0
  struct UISprite_o *eventPointBgSprite; // x8
  Il2CppObject *v60; // x21
  BattleResultItemComponent_c *v61; // x0
  UnityEngine_Object_o *eventPointMaxSprite; // x21
  int64_t v63; // [xsp+8h] [xbp-68h] BYREF
  int64_t v64; // [xsp+10h] [xbp-60h] BYREF
  int32_t v65; // [xsp+1Ch] [xbp-54h] BYREF

  v65 = eventId;
  if ( (byte_4BDF9A2 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BattleResultItemComponent_TypeInfo);
    sub_1C21E38(&Method_BetterList_string__Contains__);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_3001/*"BATTLE_RESULT_GET_EP_RATE"*/);
    sub_1C21E38(&StringLiteral_25376/*"{0:#,0}"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_859/*"+ {0:#,0}"*/);
    byte_4BDF9A2 = 1;
  }
  getEventPointLabel = this->fields.getEventPointLabel;
  v64 = addEventPoint;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v64, addEventPoint, totalEventPoint, *(_QWORD *)&imageId);
  IfExists = System_String__Format((System_String_o *)StringLiteral_859/*"+ {0:#,0}"*/, v15, 0LL);
  if ( !getEventPointLabel )
    goto LABEL_49;
  UILabel__set_text(getEventPointLabel, IfExists, 0LL);
  nowEventPointLabel = this->fields.nowEventPointLabel;
  v63 = totalEventPoint;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v63, v19, v20, v21);
  IfExists = System_String__Format((System_String_o *)StringLiteral_25376/*"{0:#,0}"*/, v22, 0LL);
  if ( !nowEventPointLabel )
    goto LABEL_49;
  UILabel__set_text(nowEventPointLabel, IfExists, 0LL);
  CommonFunction__ScalingLabelWidth(this->fields.getEventPointLabel, 215, 0LL);
  CommonFunction__ScalingLabelWidth(this->fields.nowEventPointLabel, 215, 0LL);
  eventIconSprite = this->fields.eventIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(eventIconSprite, imageId, 0LL);
  IfExists = (System_String_o *)BattleResultItemComponent_TypeInfo;
  getTitleLabel = this->fields.getTitleLabel;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
  if ( !getTitleLabel )
    goto LABEL_49;
  v25 = 24LL;
  if ( boostRate > 0 )
    v25 = 28LL;
  UILabel__set_fontSize(
    getTitleLabel,
    *(_DWORD *)((char *)&BattleResultItemComponent_TypeInfo->static_fields->EP_SP_BASE_NAME + v25),
    0LL);
  IfExists = (System_String_o *)this->fields.getTitleLabel;
  if ( !IfExists )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IfExists, 0LL);
  v27 = BattleResultItemComponent_TypeInfo;
  v28 = gameObject;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
    v27 = BattleResultItemComponent_TypeInfo;
  }
  static_fields = v27->static_fields;
  v30 = 16LL;
  if ( boostRate > 0 )
    v30 = 20LL;
  GameObjectExtensions__SetLocalPositionY(v28, *(float *)((char *)&static_fields->EP_SP_BASE_NAME + v30), 0LL);
  v31 = this->fields.getTitleLabel;
  v32 = sub_1C21EE0(string___TypeInfo, 2LL);
  v33 = BattleResultItemComponent_TypeInfo;
  v34 = v32;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
    v33 = BattleResultItemComponent_TypeInfo;
  }
  EP_GET_LOCALE_KEY = v33->static_fields->EP_GET_LOCALE_KEY;
  v36 = System_Int32__ToString((int32_t)&v65, 0LL);
  IfExists = System_String__Concat_63115476(EP_GET_LOCALE_KEY, v36, 0LL);
  if ( !v34 )
    goto LABEL_49;
  if ( !*(_DWORD *)(v34 + 24)
    || (*(_QWORD *)(v34 + 32) = IfExists,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 32), (int64_t)IfExists, v37, v38, v39, v40, v41, v42),
        *(_DWORD *)(v34 + 24) <= 1u) )
  {
    sub_1C2209C(IfExists, v17);
  }
  v49 = BattleResultItemComponent_TypeInfo->static_fields->EP_GET_LOCALE_KEY;
  *(_QWORD *)(v34 + 40) = v49;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 40), (int64_t)v49, v43, v44, v45, v46, v47, v48);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v34, 0LL);
  if ( !v31 )
LABEL_49:
    sub_1C22094(IfExists, v17);
  UILabel__set_text(v31, IfExists, 0LL);
  getBoostLabel = this->fields.getBoostLabel;
  if ( boostRate <= 0 )
  {
    v17 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !getBoostLabel )
      goto LABEL_49;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_3001/*"BATTLE_RESULT_GET_EP_RATE"*/, 0LL);
    *(float *)&v64 = (float)((float)boostRate / 1000.0) + 1.0;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v64, v52, v53, v54);
    IfExists = System_String__Format(v51, v55, 0LL);
    v17 = IfExists;
    if ( !getBoostLabel )
      goto LABEL_49;
  }
  UILabel__set_text(getBoostLabel, v17, 0LL);
  v56 = BattleResultItemComponent_TypeInfo;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
    v56 = BattleResultItemComponent_TypeInfo;
  }
  EP_SP_BASE_NAME = v56->static_fields->EP_SP_BASE_NAME;
  v58 = System_Int32__ToString((int32_t)&v65, 0LL);
  IfExists = System_String__Concat_63115476(EP_SP_BASE_NAME, v58, 0LL);
  eventPointBgSprite = this->fields.eventPointBgSprite;
  if ( !eventPointBgSprite )
    goto LABEL_49;
  v60 = (Il2CppObject *)IfExists;
  IfExists = (System_String_o *)eventPointBgSprite->fields.mAtlas;
  if ( !IfExists )
    goto LABEL_49;
  IfExists = (System_String_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)IfExists, 0LL);
  if ( !IfExists )
    goto LABEL_49;
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)IfExists,
          v60,
          (const MethodInfo_31D3F18 *)Method_BetterList_string__Contains__) )
  {
    v61 = BattleResultItemComponent_TypeInfo;
    if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
      v61 = BattleResultItemComponent_TypeInfo;
    }
    v60 = (Il2CppObject *)v61->static_fields->EP_SP_BASE_NAME;
  }
  IfExists = (System_String_o *)this->fields.eventPointBgSprite;
  if ( !IfExists )
    goto LABEL_49;
  UISprite__set_spriteName((UISprite_o *)IfExists, (System_String_o *)v60, 0LL);
  eventPointMaxSprite = (UnityEngine_Object_o *)this->fields.eventPointMaxSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventPointMaxSprite, 0LL, 0LL) )
  {
    IfExists = (System_String_o *)this->fields.eventPointMaxSprite;
    if ( !IfExists )
      goto LABEL_49;
    IfExists = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IfExists, 0LL);
    if ( !IfExists )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IfExists, isEventPointMax, 0LL);
  }
  IfExists = (System_String_o *)this->fields.rootEventPoint;
  if ( !IfExists )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IfExists, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__SetGroupEventRoot(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        UserEventEntity_array *oldUsrEvent,
        UserEventPointEntity_array *oldUsrPoint,
        int64_t addDamagePoint,
        UserGameEntity_o *userGame,
        int32_t countQp,
        System_Int32_array *viewGroupIds,
        int32_t conquestRewardQp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *nomalRootObj; // x0
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x5

  nomalRootObj = this->fields.nomalRootObj;
  if ( !nomalRootObj
    || (UnityEngine_GameObject__SetActive(nomalRootObj, 0, 0LL),
        (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0LL)
    || (nomalRootObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nomalRootObj, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(nomalRootObj, 1, 0LL), !userGame)
    || (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0LL
    || (BattleResultEventItemGroupComponent__SetQpInfo(
          (BattleResultEventItemGroupComponent_o *)nomalRootObj,
          userGame->fields.qp - conquestRewardQp,
          countQp,
          v17),
        (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0LL) )
  {
    sub_1C22094(nomalRootObj, *(_QWORD *)&eventId);
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
void __fastcall BattleResultItemComponent__SetNormalRoot(
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
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t qp; // w29
  int32_t QpMax; // w8
  int v33; // w26
  UILabel_o *nowQpLabel; // x25
  Il2CppObject *v35; // x0
  UnityEngine_Object_o *rootEventDamagePoint; // x25
  const MethodInfo *v37; // [xsp+8h] [xbp-78h]
  int v38; // [xsp+18h] [xbp-68h] BYREF
  int32_t v39; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4BDF9A0 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_25376/*"{0:#,0}"*/);
    sub_1C21E38(&StringLiteral_859/*"+ {0:#,0}"*/);
    byte_4BDF9A0 = 1;
  }
  groupRootObj = (UnityEngine_Component_o *)this->fields.groupRootObj;
  if ( !groupRootObj )
    goto LABEL_30;
  groupRootObj = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(groupRootObj, 0LL);
  if ( !groupRootObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0LL);
  groupRootObj = (UnityEngine_Component_o *)this->fields.nomalRootObj;
  if ( !groupRootObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 1, 0LL);
  getQpLabel = this->fields.getQpLabel;
  v39 = countQp;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v24, v25, v26);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_859/*"+ {0:#,0}"*/, v27, 0LL);
  if ( !getQpLabel )
    goto LABEL_30;
  UILabel__set_text(getQpLabel, (System_String_o *)groupRootObj, 0LL);
  if ( !userGame )
    goto LABEL_30;
  qp = userGame->fields.qp;
  groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  }
  QpMax = *(_DWORD *)(*(_QWORD *)&groupRootObj[7].fields.m_CachedPtr + 4LL);
  if ( qp >= QpMax )
  {
    if ( !oldGame )
      goto LABEL_30;
    v33 = oldGame->fields.qp + countQp;
    if ( v33 < 0 )
      goto LABEL_33;
    if ( !LODWORD(groupRootObj[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(groupRootObj);
      groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v33 > QpMax )
    {
LABEL_33:
      if ( !LODWORD(groupRootObj[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(groupRootObj);
        groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      }
      v33 = *(_DWORD *)(*(_QWORD *)&groupRootObj[7].fields.m_CachedPtr + 4LL);
    }
  }
  else
  {
    v33 = userGame->fields.qp - (firstClearRewardQp + conquestRewardQp);
  }
  nowQpLabel = this->fields.nowQpLabel;
  v38 = v33;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v28, v29, v30);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_25376/*"{0:#,0}"*/, v35, 0LL);
  if ( !nowQpLabel
    || (UILabel__set_text(nowQpLabel, (System_String_o *)groupRootObj, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.getQpLabel, 215, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.nowQpLabel, 215, 0LL),
        (groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventPoint) == 0LL) )
  {
LABEL_30:
    sub_1C22094(groupRootObj, *(_QWORD *)&eventId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0LL);
  rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rootEventDamagePoint, 0LL, 0LL) )
  {
    groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventDamagePoint;
    if ( groupRootObj )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0LL);
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
      v37);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__StartPresenterAnimation(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *addItemSvtAnimationObj; // x0
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  float v7; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s10
  float v11; // s8
  float v12; // s9
  const MethodInfo *v13; // x2
  struct BattleViewItemlistComponent_o *v14; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s8
  float v20; // s10
  float v21; // s9
  System_Collections_IEnumerator_o *v22; // x1
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDF9A6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4BDF9A6 = 1;
  }
  addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(addItemSvtAnimationObj, 1, 0LL);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)itemWindow->fields.itemObjectList;
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                         (System_Collections_Generic_List_object__o *)addItemSvtAnimationObj,
                                                         LODWORD(addItemSvtAnimationObj[1].klass) - 1,
                                                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         addItemSvtAnimationObj,
                                                         0LL);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position(
                                    (UnityEngine_Transform_o *)addItemSvtAnimationObj,
                                    0LL);
  addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  v10 = v7;
  v11 = v8;
  v12 = v9;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         addItemSvtAnimationObj,
                                                         0LL);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  v23.fields.y = v11;
  v23.fields.z = v12;
  v23.fields.x = v10 + 0.05;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)addItemSvtAnimationObj, v23, 0LL);
  v14 = this->fields.itemWindow;
  if ( !v14 )
    goto LABEL_19;
  itemObjectList = v14->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_19;
  if ( itemObjectList->fields._size >= 8 )
  {
    addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
    if ( addItemSvtAnimationObj )
    {
      addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             addItemSvtAnimationObj,
                                                             0LL);
      if ( addItemSvtAnimationObj )
      {
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)addItemSvtAnimationObj,
                                           0LL);
        addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
        if ( addItemSvtAnimationObj )
        {
          v19 = v16;
          v20 = v17;
          v21 = v18;
          addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                 addItemSvtAnimationObj,
                                                                 0LL);
          if ( addItemSvtAnimationObj )
          {
            v24.fields.y = v20 + 9.0;
            v24.fields.x = v19;
            v24.fields.z = v21;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)addItemSvtAnimationObj, v24, 0LL);
            goto LABEL_18;
          }
        }
      }
    }
LABEL_19:
    sub_1C22094(addItemSvtAnimationObj, callback);
  }
LABEL_18:
  v22 = BattleResultItemComponent__PlayVoiceCoroutine(this, callback, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v22, 0LL);
}


void __fastcall BattleResultItemComponent__commandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BDF9B4 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleResultItemComponent_EndCloseDialogCallBack__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDF9B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_1C22094(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0LL);
}


void __fastcall BattleResultItemComponent__endClose(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4BDF9B7 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF9B7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1C22094(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endCommandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF9B5 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3632/*"CLOSE"*/);
    byte_4BDF9B5 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3632/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endItemDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF9B1 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3632/*"CLOSE"*/);
    byte_4BDF9B1 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3632/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endOpen(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF99E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9432/*"NEXT"*/);
    byte_4BDF99E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9432/*"NEXT"*/, 0LL),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0LL) )
  {
    sub_1C22094(myFsm, method);
  }
  BattleViewItemlistComponent__setShow((BattleViewItemlistComponent_o *)myFsm, 0LL);
}


BattleDropItem_o *__fastcall BattleResultItemComponent__getNewDrop(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *newDroplist; // x0
  Il2CppObject *Item; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_BattleDropItem__o *v6; // x8
  BattleDropItem_o *v7; // x19

  if ( (byte_4BDF9B8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    byte_4BDF9B8 = 1;
  }
  newDroplist = (System_Collections_Generic_List_object__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0LL;
  Item = System_Collections_Generic_List_object___get_Item(
           newDroplist,
           0,
           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
  v6 = this->fields.newDroplist;
  if ( !v6 )
    sub_1C22094(Item, v5);
  v7 = (BattleDropItem_o *)Item;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)v6,
    0,
    (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v7;
}


void __fastcall BattleResultItemComponent__itemDialogCallBack(
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

  if ( (byte_4BDF9B0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleResultItemComponent_endItemDialogCallBack__);
    sub_1C21E38(&Method_BattleResultItemComponent_itemDialogCallBack__);
    byte_4BDF9B0 = 1;
  }
  v4 = Method_BattleResultItemComponent_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_itemDialogCallBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_BattleResultItemComponent_itemDialogCallBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  itemDialog = this->fields.itemDialog;
  v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultItemComponent_endItemDialogCallBack__, 0LL);
  if ( !itemDialog )
    sub_1C22094(v8, v9);
  ItemDetailInfoComponent__Close_32046984(itemDialog, v7, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__itemFlashAnimationCoroutine(
        BattleResultItemComponent_o *this,
        UnityEngine_GameObject_o *itemIconEffectObj,
        BattleDropItemComponent_o *dropItem,
        const MethodInfo *method)
{
  __int64 v6; // x21
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

  if ( (byte_4BDF9A9 & 1) == 0 )
  {
    sub_1C21E38(&BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_TypeInfo);
    byte_4BDF9A9 = 1;
  }
  v6 = sub_1C22084(BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = itemIconEffectObj;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)itemIconEffectObj, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = dropItem;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)dropItem, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleResultItemComponent__setCondensedScale(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *getBoostLabel; // x0
  UILabel_o *getTitleLabel; // x20

  if ( (byte_4BDF9BA & 1) == 0 )
  {
    sub_1C21E38(&BattleResultItemComponent_TypeInfo);
    byte_4BDF9BA = 1;
  }
  getBoostLabel = (UILabel_o *)BattleResultItemComponent_TypeInfo;
  getTitleLabel = this->fields.getTitleLabel;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
  if ( !getTitleLabel
    || (UILabel__SetCondensedScale(
          getTitleLabel,
          BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH,
          0,
          0LL),
        (getBoostLabel = this->fields.getBoostLabel) == 0LL) )
  {
    sub_1C22094(getBoostLabel, method);
  }
  UILabel__SetCondensedScale(
    getBoostLabel,
    BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH,
    0,
    0LL);
}


void __fastcall BattleResultItemComponent__setResultData(
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
  __int64 v24; // x26
  System_Collections_Generic_List_object__o *v25; // x22
  void *object; // x0
  struct BattleDropItem_array *gifts; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_List_object__o **v34; // x24
  System_Collections_Generic_List_object__o *v35; // x27
  System_Predicate_object__o *v36; // x22
  Il2CppObject *v37; // x28
  struct BattleResultItemComponent___c_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_List_T__o *All; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x22
  __int64 v53; // x8
  int v54; // w9
  System_Predicate_object__o **v55; // x25
  System_Predicate_object__o *v56; // x22
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  _DWORD *v63; // x22
  int max_length; // w8
  __int64 v65; // x9
  BattleDropItem_o *v66; // x12
  struct System_String_array *voiceIds; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  System_Collections_Generic_List_object__o *v74; // x23
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x25
  BattleResultItemComponent___c_c *v76; // x0
  System_Predicate_object__o *_9__48_2; // x22
  Il2CppObject *v78; // x26
  struct BattleResultItemComponent___c_StaticFields *v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  BattleViewItemlistComponent_o *itemWindow; // x22
  BattleDropItem_array *v87; // x23
  BattleDropItemComponent_ClickDelegate_o *v88; // x25
  const MethodInfo *v89; // x1
  const MethodInfo *v90; // x1
  const MethodInfo *v91; // x1
  UserGameEntity_o *SelfUserGame; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v93; // x28
  int32_t v94; // w26
  _BOOL8 v95; // x0
  __int64 v96; // x1
  BattleDropItem_o *current; // x22
  _BOOL8 isAutoSellItem; // x0
  __int64 v99; // x1
  Il2CppObject *v100; // x0
  __int64 v101; // x1
  int klass; // w8
  UserEventEntity_array *v103; // x2
  int64_t v104; // x4
  signed int v105; // w8
  signed int v106; // w20
  int32_t conquestRewardQp; // w29
  EventConquestInfo_o *v108; // x22
  int v109; // w8
  __int64 v110; // x8
  UserGameEntity_o *oldGamea; // [xsp+8h] [xbp-108h]
  int32_t eventGroupId; // [xsp+20h] [xbp-F0h]
  const MethodInfo *v113; // [xsp+28h] [xbp-E8h]
  UserGameEntity_o *v114; // [xsp+60h] [xbp-B0h]
  UserEventPointEntity_array *oldUsrPointa; // [xsp+68h] [xbp-A8h]
  int32_t eventIda; // [xsp+74h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v117; // [xsp+78h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v118; // [xsp+90h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+A8h] [xbp-68h] BYREF

  if ( (byte_4BDF99F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Find_DropUpInfo___);
    sub_1C21E38(&BattleDropItem_TypeInfo);
    sub_1C21E38(&Method_BattleResultItemComponent_setShowConf__);
    sub_1C21E38(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleDropItem__Insert__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_BattleDropItem__TypeInfo);
    sub_1C21E38(&System_Predicate_DropUpInfo__TypeInfo);
    sub_1C21E38(&System_Predicate_BattleDropItem__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattleResultItemComponent___c__setResultData_b__48_0__);
    sub_1C21E38(&Method_BattleResultItemComponent___c__setResultData_b__48_2__);
    sub_1C21E38(&Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__);
    sub_1C21E38(&BattleResultItemComponent___c__DisplayClass48_0_TypeInfo);
    sub_1C21E38(&BattleResultItemComponent___c_TypeInfo);
    byte_4BDF99F = 1;
  }
  entity = 0LL;
  memset(&v118, 0, sizeof(v118));
  v24 = sub_1C22084(BattleResultItemComponent___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  eventIda = eventId;
  this->fields.g_eventId = eventId;
  v25 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleDropItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
  if ( !v24 )
    goto LABEL_27;
  *(_QWORD *)(v24 + 16) = v25;
  v34 = (System_Collections_Generic_List_object__o **)(v24 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)v25, v28, v29, v30, v31, v32, v33);
  object = *(void **)(v24 + 16);
  if ( !object )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)object,
    (System_Collections_Generic_IEnumerable_T__o *)drop,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
  object = BattleResultItemComponent___c_TypeInfo;
  v35 = *v34;
  if ( !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
    object = BattleResultItemComponent___c_TypeInfo;
  }
  v36 = *(System_Predicate_object__o **)(*((_QWORD *)object + 23) + 8LL);
  if ( !v36 )
  {
    if ( !*((_DWORD *)object + 56) )
    {
      j_il2cpp_runtime_class_init_0(object);
      object = BattleResultItemComponent___c_TypeInfo;
    }
    v37 = (Il2CppObject *)**((_QWORD **)object + 23);
    v36 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_BattleDropItem__TypeInfo);
    System_Predicate_object____ctor(v36, v37, Method_BattleResultItemComponent___c__setResultData_b__48_0__, 0LL);
    static_fields = BattleResultItemComponent___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Predicate_BattleDropItem__o *)v36;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__48_0, (int64_t)v36, v39, v40, v41, v42, v43, v44);
  }
  if ( !v35 )
    goto LABEL_27;
  All = System_Collections_Generic_List_object___FindAll(
          v35,
          (System_Predicate_T__o *)v36,
          (const MethodInfo_364F7C4 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
  this->fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)All;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.newDroplist, (int64_t)All, v46, v47, v48, v49, v50, v51);
  if ( getqp >= 1 )
  {
    v52 = sub_1C22084(BattleDropItem_TypeInfo);
    BattleDropItem___ctor((BattleDropItem_o *)v52, 0LL);
    if ( !v52 )
      goto LABEL_27;
    *(_QWORD *)(v52 + 20) = 0x500000002LL;
    BattleDropItem__setNum((BattleDropItem_o *)v52, getqp, originalGetQp, 0LL);
    object = *v34;
    if ( !*v34 )
      goto LABEL_27;
    System_Collections_Generic_List_object___Insert(
      (System_Collections_Generic_List_object__o *)object,
      0,
      (Il2CppObject *)v52,
      (const MethodInfo_364FE64 *)Method_System_Collections_Generic_List_BattleDropItem__Insert__);
  }
  v114 = oldGame;
  oldUsrPointa = oldUsrPoint;
  if ( dropupinfos )
  {
    v53 = *(_QWORD *)(v24 + 16);
    *(_DWORD *)(v24 + 24) = 0;
    if ( !v53 )
      goto LABEL_27;
    v54 = 0;
    v55 = (System_Predicate_object__o **)(v24 + 32);
    while ( v54 < *(_DWORD *)(v53 + 24) )
    {
      v56 = *v55;
      if ( !*v55 )
      {
        v56 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_DropUpInfo__TypeInfo);
        System_Predicate_object____ctor(
          v56,
          (Il2CppObject *)v24,
          Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__,
          0LL);
        *(_QWORD *)(v24 + 32) = v56;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 32), (int64_t)v56, v57, v58, v59, v60, v61, v62);
      }
      object = System_Array__Find_object_(
                 (System_Object_array *)dropupinfos,
                 (System_Predicate_T__o *)v56,
                 (const MethodInfo_30AAD74 *)Method_System_Array_Find_DropUpInfo___);
      if ( object )
      {
        v63 = object;
        object = *v34;
        if ( !*v34 )
          goto LABEL_27;
        object = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)object,
                   *(_DWORD *)(v24 + 24),
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !object )
          goto LABEL_27;
        *((_DWORD *)object + 18) = v63[5];
      }
      v53 = *(_QWORD *)(v24 + 16);
      v54 = *(_DWORD *)(v24 + 24) + 1;
      *(_DWORD *)(v24 + 24) = v54;
      if ( !v53 )
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
        v65 = 0LL;
        while ( (unsigned int)v65 < max_length )
        {
          v66 = gifts->m_Items[v65];
          if ( !v66 )
            goto LABEL_27;
          ++v65;
          v66->fields.isAddReward = 1;
          if ( (int)v65 >= max_length )
            goto LABEL_35;
        }
LABEL_94:
        sub_1C2209C(object, gifts);
      }
LABEL_35:
      object = *v34;
      if ( !*v34 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)object,
        (System_Collections_Generic_IEnumerable_T__o *)gifts,
        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      this->fields.animationSvtId = rewardBonus->fields.animationId;
      voiceIds = rewardBonus->fields.voiceIds;
      this->fields.voiceIds = voiceIds;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.voiceIds, (int64_t)voiceIds, v68, v69, v70, v71, v72, v73);
      v74 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleDropItem__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v74,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
      if ( !v74 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        v74,
        (System_Collections_Generic_IEnumerable_T__o *)rewardBonus->fields.gifts,
        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      newDroplist = this->fields.newDroplist;
      v76 = BattleResultItemComponent___c_TypeInfo;
      if ( !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
        v76 = BattleResultItemComponent___c_TypeInfo;
      }
      _9__48_2 = (System_Predicate_object__o *)v76->static_fields->__9__48_2;
      if ( !_9__48_2 )
      {
        if ( !v76->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v76);
          v76 = BattleResultItemComponent___c_TypeInfo;
        }
        v78 = (Il2CppObject *)v76->static_fields->__9;
        _9__48_2 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_BattleDropItem__TypeInfo);
        System_Predicate_object____ctor(
          _9__48_2,
          v78,
          Method_BattleResultItemComponent___c__setResultData_b__48_2__,
          0LL);
        v79 = BattleResultItemComponent___c_TypeInfo->static_fields;
        v79->__9__48_2 = (struct System_Predicate_BattleDropItem__o *)_9__48_2;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v79->__9__48_2, (int64_t)_9__48_2, v80, v81, v82, v83, v84, v85);
      }
      object = System_Collections_Generic_List_object___FindAll(
                 v74,
                 (System_Predicate_T__o *)_9__48_2,
                 (const MethodInfo_364F7C4 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
      if ( !newDroplist )
LABEL_27:
        sub_1C22094(object, gifts);
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)newDroplist,
        (System_Collections_Generic_IEnumerable_T__o *)object,
        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    }
  }
  object = *v34;
  if ( !*v34 )
    goto LABEL_27;
  itemWindow = this->fields.itemWindow;
  v87 = (BattleDropItem_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)object,
                                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  v88 = (BattleDropItemComponent_ClickDelegate_o *)sub_1C22084(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(
    v88,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_setShowConf__,
    0LL);
  if ( !itemWindow )
    goto LABEL_27;
  BattleViewItemlistComponent__setListDataCustomColumn_45546828(
    itemWindow,
    v87,
    eventIda,
    v88,
    this->fields.itemColumnCount,
    0LL);
  object = this->fields.itemWindow;
  if ( !object )
    goto LABEL_27;
  BattleViewItemlistComponent__setHide((BattleViewItemlistComponent_o *)object, 0LL);
  if ( rewardBonus )
  {
    BattleResultItemComponent__AddItemNewLine(this, v89);
    BattleResultItemComponent__SetAddItemSvtAnimation(this, v90);
    BattleResultItemComponent__SetAddItemIconEffect(this, v91);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !object )
    goto LABEL_27;
  object = DataManager__GetMasterData_object_(
             (DataManager_o *)object,
             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*v34 )
    goto LABEL_27;
  v93 = (DataMasterBase_TMaster__TEntity__PKType__o *)object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v117,
    *v34,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
  v94 = 0;
  v118 = v117;
  while ( 1 )
  {
    v95 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v118,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    if ( !v95 )
      break;
    current = (BattleDropItem_o *)v118.fields._current;
    if ( !v118.fields._current )
      sub_1C22094(v95, v96);
    isAutoSellItem = BattleDropItem__isAutoSellItem((BattleDropItem_o *)v118.fields._current, 0LL);
    if ( current->fields.type == 2 )
    {
      if ( !v93 )
        sub_1C22094(isAutoSellItem, v99);
      v100 = DataMasterBase_object__object__int___GetEntity(
               v93,
               current->fields.objectId,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v100 )
        sub_1C22094(0LL, v101);
      klass = (int)v100[3].klass;
      if ( klass == 1 || klass == 16 )
        v94 += BattleDropItem__getTotalNum(current, 0LL);
    }
    v94 += current->fields.num * current->fields.sellQp;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v118,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
  if ( !eventConquestInfos )
    goto LABEL_27;
  v105 = eventConquestInfos->max_length;
  if ( v105 < 1 )
  {
    conquestRewardQp = 0;
    if ( !viewGroupIds )
      goto LABEL_27;
  }
  else
  {
    v106 = 0;
    conquestRewardQp = 0;
    do
    {
      if ( v106 >= (unsigned int)v105 )
        goto LABEL_94;
      v108 = eventConquestInfos->m_Items[v106];
      if ( !v108 )
        goto LABEL_27;
      if ( v108->fields.type == 2 )
      {
        if ( !v93 )
          goto LABEL_27;
        object = DataMasterBase_object__object__int___GetEntity(
                   v93,
                   v108->fields.objectId,
                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( object )
        {
          v109 = *((_DWORD *)object + 12);
          if ( v109 == 16 || v109 == 1 )
            conquestRewardQp += v108->fields.getNum;
        }
      }
      v105 = eventConquestInfos->max_length;
      ++v106;
    }
    while ( v106 < v105 );
    if ( !viewGroupIds )
      goto LABEL_27;
  }
  v110 = *(_QWORD *)&viewGroupIds->max_length;
  if ( (_DWORD)v110 == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !object )
      goto LABEL_27;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)object,
           &entity,
           eventIda,
           (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      object = entity;
      if ( !entity )
        goto LABEL_27;
      object = (void *)EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)object & 1) != 0 )
      {
        if ( !viewGroupIds->max_length )
          goto LABEL_94;
        eventGroupId = viewGroupIds->m_Items[1];
        goto LABEL_93;
      }
    }
    v110 = *(_QWORD *)&viewGroupIds->max_length;
  }
  if ( v110 )
  {
    BattleResultItemComponent__SetGroupEventRoot(
      this,
      eventIda,
      v103,
      oldUsrPointa,
      v104,
      SelfUserGame,
      v94,
      viewGroupIds,
      conquestRewardQp,
      (const MethodInfo *)oldGamea);
    return;
  }
  eventGroupId = 0;
LABEL_93:
  BattleResultItemComponent__SetNormalRoot(
    this,
    eventIda,
    oldUsrPointa,
    addDamagePoint,
    SelfUserGame,
    v94,
    boostRate,
    conquestRewardQp,
    firstClearRewardQp,
    v114,
    eventConquestInfos,
    isNotDisplayEventPoint,
    eventGroupId,
    v113);
}


void __fastcall BattleResultItemComponent__setShowCommandCodeConf(
        BattleResultItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF9B2 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9828/*"OPEN_COMMANDCODE"*/);
    byte_4BDF9B2 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_1C22094(0LL, commandCodeId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9828/*"OPEN_COMMANDCODE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__setShowConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *item,
        const MethodInfo *method)
{
  int32_t type; // w21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( !item )
    sub_1C22094(this, 0LL);
  type = item->fields.type;
  if ( Gift__IsServant(type, 0LL) )
  {
    BattleResultItemComponent__setShowServantConf(this, item, v6);
  }
  else if ( Gift__IsItem(type, 0LL) )
  {
    BattleResultItemComponent__setShowItemConf(this, item->fields.objectId, v7);
  }
  else if ( Gift__IsCommandCode(type, 0LL) )
  {
    BattleResultItemComponent__setShowCommandCodeConf(this, item->fields.userSvtId, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__setShowItemConf(
        BattleResultItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF9AE & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9835/*"OPEN_ITEM"*/);
    byte_4BDF9AE = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_1C22094(0LL, *(_QWORD *)&itemId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9835/*"OPEN_ITEM"*/, 0LL);
}


void __fastcall BattleResultItemComponent__setShowServantConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v4; // x19

  v4 = this;
  if ( (byte_4BDF9AA & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_1C21E38(&StringLiteral_9843/*"OPEN_SERVANT"*/);
    byte_4BDF9AA = 1;
  }
  v4->fields.tmp_userSvtId = 0LL;
  v4->fields.tmp_svtId = 0;
  if ( !dropItem
    || (!BattleDropItem__isAutoSellItem(dropItem, 0LL)
      ? (v4->fields.tmp_userSvtId = dropItem->fields.userSvtId)
      : (v4->fields.tmp_svtId = dropItem->fields.objectId),
        (this = (BattleResultItemComponent_o *)v4->fields.myFsm) == 0LL) )
  {
    sub_1C22094(this, dropItem);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9843/*"OPEN_SERVANT"*/, 0LL);
}


void __fastcall BattleResultItemComponent__showCommandCodeDialog(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v6; // x21
  ServantStatusDialog_EndDelegate_o *v7; // x22

  if ( (byte_4BDF9B3 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultItemComponent_commandCodeDialogCallBack__);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF9B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_325E324 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v7 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattleResultItemComponent_commandCodeDialogCallBack__,
          0LL),
        !v6) )
  {
    sub_1C22094(Instance, v4);
  }
  CommonUI__OpenServantStatusDialog_31140820((CommonUI_o *)v6, 0, (UserCommandCodeEntity_o *)Entity, v7, 0LL, 0LL);
}


void __fastcall BattleResultItemComponent__showItemDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v7; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v8; // x22

  if ( (byte_4BDF9AF & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultItemComponent_itemDialogCallBack__);
    sub_1C21E38(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF9AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v7 = (ItemEntity_o *)Entity,
        v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C22084(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultItemComponent_itemDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_1C22094(Instance, v4);
  }
  ItemDetailInfoComponent__Open(itemDialog, v7, v8, 50, 0LL);
}


void __fastcall BattleResultItemComponent__showServantDialog(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  int64_t tmp_userSvtId; // x21
  Il2CppObject *Instance; // x20
  int64_t v5; // x21
  ServantStatusDialog_EndDelegate_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t tmp_svtId; // w21
  ServantStatusDialog_EndDelegate_o *v10; // x22

  if ( (byte_4BDF9AB & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultItemComponent_DialogCallBack__);
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDF9AB = 1;
  }
  tmp_userSvtId = this->fields.tmp_userSvtId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( tmp_userSvtId >= 1 )
  {
    v5 = this->fields.tmp_userSvtId;
    v6 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v6,
      (Il2CppObject *)this,
      Method_BattleResultItemComponent_DialogCallBack__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_31137496((CommonUI_o *)Instance, 0, v5, v6, 0LL, 0LL);
      return;
    }
LABEL_8:
    sub_1C22094(v7, v8);
  }
  tmp_svtId = this->fields.tmp_svtId;
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_DialogCallBack__,
    0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_31141516((CommonUI_o *)Instance, 0, tmp_svtId, v10, 0LL);
}


void __fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58___ctor(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__MoveNext(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v2; // x20
  int32_t _1__state; // w8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_Collections_Generic_List_object__o *executingCallback; // x0
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v7; // x9
  __int128 v8; // q0
  struct System_Collections_Generic_List_Enumerator_GameObject__o *p__7__wrap1; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x1
  UnityEngine_GameObject_o *current; // x0
  Il2CppObject *Component_object; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  _BYTE *monitor; // x8
  System_Collections_IEnumerator_o *v22; // x1
  UnityEngine_Coroutine_o *started; // x0
  __int64 v24; // x1
  UnityEngine_MonoBehaviour_c *klass; // x8
  __int64 v26; // x0
  __int64 v27; // x1
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v28; // x8
  BattleResultComponent_o *v29; // x0
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v31; // x19
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_List_Enumerator_T__o v39[2]; // [xsp+8h] [xbp-78h] BYREF
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o **v40; // [xsp+48h] [xbp-38h]
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v41; // [xsp+58h] [xbp-28h] BYREF

  v41 = this;
  v2 = this;
  if ( (byte_4BDF9C3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    this = (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *)sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4BDF9C3 = 1;
  }
  v40 = &v41;
  _1__state = v2->fields.__1__state;
  _4__this = (UnityEngine_MonoBehaviour_o *)v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C22094(this, method);
    m_CancellationTokenSource = _4__this[1].fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      sub_1C22094(this, method);
    executingCallback = (System_Collections_Generic_List_object__o *)m_CancellationTokenSource[1].fields._executingCallback;
    if ( !executingCallback )
      sub_1C22094(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      v39,
      executingCallback,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v7 = v41;
    v8 = *(_OWORD *)&v39[0].fields._list;
    p__7__wrap1 = &v41->fields.__7__wrap1;
    v39[1] = v39[0];
    v41->fields.__7__wrap1.fields._current = (struct UnityEngine_GameObject_o *)v39[0].fields._current;
    *(_OWORD *)&v7->fields.__7__wrap1.fields._list = v8;
    sub_1C21DDC((PartyOrganizationUtility_o *)p__7__wrap1, 0LL, v10, v11, v12, v13, v14, v15);
    v2 = v41;
  }
  v2->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v41->fields.__7__wrap1.fields._current;
    if ( !current )
      sub_1C22094(0LL, v16);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         current,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    if ( !Component_object )
      sub_1C22094(0LL, v19);
    monitor = Component_object[7].monitor;
    if ( !monitor )
      sub_1C22094(Component_object, v19);
    if ( monitor[77] )
    {
      if ( !_4__this )
        sub_1C22094(Component_object, v19);
      v22 = BattleResultItemComponent__itemFlashAnimationCoroutine(
              (BattleResultItemComponent_o *)Component_object,
              (UnityEngine_GameObject_o *)Component_object[9].monitor,
              (BattleDropItemComponent_o *)Component_object,
              v20);
      started = UnityEngine_MonoBehaviour__StartCoroutine_70854884(_4__this, v22, 0LL);
      klass = _4__this[1].klass;
      if ( !klass )
        sub_1C22094(started, v24);
      if ( !LOBYTE(klass->_2.instance_size) )
      {
        v31 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v31, 0.01, 0LL);
        v32 = v41;
        v41->fields.__2__current = (Il2CppObject *)v31;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v32->fields.__2__current, (int64_t)v31, v33, v34, v35, v36, v37, v38);
        result = 1;
        v41->fields.__1__state = 1;
        return result;
      }
    }
    v2 = v41;
  }
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58____m__Finally1(v41, v16);
  v28 = v41;
  v41->fields.__7__wrap1.fields._list = 0LL;
  *(_QWORD *)&v28->fields.__7__wrap1.fields._index = 0LL;
  v28->fields.__7__wrap1.fields._current = 0LL;
  if ( !_4__this )
    sub_1C22094(v26, v27);
  v29 = (BattleResultComponent_o *)_4__this[1].klass;
  if ( !v29 )
    sub_1C22094(0LL, v27);
  BattleResultComponent__QpFix(v29, 0LL);
  return 0;
}


Il2CppObject *__fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_IDisposable_Dispose(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58____m__Finally1(this, method);
}


void __fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58____m__Finally1(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDF9C4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    byte_4BDF9C4 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__57___ctor(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__57__MoveNext(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *v8; // x19
  int32_t _1__state; // w8
  BattleResultItemComponent_o *_4__this; // x20
  Il2CppObject *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_WaitForSeconds_o *v19; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  bool result; // w0
  System_Collections_IEnumerator_o *v28; // x0
  System_Random_o *v29; // x21
  struct System_String_array *voiceIds; // x8
  struct BattleResultItemComponent___c__DisplayClass57_0_o *_8__1; // x8
  il2cpp_array_size_t v32; // w22
  System_String_o *v33; // x0
  struct System_String_array *v34; // x8
  BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *v35; // x21
  System_String_o *v36; // x22
  SeManager_c *v37; // x0
  Il2CppObject *v38; // x24
  float DEFAULT_VOLUME; // s8
  System_Action_o *v40; // x23
  struct BattleResultItemComponent___c__DisplayClass57_0_o *v41; // x8
  struct BattleResultComponent_o *v42; // x8
  PartyOrganizationUtility_o *v43; // x19

  v8 = this;
  if ( (byte_4BDF9C5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&System_Random_TypeInfo);
    sub_1C21E38(&SeManager_TypeInfo);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&Method_BattleResultItemComponent___c__DisplayClass57_0__PlayVoiceCoroutine_b__0__);
    sub_1C21E38(&BattleResultItemComponent___c__DisplayClass57_0_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)sub_1C21E38(&StringLiteral_12907/*"Servants_"*/);
    byte_4BDF9C5 = 1;
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
      v11 = (Il2CppObject *)sub_1C22084(BattleResultItemComponent___c__DisplayClass57_0_TypeInfo);
      System_Object___ctor(v11, 0LL);
      v8->fields.__8__1 = (struct BattleResultItemComponent___c__DisplayClass57_0_o *)v11;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v11, v12, v13, v14, v15, v16, v17);
      if ( !_4__this )
        goto LABEL_30;
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        goto LABEL_30;
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v19 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v19, 0.3, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v19;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(p__2__current, (int64_t)v19, v21, v22, v23, v24, v25, v26);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
    }
    v28 = BattleResultItemComponent__PlayItemIconEffectCoroutine(_4__this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)_4__this, v28, 0LL);
    v29 = (System_Random_o *)sub_1C22084(System_Random_TypeInfo);
    System_Random___ctor(v29, 0LL);
    voiceIds = _4__this->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_30;
    if ( !v29 )
      goto LABEL_30;
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))v29->klass->vtable._6_Next.method)(
                                                                      v29,
                                                                      0LL,
                                                                      voiceIds->max_length,
                                                                      v29->klass->vtable._7_Next.methodPtr);
    _8__1 = v8->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_30;
    v32 = (unsigned int)this;
    _8__1->fields.IsVoiceComp = 0;
    v33 = System_Int32__ToString((int)_4__this + 272, 0LL);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)System_String__Concat_63115476(
                                                                      (System_String_o *)StringLiteral_12907/*"Servants_"*/,
                                                                      v33,
                                                                      0LL);
    v34 = _4__this->fields.voiceIds;
    if ( !v34 )
      goto LABEL_30;
    if ( v32 >= v34->max_length )
      sub_1C2209C(this, method);
    v35 = this;
    v36 = v34->m_Items[v32];
    v37 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v37 = SeManager_TypeInfo;
    }
    v38 = (Il2CppObject *)v8->fields.__8__1;
    DEFAULT_VOLUME = v37->static_fields->DEFAULT_VOLUME;
    v40 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v40,
      v38,
      Method_BattleResultItemComponent___c__DisplayClass57_0__PlayVoiceCoroutine_b__0__,
      0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)SoundManager__playVoice_39957484(
                                                                      (System_String_o *)v35,
                                                                      v36,
                                                                      DEFAULT_VOLUME,
                                                                      v40,
                                                                      0,
                                                                      0LL);
  }
  v41 = v8->fields.__8__1;
  if ( !v41 )
    goto LABEL_30;
  if ( v41->fields.IsVoiceComp )
  {
LABEL_27:
    ActionExtensions__Call(v8->fields.callback, 0LL);
    return 0;
  }
  if ( !_4__this || (v42 = _4__this->fields.parentComp) == 0LL )
LABEL_30:
    sub_1C22094(this, method);
  if ( v42->fields.isAddRewardEffectSkip )
    goto LABEL_27;
  v8->fields.__2__current = 0LL;
  v43 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1C21DDC(v43, 0LL, v2, v3, v4, v5, v6, v7);
  *(_DWORD *)&v43[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
  return 1;
}


Il2CppObject *__fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleResultItemComponent__PlayVoiceCoroutine_d__57_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_IDisposable_Dispose(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleResultItemComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF9C1 & 1) == 0 )
  {
    sub_1C21E38(&BattleResultItemComponent___c_TypeInfo);
    byte_4BDF9C1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattleResultItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleResultItemComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultItemComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleResultItemComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleResultItemComponent___c___ctor(BattleResultItemComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleResultItemComponent___c___setResultData_b__48_0(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C22094(this, 0LL);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_38930460(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_38930852(s->fields.type, 0LL);
}


bool __fastcall BattleResultItemComponent___c___setResultData_b__48_2(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C22094(this, 0LL);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_38930460(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_38930852(s->fields.type, 0LL);
}


void __fastcall BattleResultItemComponent___c__DisplayClass48_0___ctor(
        BattleResultItemComponent___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleResultItemComponent___c__DisplayClass48_0___setResultData_b__1(
        BattleResultItemComponent___c__DisplayClass48_0_o *this,
        DropUpInfo_o *e,
        const MethodInfo *method)
{
  BattleResultItemComponent___c__DisplayClass48_0_o *v4; // x20
  int32_t itemId; // w19

  v4 = this;
  if ( (byte_4BDF9C2 & 1) == 0 )
  {
    this = (BattleResultItemComponent___c__DisplayClass48_0_o *)sub_1C21E38(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    byte_4BDF9C2 = 1;
  }
  if ( !e
    || (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)v4->fields.list) == 0LL
    || (itemId = e->fields.itemId,
        (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v4->fields.i,
                                                                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__)) == 0LL) )
  {
    sub_1C22094(this, e);
  }
  return itemId == this->fields.i;
}


void __fastcall BattleResultItemComponent___c__DisplayClass51_0___ctor(
        BattleResultItemComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleResultItemComponent___c__DisplayClass51_0___SetEventInfo_b__0(
        BattleResultItemComponent___c__DisplayClass51_0_o *this,
        UserEventPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.groupId == this->fields.eventGroupId;
}


void __fastcall BattleResultItemComponent___c__DisplayClass57_0___ctor(
        BattleResultItemComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultItemComponent___c__DisplayClass57_0___PlayVoiceCoroutine_b__0(
        BattleResultItemComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  this->fields.IsVoiceComp = 1;
}


void __fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__59___ctor(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__MoveNext(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *v2; // x19
  int32_t _1__state; // w8
  UnityEngine_Object_o *itemIconEffectObj; // x20
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *v5; // x20
  int v6; // s0
  UnityEngine_WaitForSeconds_o *v9; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  bool result; // w0
  struct BattleDropItemComponent_o *dropItem; // x8

  v2 = this;
  if ( (byte_4BDF9C6 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4BDF9C6 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    dropItem = v2->fields.dropItem;
    v2->fields.__1__state = -1;
    if ( !dropItem )
      goto LABEL_19;
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)dropItem->fields.root;
    if ( !this )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    itemIconEffectObj = (UnityEngine_Object_o *)v2->fields.itemIconEffectObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(itemIconEffectObj, 0LL, 0LL) )
      goto LABEL_14;
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)v2->fields.itemIconEffectObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)v2->fields.itemIconEffectObj;
      if ( this )
      {
        this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)UnityEngine_GameObject__get_transform(
                                                                                   (UnityEngine_GameObject_o *)this,
                                                                                   0LL);
        if ( v2->fields.dropItem )
        {
          v5 = this;
          this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)UnityEngine_Component__get_transform(
                                                                                     (UnityEngine_Component_o *)v2->fields.dropItem,
                                                                                     0LL);
          if ( this )
          {
            *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
            if ( v5 )
            {
              UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v5, *(UnityEngine_Vector3_o *)&v6, 0LL);
LABEL_14:
              v9 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
              UnityEngine_WaitForSeconds___ctor(v9, 0.2333, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v9;
              p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
              sub_1C21DDC(p__2__current, (int64_t)v9, v11, v12, v13, v14, v15, v16);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
              return result;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1C22094(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_IDisposable_Dispose(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  ;
}