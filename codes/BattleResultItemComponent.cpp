void __fastcall BattleResultItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct BattleResultItemComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct BattleResultItemComponent_StaticFields *v11; // x0
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A016A2 & 1) == 0 )
  {
    sub_1B64870(&BattleResultItemComponent_TypeInfo, v1);
    sub_1B64870(&StringLiteral_20190/*"img_bg_total_dp"*/, v4);
    sub_1B64870(&StringLiteral_2939/*"BATTLE_RESULT_GET_EP"*/, v5);
    sub_1B64870(&StringLiteral_20191/*"img_bg_total_ep"*/, v6);
    byte_4A016A2 = 1;
  }
  BattleResultItemComponent_TypeInfo->static_fields->EP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_20191/*"img_bg_total_ep"*/;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)BattleResultItemComponent_TypeInfo->static_fields,
    StringLiteral_20191/*"img_bg_total_ep"*/,
    v2,
    v3);
  v7 = StringLiteral_20190/*"img_bg_total_dp"*/;
  static_fields = BattleResultItemComponent_TypeInfo->static_fields;
  static_fields->DP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_20190/*"img_bg_total_dp"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->DP_SP_BASE_NAME, v7, v9, v10);
  v11 = BattleResultItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&v11->EP_GET_POSY_NORMAL = 3245342720LL;
  *(_QWORD *)&v11->EP_GET_FONT_NORMAL = 0x130000001ALL;
  v12 = StringLiteral_2939/*"BATTLE_RESULT_GET_EP"*/;
  v11->EP_GET_LOCALE_KEY = (struct System_String_o *)StringLiteral_2939/*"BATTLE_RESULT_GET_EP"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v11->EP_GET_LOCALE_KEY, v12, v13, v14);
  BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH = 142;
}


void __fastcall BattleResultItemComponent___ctor(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A016A1 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Color___TypeInfo, method);
    byte_4A016A1 = 1;
  }
  v3 = (struct UnityEngine_Color_array *)sub_1B64918(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.showModeChanButtonLabelEffectColors = v3;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.showModeChanButtonLabelEffectColors,
    (int32_t)v3,
    v4,
    v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__AddItemNewLine(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleResultItemComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Object_o *v7; // x20
  int32_t v8; // w24
  int32_t v9; // w21
  BattleResultItemComponent_o *v10; // x22
  struct UILabel_o *getEventPointLabel; // x8
  int v12; // w9
  float v13; // s1
  struct BattleViewItemlistComponent_o *v14; // x8
  int v15; // w20
  int v16; // w21
  float v17; // s9
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4A01685 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, method);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    this = (BattleResultItemComponent_o *)sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    byte_4A01685 = 1;
  }
  itemWindow = v2->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_29;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    this = (BattleResultItemComponent_o *)itemWindow->fields.itemObjectList;
    if ( !this )
      goto LABEL_29;
    if ( v9 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      break;
    this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v9,
                                            (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( this )
    {
      v10 = this;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( this )
      {
        getEventPointLabel = this->fields.getEventPointLabel;
        if ( getEventPointLabel )
        {
          v12 = BYTE5(getEventPointLabel->fields.mGo);
          itemWindow = v2->fields.itemWindow;
          if ( !v12 )
            v8 = v9;
          if ( !v12 )
            v7 = (UnityEngine_Object_o *)v10;
          ++v9;
          if ( itemWindow )
            continue;
        }
      }
    }
    goto LABEL_29;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultItemComponent_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v7 )
    {
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
      if ( this )
      {
        *(UnityEngine_Vector3_o *)(&v13 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        v14 = v2->fields.itemWindow;
        if ( v14 )
        {
          v15 = 0;
          v16 = v8 + 1;
          v17 = v13 + -113.57;
          do
          {
            this = (BattleResultItemComponent_o *)v14->fields.itemObjectList;
            if ( !this )
              break;
            if ( v16 + v15 >= SLODWORD(this->fields.m_CancellationTokenSource) )
              return;
            this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v16 + v15,
                                                    (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( !this )
              break;
            this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)this,
                                                    0LL);
            if ( !this )
              break;
            v18.fields.x = (float)((float)(v15 % 7) * 110.0) + -22.0;
            v18.fields.y = v17 + (float)((float)(v15 / 7) * -113.57);
            v18.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v18, 0LL);
            v14 = v2->fields.itemWindow;
            ++v15;
          }
          while ( v14 );
        }
      }
    }
LABEL_29:
    sub_1B64ACC(this, method);
  }
}


void __fastcall BattleResultItemComponent__Close(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4A01698 & 1) == 0 )
  {
    sub_1B64870(&Method_BattleResultItemComponent_endClose__, method);
    sub_1B64870(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4A01698 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v6 = (BattleWindowComponent_EndCall_o *)sub_1B64ABC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v6, (Il2CppObject *)this, Method_BattleResultItemComponent_endClose__, 0LL),
        !window) )
  {
    sub_1B64ACC(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v6,
    window->klass->vtable._13_CompClose.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__DialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A0168E & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, flg);
    sub_1B64870(&Method_BattleResultItemComponent_EndCloseDialogCallBack__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A0168E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_1B64ACC(v8, v9);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
}


void __fastcall BattleResultItemComponent__EndCloseDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A0168F & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_3557/*"CLOSE"*/, method);
    byte_4A0168F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3557/*"CLOSE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleResultItemComponent__GetEventPointUpperPriority(
        BattleResultItemComponent_o *this,
        int32_t eventPointUpperId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  BattleResultItemComponent_o *EntitiesFromEventPointUpperId; // x0
  const MethodInfo *v16; // x2
  int32_t v17; // w19
  __int64 v18; // x1
  int32_t key; // w29
  BattleResultItemComponent_o *v20; // x20
  const MethodInfo *v21; // x2
  _BOOL8 IsOpen; // x0
  __int64 v23; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  bool v25; // w21
  signed __int64 i; // x25
  _DWORD *v27; // x8
  int32_t v28; // w22
  int32_t v29; // w24
  int64_t v30; // x23
  int32_t v31; // w22
  int32_t v32; // w24
  int64_t v33; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4A0169E & 1) == 0 )
  {
    sub_1B64870(&CondType_TypeInfo, *(_QWORD *)&eventPointUpperId);
    sub_1B64870(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___, v4);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__,
      v5);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__,
      v6);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__,
      v7);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___get_Current__,
      v8);
    sub_1B64870(&Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Key__, v9);
    sub_1B64870(
      &Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Value__,
      v10);
    sub_1B64870(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A0169E = 1;
  }
  memset(&v36, 0, sizeof(v36));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___)) == 0LL
    || (EntitiesFromEventPointUpperId = (BattleResultItemComponent_o *)EventPointUpperReleaseMaster__GetEntitiesFromEventPointUpperId(
                                                                         (EventPointUpperReleaseMaster_o *)Instance,
                                                                         eventPointUpperId,
                                                                         0LL),
        (Instance = (DataManager_o *)BattleResultItemComponent__GetEventPointUpperReleases(
                                       EntitiesFromEventPointUpperId,
                                       (EventPointUpperReleaseEntity_array *)EntitiesFromEventPointUpperId,
                                       v16)) == 0LL) )
  {
    sub_1B64ACC(Instance, v14);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v35,
    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
    (const MethodInfo_3126098 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
  v17 = 0;
  v36 = v35;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v36,
            (const MethodInfo_326BF50 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__) )
  {
    if ( !v36.fields._current.fields.value )
      sub_1B64ACC(0LL, v18);
    key = (int32_t)v36.fields._current.fields.key;
    v20 = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___ToArray(
                                           (System_Collections_Generic_List_object__o *)v36.fields._current.fields.value,
                                           (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    IsOpen = BattleResultItemComponent__GetIsAndCondGroup(v20, (EventPointUpperReleaseEntity_array *)v20, v21);
    if ( !v20 )
      sub_1B64ACC(IsOpen, v23);
    m_CancellationTokenSource = v20->fields.m_CancellationTokenSource;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v25 = IsOpen;
      for ( i = 0LL; i < (int)m_CancellationTokenSource; ++i )
      {
        if ( i >= (unsigned __int64)(unsigned int)m_CancellationTokenSource )
          sub_1B64AD4(IsOpen, v23);
        v27 = (_DWORD *)*((_QWORD *)&v20->fields.parentComp + i);
        if ( v25 )
        {
          if ( !v27 )
            sub_1B64ACC(IsOpen, v23);
          v29 = v27[9];
          v28 = v27[10];
          v30 = (int)v27[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v29, v28, v30, 0, 0LL);
          if ( !IsOpen )
            goto LABEL_28;
        }
        else
        {
          if ( !v27 )
            sub_1B64ACC(IsOpen, v23);
          v32 = v27[9];
          v31 = v27[10];
          v33 = (int)v27[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v32, v31, v33, 0, 0LL);
          if ( IsOpen )
            break;
          if ( i >= LODWORD(v20->fields.m_CancellationTokenSource) - 1 )
            goto LABEL_28;
        }
        LODWORD(m_CancellationTokenSource) = v20->fields.m_CancellationTokenSource;
      }
    }
    if ( v17 < key )
      v17 = key;
  }
LABEL_28:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v36,
    (const MethodInfo_326C074 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
  return v17;
}


System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *__fastcall BattleResultItemComponent__GetEventPointUpperReleases(
        BattleResultItemComponent_o *this,
        EventPointUpperReleaseEntity_array *entities,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__object__o *v11; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v13; // x1
  signed int max_length; // w8
  unsigned int v15; // w24
  EventPointUpperReleaseEntity_o *v16; // x21
  int32_t priority; // w22
  System_Collections_Generic_List_object__o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8

  if ( (byte_4A0169F & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__,
      entities);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__, v4);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__, v5);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__, v6);
    sub_1B64870(&System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__, v9);
    sub_1B64870(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo, v10);
    byte_4A0169F = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_312528C *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
  if ( !entities )
    goto LABEL_18;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1B64AD4(Item, v13);
      v16 = entities->m_Items[v15];
      if ( !v16 || !v11 )
        break;
      priority = v16->fields.priority;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v11,
              priority,
              (const MethodInfo_3125E54 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__) )
      {
        v18 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v18,
          (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v11,
          priority,
          (Il2CppObject *)v18,
          (const MethodInfo_3125C4C *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
      }
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                            v11,
                                                            priority,
                                                            (const MethodInfo_3125BC0 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
      if ( !Item )
        break;
      items = Item->fields._items;
      v22 = Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__;
      ++Item->fields._version;
      if ( !items )
        break;
      size = Item->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          (Il2CppObject *)v16,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        Item->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v16;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v16, v19, v20);
      }
      max_length = entities->max_length;
      if ( (int)++v15 >= max_length )
        return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v11;
    }
LABEL_18:
    sub_1B64ACC(Item, v13);
  }
  return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v11;
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

  if ( (byte_4A016A0 & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_1B64870(&BalanceConfig_TypeInfo, *(_QWORD *)&priority);
    byte_4A016A0 = 1;
  }
  if ( !entities )
LABEL_15:
    sub_1B64ACC(this, *(_QWORD *)&priority);
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
        sub_1B64AD4(this, *(_QWORD *)&priority);
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
        sub_1B64AD4(this, entities);
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
    sub_1B64ACC(this, entities);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleResultItemComponent_o *v10; // x21
  struct BattleResultComponent_o *parentComp; // x8
  BattleResultItemComponent_o *EventPointUpperPriority; // x0
  const MethodInfo *v13; // x3

  v6 = this;
  if ( (byte_4A0169D & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_EventPointUpperMaster___, eventDetailEntity);
    this = (BattleResultItemComponent_o *)sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A0169D = 1;
  }
  if ( !eventDetailEntity )
    goto LABEL_14;
  if ( !EventDetailEntity__IsEventPointByQp(eventDetailEntity, 0LL) )
    goto LABEL_12;
  this = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventPointUpperMaster___);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)EventPointUpperMaster__GetEntitiesFromEventId(
                                          (EventPointUpperMaster_o *)this,
                                          eventDetailEntity->fields.eventId,
                                          0LL);
  if ( !this )
    return (char)this;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v10 = this;
  if ( !m_CancellationTokenSource )
  {
LABEL_12:
    LOBYTE(this) = 0;
    return (char)this;
  }
  if ( !(_DWORD)m_CancellationTokenSource )
    sub_1B64AD4(this, eventDetailEntity);
  parentComp = this->fields.parentComp;
  if ( !parentComp )
LABEL_14:
    sub_1B64ACC(this, eventDetailEntity);
  EventPointUpperPriority = (BattleResultItemComponent_o *)BattleResultItemComponent__GetEventPointUpperPriority(
                                                             v6,
                                                             *((_DWORD *)&parentComp->fields.UnityEngine_Behaviour_Fields
                                                             + 1),
                                                             v8);
  LOBYTE(this) = BattleResultItemComponent__GetEventPointUpperValue(
                   EventPointUpperPriority,
                   (int32_t)EventPointUpperPriority,
                   (EventPointUpperEntity_array *)v10,
                   v13) <= userEventPoint;
  return (char)this;
}


void __fastcall BattleResultItemComponent__Init(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleWindowComponent_o *window; // x0
  System_String_o *v5; // x20

  if ( (byte_4A0167F & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_2933/*"BATTLE_RESULTITEM_TITLECONF"*/, v3);
    byte_4A0167F = 1;
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
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2933/*"BATTLE_RESULTITEM_TITLECONF"*/, 0LL);
  if ( !window )
    goto LABEL_14;
  v5 = (System_String_o *)window;
  if ( !System_String__Equals_61391892((System_String_o *)window, (System_String_o *)StringLiteral_2933/*"BATTLE_RESULTITEM_TITLECONF"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_14;
    UILabel__set_text((UILabel_o *)window, v5, 0LL);
  }
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  if ( !window )
LABEL_14:
    sub_1B64ACC(window, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
}


void __fastcall BattleResultItemComponent__OnClickSwitchShowMode(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *showModeChangeButton; // x0
  __int64 *v10; // x8
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A0169B & 1) == 0 )
  {
    sub_1B64870(&Method_BattleResultItemComponent_OnClickSwitchShowMode__, method);
    sub_1B64870(&StringLiteral_17411/*"btn_bg_20"*/, v3);
    sub_1B64870(&StringLiteral_17412/*"btn_bg_21"*/, v4);
    byte_4A0169B = 1;
  }
  v5 = Method_BattleResultItemComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B64888(Method_BattleResultItemComponent_OnClickSwitchShowMode__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  showModeChangeButton = this->fields.showModeChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !showModeChangeButton
    || (isShowPossessionNum ? (v10 = &StringLiteral_17411/*"btn_bg_20"*/) : (v10 = &StringLiteral_17412/*"btn_bg_21"*/),
        UIButton__set_normalSprite(showModeChangeButton, (System_String_o *)*v10, 0LL),
        (showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors) == 0LL) )
  {
LABEL_18:
    sub_1B64ACC(showModeChangeButton, v7);
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
    sub_1B64AD4(showModeChangeButton, v7);
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
  v17.fields.a = *p_r;
  v17.fields.b = *p_a;
  v17.fields.g = *p_b;
  v17.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)showModeChangeButton, v17, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *touchNextRoot; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  const MethodInfo *v9; // x1

  if ( (byte_4A01680 & 1) == 0 )
  {
    sub_1B64870(&Method_BattleResultItemComponent_endOpen__, method);
    sub_1B64870(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v4);
    sub_1B64870(&StringLiteral_5458/*"END_OPEN"*/, v5);
    byte_4A01680 = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0LL);
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot
    || (touchNextRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      touchNextRoot,
                                                      (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (UIWidget__set_depth((UIWidget_o *)touchNextRoot, 200, 0LL),
        (touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5458/*"END_OPEN"*/, 0LL),
        window = this->fields.window,
        v8 = (BattleWindowComponent_EndCall_o *)sub_1B64ABC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v8, (Il2CppObject *)this, Method_BattleResultItemComponent_endOpen__, 0LL),
        !window) )
  {
LABEL_9:
    sub_1B64ACC(touchNextRoot, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v8,
    window->klass->vtable._11_CompOpen.methodPtr);
  BattleResultItemComponent__setCondensedScale(this, v9);
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A0168A & 1) == 0 )
  {
    sub_1B64870(&BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_TypeInfo, method);
    byte_4A0168A = 1;
  }
  v3 = sub_1B64ABC(BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__PlayVoiceCoroutine(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A01689 & 1) == 0 )
  {
    sub_1B64870(&BattleResultItemComponent__PlayVoiceCoroutine_d__56_TypeInfo, callback);
    byte_4A01689 = 1;
  }
  v5 = sub_1B64ABC(BattleResultItemComponent__PlayVoiceCoroutine_d__56_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 48) = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)callback, v8, v9);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  int32_t size; // w8
  int v18; // w22
  int v19; // w23
  Il2CppObject *v20; // x20
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  System_String_o *v25; // x20
  struct BattleViewItemlistComponent_o *v26; // x8
  int32_t v27; // w28
  Il2CppObject *v28; // x20
  int32_t v29; // w21
  struct UILabel_o *getEventPointLabel; // x8
  BattleResultItemComponent_o *v31; // x23
  BattleResultItemComponent_o *v32; // x24
  BattleResultItemComponent_o *v33; // x25
  __int64 v34; // x1
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t animationSvtId; // [xsp+8h] [xbp-68h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-64h] BYREF

  v5 = this;
  if ( (byte_4A01687 & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, method);
    sub_1B64870(&AssetManager_TypeInfo, v6);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v7);
    sub_1B64870(&int_TypeInfo, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Item__, v10);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v12);
    sub_1B64870(&StringLiteral_18727/*"ef_additem"*/, v13);
    this = (BattleResultItemComponent_o *)sub_1B64870(&StringLiteral_5791/*"Effect/BattleResult/{0}/{1}"*/, v14);
    byte_4A01687 = 1;
  }
  itemWindow = v5->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_30;
  itemObjectList = itemWindow->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_30;
  size = itemObjectList->fields._size;
  g_eventId = v5->fields.g_eventId;
  v18 = 7 * (size / 7);
  if ( size == v18 )
    v19 = -21;
  else
    v19 = -14;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId, v2, v3, v4);
  animationSvtId = v5->fields.animationSvtId;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId, v21, v22, v23);
  v25 = System_String__Format_61397948((System_String_o *)StringLiteral_5791/*"Effect/BattleResult/{0}/{1}"*/, v20, v24, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleResultItemComponent_o *)AssetManager__getAssetStorage(v25, 0LL);
  if ( !this
    || (this = (BattleResultItemComponent_o *)AssetData__GetObject_object__48356600(
                                                (AssetData_o *)this,
                                                (System_String_o *)StringLiteral_18727/*"ef_additem"*/,
                                                (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440),
        (v26 = v5->fields.itemWindow) == 0LL) )
  {
LABEL_30:
    sub_1B64ACC(this, method);
  }
  v27 = v19 + v18;
  v28 = (Il2CppObject *)this;
  v29 = 0;
  while ( 1 )
  {
    this = (BattleResultItemComponent_o *)v26->fields.itemObjectList;
    if ( !this )
      goto LABEL_30;
    if ( v29 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      break;
    if ( v27 <= v29 )
    {
      this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v29,
                                              (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_30;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( !this )
        goto LABEL_30;
      getEventPointLabel = this->fields.getEventPointLabel;
      v31 = this;
      if ( !getEventPointLabel )
        goto LABEL_30;
      if ( BYTE5(getEventPointLabel->fields.mGo) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleResultItemComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                v28,
                                                (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_30;
        v32 = this;
        this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
        if ( !this )
          goto LABEL_30;
        v33 = this;
        UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v5->fields.effectRoot, 0LL);
        if ( !byte_49F9201 )
        {
          sub_1B64870(&UnityEngine_Vector3_TypeInfo, v34);
          byte_49F9201 = 1;
        }
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v33,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( !byte_49F9206 )
        {
          sub_1B64870(&UnityEngine_Vector3_TypeInfo, v35);
          byte_49F9206 = 1;
        }
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v33,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v32, 0, 0LL);
        v31->fields.eventPointMaxSprite = (struct UISprite_o *)v32;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v31->fields.eventPointMaxSprite, (int32_t)v32, v36, v37);
      }
    }
    v26 = v5->fields.itemWindow;
    ++v29;
    if ( !v26 )
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v19; // x1
  Il2CppObject *Object_object__48356600; // x20
  UnityEngine_GameObject_o *v21; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Transform_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t animationSvtId; // [xsp+8h] [xbp-38h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A01686 & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, method);
    sub_1B64870(&AssetManager_TypeInfo, v6);
    sub_1B64870(&int_TypeInfo, v7);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64870(&StringLiteral_18778/*"ef_presenter"*/, v10);
    sub_1B64870(&StringLiteral_5791/*"Effect/BattleResult/{0}/{1}"*/, v11);
    byte_4A01686 = 1;
  }
  g_eventId = this->fields.g_eventId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId, v2, v3, v4);
  animationSvtId = this->fields.animationSvtId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId, v13, v14, v15);
  v17 = System_String__Format_61397948((System_String_o *)StringLiteral_5791/*"Effect/BattleResult/{0}/{1}"*/, v12, v16, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v17, 0LL);
  if ( !AssetStorage )
    goto LABEL_16;
  Object_object__48356600 = AssetData__GetObject_object__48356600(
                              AssetStorage,
                              (System_String_o *)StringLiteral_18778/*"ef_presenter"*/,
                              (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                  Object_object__48356600,
                                  (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !AssetStorage
    || (v21 = (UnityEngine_GameObject_o *)AssetStorage,
        AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)AssetStorage,
                                        0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (v23 = (UnityEngine_Transform_o *)AssetStorage) == 0LL )
  {
LABEL_16:
    sub_1B64ACC(AssetStorage, v19);
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)AssetStorage, itemWindow->fields.listRoot, 0LL);
  if ( !byte_49F9201 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, v24);
    byte_49F9201 = 1;
  }
  UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_49F9206 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, v25);
    byte_49F9206 = 1;
  }
  UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  UnityEngine_GameObject__SetActive(v21, 0, 0LL);
  this->fields.addItemSvtAnimationObj = v21;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.addItemSvtAnimationObj, (int32_t)v21, v26, v27);
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
    sub_1B64ACC(nomalRootObj, *(_QWORD *)&eventId);
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
void __fastcall BattleResultItemComponent__SetNomalRoot(
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
        bool isNotDisplayEventPoint,
        const MethodInfo *method)
{
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  UnityEngine_Component_o *groupRootObj; // x0
  UILabel_o *getQpLabel; // x27
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  int32_t qp; // w29
  int32_t QpMax; // w8
  int v35; // w26
  UILabel_o *nowQpLabel; // x25
  Il2CppObject *v37; // x0
  UnityEngine_Object_o *rootEventDamagePoint; // x25
  int32_t v39; // w5
  const MethodInfo *v40; // [xsp+0h] [xbp-70h]
  int v41; // [xsp+8h] [xbp-68h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A01683 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_1B64870(&int_TypeInfo, v20);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v21);
    sub_1B64870(&StringLiteral_24838/*"{0:#,0}"*/, v22);
    sub_1B64870(&StringLiteral_862/*"+ {0:#,0}"*/, v23);
    byte_4A01683 = 1;
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
  v42 = countQp;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v26, v27, v28);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_862/*"+ {0:#,0}"*/, v29, 0LL);
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
    v35 = oldGame->fields.qp + countQp;
    if ( v35 < 0 )
      goto LABEL_33;
    if ( !LODWORD(groupRootObj[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(groupRootObj);
      groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v35 > QpMax )
    {
LABEL_33:
      if ( !LODWORD(groupRootObj[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(groupRootObj);
        groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      }
      v35 = *(_DWORD *)(*(_QWORD *)&groupRootObj[7].fields.m_CachedPtr + 4LL);
    }
  }
  else
  {
    v35 = userGame->fields.qp - (firstClearRewardQp + conquestRewardQp);
  }
  nowQpLabel = this->fields.nowQpLabel;
  v41 = v35;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v30, v31, v32);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_24838/*"{0:#,0}"*/, v37, 0LL);
  if ( !nowQpLabel
    || (UILabel__set_text(nowQpLabel, (System_String_o *)groupRootObj, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.getQpLabel, 215, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.nowQpLabel, 215, 0LL),
        (groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventPoint) == 0LL) )
  {
LABEL_30:
    sub_1B64ACC(groupRootObj, *(_QWORD *)&eventId);
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
    BattleResultItemComponent__setEventInfo(
      this,
      eventId,
      oldUsrPoint,
      addDamagePoint,
      boostRate,
      v39,
      countQp,
      isNotDisplayEventPoint,
      v40);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__StartPresenterAnimation(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *addItemSvtAnimationObj; // x0
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s10
  float v12; // s8
  float v13; // s9
  const MethodInfo *v14; // x2
  struct BattleViewItemlistComponent_o *v15; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s8
  float v21; // s10
  float v22; // s9
  System_Collections_IEnumerator_o *v23; // x1
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A01688 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, callback);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Item__, v5);
    byte_4A01688 = 1;
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
                                                         (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         addItemSvtAnimationObj,
                                                         0LL);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(
                                    (UnityEngine_Transform_o *)addItemSvtAnimationObj,
                                    0LL);
  addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  v11 = v8;
  v12 = v9;
  v13 = v10;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         addItemSvtAnimationObj,
                                                         0LL);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  v24.fields.y = v12;
  v24.fields.z = v13;
  v24.fields.x = v11 + 0.05;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)addItemSvtAnimationObj, v24, 0LL);
  v15 = this->fields.itemWindow;
  if ( !v15 )
    goto LABEL_19;
  itemObjectList = v15->fields.itemObjectList;
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
        *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)addItemSvtAnimationObj,
                                           0LL);
        addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
        if ( addItemSvtAnimationObj )
        {
          v20 = v17;
          v21 = v18;
          v22 = v19;
          addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                 addItemSvtAnimationObj,
                                                                 0LL);
          if ( addItemSvtAnimationObj )
          {
            v25.fields.y = v21 + 9.0;
            v25.fields.x = v20;
            v25.fields.z = v22;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)addItemSvtAnimationObj, v25, 0LL);
            goto LABEL_18;
          }
        }
      }
    }
LABEL_19:
    sub_1B64ACC(addItemSvtAnimationObj, callback);
  }
LABEL_18:
  v23 = BattleResultItemComponent__PlayVoiceCoroutine(this, callback, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_69121188((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__commandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A01696 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, flg);
    sub_1B64870(&Method_BattleResultItemComponent_EndCloseDialogCallBack__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A01696 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_1B64ACC(v8, v9);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
}


void __fastcall BattleResultItemComponent__endClose(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4A01699 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_4A01699 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64ACC(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endCommandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A01697 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_3557/*"CLOSE"*/, method);
    byte_4A01697 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3557/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endItemDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A01693 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_3557/*"CLOSE"*/, method);
    byte_4A01693 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3557/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endOpen(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A01681 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_9199/*"NEXT"*/, method);
    byte_4A01681 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9199/*"NEXT"*/, 0LL),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0LL) )
  {
    sub_1B64ACC(myFsm, method);
  }
  BattleViewItemlistComponent__setShow((BattleViewItemlistComponent_o *)myFsm, 0LL);
}


BattleDropItem_o *__fastcall BattleResultItemComponent__getNewDrop(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *newDroplist; // x0
  Il2CppObject *Item; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleDropItem__o *v8; // x8
  BattleDropItem_o *v9; // x19

  if ( (byte_4A0169A & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v4);
    byte_4A0169A = 1;
  }
  newDroplist = (System_Collections_Generic_List_object__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0LL;
  Item = System_Collections_Generic_List_object___get_Item(
           newDroplist,
           0,
           (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
  v8 = this->fields.newDroplist;
  if ( !v8 )
    sub_1B64ACC(Item, v7);
  v9 = (BattleDropItem_o *)Item;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)v8,
    0,
    (const MethodInfo_34B1224 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__itemDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4A01692 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, flg);
    sub_1B64870(&Method_BattleResultItemComponent_endItemDialogCallBack__, v4);
    sub_1B64870(&Method_BattleResultItemComponent_itemDialogCallBack__, v5);
    byte_4A01692 = 1;
  }
  v6 = Method_BattleResultItemComponent_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_itemDialogCallBack__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B64888(Method_BattleResultItemComponent_itemDialogCallBack__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B64854(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  itemDialog = this->fields.itemDialog;
  v9 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleResultItemComponent_endItemDialogCallBack__, 0LL);
  if ( !itemDialog )
    sub_1B64ACC(v10, v11);
  ItemDetailInfoComponent__Close_30839676(itemDialog, v9, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__itemFlashAnimationCoroutine(
        BattleResultItemComponent_o *this,
        UnityEngine_GameObject_o *itemIconEffectObj,
        BattleDropItemComponent_o *dropItem,
        const MethodInfo *method)
{
  __int64 v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A0168B & 1) == 0 )
  {
    sub_1B64870(&BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_TypeInfo, itemIconEffectObj);
    byte_4A0168B = 1;
  }
  v6 = sub_1B64ABC(BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = itemIconEffectObj;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)itemIconEffectObj, v7, v8);
  *(_QWORD *)(v6 + 40) = dropItem;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)dropItem, v9, v10);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleResultItemComponent__setCondensedScale(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *getBoostLabel; // x0
  UILabel_o *getTitleLabel; // x20

  if ( (byte_4A0169C & 1) == 0 )
  {
    sub_1B64870(&BattleResultItemComponent_TypeInfo, method);
    byte_4A0169C = 1;
  }
  getBoostLabel = (UILabel_o *)BattleResultItemComponent_TypeInfo;
  getTitleLabel = this->fields.getTitleLabel;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
  if ( !getTitleLabel
    || (UILabel__SetCondensedScale(
          getTitleLabel,
          BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH,
          0LL),
        (getBoostLabel = this->fields.getBoostLabel) == 0LL) )
  {
    sub_1B64ACC(getBoostLabel, method);
  }
  UILabel__SetCondensedScale(
    getBoostLabel,
    BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__setEventInfo(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        UserEventPointEntity_array *oldUsrPoint,
        int64_t addDamagePoint,
        int32_t boostRate,
        int32_t firstClearRewardQp,
        int32_t countQp,
        bool isNotDisplayEventPoint,
        const MethodInfo *method)
{
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 Instance; // x0
  System_String_o *v35; // x1
  Il2CppObject *Entity; // x0
  EventDetailEntity_o *v37; // x20
  __int64 v38; // x8
  UserEventPointEntity_o *v39; // x8
  UserEventPointEntity_o *v40; // x8
  int64_t v41; // x25
  __int64 v42; // x26
  __int64 v43; // x2
  const MethodInfo *v44; // x3
  __int64 v45; // x4
  UserEventPointEntity_o *v46; // x8
  int64_t v47; // x22
  UserEventPointEntity_o *v48; // x8
  Il2CppObject *MasterData_object; // x0
  UserEventRaidMaster_o *v50; // x21
  UnityEngine_Object_o *rootEventDamagePoint; // x23
  int64_t TotalDamagePoint; // x21
  BalanceConfig_c *v53; // x8
  int64_t UserRaidDamagePointMax; // x23
  int64_t v55; // x21
  int64_t v56; // x0
  UILabel_o *getEventDamagePointLabel; // x22
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x0
  UILabel_o *nowEventDamagePointLabel; // x22
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x0
  BattleResultItemComponent_c *v67; // x0
  System_String_o *DP_SP_BASE_NAME; // x21
  System_String_o *v69; // x0
  struct UISprite_o *eventDamageBGSprite; // x8
  Il2CppObject *v71; // x21
  BattleResultItemComponent_c *v72; // x0
  UISprite_o *eventDamageIconSprite; // x21
  int32_t v74; // w20
  UILabel_o *getEventPointLabel; // x23
  Il2CppObject *v76; // x0
  UILabel_o *nowEventPointLabel; // x23
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  Il2CppObject *v81; // x0
  UISprite_o *eventIconSprite; // x23
  int32_t pointImageId; // w24
  UILabel_o *getTitleLabel; // x23
  __int64 v85; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  BattleResultItemComponent_c *v87; // x8
  UnityEngine_GameObject_o *v88; // x23
  struct BattleResultItemComponent_StaticFields *static_fields; // x8
  __int64 v90; // x9
  BattleResultItemComponent_c *v91; // x0
  System_String_o *EP_GET_LOCALE_KEY; // x23
  System_String_o *v93; // x0
  System_String_o *v94; // x23
  BattleResultItemComponent_c *v95; // x0
  UILabel_o *v96; // x24
  UILabel_o *getBoostLabel; // x23
  System_String_o *v98; // x24
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  Il2CppObject *v102; // x0
  BattleResultItemComponent_c *v103; // x0
  System_String_o *EP_SP_BASE_NAME; // x21
  System_String_o *v105; // x0
  struct UISprite_o *eventPointBgSprite; // x8
  Il2CppObject *v107; // x21
  BattleResultItemComponent_c *v108; // x0
  UnityEngine_Object_o *eventPointMaxSprite; // x21
  UnityEngine_GameObject_o *v110; // x21
  const MethodInfo *v111; // x3
  int64_t v112; // [xsp+0h] [xbp-70h] BYREF
  __int64 v113; // [xsp+8h] [xbp-68h] BYREF
  int32_t eventIda; // [xsp+1Ch] [xbp-54h] BYREF

  eventIda = eventId;
  if ( (byte_4A01684 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B64870(&BalanceConfig_TypeInfo, v16);
    sub_1B64870(&BattleResultItemComponent_TypeInfo, v17);
    sub_1B64870(&Method_BetterList_string__Contains__, v18);
    sub_1B64870(&Method_DataManager_GetMasterData_EventDetailMaster___, v19);
    sub_1B64870(&Method_DataManager_GetMasterData_EventMaster___, v20);
    sub_1B64870(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v21);
    sub_1B64870(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v22);
    sub_1B64870(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v23);
    sub_1B64870(&long_TypeInfo, v24);
    sub_1B64870(&LocalizationManager_TypeInfo, v25);
    sub_1B64870(&System_Math_TypeInfo, v26);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v27);
    sub_1B64870(&float_TypeInfo, v28);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1B64870(&StringLiteral_2940/*"BATTLE_RESULT_GET_EP_RATE"*/, v30);
    sub_1B64870(&StringLiteral_24838/*"{0:#,0}"*/, v31);
    sub_1B64870(&StringLiteral_1/*""*/, v32);
    sub_1B64870(&StringLiteral_862/*"+ {0:#,0}"*/, v33);
    byte_4A01684 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_109;
  if ( !DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          eventId,
          (const MethodInfo_30D6180 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
    return;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_109;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_30D6180 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    v37 = (EventDetailEntity_o *)Entity;
    Instance = EventDetailEntity__IsEventPoint((EventDetailEntity_o *)Entity, 0LL);
    if ( (Instance & 1) != 0 && !isNotDisplayEventPoint )
    {
      if ( oldUsrPoint && (v38 = *(_QWORD *)&oldUsrPoint->max_length) != 0 )
      {
        if ( !(_DWORD)v38 )
          goto LABEL_110;
        v39 = oldUsrPoint->m_Items[0];
        if ( !v39 )
          goto LABEL_109;
        if ( v39->fields.groupId )
          return;
        Instance = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
        if ( !oldUsrPoint->max_length )
          goto LABEL_110;
        v40 = oldUsrPoint->m_Items[0];
        if ( !v40 )
          goto LABEL_109;
        v41 = Instance;
        v42 = Instance - v40->fields.value;
        if ( Instance > 0 || v42 >= 1 )
        {
          Instance = EventDetailEntity__IsEventPointByQp(v37, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v47 = v41;
            goto LABEL_59;
          }
          if ( oldUsrPoint->max_length )
          {
            v46 = oldUsrPoint->m_Items[0];
            if ( !v46 )
              goto LABEL_109;
            v47 = v46->fields.value + countQp;
            if ( !BattleResultItemComponent__GetIsShowEventPointMax(this, v37, v41, v44) )
            {
              v42 = countQp;
              goto LABEL_59;
            }
            Instance = BattleResultItemComponent__GetIsShowEventPointMax(this, v37, v47, v44);
            if ( (Instance & 1) != 0 )
              v47 = v41;
            if ( oldUsrPoint->max_length )
            {
              v48 = oldUsrPoint->m_Items[0];
              if ( !v48 )
                goto LABEL_109;
              v42 = v47 - v48->fields.value;
LABEL_59:
              getEventPointLabel = this->fields.getEventPointLabel;
              v113 = v42;
              v76 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v113, v43, v44, v45);
              Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_862/*"+ {0:#,0}"*/, v76, 0LL);
              if ( getEventPointLabel )
              {
                UILabel__set_text(getEventPointLabel, (System_String_o *)Instance, 0LL);
                nowEventPointLabel = this->fields.nowEventPointLabel;
                v112 = v47;
                v81 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v112, v78, v79, v80);
                Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_24838/*"{0:#,0}"*/, v81, 0LL);
                if ( nowEventPointLabel )
                {
                  UILabel__set_text(nowEventPointLabel, (System_String_o *)Instance, 0LL);
                  CommonFunction__ScalingLabelWidth(this->fields.getEventPointLabel, 215, 0LL);
                  CommonFunction__ScalingLabelWidth(this->fields.nowEventPointLabel, 215, 0LL);
                  eventIconSprite = this->fields.eventIconSprite;
                  pointImageId = v37->fields.pointImageId;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  AtlasManager__SetItem(eventIconSprite, pointImageId, 0LL);
                  getTitleLabel = this->fields.getTitleLabel;
                  Instance = (__int64)BattleResultItemComponent_TypeInfo;
                  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                  if ( getTitleLabel )
                  {
                    v85 = 24LL;
                    if ( boostRate > 0 )
                      v85 = 28LL;
                    UILabel__set_fontSize(
                      getTitleLabel,
                      *(_DWORD *)((char *)&BattleResultItemComponent_TypeInfo->static_fields->EP_SP_BASE_NAME + v85),
                      0LL);
                    Instance = (__int64)this->fields.getTitleLabel;
                    if ( Instance )
                    {
                      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                      v87 = BattleResultItemComponent_TypeInfo;
                      v88 = gameObject;
                      if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                        v87 = BattleResultItemComponent_TypeInfo;
                      }
                      static_fields = v87->static_fields;
                      v90 = 16LL;
                      if ( boostRate > 0 )
                        v90 = 20LL;
                      GameObjectExtensions__SetLocalPositionY(
                        v88,
                        *(float *)((char *)&static_fields->EP_SP_BASE_NAME + v90),
                        0LL);
                      v91 = BattleResultItemComponent_TypeInfo;
                      if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                        v91 = BattleResultItemComponent_TypeInfo;
                      }
                      EP_GET_LOCALE_KEY = v91->static_fields->EP_GET_LOCALE_KEY;
                      v93 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                      v94 = System_String__Concat_61383576(EP_GET_LOCALE_KEY, v93, 0LL);
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      if ( !LocalizationManager__ContainsKey(v94, 0LL) )
                      {
                        v95 = BattleResultItemComponent_TypeInfo;
                        if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                          v95 = BattleResultItemComponent_TypeInfo;
                        }
                        v94 = v95->static_fields->EP_GET_LOCALE_KEY;
                      }
                      v96 = this->fields.getTitleLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      Instance = (__int64)LocalizationManager__Get(v94, 0LL);
                      if ( v96 )
                      {
                        UILabel__set_text(v96, (System_String_o *)Instance, 0LL);
                        getBoostLabel = this->fields.getBoostLabel;
                        if ( boostRate <= 0 )
                        {
                          v35 = (System_String_o *)StringLiteral_1/*""*/;
                        }
                        else
                        {
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v98 = LocalizationManager__Get((System_String_o *)StringLiteral_2940/*"BATTLE_RESULT_GET_EP_RATE"*/, 0LL);
                          *(float *)&v113 = (float)((float)boostRate / 1000.0) + 1.0;
                          v102 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v113, v99, v100, v101);
                          Instance = (__int64)System_String__Format(v98, v102, 0LL);
                          v35 = (System_String_o *)Instance;
                        }
                        if ( getBoostLabel )
                        {
                          UILabel__set_text(getBoostLabel, v35, 0LL);
                          v103 = BattleResultItemComponent_TypeInfo;
                          if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                            v103 = BattleResultItemComponent_TypeInfo;
                          }
                          EP_SP_BASE_NAME = v103->static_fields->EP_SP_BASE_NAME;
                          v105 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                          Instance = (__int64)System_String__Concat_61383576(EP_SP_BASE_NAME, v105, 0LL);
                          eventPointBgSprite = this->fields.eventPointBgSprite;
                          if ( eventPointBgSprite )
                          {
                            v107 = (Il2CppObject *)Instance;
                            Instance = (__int64)eventPointBgSprite->fields.mAtlas;
                            if ( Instance )
                            {
                              Instance = (__int64)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
                              if ( Instance )
                              {
                                if ( !BetterList_object___Contains(
                                        (BetterList_T__o *)Instance,
                                        v107,
                                        (const MethodInfo_3051334 *)Method_BetterList_string__Contains__) )
                                {
                                  v108 = BattleResultItemComponent_TypeInfo;
                                  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                                    v108 = BattleResultItemComponent_TypeInfo;
                                  }
                                  v107 = (Il2CppObject *)v108->static_fields->EP_SP_BASE_NAME;
                                }
                                Instance = (__int64)this->fields.eventPointBgSprite;
                                if ( Instance )
                                {
                                  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v107, 0LL);
                                  eventPointMaxSprite = (UnityEngine_Object_o *)this->fields.eventPointMaxSprite;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( UnityEngine_Object__op_Inequality(eventPointMaxSprite, 0LL, 0LL) )
                                  {
                                    Instance = (__int64)this->fields.eventPointMaxSprite;
                                    if ( !Instance )
                                      goto LABEL_109;
                                    v110 = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Instance,
                                             0LL);
                                    Instance = BattleResultItemComponent__GetIsShowEventPointMax(this, v37, v47, v111);
                                    if ( !v110 )
                                      goto LABEL_109;
                                    UnityEngine_GameObject__SetActive(v110, Instance & 1, 0LL);
                                  }
                                  Instance = (__int64)this->fields.rootEventPoint;
                                  if ( Instance )
                                  {
LABEL_107:
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LABEL_109:
              sub_1B64ACC(Instance, v35);
            }
          }
LABEL_110:
          sub_1B64AD4(Instance, v35);
        }
      }
      else
      {
        if ( (addDamagePoint & 0x8000000000000000LL) != 0 )
          return;
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_109;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
        if ( MasterData_object )
        {
          v50 = (UserEventRaidMaster_o *)MasterData_object;
          rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(rootEventDamagePoint, 0LL, 0LL) )
          {
            TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(v50, eventId, 0LL);
            v53 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v53 = BalanceConfig_TypeInfo;
            }
            UserRaidDamagePointMax = v53->static_fields->UserRaidDamagePointMax;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v55 = System_Math__Min_62202556(TotalDamagePoint, UserRaidDamagePointMax, 0LL);
            v56 = System_Math__Min_62202556(
                    addDamagePoint,
                    BalanceConfig_TypeInfo->static_fields->UserRaidDamagePointMax,
                    0LL);
            getEventDamagePointLabel = this->fields.getEventDamagePointLabel;
            v113 = v56;
            v61 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v113, v58, v59, v60);
            Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_862/*"+ {0:#,0}"*/, v61, 0LL);
            if ( getEventDamagePointLabel )
            {
              UILabel__set_text(getEventDamagePointLabel, (System_String_o *)Instance, 0LL);
              nowEventDamagePointLabel = this->fields.nowEventDamagePointLabel;
              v112 = v55;
              v66 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v112, v63, v64, v65);
              Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_24838/*"{0:#,0}"*/, v66, 0LL);
              if ( nowEventDamagePointLabel )
              {
                UILabel__set_text(nowEventDamagePointLabel, (System_String_o *)Instance, 0LL);
                v67 = BattleResultItemComponent_TypeInfo;
                if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                  v67 = BattleResultItemComponent_TypeInfo;
                }
                DP_SP_BASE_NAME = v67->static_fields->DP_SP_BASE_NAME;
                v69 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                Instance = (__int64)System_String__Concat_61383576(DP_SP_BASE_NAME, v69, 0LL);
                eventDamageBGSprite = this->fields.eventDamageBGSprite;
                if ( eventDamageBGSprite )
                {
                  v71 = (Il2CppObject *)Instance;
                  Instance = (__int64)eventDamageBGSprite->fields.mAtlas;
                  if ( Instance )
                  {
                    Instance = (__int64)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
                    if ( Instance )
                    {
                      if ( !BetterList_object___Contains(
                              (BetterList_T__o *)Instance,
                              v71,
                              (const MethodInfo_3051334 *)Method_BetterList_string__Contains__) )
                      {
                        v72 = BattleResultItemComponent_TypeInfo;
                        if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                          v72 = BattleResultItemComponent_TypeInfo;
                        }
                        v71 = (Il2CppObject *)v72->static_fields->DP_SP_BASE_NAME;
                      }
                      Instance = (__int64)this->fields.eventDamageBGSprite;
                      if ( Instance )
                      {
                        UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v71, 0LL);
                        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( Instance )
                        {
                          Instance = (__int64)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMaster___);
                          if ( Instance )
                          {
                            EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventIda, 0LL);
                            eventDamageIconSprite = this->fields.eventDamageIconSprite;
                            v74 = v37->fields.pointImageId;
                            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                            AtlasManager__SetItem(eventDamageIconSprite, v74, 0LL);
                            Instance = (__int64)this->fields.rootEventDamagePoint;
                            if ( Instance )
                              goto LABEL_107;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_109;
          }
        }
      }
    }
  }
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x26
  System_Collections_Generic_List_object__o *v49; // x22
  void *object; // x0
  struct BattleDropItem_array *gifts; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  System_Collections_Generic_List_object__o **v54; // x23
  System_Collections_Generic_List_object__o *v55; // x27
  System_Predicate_object__o *v56; // x22
  Il2CppObject *v57; // x28
  struct BattleResultItemComponent___c_StaticFields *static_fields; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_Collections_Generic_List_T__o *All; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  __int64 v64; // x22
  __int64 v65; // x8
  int v66; // w9
  System_Predicate_object__o **v67; // x25
  System_Predicate_object__o *v68; // x22
  int32_t v69; // w2
  int32_t v70; // w3
  _DWORD *v71; // x22
  int max_length; // w8
  __int64 v73; // x9
  BattleDropItem_o *v74; // x12
  struct System_String_array *voiceIds; // x1
  int32_t v76; // w2
  int32_t v77; // w3
  System_Collections_Generic_List_object__o *v78; // x24
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x25
  BattleResultItemComponent___c_c *v80; // x0
  System_Predicate_object__o *_9__48_2; // x22
  Il2CppObject *v82; // x26
  struct BattleResultItemComponent___c_StaticFields *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  BattleViewItemlistComponent_o *itemWindow; // x22
  BattleDropItem_array *v87; // x24
  BattleDropItemComponent_ClickDelegate_o *v88; // x25
  const MethodInfo *v89; // x1
  const MethodInfo *v90; // x1
  const MethodInfo *v91; // x1
  UserGameEntity_o *SelfUserGame; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v93; // x28
  int32_t v94; // w27
  _BOOL8 v95; // x0
  __int64 v96; // x1
  BattleDropItem_o *current; // x22
  _BOOL8 isAutoSellItem; // x0
  __int64 v99; // x1
  Il2CppObject *Entity; // x0
  __int64 v101; // x1
  int klass; // w8
  UserEventEntity_array *v103; // x2
  int64_t v104; // x4
  signed int v105; // w8
  signed int v106; // w20
  int32_t conquestRewardQp; // w29
  EventConquestInfo_o *v108; // x22
  int v109; // w8
  UserGameEntity_o *oldGamea; // [xsp+8h] [xbp-E8h]
  const MethodInfo *v111; // [xsp+18h] [xbp-D8h]
  UserEventPointEntity_array *oldUsrPointa; // [xsp+48h] [xbp-A8h]
  int32_t eventIda; // [xsp+54h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v115; // [xsp+58h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v116; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_4A01682 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_Find_DropUpInfo___, drop);
    sub_1B64870(&BattleDropItem_TypeInfo, v23);
    sub_1B64870(&Method_BattleResultItemComponent_setShowConf__, v24);
    sub_1B64870(&BattleDropItemComponent_ClickDelegate_TypeInfo, v25);
    sub_1B64870(&Method_DataManager_GetMasterData_ItemMaster___, v26);
    sub_1B64870(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v27);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__, v28);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__, v29);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__get_Current__, v30);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__, v31);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__, v32);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__, v33);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleDropItem__Insert__, v34);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, v35);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleDropItem___ctor__, v36);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v37);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v38);
    sub_1B64870(&System_Collections_Generic_List_BattleDropItem__TypeInfo, v39);
    sub_1B64870(&System_Predicate_DropUpInfo__TypeInfo, v40);
    sub_1B64870(&System_Predicate_BattleDropItem__TypeInfo, v41);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1B64870(&Method_BattleResultItemComponent___c__setResultData_b__48_0__, v43);
    sub_1B64870(&Method_BattleResultItemComponent___c__setResultData_b__48_2__, v44);
    sub_1B64870(&Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__, v45);
    sub_1B64870(&BattleResultItemComponent___c__DisplayClass48_0_TypeInfo, v46);
    sub_1B64870(&BattleResultItemComponent___c_TypeInfo, v47);
    byte_4A01682 = 1;
  }
  memset(&v116, 0, sizeof(v116));
  v48 = sub_1B64ABC(BattleResultItemComponent___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v48, 0LL);
  this->fields.g_eventId = eventId;
  eventIda = eventId;
  v49 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleDropItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
  if ( !v48 )
    goto LABEL_27;
  *(_QWORD *)(v48 + 16) = v49;
  v54 = (System_Collections_Generic_List_object__o **)(v48 + 16);
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v48 + 16), (int32_t)v49, v52, v53);
  object = *(void **)(v48 + 16);
  if ( !object )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)object,
    (System_Collections_Generic_IEnumerable_T__o *)drop,
    (const MethodInfo_34AFBBC *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
  object = BattleResultItemComponent___c_TypeInfo;
  v55 = *v54;
  if ( !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
    object = BattleResultItemComponent___c_TypeInfo;
  }
  v56 = *(System_Predicate_object__o **)(*((_QWORD *)object + 23) + 8LL);
  if ( !v56 )
  {
    if ( !*((_DWORD *)object + 56) )
    {
      j_il2cpp_runtime_class_init_0(object);
      object = BattleResultItemComponent___c_TypeInfo;
    }
    v57 = (Il2CppObject *)**((_QWORD **)object + 23);
    v56 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_BattleDropItem__TypeInfo);
    System_Predicate_object____ctor(v56, v57, Method_BattleResultItemComponent___c__setResultData_b__48_0__, 0LL);
    static_fields = BattleResultItemComponent___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Predicate_BattleDropItem__o *)v56;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__48_0, (int32_t)v56, v59, v60);
  }
  if ( !v55 )
    goto LABEL_27;
  All = System_Collections_Generic_List_object___FindAll(
          v55,
          (System_Predicate_T__o *)v56,
          (const MethodInfo_34B00C0 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
  this->fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)All;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.newDroplist, (int32_t)All, v62, v63);
  if ( getqp >= 1 )
  {
    v64 = sub_1B64ABC(BattleDropItem_TypeInfo);
    BattleDropItem___ctor((BattleDropItem_o *)v64, 0LL);
    if ( !v64 )
      goto LABEL_27;
    *(_QWORD *)(v64 + 20) = 0x500000002LL;
    BattleDropItem__setNum((BattleDropItem_o *)v64, getqp, originalGetQp, 0LL);
    object = *v54;
    if ( !*v54 )
      goto LABEL_27;
    System_Collections_Generic_List_object___Insert(
      (System_Collections_Generic_List_object__o *)object,
      0,
      (Il2CppObject *)v64,
      (const MethodInfo_34B0800 *)Method_System_Collections_Generic_List_BattleDropItem__Insert__);
  }
  oldUsrPointa = oldUsrPoint;
  if ( dropupinfos )
  {
    v65 = *(_QWORD *)(v48 + 16);
    *(_DWORD *)(v48 + 24) = 0;
    if ( !v65 )
      goto LABEL_27;
    v66 = 0;
    v67 = (System_Predicate_object__o **)(v48 + 32);
    while ( v66 < *(_DWORD *)(v65 + 24) )
    {
      v68 = *v67;
      if ( !*v67 )
      {
        v68 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_DropUpInfo__TypeInfo);
        System_Predicate_object____ctor(
          v68,
          (Il2CppObject *)v48,
          Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__,
          0LL);
        *(_QWORD *)(v48 + 32) = v68;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v48 + 32), (int32_t)v68, v69, v70);
      }
      object = System_Array__Find_object_(
                 (System_Object_array *)dropupinfos,
                 (System_Predicate_T__o *)v68,
                 (const MethodInfo_2F321EC *)Method_System_Array_Find_DropUpInfo___);
      if ( object )
      {
        v71 = object;
        object = *v54;
        if ( !*v54 )
          goto LABEL_27;
        object = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)object,
                   *(_DWORD *)(v48 + 24),
                   (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !object )
          goto LABEL_27;
        *((_DWORD *)object + 18) = v71[5];
      }
      v65 = *(_QWORD *)(v48 + 16);
      v66 = *(_DWORD *)(v48 + 24) + 1;
      *(_DWORD *)(v48 + 24) = v66;
      if ( !v65 )
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
        v73 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v73 >= max_length )
LABEL_83:
            sub_1B64AD4(object, gifts);
          v74 = gifts->m_Items[v73];
          if ( !v74 )
            break;
          ++v73;
          v74->fields.isAddReward = 1;
          if ( (int)v73 >= max_length )
            goto LABEL_35;
        }
LABEL_27:
        sub_1B64ACC(object, gifts);
      }
LABEL_35:
      object = *v54;
      if ( !*v54 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)object,
        (System_Collections_Generic_IEnumerable_T__o *)gifts,
        (const MethodInfo_34AFBBC *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      this->fields.animationSvtId = rewardBonus->fields.animationId;
      voiceIds = rewardBonus->fields.voiceIds;
      this->fields.voiceIds = voiceIds;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.voiceIds, (int32_t)voiceIds, v76, v77);
      v78 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleDropItem__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v78,
        (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
      if ( !v78 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        v78,
        (System_Collections_Generic_IEnumerable_T__o *)rewardBonus->fields.gifts,
        (const MethodInfo_34AFBBC *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      newDroplist = this->fields.newDroplist;
      v80 = BattleResultItemComponent___c_TypeInfo;
      if ( !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
        v80 = BattleResultItemComponent___c_TypeInfo;
      }
      _9__48_2 = (System_Predicate_object__o *)v80->static_fields->__9__48_2;
      if ( !_9__48_2 )
      {
        if ( !v80->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v80);
          v80 = BattleResultItemComponent___c_TypeInfo;
        }
        v82 = (Il2CppObject *)v80->static_fields->__9;
        _9__48_2 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_BattleDropItem__TypeInfo);
        System_Predicate_object____ctor(
          _9__48_2,
          v82,
          Method_BattleResultItemComponent___c__setResultData_b__48_2__,
          0LL);
        v83 = BattleResultItemComponent___c_TypeInfo->static_fields;
        v83->__9__48_2 = (struct System_Predicate_BattleDropItem__o *)_9__48_2;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v83->__9__48_2, (int32_t)_9__48_2, v84, v85);
      }
      object = System_Collections_Generic_List_object___FindAll(
                 v78,
                 (System_Predicate_T__o *)_9__48_2,
                 (const MethodInfo_34B00C0 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
      if ( !newDroplist )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)newDroplist,
        (System_Collections_Generic_IEnumerable_T__o *)object,
        (const MethodInfo_34AFBBC *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    }
  }
  object = *v54;
  if ( !*v54 )
    goto LABEL_27;
  itemWindow = this->fields.itemWindow;
  v87 = (BattleDropItem_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)object,
                                  (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  v88 = (BattleDropItemComponent_ClickDelegate_o *)sub_1B64ABC(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(
    v88,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_setShowConf__,
    0LL);
  if ( !itemWindow )
    goto LABEL_27;
  BattleViewItemlistComponent__setListDataCustomColumn_43720300(
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
  object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !object )
    goto LABEL_27;
  object = DataManager__GetMasterData_object_(
             (DataManager_o *)object,
             (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*v54 )
    goto LABEL_27;
  v93 = (DataMasterBase_TMaster__TEntity__PKType__o *)object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v115,
    *v54,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
  v94 = 0;
  v116 = v115;
  while ( 1 )
  {
    v95 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v116,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    if ( !v95 )
      break;
    current = (BattleDropItem_o *)v116.fields._current;
    if ( !v116.fields._current )
      sub_1B64ACC(v95, v96);
    isAutoSellItem = BattleDropItem__isAutoSellItem((BattleDropItem_o *)v116.fields._current, 0LL);
    if ( current->fields.type == 2 )
    {
      if ( !v93 )
        sub_1B64ACC(isAutoSellItem, v99);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v93,
                 current->fields.objectId,
                 (const MethodInfo_30D6180 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Entity )
        sub_1B64ACC(0LL, v101);
      klass = (int)Entity[3].klass;
      if ( klass == 1 || klass == 16 )
        v94 += BattleDropItem__getTotalNum(current, 0LL);
    }
    v94 += current->fields.num * current->fields.sellQp;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v116,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
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
        goto LABEL_83;
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
                   (const MethodInfo_30D6180 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  if ( *(_QWORD *)&viewGroupIds->max_length )
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
  else
    BattleResultItemComponent__SetNomalRoot(
      this,
      eventIda,
      oldUsrPointa,
      addDamagePoint,
      SelfUserGame,
      v94,
      boostRate,
      conquestRewardQp,
      firstClearRewardQp,
      oldGame,
      isNotDisplayEventPoint,
      v111);
}


void __fastcall BattleResultItemComponent__setShowCommandCodeConf(
        BattleResultItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A01694 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_9589/*"OPEN_COMMANDCODE"*/, commandCodeId);
    byte_4A01694 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_1B64ACC(0LL, commandCodeId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9589/*"OPEN_COMMANDCODE"*/, 0LL);
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
    sub_1B64ACC(this, 0LL);
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

  if ( (byte_4A01690 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_9596/*"OPEN_ITEM"*/, *(_QWORD *)&itemId);
    byte_4A01690 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_1B64ACC(0LL, *(_QWORD *)&itemId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9596/*"OPEN_ITEM"*/, 0LL);
}


void __fastcall BattleResultItemComponent__setShowServantConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v4; // x19

  v4 = this;
  if ( (byte_4A0168C & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_1B64870(&StringLiteral_9604/*"OPEN_SERVANT"*/, dropItem);
    byte_4A0168C = 1;
  }
  v4->fields.tmp_userSvtId = 0LL;
  v4->fields.tmp_svtId = 0;
  if ( !dropItem
    || (!BattleDropItem__isAutoSellItem(dropItem, 0LL)
      ? (v4->fields.tmp_userSvtId = dropItem->fields.userSvtId)
      : (v4->fields.tmp_svtId = dropItem->fields.objectId),
        (this = (BattleResultItemComponent_o *)v4->fields.myFsm) == 0LL) )
  {
    sub_1B64ACC(this, dropItem);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9604/*"OPEN_SERVANT"*/, 0LL);
}


void __fastcall BattleResultItemComponent__showCommandCodeDialog(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v11; // x21
  ServantStatusDialog_EndDelegate_o *v12; // x22

  if ( (byte_4A01695 & 1) == 0 )
  {
    sub_1B64870(&Method_BattleResultItemComponent_commandCodeDialogCallBack__, method);
    sub_1B64870(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1B64870(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1B64870(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A01695 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_30D632C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (ServantStatusDialog_EndDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattleResultItemComponent_commandCodeDialogCallBack__,
          0LL),
        !v11) )
  {
    sub_1B64ACC(Instance, v9);
  }
  CommonUI__OpenServantStatusDialog_30359664((CommonUI_o *)v11, 0, (UserCommandCodeEntity_o *)Entity, v12, 0LL, 0LL);
}


void __fastcall BattleResultItemComponent__showItemDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v11; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v12; // x22

  if ( (byte_4A01691 & 1) == 0 )
  {
    sub_1B64870(&Method_BattleResultItemComponent_itemDialogCallBack__, method);
    sub_1B64870(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_1B64870(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1B64870(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A01691 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_30D6180 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v11 = (ItemEntity_o *)Entity,
        v12 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B64ABC(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultItemComponent_itemDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_1B64ACC(Instance, v8);
  }
  ItemDetailInfoComponent__Open(itemDialog, v11, v12, 50, 0LL);
}


void __fastcall BattleResultItemComponent__showServantDialog(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t tmp_userSvtId; // x21
  Il2CppObject *Instance; // x20
  int64_t v7; // x21
  ServantStatusDialog_EndDelegate_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t tmp_svtId; // w21
  ServantStatusDialog_EndDelegate_o *v12; // x22

  if ( (byte_4A0168D & 1) == 0 )
  {
    sub_1B64870(&Method_BattleResultItemComponent_DialogCallBack__, method);
    sub_1B64870(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4A0168D = 1;
  }
  tmp_userSvtId = this->fields.tmp_userSvtId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( tmp_userSvtId >= 1 )
  {
    v7 = this->fields.tmp_userSvtId;
    v8 = (ServantStatusDialog_EndDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattleResultItemComponent_DialogCallBack__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_30356340((CommonUI_o *)Instance, 0, v7, v8, 0LL, 0LL);
      return;
    }
LABEL_8:
    sub_1B64ACC(v9, v10);
  }
  tmp_svtId = this->fields.tmp_svtId;
  v12 = (ServantStatusDialog_EndDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_DialogCallBack__,
    0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_30360360((CommonUI_o *)Instance, 0, tmp_svtId, v12, 0LL);
}


void __fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57___ctor(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57__MoveNext(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_Collections_Generic_List_object__o *executingCallback; // x0
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *v11; // x9
  __int128 v12; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap1; // x0
  int32_t v14; // w2
  int32_t v15; // w3
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
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *v28; // x8
  BattleResultComponent_o *v29; // x0
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v31; // x19
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_List_Enumerator_T__o v35[2]; // [xsp+8h] [xbp-78h] BYREF
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o **v36; // [xsp+48h] [xbp-38h]
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *v37; // [xsp+58h] [xbp-28h] BYREF

  v37 = this;
  v2 = this;
  if ( (byte_4A016A5 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v3);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    this = (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *)sub_1B64870(
                                                                               &UnityEngine_WaitForSeconds_TypeInfo,
                                                                               v6);
    byte_4A016A5 = 1;
  }
  v36 = &v37;
  _1__state = v2->fields.__1__state;
  _4__this = (UnityEngine_MonoBehaviour_o *)v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1B64ACC(this, method);
    m_CancellationTokenSource = _4__this[1].fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      sub_1B64ACC(this, method);
    executingCallback = (System_Collections_Generic_List_object__o *)m_CancellationTokenSource[1].fields._executingCallback;
    if ( !executingCallback )
      sub_1B64ACC(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      v35,
      executingCallback,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v11 = v37;
    v12 = *(_OWORD *)&v35[0].fields._list;
    p__7__wrap1 = (ServantStatusBattleListViewItem_o *)&v37->fields.__7__wrap1;
    v35[1] = v35[0];
    v37->fields.__7__wrap1.fields._current = (struct UnityEngine_GameObject_o *)v35[0].fields._current;
    *(_OWORD *)&v11->fields.__7__wrap1.fields._list = v12;
    sub_1B64814(p__7__wrap1, 0, v14, v15);
    v2 = v37;
  }
  v2->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v37->fields.__7__wrap1.fields._current;
    if ( !current )
      sub_1B64ACC(0LL, v16);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         current,
                         (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    if ( !Component_object )
      sub_1B64ACC(0LL, v19);
    monitor = Component_object[7].monitor;
    if ( !monitor )
      sub_1B64ACC(Component_object, v19);
    if ( monitor[77] )
    {
      if ( !_4__this )
        sub_1B64ACC(Component_object, v19);
      v22 = BattleResultItemComponent__itemFlashAnimationCoroutine(
              (BattleResultItemComponent_o *)Component_object,
              (UnityEngine_GameObject_o *)Component_object[9].monitor,
              (BattleDropItemComponent_o *)Component_object,
              v20);
      started = UnityEngine_MonoBehaviour__StartCoroutine_69121188(_4__this, v22, 0LL);
      klass = _4__this[1].klass;
      if ( !klass )
        sub_1B64ACC(started, v24);
      if ( !LOBYTE(klass->_2.initializationExceptionGCHandle) )
      {
        v31 = (UnityEngine_WaitForSeconds_o *)sub_1B64ABC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v31, 0.01, 0LL);
        v32 = v37;
        v37->fields.__2__current = (Il2CppObject *)v31;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v32->fields.__2__current, (int32_t)v31, v33, v34);
        result = 1;
        v37->fields.__1__state = 1;
        return result;
      }
    }
    v2 = v37;
  }
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57____m__Finally1(v37, v16);
  v28 = v37;
  v37->fields.__7__wrap1.fields._list = 0LL;
  *(_QWORD *)&v28->fields.__7__wrap1.fields._index = 0LL;
  v28->fields.__7__wrap1.fields._current = 0LL;
  if ( !_4__this )
    sub_1B64ACC(v26, v27);
  v29 = (BattleResultComponent_o *)_4__this[1].klass;
  if ( !v29 )
    sub_1B64ACC(0LL, v27);
  BattleResultComponent__QpFix(v29, 0LL);
  return 0;
}


Il2CppObject *__fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64884(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64ABC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64884(&Method_BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_System_Collections_IEnumerator_Reset__);
  sub_1B64998(v3, v4);
}


Il2CppObject *__fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57__System_IDisposable_Dispose(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57____m__Finally1(this, method);
}


void __fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57____m__Finally1(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A016A6 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    byte_4A016A6 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__56___ctor(
        BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__56__MoveNext(
        BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  BattleResultItemComponent_o *_4__this; // x20
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_WaitForSeconds_o *v18; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  bool result; // w0
  System_Collections_IEnumerator_o *v23; // x0
  System_Random_o *v24; // x21
  struct System_String_array *voiceIds; // x8
  struct BattleResultItemComponent___c__DisplayClass56_0_o *_8__1; // x8
  il2cpp_array_size_t v27; // w22
  System_String_o *v28; // x0
  struct System_String_array *v29; // x8
  BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *v30; // x21
  System_String_o *v31; // x22
  SeManager_c *v32; // x0
  Il2CppObject *v33; // x24
  float DEFAULT_VOLUME; // s8
  System_Action_o *v35; // x23
  struct BattleResultItemComponent___c__DisplayClass56_0_o *v36; // x8
  struct BattleResultComponent_o *v37; // x8
  ServantStatusBattleListViewItem_o *v38; // x19

  v4 = this;
  if ( (byte_4A016A7 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&System_Random_TypeInfo, v5);
    sub_1B64870(&SeManager_TypeInfo, v6);
    sub_1B64870(&SoundManager_TypeInfo, v7);
    sub_1B64870(&Method_BattleResultItemComponent___c__DisplayClass56_0__PlayVoiceCoroutine_b__0__, v8);
    sub_1B64870(&BattleResultItemComponent___c__DisplayClass56_0_TypeInfo, v9);
    sub_1B64870(&UnityEngine_WaitForSeconds_TypeInfo, v10);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)sub_1B64870(&StringLiteral_12602/*"Servants_"*/, v11);
    byte_4A016A7 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state == 1 )
    {
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_30;
    }
    else
    {
      if ( _1__state )
        return 0;
      v4->fields.__1__state = -1;
      v14 = (Il2CppObject *)sub_1B64ABC(BattleResultItemComponent___c__DisplayClass56_0_TypeInfo);
      System_Object___ctor(v14, 0LL);
      v4->fields.__8__1 = (struct BattleResultItemComponent___c__DisplayClass56_0_o *)v14;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v14, v15, v16);
      if ( !_4__this )
        goto LABEL_30;
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        goto LABEL_30;
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v18 = (UnityEngine_WaitForSeconds_o *)sub_1B64ABC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v18, 0.3, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v18;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B64814(p__2__current, (int32_t)v18, v20, v21);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
    }
    v23 = BattleResultItemComponent__PlayItemIconEffectCoroutine(_4__this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_69121188((UnityEngine_MonoBehaviour_o *)_4__this, v23, 0LL);
    v24 = (System_Random_o *)sub_1B64ABC(System_Random_TypeInfo);
    System_Random___ctor(v24, 0LL);
    voiceIds = _4__this->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_30;
    if ( !v24 )
      goto LABEL_30;
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))v24->klass->vtable._6_Next.method)(
                                                                      v24,
                                                                      0LL,
                                                                      voiceIds->max_length,
                                                                      v24->klass->vtable._7_Next.methodPtr);
    _8__1 = v4->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_30;
    v27 = (unsigned int)this;
    _8__1->fields.IsVoiceComp = 0;
    v28 = System_Int32__ToString((int)_4__this + 272, 0LL);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)System_String__Concat_61383576(
                                                                      (System_String_o *)StringLiteral_12602/*"Servants_"*/,
                                                                      v28,
                                                                      0LL);
    v29 = _4__this->fields.voiceIds;
    if ( !v29 )
      goto LABEL_30;
    if ( v27 >= v29->max_length )
      sub_1B64AD4(this, method);
    v30 = this;
    v31 = v29->m_Items[v27];
    v32 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v32 = SeManager_TypeInfo;
    }
    v33 = (Il2CppObject *)v4->fields.__8__1;
    DEFAULT_VOLUME = v32->static_fields->DEFAULT_VOLUME;
    v35 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(
      v35,
      v33,
      Method_BattleResultItemComponent___c__DisplayClass56_0__PlayVoiceCoroutine_b__0__,
      0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)SoundManager__playVoice_38391544(
                                                                      (System_String_o *)v30,
                                                                      v31,
                                                                      DEFAULT_VOLUME,
                                                                      v35,
                                                                      0LL);
  }
  v36 = v4->fields.__8__1;
  if ( !v36 )
    goto LABEL_30;
  if ( v36->fields.IsVoiceComp )
  {
LABEL_27:
    ActionExtensions__Call(v4->fields.callback, 0LL);
    return 0;
  }
  if ( !_4__this || (v37 = _4__this->fields.parentComp) == 0LL )
LABEL_30:
    sub_1B64ACC(this, method);
  if ( v37->fields.isAddRewardEffectSkip )
    goto LABEL_27;
  v4->fields.__2__current = 0LL;
  v38 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B64814(v38, 0, v2, v3);
  *(_DWORD *)&v38[-1].fields.isMine = 2;
  return 1;
}


Il2CppObject *__fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__56__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleResultItemComponent__PlayVoiceCoroutine_d__56__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64884(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64ABC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64884(&Method_BattleResultItemComponent__PlayVoiceCoroutine_d__56_System_Collections_IEnumerator_Reset__);
  sub_1B64998(v3, v4);
}


Il2CppObject *__fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__56__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__56__System_IDisposable_Dispose(
        BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleResultItemComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A016A3 & 1) == 0 )
  {
    sub_1B64870(&BattleResultItemComponent___c_TypeInfo, v1);
    byte_4A016A3 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(BattleResultItemComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleResultItemComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultItemComponent___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)BattleResultItemComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B64ACC(this, 0LL);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_37380696(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_37381088(s->fields.type, 0LL);
}


bool __fastcall BattleResultItemComponent___c___setResultData_b__48_2(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64ACC(this, 0LL);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_37380696(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_37381088(s->fields.type, 0LL);
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
  if ( (byte_4A016A4 & 1) == 0 )
  {
    this = (BattleResultItemComponent___c__DisplayClass48_0_o *)sub_1B64870(
                                                                  &Method_System_Collections_Generic_List_BattleDropItem__get_Item__,
                                                                  e);
    byte_4A016A4 = 1;
  }
  if ( !e
    || (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)v4->fields.list) == 0LL
    || (itemId = e->fields.itemId,
        (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v4->fields.i,
                                                                       (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__)) == 0LL) )
  {
    sub_1B64ACC(this, e);
  }
  return itemId == this->fields.i;
}


void __fastcall BattleResultItemComponent___c__DisplayClass56_0___ctor(
        BattleResultItemComponent___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultItemComponent___c__DisplayClass56_0___PlayVoiceCoroutine_b__0(
        BattleResultItemComponent___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  this->fields.IsVoiceComp = 1;
}


void __fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__58___ctor(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__58__MoveNext(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *v2; // x19
  __int64 v3; // x1
  int32_t _1__state; // w8
  UnityEngine_Object_o *itemIconEffectObj; // x20
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *v6; // x20
  int v7; // s0
  UnityEngine_WaitForSeconds_o *v10; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  bool result; // w0
  struct BattleDropItemComponent_o *dropItem; // x8

  v2 = this;
  if ( (byte_4A016A8 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)sub_1B64870(
                                                                               &UnityEngine_WaitForSeconds_TypeInfo,
                                                                               v3);
    byte_4A016A8 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    dropItem = v2->fields.dropItem;
    v2->fields.__1__state = -1;
    if ( !dropItem )
      goto LABEL_19;
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)dropItem->fields.root;
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
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)v2->fields.itemIconEffectObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)v2->fields.itemIconEffectObj;
      if ( this )
      {
        this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)UnityEngine_GameObject__get_transform(
                                                                                   (UnityEngine_GameObject_o *)this,
                                                                                   0LL);
        if ( v2->fields.dropItem )
        {
          v6 = this;
          this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)UnityEngine_Component__get_transform(
                                                                                     (UnityEngine_Component_o *)v2->fields.dropItem,
                                                                                     0LL);
          if ( this )
          {
            *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
            if ( v6 )
            {
              UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v6, *(UnityEngine_Vector3_o *)&v7, 0LL);
LABEL_14:
              v10 = (UnityEngine_WaitForSeconds_o *)sub_1B64ABC(UnityEngine_WaitForSeconds_TypeInfo);
              UnityEngine_WaitForSeconds___ctor(v10, 0.2333, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v10;
              p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B64814(p__2__current, (int32_t)v10, v12, v13);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
              return result;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1B64ACC(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__58__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleResultItemComponent__itemFlashAnimationCoroutine_d__58__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64884(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64ABC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64884(&Method_BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_System_Collections_IEnumerator_Reset__);
  sub_1B64998(v3, v4);
}


Il2CppObject *__fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__58__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__58__System_IDisposable_Dispose(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  ;
}