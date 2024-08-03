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

  if ( (byte_49FF5A4 & 1) == 0 )
  {
    sub_1B640C8(&BattleResultItemComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_20187/*"img_bg_total_dp"*/, v4);
    sub_1B640C8(&StringLiteral_2940/*"BATTLE_RESULT_GET_EP"*/, v5);
    sub_1B640C8(&StringLiteral_20188/*"img_bg_total_ep"*/, v6);
    byte_49FF5A4 = 1;
  }
  BattleResultItemComponent_TypeInfo->static_fields->EP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_20188/*"img_bg_total_ep"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleResultItemComponent_TypeInfo->static_fields,
    StringLiteral_20188/*"img_bg_total_ep"*/,
    v2,
    v3);
  v7 = StringLiteral_20187/*"img_bg_total_dp"*/;
  static_fields = BattleResultItemComponent_TypeInfo->static_fields;
  static_fields->DP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_20187/*"img_bg_total_dp"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->DP_SP_BASE_NAME, v7, v9, v10);
  v11 = BattleResultItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&v11->EP_GET_POSY_NORMAL = 3245342720LL;
  *(_QWORD *)&v11->EP_GET_FONT_NORMAL = 0x130000001ALL;
  v12 = StringLiteral_2940/*"BATTLE_RESULT_GET_EP"*/;
  v11->EP_GET_LOCALE_KEY = (struct System_String_o *)StringLiteral_2940/*"BATTLE_RESULT_GET_EP"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->EP_GET_LOCALE_KEY, v12, v13, v14);
  BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH = 142;
}


void __fastcall BattleResultItemComponent___ctor(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF5A3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Color___TypeInfo, method);
    byte_49FF5A3 = 1;
  }
  v3 = (struct UnityEngine_Color_array *)sub_1B64170(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.showModeChanButtonLabelEffectColors = v3;
  sub_1B6406C(
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
  if ( (byte_49FF587 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    this = (BattleResultItemComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FF587 = 1;
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
                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( this )
    {
      v10 = this;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
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
                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
    sub_1B64324(this);
  }
}


void __fastcall BattleResultItemComponent__Close(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_49FF59A & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultItemComponent_endClose__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_49FF59A = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v8 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v6, v7),
        BattleWindowComponent_EndCall___ctor(v8, (Il2CppObject *)this, Method_BattleResultItemComponent_endClose__, 0LL),
        !window) )
  {
    sub_1B64324(itemWindow);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v8,
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_49FF590 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, flg);
    sub_1B640C8(&Method_BattleResultItemComponent_EndCloseDialogCallBack__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FF590 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_1B64324(v10);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v9, 0LL);
}


void __fastcall BattleResultItemComponent__EndCloseDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF591 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3558/*"CLOSE"*/, method);
    byte_49FF591 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3558/*"CLOSE"*/, 0LL);
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
  BattleResultItemComponent_o *EntitiesFromEventPointUpperId; // x0
  const MethodInfo *v15; // x2
  int32_t v16; // w19
  int32_t key; // w29
  BattleResultItemComponent_o *v18; // x20
  const MethodInfo *v19; // x2
  _BOOL8 IsOpen; // x0
  __int64 v21; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  bool v23; // w21
  signed __int64 i; // x25
  _DWORD *v25; // x8
  int32_t v26; // w22
  int32_t v27; // w24
  int64_t v28; // x23
  int32_t v29; // w22
  int32_t v30; // w24
  int64_t v31; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v33; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_49FF5A0 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, *(_QWORD *)&eventPointUpperId);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___, v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__,
      v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__,
      v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___get_Current__,
      v8);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Key__, v9);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Value__,
      v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FF5A0 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___)) == 0LL
    || (EntitiesFromEventPointUpperId = (BattleResultItemComponent_o *)EventPointUpperReleaseMaster__GetEntitiesFromEventPointUpperId(
                                                                         (EventPointUpperReleaseMaster_o *)Instance,
                                                                         eventPointUpperId,
                                                                         0LL),
        (Instance = (DataManager_o *)BattleResultItemComponent__GetEventPointUpperReleases(
                                       EntitiesFromEventPointUpperId,
                                       (EventPointUpperReleaseEntity_array *)EntitiesFromEventPointUpperId,
                                       v15)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v33,
    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
  v16 = 0;
  v34 = v33;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v34,
            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__) )
  {
    if ( !v34.fields._current.fields.value )
      sub_1B64324(0LL);
    key = (int32_t)v34.fields._current.fields.key;
    v18 = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___ToArray(
                                           (System_Collections_Generic_List_object__o *)v34.fields._current.fields.value,
                                           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    IsOpen = BattleResultItemComponent__GetIsAndCondGroup(v18, (EventPointUpperReleaseEntity_array *)v18, v19);
    if ( !v18 )
      sub_1B64324(IsOpen);
    m_CancellationTokenSource = v18->fields.m_CancellationTokenSource;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v23 = IsOpen;
      for ( i = 0LL; i < (int)m_CancellationTokenSource; ++i )
      {
        if ( i >= (unsigned __int64)(unsigned int)m_CancellationTokenSource )
          sub_1B6432C(IsOpen, v21);
        v25 = (_DWORD *)*((_QWORD *)&v18->fields.parentComp + i);
        if ( v23 )
        {
          if ( !v25 )
            sub_1B64324(IsOpen);
          v27 = v25[9];
          v26 = v25[10];
          v28 = (int)v25[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v27, v26, v28, 0, 0LL);
          if ( !IsOpen )
            goto LABEL_28;
        }
        else
        {
          if ( !v25 )
            sub_1B64324(IsOpen);
          v30 = v25[9];
          v29 = v25[10];
          v31 = (int)v25[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v30, v29, v31, 0, 0LL);
          if ( IsOpen )
            break;
          if ( i >= LODWORD(v18->fields.m_CancellationTokenSource) - 1 )
            goto LABEL_28;
        }
        LODWORD(m_CancellationTokenSource) = v18->fields.m_CancellationTokenSource;
      }
    }
    if ( v16 < key )
      v16 = key;
  }
LABEL_28:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v34,
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
  return v16;
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
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8

  if ( (byte_49FF5A1 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__,
      entities);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__, v6);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo, v10);
    byte_49FF5A1 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo,
                                                                  entities,
                                                                  method);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
  if ( !entities )
    goto LABEL_18;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1B6432C(Item, v13);
      v16 = entities->m_Items[v15];
      if ( !v16 || !v11 )
        break;
      priority = v16->fields.priority;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v11,
              priority,
              (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__) )
      {
        v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo,
                                                             v18,
                                                             v19);
        System_Collections_Generic_List_object____ctor(
          v20,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v11,
          priority,
          (Il2CppObject *)v20,
          (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
      }
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                            v11,
                                                            priority,
                                                            (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
      if ( !Item )
        break;
      items = Item->fields._items;
      v24 = Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__;
      ++Item->fields._version;
      if ( !items )
        break;
      size = Item->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          (Il2CppObject *)v16,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        Item->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v16;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v16, v21, v22);
      }
      max_length = entities->max_length;
      if ( (int)++v15 >= max_length )
        return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v11;
    }
LABEL_18:
    sub_1B64324(Item);
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

  if ( (byte_49FF5A2 & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&priority);
    byte_49FF5A2 = 1;
  }
  if ( !entities )
LABEL_15:
    sub_1B64324(this);
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
        sub_1B6432C(this, *(_QWORD *)&priority);
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
        sub_1B6432C(this, entities);
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
    sub_1B64324(this);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleResultItemComponent_o *v11; // x21
  struct BattleResultComponent_o *parentComp; // x8
  BattleResultItemComponent_o *EventPointUpperPriority; // x0
  const MethodInfo *v14; // x3

  v6 = this;
  if ( (byte_49FF59F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPointUpperMaster___, eventDetailEntity);
    this = (BattleResultItemComponent_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FF59F = 1;
  }
  if ( !eventDetailEntity )
    goto LABEL_14;
  if ( !EventDetailEntity__IsEventPointByQp(eventDetailEntity, 0LL) )
    goto LABEL_12;
  this = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPointUpperMaster___);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)EventPointUpperMaster__GetEntitiesFromEventId(
                                          (EventPointUpperMaster_o *)this,
                                          eventDetailEntity->fields.eventId,
                                          0LL);
  if ( !this )
    return (char)this;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v11 = this;
  if ( !m_CancellationTokenSource )
  {
LABEL_12:
    LOBYTE(this) = 0;
    return (char)this;
  }
  if ( !(_DWORD)m_CancellationTokenSource )
    sub_1B6432C(this, v8);
  parentComp = this->fields.parentComp;
  if ( !parentComp )
LABEL_14:
    sub_1B64324(this);
  EventPointUpperPriority = (BattleResultItemComponent_o *)BattleResultItemComponent__GetEventPointUpperPriority(
                                                             v6,
                                                             *((_DWORD *)&parentComp->fields.UnityEngine_Behaviour_Fields
                                                             + 1),
                                                             v9);
  LOBYTE(this) = BattleResultItemComponent__GetEventPointUpperValue(
                   EventPointUpperPriority,
                   (int32_t)EventPointUpperPriority,
                   (EventPointUpperEntity_array *)v11,
                   v14) <= userEventPoint;
  return (char)this;
}


void __fastcall BattleResultItemComponent__Init(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleWindowComponent_o *window; // x0
  System_String_o *v5; // x20

  if ( (byte_49FF581 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_2934/*"BATTLE_RESULTITEM_TITLECONF"*/, v3);
    byte_49FF581 = 1;
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
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2934/*"BATTLE_RESULTITEM_TITLECONF"*/, 0LL);
  if ( !window )
    goto LABEL_14;
  v5 = (System_String_o *)window;
  if ( !System_String__Equals_61383712((System_String_o *)window, (System_String_o *)StringLiteral_2934/*"BATTLE_RESULTITEM_TITLECONF"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_14;
    UILabel__set_text((UILabel_o *)window, v5, 0LL);
  }
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  if ( !window )
LABEL_14:
    sub_1B64324(window);
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
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *showModeChangeButton; // x0
  __int64 *v9; // x8
  __int64 v10; // x1
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FF59D & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultItemComponent_OnClickSwitchShowMode__, method);
    sub_1B640C8(&StringLiteral_17409/*"btn_bg_20"*/, v3);
    sub_1B640C8(&StringLiteral_17410/*"btn_bg_21"*/, v4);
    byte_49FF59D = 1;
  }
  v5 = Method_BattleResultItemComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_BattleResultItemComponent_OnClickSwitchShowMode__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  showModeChangeButton = this->fields.showModeChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !showModeChangeButton
    || (isShowPossessionNum ? (v9 = &StringLiteral_17409/*"btn_bg_20"*/) : (v9 = &StringLiteral_17410/*"btn_bg_21"*/),
        UIButton__set_normalSprite(showModeChangeButton, (System_String_o *)*v9, 0LL),
        (showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors) == 0LL) )
  {
LABEL_18:
    sub_1B64324(showModeChangeButton);
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
    sub_1B6432C(showModeChangeButton, v10);
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
  __int64 v8; // x1
  __int64 v9; // x2
  BattleWindowComponent_EndCall_o *v10; // x21
  const MethodInfo *v11; // x1

  if ( (byte_49FF582 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultItemComponent_endOpen__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v4);
    sub_1B640C8(&StringLiteral_5458/*"END_OPEN"*/, v5);
    byte_49FF582 = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0LL);
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot
    || (touchNextRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      touchNextRoot,
                                                      (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (UIWidget__set_depth((UIWidget_o *)touchNextRoot, 200, 0LL),
        (touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5458/*"END_OPEN"*/, 0LL),
        window = this->fields.window,
        v10 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v8, v9),
        BattleWindowComponent_EndCall___ctor(v10, (Il2CppObject *)this, Method_BattleResultItemComponent_endOpen__, 0LL),
        !window) )
  {
LABEL_9:
    sub_1B64324(touchNextRoot);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v10,
    window->klass->vtable._11_CompOpen.methodPtr);
  BattleResultItemComponent__setCondensedScale(this, v11);
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FF58C & 1) == 0 )
  {
    sub_1B640C8(&BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_TypeInfo, method);
    byte_49FF58C = 1;
  }
  v4 = sub_1B64314(BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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

  if ( (byte_49FF58B & 1) == 0 )
  {
    sub_1B640C8(&BattleResultItemComponent__PlayVoiceCoroutine_d__56_TypeInfo, callback);
    byte_49FF58B = 1;
  }
  v5 = sub_1B64314(BattleResultItemComponent__PlayVoiceCoroutine_d__56_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 48) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleResultItemComponent__SetAddItemIconEffect(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  int32_t size; // w8
  int v15; // w22
  int v16; // w23
  Il2CppObject *v17; // x20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x20
  struct BattleViewItemlistComponent_o *v20; // x8
  int32_t v21; // w28
  Il2CppObject *v22; // x20
  int32_t v23; // w21
  struct UILabel_o *getEventPointLabel; // x8
  BattleResultItemComponent_o *v25; // x23
  BattleResultItemComponent_o *v26; // x24
  BattleResultItemComponent_o *v27; // x25
  __int64 v28; // x1
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t animationSvtId; // [xsp+8h] [xbp-68h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-64h] BYREF

  v2 = this;
  if ( (byte_49FF589 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, method);
    sub_1B640C8(&AssetManager_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v4);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_18725/*"ef_additem"*/, v10);
    this = (BattleResultItemComponent_o *)sub_1B640C8(&StringLiteral_5791/*"Effect/BattleResult/{0}/{1}"*/, v11);
    byte_49FF589 = 1;
  }
  itemWindow = v2->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_30;
  itemObjectList = itemWindow->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_30;
  size = itemObjectList->fields._size;
  g_eventId = v2->fields.g_eventId;
  v15 = 7 * (size / 7);
  if ( size == v15 )
    v16 = -21;
  else
    v16 = -14;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId);
  animationSvtId = v2->fields.animationSvtId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId);
  v19 = System_String__Format_61389768((System_String_o *)StringLiteral_5791/*"Effect/BattleResult/{0}/{1}"*/, v17, v18, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleResultItemComponent_o *)AssetManager__getAssetStorage(v19, 0LL);
  if ( !this
    || (this = (BattleResultItemComponent_o *)AssetData__GetObject_object__48347676(
                                                (AssetData_o *)this,
                                                (System_String_o *)StringLiteral_18725/*"ef_additem"*/,
                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960),
        (v20 = v2->fields.itemWindow) == 0LL) )
  {
LABEL_30:
    sub_1B64324(this);
  }
  v21 = v16 + v15;
  v22 = (Il2CppObject *)this;
  v23 = 0;
  while ( 1 )
  {
    this = (BattleResultItemComponent_o *)v20->fields.itemObjectList;
    if ( !this )
      goto LABEL_30;
    if ( v23 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      break;
    if ( v21 <= v23 )
    {
      this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v23,
                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_30;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( !this )
        goto LABEL_30;
      getEventPointLabel = this->fields.getEventPointLabel;
      v25 = this;
      if ( !getEventPointLabel )
        goto LABEL_30;
      if ( BYTE5(getEventPointLabel->fields.mGo) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleResultItemComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                v22,
                                                (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_30;
        v26 = this;
        this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
        if ( !this )
          goto LABEL_30;
        v27 = this;
        UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v2->fields.effectRoot, 0LL);
        if ( !byte_49F7111 )
        {
          sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v28);
          byte_49F7111 = 1;
        }
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v27,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( !byte_49F7116 )
        {
          sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v29);
          byte_49F7116 = 1;
        }
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v27,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v26, 0, 0LL);
        v25->fields.eventPointMaxSprite = (struct UISprite_o *)v26;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->fields.eventPointMaxSprite, (int32_t)v26, v30, v31);
      }
    }
    v20 = v2->fields.itemWindow;
    ++v23;
    if ( !v20 )
      goto LABEL_30;
  }
}


void __fastcall BattleResultItemComponent__SetAddItemSvtAnimation(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x20
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__48347676; // x20
  UnityEngine_GameObject_o *v14; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Transform_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t animationSvtId; // [xsp+8h] [xbp-38h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF588 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, method);
    sub_1B640C8(&AssetManager_TypeInfo, v3);
    sub_1B640C8(&int_TypeInfo, v4);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_18776/*"ef_presenter"*/, v7);
    sub_1B640C8(&StringLiteral_5791/*"Effect/BattleResult/{0}/{1}"*/, v8);
    byte_49FF588 = 1;
  }
  g_eventId = this->fields.g_eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId);
  animationSvtId = this->fields.animationSvtId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId);
  v11 = System_String__Format_61389768((System_String_o *)StringLiteral_5791/*"Effect/BattleResult/{0}/{1}"*/, v9, v10, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v11, 0LL);
  if ( !AssetStorage )
    goto LABEL_16;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              AssetStorage,
                              (System_String_o *)StringLiteral_18776/*"ef_presenter"*/,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                  Object_object__48347676,
                                  (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !AssetStorage
    || (v14 = (UnityEngine_GameObject_o *)AssetStorage,
        AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)AssetStorage,
                                        0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (v16 = (UnityEngine_Transform_o *)AssetStorage) == 0LL )
  {
LABEL_16:
    sub_1B64324(AssetStorage);
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)AssetStorage, itemWindow->fields.listRoot, 0LL);
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v17);
    byte_49F7111 = 1;
  }
  UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_49F7116 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v18);
    byte_49F7116 = 1;
  }
  UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  UnityEngine_GameObject__SetActive(v14, 0, 0LL);
  this->fields.addItemSvtAnimationObj = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.addItemSvtAnimationObj, (int32_t)v14, v19, v20);
}


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
    sub_1B64324(nomalRootObj);
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
  Il2CppObject *v26; // x0
  int32_t qp; // w29
  int32_t QpMax; // w8
  int v29; // w26
  UILabel_o *nowQpLabel; // x25
  Il2CppObject *v31; // x0
  UnityEngine_Object_o *rootEventDamagePoint; // x25
  int32_t v33; // w5
  const MethodInfo *v34; // [xsp+0h] [xbp-70h]
  int v35; // [xsp+8h] [xbp-68h] BYREF
  int32_t v36; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FF585 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&int_TypeInfo, v20);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v21);
    sub_1B640C8(&StringLiteral_24834/*"{0:#,0}"*/, v22);
    sub_1B640C8(&StringLiteral_862/*"+ {0:#,0}"*/, v23);
    byte_49FF585 = 1;
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
  v36 = countQp;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_862/*"+ {0:#,0}"*/, v26, 0LL);
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
    v29 = oldGame->fields.qp + countQp;
    if ( v29 < 0 )
      goto LABEL_33;
    if ( !LODWORD(groupRootObj[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(groupRootObj);
      groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v29 > QpMax )
    {
LABEL_33:
      if ( !LODWORD(groupRootObj[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(groupRootObj);
        groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      }
      v29 = *(_DWORD *)(*(_QWORD *)&groupRootObj[7].fields.m_CachedPtr + 4LL);
    }
  }
  else
  {
    v29 = userGame->fields.qp - (firstClearRewardQp + conquestRewardQp);
  }
  nowQpLabel = this->fields.nowQpLabel;
  v35 = v29;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v31, 0LL);
  if ( !nowQpLabel
    || (UILabel__set_text(nowQpLabel, (System_String_o *)groupRootObj, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.getQpLabel, 215, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.nowQpLabel, 215, 0LL),
        (groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventPoint) == 0LL) )
  {
LABEL_30:
    sub_1B64324(groupRootObj);
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
      v33,
      countQp,
      isNotDisplayEventPoint,
      v34);
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

  if ( (byte_49FF58A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, callback);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v5);
    byte_49FF58A = 1;
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
                                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
    sub_1B64324(addItemSvtAnimationObj);
  }
LABEL_18:
  v23 = BattleResultItemComponent__PlayVoiceCoroutine(this, callback, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_49FF598 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, flg);
    sub_1B640C8(&Method_BattleResultItemComponent_EndCloseDialogCallBack__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FF598 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_1B64324(v10);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v9, 0LL);
}


void __fastcall BattleResultItemComponent__endClose(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49FF59B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FF59B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64324(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endCommandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF599 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3558/*"CLOSE"*/, method);
    byte_49FF599 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3558/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endItemDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF595 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3558/*"CLOSE"*/, method);
    byte_49FF595 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3558/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endOpen(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF583 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9197/*"NEXT"*/, method);
    byte_49FF583 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9197/*"NEXT"*/, 0LL),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0LL) )
  {
    sub_1B64324(myFsm);
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
  struct System_Collections_Generic_List_BattleDropItem__o *v7; // x8
  BattleDropItem_o *v8; // x19

  if ( (byte_49FF59C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v4);
    byte_49FF59C = 1;
  }
  newDroplist = (System_Collections_Generic_List_object__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0LL;
  Item = System_Collections_Generic_List_object___get_Item(
           newDroplist,
           0,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
  v7 = this->fields.newDroplist;
  if ( !v7 )
    sub_1B64324(Item);
  v8 = (BattleDropItem_o *)Item;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)v7,
    0,
    (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v8;
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_49FF594 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, flg);
    sub_1B640C8(&Method_BattleResultItemComponent_endItemDialogCallBack__, v4);
    sub_1B640C8(&Method_BattleResultItemComponent_itemDialogCallBack__, v5);
    byte_49FF594 = 1;
  }
  v6 = Method_BattleResultItemComponent_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_itemDialogCallBack__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_BattleResultItemComponent_itemDialogCallBack__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  itemDialog = this->fields.itemDialog;
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleResultItemComponent_endItemDialogCallBack__, 0LL);
  if ( !itemDialog )
    sub_1B64324(v12);
  ItemDetailInfoComponent__Close_30837824(itemDialog, v11, 0LL);
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

  if ( (byte_49FF58D & 1) == 0 )
  {
    sub_1B640C8(&BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_TypeInfo, itemIconEffectObj);
    byte_49FF58D = 1;
  }
  v6 = sub_1B64314(BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_TypeInfo, itemIconEffectObj, dropItem);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = itemIconEffectObj;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)itemIconEffectObj, v7, v8);
  *(_QWORD *)(v6 + 40) = dropItem;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)dropItem, v9, v10);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleResultItemComponent__setCondensedScale(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *getBoostLabel; // x0
  UILabel_o *getTitleLabel; // x20

  if ( (byte_49FF59E & 1) == 0 )
  {
    sub_1B640C8(&BattleResultItemComponent_TypeInfo, method);
    byte_49FF59E = 1;
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
    sub_1B64324(getBoostLabel);
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
  Il2CppObject *Entity; // x0
  EventDetailEntity_o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x8
  UserEventPointEntity_o *v39; // x8
  UserEventPointEntity_o *v40; // x8
  int64_t v41; // x25
  __int64 v42; // x26
  const MethodInfo *v43; // x3
  UserEventPointEntity_o *v44; // x8
  int64_t v45; // x22
  const MethodInfo *v46; // x3
  UserEventPointEntity_o *v47; // x8
  Il2CppObject *MasterData_object; // x0
  UserEventRaidMaster_o *v49; // x21
  UnityEngine_Object_o *rootEventDamagePoint; // x23
  int64_t TotalDamagePoint; // x21
  BalanceConfig_c *v52; // x8
  int64_t UserRaidDamagePointMax; // x23
  int64_t v54; // x21
  int64_t v55; // x0
  UILabel_o *getEventDamagePointLabel; // x22
  Il2CppObject *v57; // x0
  UILabel_o *nowEventDamagePointLabel; // x22
  Il2CppObject *v59; // x0
  BattleResultItemComponent_c *v60; // x0
  System_String_o *DP_SP_BASE_NAME; // x21
  System_String_o *v62; // x0
  struct UISprite_o *eventDamageBGSprite; // x8
  Il2CppObject *v64; // x21
  BattleResultItemComponent_c *v65; // x0
  UISprite_o *eventDamageIconSprite; // x21
  int32_t v67; // w20
  UILabel_o *getEventPointLabel; // x23
  Il2CppObject *v69; // x0
  UILabel_o *nowEventPointLabel; // x23
  Il2CppObject *v71; // x0
  UISprite_o *eventIconSprite; // x23
  int32_t pointImageId; // w24
  UILabel_o *getTitleLabel; // x23
  __int64 v75; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  BattleResultItemComponent_c *v77; // x8
  UnityEngine_GameObject_o *v78; // x23
  struct BattleResultItemComponent_StaticFields *static_fields; // x8
  __int64 v80; // x9
  BattleResultItemComponent_c *v81; // x0
  System_String_o *EP_GET_LOCALE_KEY; // x23
  System_String_o *v83; // x0
  System_String_o *v84; // x23
  BattleResultItemComponent_c *v85; // x0
  UILabel_o *v86; // x24
  UILabel_o *getBoostLabel; // x23
  System_String_o *v88; // x24
  Il2CppObject *v89; // x0
  System_String_o *v90; // x1
  BattleResultItemComponent_c *v91; // x0
  System_String_o *EP_SP_BASE_NAME; // x21
  System_String_o *v93; // x0
  struct UISprite_o *eventPointBgSprite; // x8
  Il2CppObject *v95; // x21
  BattleResultItemComponent_c *v96; // x0
  UnityEngine_Object_o *eventPointMaxSprite; // x21
  UnityEngine_GameObject_o *v98; // x21
  const MethodInfo *v99; // x3
  int64_t v100; // [xsp+0h] [xbp-70h] BYREF
  __int64 v101; // [xsp+8h] [xbp-68h] BYREF
  int32_t eventIda; // [xsp+1Ch] [xbp-54h] BYREF

  eventIda = eventId;
  if ( (byte_49FF586 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&BalanceConfig_TypeInfo, v16);
    sub_1B640C8(&BattleResultItemComponent_TypeInfo, v17);
    sub_1B640C8(&Method_BetterList_string__Contains__, v18);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v19);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v20);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v21);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v22);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v23);
    sub_1B640C8(&long_TypeInfo, v24);
    sub_1B640C8(&LocalizationManager_TypeInfo, v25);
    sub_1B640C8(&System_Math_TypeInfo, v26);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v27);
    sub_1B640C8(&float_TypeInfo, v28);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1B640C8(&StringLiteral_2941/*"BATTLE_RESULT_GET_EP_RATE"*/, v30);
    sub_1B640C8(&StringLiteral_24834/*"{0:#,0}"*/, v31);
    sub_1B640C8(&StringLiteral_1/*""*/, v32);
    sub_1B640C8(&StringLiteral_862/*"+ {0:#,0}"*/, v33);
    byte_49FF586 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_109;
  if ( !DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          eventId,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
    return;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_109;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    v36 = (EventDetailEntity_o *)Entity;
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
          Instance = EventDetailEntity__IsEventPointByQp(v36, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v45 = v41;
            goto LABEL_59;
          }
          if ( oldUsrPoint->max_length )
          {
            v44 = oldUsrPoint->m_Items[0];
            if ( !v44 )
              goto LABEL_109;
            v45 = v44->fields.value + countQp;
            if ( !BattleResultItemComponent__GetIsShowEventPointMax(this, v36, v41, v43) )
            {
              v42 = countQp;
              goto LABEL_59;
            }
            Instance = BattleResultItemComponent__GetIsShowEventPointMax(this, v36, v45, v46);
            if ( (Instance & 1) != 0 )
              v45 = v41;
            if ( oldUsrPoint->max_length )
            {
              v47 = oldUsrPoint->m_Items[0];
              if ( !v47 )
                goto LABEL_109;
              v42 = v45 - v47->fields.value;
LABEL_59:
              getEventPointLabel = this->fields.getEventPointLabel;
              v101 = v42;
              v69 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v101);
              Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_862/*"+ {0:#,0}"*/, v69, 0LL);
              if ( getEventPointLabel )
              {
                UILabel__set_text(getEventPointLabel, (System_String_o *)Instance, 0LL);
                nowEventPointLabel = this->fields.nowEventPointLabel;
                v100 = v45;
                v71 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v100);
                Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v71, 0LL);
                if ( nowEventPointLabel )
                {
                  UILabel__set_text(nowEventPointLabel, (System_String_o *)Instance, 0LL);
                  CommonFunction__ScalingLabelWidth(this->fields.getEventPointLabel, 215, 0LL);
                  CommonFunction__ScalingLabelWidth(this->fields.nowEventPointLabel, 215, 0LL);
                  eventIconSprite = this->fields.eventIconSprite;
                  pointImageId = v36->fields.pointImageId;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  AtlasManager__SetItem(eventIconSprite, pointImageId, 0LL);
                  getTitleLabel = this->fields.getTitleLabel;
                  Instance = (__int64)BattleResultItemComponent_TypeInfo;
                  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                  if ( getTitleLabel )
                  {
                    v75 = 24LL;
                    if ( boostRate > 0 )
                      v75 = 28LL;
                    UILabel__set_fontSize(
                      getTitleLabel,
                      *(_DWORD *)((char *)&BattleResultItemComponent_TypeInfo->static_fields->EP_SP_BASE_NAME + v75),
                      0LL);
                    Instance = (__int64)this->fields.getTitleLabel;
                    if ( Instance )
                    {
                      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                      v77 = BattleResultItemComponent_TypeInfo;
                      v78 = gameObject;
                      if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                        v77 = BattleResultItemComponent_TypeInfo;
                      }
                      static_fields = v77->static_fields;
                      v80 = 16LL;
                      if ( boostRate > 0 )
                        v80 = 20LL;
                      GameObjectExtensions__SetLocalPositionY(
                        v78,
                        *(float *)((char *)&static_fields->EP_SP_BASE_NAME + v80),
                        0LL);
                      v81 = BattleResultItemComponent_TypeInfo;
                      if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                        v81 = BattleResultItemComponent_TypeInfo;
                      }
                      EP_GET_LOCALE_KEY = v81->static_fields->EP_GET_LOCALE_KEY;
                      v83 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                      v84 = System_String__Concat_61375396(EP_GET_LOCALE_KEY, v83, 0LL);
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      if ( !LocalizationManager__ContainsKey(v84, 0LL) )
                      {
                        v85 = BattleResultItemComponent_TypeInfo;
                        if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                          v85 = BattleResultItemComponent_TypeInfo;
                        }
                        v84 = v85->static_fields->EP_GET_LOCALE_KEY;
                      }
                      v86 = this->fields.getTitleLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      Instance = (__int64)LocalizationManager__Get(v84, 0LL);
                      if ( v86 )
                      {
                        UILabel__set_text(v86, (System_String_o *)Instance, 0LL);
                        getBoostLabel = this->fields.getBoostLabel;
                        if ( boostRate <= 0 )
                        {
                          v90 = (System_String_o *)StringLiteral_1/*""*/;
                        }
                        else
                        {
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v88 = LocalizationManager__Get((System_String_o *)StringLiteral_2941/*"BATTLE_RESULT_GET_EP_RATE"*/, 0LL);
                          *(float *)&v101 = (float)((float)boostRate / 1000.0) + 1.0;
                          v89 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v101);
                          Instance = (__int64)System_String__Format(v88, v89, 0LL);
                          v90 = (System_String_o *)Instance;
                        }
                        if ( getBoostLabel )
                        {
                          UILabel__set_text(getBoostLabel, v90, 0LL);
                          v91 = BattleResultItemComponent_TypeInfo;
                          if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                            v91 = BattleResultItemComponent_TypeInfo;
                          }
                          EP_SP_BASE_NAME = v91->static_fields->EP_SP_BASE_NAME;
                          v93 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                          Instance = (__int64)System_String__Concat_61375396(EP_SP_BASE_NAME, v93, 0LL);
                          eventPointBgSprite = this->fields.eventPointBgSprite;
                          if ( eventPointBgSprite )
                          {
                            v95 = (Il2CppObject *)Instance;
                            Instance = (__int64)eventPointBgSprite->fields.mAtlas;
                            if ( Instance )
                            {
                              Instance = (__int64)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
                              if ( Instance )
                              {
                                if ( !BetterList_object___Contains(
                                        (BetterList_T__o *)Instance,
                                        v95,
                                        (const MethodInfo_304F058 *)Method_BetterList_string__Contains__) )
                                {
                                  v96 = BattleResultItemComponent_TypeInfo;
                                  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                                    v96 = BattleResultItemComponent_TypeInfo;
                                  }
                                  v95 = (Il2CppObject *)v96->static_fields->EP_SP_BASE_NAME;
                                }
                                Instance = (__int64)this->fields.eventPointBgSprite;
                                if ( Instance )
                                {
                                  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v95, 0LL);
                                  eventPointMaxSprite = (UnityEngine_Object_o *)this->fields.eventPointMaxSprite;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  if ( UnityEngine_Object__op_Inequality(eventPointMaxSprite, 0LL, 0LL) )
                                  {
                                    Instance = (__int64)this->fields.eventPointMaxSprite;
                                    if ( !Instance )
                                      goto LABEL_109;
                                    v98 = UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)Instance,
                                            0LL);
                                    Instance = BattleResultItemComponent__GetIsShowEventPointMax(this, v36, v45, v99);
                                    if ( !v98 )
                                      goto LABEL_109;
                                    UnityEngine_GameObject__SetActive(v98, Instance & 1, 0LL);
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
              sub_1B64324(Instance);
            }
          }
LABEL_110:
          sub_1B6432C(Instance, v37);
        }
      }
      else
      {
        if ( (addDamagePoint & 0x8000000000000000LL) != 0 )
          return;
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_109;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
        if ( MasterData_object )
        {
          v49 = (UserEventRaidMaster_o *)MasterData_object;
          rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(rootEventDamagePoint, 0LL, 0LL) )
          {
            TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(v49, eventId, 0LL);
            v52 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v52 = BalanceConfig_TypeInfo;
            }
            UserRaidDamagePointMax = v52->static_fields->UserRaidDamagePointMax;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v54 = System_Math__Min_62194376(TotalDamagePoint, UserRaidDamagePointMax, 0LL);
            v55 = System_Math__Min_62194376(
                    addDamagePoint,
                    BalanceConfig_TypeInfo->static_fields->UserRaidDamagePointMax,
                    0LL);
            getEventDamagePointLabel = this->fields.getEventDamagePointLabel;
            v101 = v55;
            v57 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v101);
            Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_862/*"+ {0:#,0}"*/, v57, 0LL);
            if ( getEventDamagePointLabel )
            {
              UILabel__set_text(getEventDamagePointLabel, (System_String_o *)Instance, 0LL);
              nowEventDamagePointLabel = this->fields.nowEventDamagePointLabel;
              v100 = v54;
              v59 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v100);
              Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v59, 0LL);
              if ( nowEventDamagePointLabel )
              {
                UILabel__set_text(nowEventDamagePointLabel, (System_String_o *)Instance, 0LL);
                v60 = BattleResultItemComponent_TypeInfo;
                if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                  v60 = BattleResultItemComponent_TypeInfo;
                }
                DP_SP_BASE_NAME = v60->static_fields->DP_SP_BASE_NAME;
                v62 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                Instance = (__int64)System_String__Concat_61375396(DP_SP_BASE_NAME, v62, 0LL);
                eventDamageBGSprite = this->fields.eventDamageBGSprite;
                if ( eventDamageBGSprite )
                {
                  v64 = (Il2CppObject *)Instance;
                  Instance = (__int64)eventDamageBGSprite->fields.mAtlas;
                  if ( Instance )
                  {
                    Instance = (__int64)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
                    if ( Instance )
                    {
                      if ( !BetterList_object___Contains(
                              (BetterList_T__o *)Instance,
                              v64,
                              (const MethodInfo_304F058 *)Method_BetterList_string__Contains__) )
                      {
                        v65 = BattleResultItemComponent_TypeInfo;
                        if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                          v65 = BattleResultItemComponent_TypeInfo;
                        }
                        v64 = (Il2CppObject *)v65->static_fields->DP_SP_BASE_NAME;
                      }
                      Instance = (__int64)this->fields.eventDamageBGSprite;
                      if ( Instance )
                      {
                        UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v64, 0LL);
                        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( Instance )
                        {
                          Instance = (__int64)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
                          if ( Instance )
                          {
                            EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventIda, 0LL);
                            eventDamageIconSprite = this->fields.eventDamageIconSprite;
                            v67 = v36->fields.pointImageId;
                            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                            AtlasManager__SetItem(eventDamageIconSprite, v67, 0LL);
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 v49; // x1
  __int64 v50; // x2
  System_Collections_Generic_List_object__o *v51; // x22
  void *object; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_Collections_Generic_List_object__o **v55; // x23
  __int64 v56; // x1
  __int64 v57; // x2
  System_Collections_Generic_List_object__o *v58; // x27
  System_Predicate_object__o *v59; // x22
  Il2CppObject *v60; // x28
  struct BattleResultItemComponent___c_StaticFields *static_fields; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_Collections_Generic_List_T__o *All; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x22
  __int64 v70; // x8
  int v71; // w9
  System_Predicate_object__o **v72; // x25
  System_Predicate_object__o *v73; // x22
  int32_t v74; // w2
  int32_t v75; // w3
  _DWORD *v76; // x22
  struct BattleDropItem_array *gifts; // x1
  int max_length; // w8
  __int64 v79; // x9
  BattleDropItem_o *v80; // x12
  struct System_String_array *voiceIds; // x1
  int32_t v82; // w2
  int32_t v83; // w3
  __int64 v84; // x1
  __int64 v85; // x2
  System_Collections_Generic_List_object__o *v86; // x24
  __int64 v87; // x1
  __int64 v88; // x2
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x25
  BattleResultItemComponent___c_c *v90; // x0
  System_Predicate_object__o *_9__48_2; // x22
  Il2CppObject *v92; // x26
  struct BattleResultItemComponent___c_StaticFields *v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  BattleViewItemlistComponent_o *itemWindow; // x22
  BattleDropItem_array *v97; // x24
  __int64 v98; // x1
  __int64 v99; // x2
  BattleDropItemComponent_ClickDelegate_o *v100; // x25
  const MethodInfo *v101; // x1
  const MethodInfo *v102; // x1
  const MethodInfo *v103; // x1
  UserGameEntity_o *SelfUserGame; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v105; // x28
  int32_t v106; // w27
  _BOOL8 v107; // x0
  BattleDropItem_o *current; // x22
  _BOOL8 isAutoSellItem; // x0
  Il2CppObject *Entity; // x0
  int klass; // w8
  UserEventEntity_array *v112; // x2
  int64_t v113; // x4
  signed int v114; // w8
  signed int v115; // w20
  int32_t conquestRewardQp; // w29
  EventConquestInfo_o *v117; // x22
  int v118; // w8
  UserGameEntity_o *oldGamea; // [xsp+8h] [xbp-E8h]
  const MethodInfo *v120; // [xsp+18h] [xbp-D8h]
  UserEventPointEntity_array *oldUsrPointa; // [xsp+48h] [xbp-A8h]
  int32_t eventIda; // [xsp+54h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v124; // [xsp+58h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v125; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_49FF584 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Find_DropUpInfo___, drop);
    sub_1B640C8(&BattleDropItem_TypeInfo, v23);
    sub_1B640C8(&Method_BattleResultItemComponent_setShowConf__, v24);
    sub_1B640C8(&BattleDropItemComponent_ClickDelegate_TypeInfo, v25);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v26);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__get_Current__, v30);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__, v31);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__, v32);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__, v33);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__Insert__, v34);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, v35);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem___ctor__, v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v37);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v38);
    sub_1B640C8(&System_Collections_Generic_List_BattleDropItem__TypeInfo, v39);
    sub_1B640C8(&System_Predicate_DropUpInfo__TypeInfo, v40);
    sub_1B640C8(&System_Predicate_BattleDropItem__TypeInfo, v41);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1B640C8(&Method_BattleResultItemComponent___c__setResultData_b__48_0__, v43);
    sub_1B640C8(&Method_BattleResultItemComponent___c__setResultData_b__48_2__, v44);
    sub_1B640C8(&Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__, v45);
    sub_1B640C8(&BattleResultItemComponent___c__DisplayClass48_0_TypeInfo, v46);
    sub_1B640C8(&BattleResultItemComponent___c_TypeInfo, v47);
    byte_49FF584 = 1;
  }
  memset(&v125, 0, sizeof(v125));
  v48 = sub_1B64314(BattleResultItemComponent___c__DisplayClass48_0_TypeInfo, drop, *(_QWORD *)&getqp);
  System_Object___ctor((Il2CppObject *)v48, 0LL);
  this->fields.g_eventId = eventId;
  eventIda = eventId;
  v51 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleDropItem__TypeInfo,
                                                       v49,
                                                       v50);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
  if ( !v48 )
    goto LABEL_27;
  *(_QWORD *)(v48 + 16) = v51;
  v55 = (System_Collections_Generic_List_object__o **)(v48 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 16), (int32_t)v51, v53, v54);
  object = *(void **)(v48 + 16);
  if ( !object )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)object,
    (System_Collections_Generic_IEnumerable_T__o *)drop,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
  object = BattleResultItemComponent___c_TypeInfo;
  v58 = *v55;
  if ( !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
    object = BattleResultItemComponent___c_TypeInfo;
  }
  v59 = *(System_Predicate_object__o **)(*((_QWORD *)object + 23) + 8LL);
  if ( !v59 )
  {
    if ( !*((_DWORD *)object + 56) )
    {
      j_il2cpp_runtime_class_init_0(object);
      object = BattleResultItemComponent___c_TypeInfo;
    }
    v60 = (Il2CppObject *)**((_QWORD **)object + 23);
    v59 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_BattleDropItem__TypeInfo, v56, v57);
    System_Predicate_object____ctor(v59, v60, Method_BattleResultItemComponent___c__setResultData_b__48_0__, 0LL);
    static_fields = BattleResultItemComponent___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Predicate_BattleDropItem__o *)v59;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__48_0, (int32_t)v59, v62, v63);
  }
  if ( !v58 )
    goto LABEL_27;
  All = System_Collections_Generic_List_object___FindAll(
          v58,
          (System_Predicate_T__o *)v59,
          (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
  this->fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)All;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.newDroplist, (int32_t)All, v65, v66);
  if ( getqp >= 1 )
  {
    v69 = sub_1B64314(BattleDropItem_TypeInfo, v67, v68);
    BattleDropItem___ctor((BattleDropItem_o *)v69, 0LL);
    if ( !v69 )
      goto LABEL_27;
    *(_QWORD *)(v69 + 20) = 0x500000002LL;
    BattleDropItem__setNum((BattleDropItem_o *)v69, getqp, originalGetQp, 0LL);
    object = *v55;
    if ( !*v55 )
      goto LABEL_27;
    System_Collections_Generic_List_object___Insert(
      (System_Collections_Generic_List_object__o *)object,
      0,
      (Il2CppObject *)v69,
      (const MethodInfo_34AE524 *)Method_System_Collections_Generic_List_BattleDropItem__Insert__);
  }
  oldUsrPointa = oldUsrPoint;
  if ( dropupinfos )
  {
    v70 = *(_QWORD *)(v48 + 16);
    *(_DWORD *)(v48 + 24) = 0;
    if ( !v70 )
      goto LABEL_27;
    v71 = 0;
    v72 = (System_Predicate_object__o **)(v48 + 32);
    while ( v71 < *(_DWORD *)(v70 + 24) )
    {
      v73 = *v72;
      if ( !*v72 )
      {
        v73 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_DropUpInfo__TypeInfo, v67, v68);
        System_Predicate_object____ctor(
          v73,
          (Il2CppObject *)v48,
          Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__,
          0LL);
        *(_QWORD *)(v48 + 32) = v73;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 32), (int32_t)v73, v74, v75);
      }
      object = System_Array__Find_object_(
                 (System_Object_array *)dropupinfos,
                 (System_Predicate_T__o *)v73,
                 (const MethodInfo_2F2FF10 *)Method_System_Array_Find_DropUpInfo___);
      if ( object )
      {
        v76 = object;
        object = *v55;
        if ( !*v55 )
          goto LABEL_27;
        object = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)object,
                   *(_DWORD *)(v48 + 24),
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !object )
          goto LABEL_27;
        *((_DWORD *)object + 18) = v76[5];
      }
      v70 = *(_QWORD *)(v48 + 16);
      v71 = *(_DWORD *)(v48 + 24) + 1;
      *(_DWORD *)(v48 + 24) = v71;
      if ( !v70 )
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
        v79 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v79 >= max_length )
LABEL_83:
            sub_1B6432C(object, gifts);
          v80 = gifts->m_Items[v79];
          if ( !v80 )
            break;
          ++v79;
          v80->fields.isAddReward = 1;
          if ( (int)v79 >= max_length )
            goto LABEL_35;
        }
LABEL_27:
        sub_1B64324(object);
      }
LABEL_35:
      object = *v55;
      if ( !*v55 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)object,
        (System_Collections_Generic_IEnumerable_T__o *)gifts,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      this->fields.animationSvtId = rewardBonus->fields.animationId;
      voiceIds = rewardBonus->fields.voiceIds;
      this->fields.voiceIds = voiceIds;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voiceIds, (int32_t)voiceIds, v82, v83);
      v86 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_BattleDropItem__TypeInfo,
                                                           v84,
                                                           v85);
      System_Collections_Generic_List_object____ctor(
        v86,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
      if ( !v86 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        v86,
        (System_Collections_Generic_IEnumerable_T__o *)rewardBonus->fields.gifts,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      newDroplist = this->fields.newDroplist;
      v90 = BattleResultItemComponent___c_TypeInfo;
      if ( !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
        v90 = BattleResultItemComponent___c_TypeInfo;
      }
      _9__48_2 = (System_Predicate_object__o *)v90->static_fields->__9__48_2;
      if ( !_9__48_2 )
      {
        if ( !v90->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v90);
          v90 = BattleResultItemComponent___c_TypeInfo;
        }
        v92 = (Il2CppObject *)v90->static_fields->__9;
        _9__48_2 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_BattleDropItem__TypeInfo, v87, v88);
        System_Predicate_object____ctor(
          _9__48_2,
          v92,
          Method_BattleResultItemComponent___c__setResultData_b__48_2__,
          0LL);
        v93 = BattleResultItemComponent___c_TypeInfo->static_fields;
        v93->__9__48_2 = (struct System_Predicate_BattleDropItem__o *)_9__48_2;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v93->__9__48_2, (int32_t)_9__48_2, v94, v95);
      }
      object = System_Collections_Generic_List_object___FindAll(
                 v86,
                 (System_Predicate_T__o *)_9__48_2,
                 (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
      if ( !newDroplist )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)newDroplist,
        (System_Collections_Generic_IEnumerable_T__o *)object,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    }
  }
  object = *v55;
  if ( !*v55 )
    goto LABEL_27;
  itemWindow = this->fields.itemWindow;
  v97 = (BattleDropItem_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)object,
                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  v100 = (BattleDropItemComponent_ClickDelegate_o *)sub_1B64314(
                                                      BattleDropItemComponent_ClickDelegate_TypeInfo,
                                                      v98,
                                                      v99);
  BattleDropItemComponent_ClickDelegate___ctor(
    v100,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_setShowConf__,
    0LL);
  if ( !itemWindow )
    goto LABEL_27;
  BattleViewItemlistComponent__setListDataCustomColumn_43712892(
    itemWindow,
    v97,
    eventIda,
    v100,
    this->fields.itemColumnCount,
    0LL);
  object = this->fields.itemWindow;
  if ( !object )
    goto LABEL_27;
  BattleViewItemlistComponent__setHide((BattleViewItemlistComponent_o *)object, 0LL);
  if ( rewardBonus )
  {
    BattleResultItemComponent__AddItemNewLine(this, v101);
    BattleResultItemComponent__SetAddItemSvtAnimation(this, v102);
    BattleResultItemComponent__SetAddItemIconEffect(this, v103);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !object )
    goto LABEL_27;
  object = DataManager__GetMasterData_object_(
             (DataManager_o *)object,
             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*v55 )
    goto LABEL_27;
  v105 = (DataMasterBase_TMaster__TEntity__PKType__o *)object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v124,
    *v55,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
  v106 = 0;
  v125 = v124;
  while ( 1 )
  {
    v107 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v125,
             (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    if ( !v107 )
      break;
    current = (BattleDropItem_o *)v125.fields._current;
    if ( !v125.fields._current )
      sub_1B64324(v107);
    isAutoSellItem = BattleDropItem__isAutoSellItem((BattleDropItem_o *)v125.fields._current, 0LL);
    if ( current->fields.type == 2 )
    {
      if ( !v105 )
        sub_1B64324(isAutoSellItem);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v105,
                 current->fields.objectId,
                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Entity )
        sub_1B64324(0LL);
      klass = (int)Entity[3].klass;
      if ( klass == 1 || klass == 16 )
        v106 += BattleDropItem__getTotalNum(current, 0LL);
    }
    v106 += current->fields.num * current->fields.sellQp;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v125,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
  if ( !eventConquestInfos )
    goto LABEL_27;
  v114 = eventConquestInfos->max_length;
  if ( v114 < 1 )
  {
    conquestRewardQp = 0;
    if ( !viewGroupIds )
      goto LABEL_27;
  }
  else
  {
    v115 = 0;
    conquestRewardQp = 0;
    do
    {
      if ( v115 >= (unsigned int)v114 )
        goto LABEL_83;
      v117 = eventConquestInfos->m_Items[v115];
      if ( !v117 )
        goto LABEL_27;
      if ( v117->fields.type == 2 )
      {
        if ( !v105 )
          goto LABEL_27;
        object = DataMasterBase_object__object__int___GetEntity(
                   v105,
                   v117->fields.objectId,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( object )
        {
          v118 = *((_DWORD *)object + 12);
          if ( v118 == 16 || v118 == 1 )
            conquestRewardQp += v117->fields.getNum;
        }
      }
      v114 = eventConquestInfos->max_length;
      ++v115;
    }
    while ( v115 < v114 );
    if ( !viewGroupIds )
      goto LABEL_27;
  }
  if ( *(_QWORD *)&viewGroupIds->max_length )
    BattleResultItemComponent__SetGroupEventRoot(
      this,
      eventIda,
      v112,
      oldUsrPointa,
      v113,
      SelfUserGame,
      v106,
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
      v106,
      boostRate,
      conquestRewardQp,
      firstClearRewardQp,
      oldGame,
      isNotDisplayEventPoint,
      v120);
}


void __fastcall BattleResultItemComponent__setShowCommandCodeConf(
        BattleResultItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF596 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9588/*"OPEN_COMMANDCODE"*/, commandCodeId);
    byte_49FF596 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9588/*"OPEN_COMMANDCODE"*/, 0LL);
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
    sub_1B64324(this);
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

  if ( (byte_49FF592 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9595/*"OPEN_ITEM"*/, *(_QWORD *)&itemId);
    byte_49FF592 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9595/*"OPEN_ITEM"*/, 0LL);
}


void __fastcall BattleResultItemComponent__setShowServantConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v4; // x19

  v4 = this;
  if ( (byte_49FF58E & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_1B640C8(&StringLiteral_9603/*"OPEN_SERVANT"*/, dropItem);
    byte_49FF58E = 1;
  }
  v4->fields.tmp_userSvtId = 0LL;
  v4->fields.tmp_svtId = 0;
  if ( !dropItem
    || (!BattleDropItem__isAutoSellItem(dropItem, 0LL)
      ? (v4->fields.tmp_userSvtId = dropItem->fields.userSvtId)
      : (v4->fields.tmp_svtId = dropItem->fields.objectId),
        (this = (BattleResultItemComponent_o *)v4->fields.myFsm) == 0LL) )
  {
    sub_1B64324(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9603/*"OPEN_SERVANT"*/, 0LL);
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
  Il2CppObject *Entity; // x20
  Il2CppObject *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  ServantStatusDialog_EndDelegate_o *v13; // x22

  if ( (byte_49FF597 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultItemComponent_commandCodeDialogCallBack__, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FF597 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_30D4050 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v13 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v11, v12),
        ServantStatusDialog_EndDelegate___ctor(
          v13,
          (Il2CppObject *)this,
          Method_BattleResultItemComponent_commandCodeDialogCallBack__,
          0LL),
        !v10) )
  {
    sub_1B64324(Instance);
  }
  CommonUI__OpenServantStatusDialog_30357696((CommonUI_o *)v10, 0, (UserCommandCodeEntity_o *)Entity, v13, 0LL, 0LL);
}


void __fastcall BattleResultItemComponent__showItemDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x22

  if ( (byte_49FF593 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultItemComponent_itemDialogCallBack__, method);
    sub_1B640C8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FF593 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v10 = (ItemEntity_o *)Entity,
        v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B64314(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v11,
                                                          v12),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultItemComponent_itemDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_1B64324(Instance);
  }
  ItemDetailInfoComponent__Open(itemDialog, v10, v13, 50, 0LL);
}


void __fastcall BattleResultItemComponent__showServantDialog(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t tmp_userSvtId; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  int64_t v9; // x21
  ServantStatusDialog_EndDelegate_o *v10; // x22
  __int64 v11; // x0
  int32_t tmp_svtId; // w21
  ServantStatusDialog_EndDelegate_o *v13; // x22

  if ( (byte_49FF58F & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultItemComponent_DialogCallBack__, method);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49FF58F = 1;
  }
  tmp_userSvtId = this->fields.tmp_userSvtId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( tmp_userSvtId >= 1 )
  {
    v9 = this->fields.tmp_userSvtId;
    v10 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v6, v7);
    ServantStatusDialog_EndDelegate___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleResultItemComponent_DialogCallBack__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_30354372((CommonUI_o *)Instance, 0, v9, v10, 0LL, 0LL);
      return;
    }
LABEL_8:
    sub_1B64324(v11);
  }
  tmp_svtId = this->fields.tmp_svtId;
  v13 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v6, v7);
  ServantStatusDialog_EndDelegate___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_DialogCallBack__,
    0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_30358392((CommonUI_o *)Instance, 0, tmp_svtId, v13, 0LL);
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
  const MethodInfo *v19; // x3
  _BYTE *monitor; // x8
  System_Collections_IEnumerator_o *v21; // x1
  UnityEngine_Coroutine_o *started; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_MonoBehaviour_c *klass; // x8
  __int64 v26; // x0
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *v27; // x8
  BattleResultComponent_o *v28; // x0
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v30; // x19
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_List_Enumerator_T__o v34[2]; // [xsp+8h] [xbp-78h] BYREF
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o **v35; // [xsp+48h] [xbp-38h]
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *v36; // [xsp+58h] [xbp-28h] BYREF

  v36 = this;
  v2 = this;
  if ( (byte_49FF5A7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    this = (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *)sub_1B640C8(
                                                                               &UnityEngine_WaitForSeconds_TypeInfo,
                                                                               v6);
    byte_49FF5A7 = 1;
  }
  v35 = &v36;
  _1__state = v2->fields.__1__state;
  _4__this = (UnityEngine_MonoBehaviour_o *)v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1B64324(this);
    m_CancellationTokenSource = _4__this[1].fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      sub_1B64324(this);
    executingCallback = (System_Collections_Generic_List_object__o *)m_CancellationTokenSource[1].fields._executingCallback;
    if ( !executingCallback )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      v34,
      executingCallback,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v11 = v36;
    v12 = *(_OWORD *)&v34[0].fields._list;
    p__7__wrap1 = (ServantStatusBattleListViewItem_o *)&v36->fields.__7__wrap1;
    v34[1] = v34[0];
    v36->fields.__7__wrap1.fields._current = (struct UnityEngine_GameObject_o *)v34[0].fields._current;
    *(_OWORD *)&v11->fields.__7__wrap1.fields._list = v12;
    sub_1B6406C(p__7__wrap1, 0, v14, v15);
    v2 = v36;
  }
  v2->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36->fields.__7__wrap1.fields._current;
    if ( !current )
      sub_1B64324(0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         current,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    if ( !Component_object )
      sub_1B64324(0LL);
    monitor = Component_object[7].monitor;
    if ( !monitor )
      sub_1B64324(Component_object);
    if ( monitor[77] )
    {
      if ( !_4__this )
        sub_1B64324(Component_object);
      v21 = BattleResultItemComponent__itemFlashAnimationCoroutine(
              (BattleResultItemComponent_o *)Component_object,
              (UnityEngine_GameObject_o *)Component_object[9].monitor,
              (BattleDropItemComponent_o *)Component_object,
              v19);
      started = UnityEngine_MonoBehaviour__StartCoroutine_69113008(_4__this, v21, 0LL);
      klass = _4__this[1].klass;
      if ( !klass )
        sub_1B64324(started);
      if ( !LOBYTE(klass->_2.initializationExceptionGCHandle) )
      {
        v30 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v23, v24);
        UnityEngine_WaitForSeconds___ctor(v30, 0.01, 0LL);
        v31 = v36;
        v36->fields.__2__current = (Il2CppObject *)v30;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->fields.__2__current, (int32_t)v30, v32, v33);
        result = 1;
        v36->fields.__1__state = 1;
        return result;
      }
    }
    v2 = v36;
  }
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57____m__Finally1(v36, v16);
  v27 = v36;
  v36->fields.__7__wrap1.fields._list = 0LL;
  *(_QWORD *)&v27->fields.__7__wrap1.fields._index = 0LL;
  v27->fields.__7__wrap1.fields._current = 0LL;
  if ( !_4__this )
    sub_1B64324(v26);
  v28 = (BattleResultComponent_o *)_4__this[1].klass;
  if ( !v28 )
    sub_1B64324(0LL);
  BattleResultComponent__QpFix(v28, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  if ( (byte_49FF5A8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    byte_49FF5A8 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v2; // x2
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
  __int64 v17; // x2
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_WaitForSeconds_o *v19; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  bool result; // w0
  System_Collections_IEnumerator_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  System_Random_o *v27; // x21
  struct System_String_array *voiceIds; // x8
  struct BattleResultItemComponent___c__DisplayClass56_0_o *_8__1; // x8
  il2cpp_array_size_t v30; // w22
  System_String_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  struct System_String_array *v34; // x8
  BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *v35; // x21
  System_String_o *v36; // x22
  SeManager_c *v37; // x0
  Il2CppObject *v38; // x24
  float DEFAULT_VOLUME; // s8
  System_Action_o *v40; // x23
  struct BattleResultItemComponent___c__DisplayClass56_0_o *v41; // x8
  struct BattleResultComponent_o *v42; // x8
  ServantStatusBattleListViewItem_o *v43; // x19

  v4 = this;
  if ( (byte_49FF5A9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&System_Random_TypeInfo, v5);
    sub_1B640C8(&SeManager_TypeInfo, v6);
    sub_1B640C8(&SoundManager_TypeInfo, v7);
    sub_1B640C8(&Method_BattleResultItemComponent___c__DisplayClass56_0__PlayVoiceCoroutine_b__0__, v8);
    sub_1B640C8(&BattleResultItemComponent___c__DisplayClass56_0_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v10);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)sub_1B640C8(&StringLiteral_12599/*"Servants_"*/, v11);
    byte_49FF5A9 = 1;
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
      v14 = (Il2CppObject *)sub_1B64314(BattleResultItemComponent___c__DisplayClass56_0_TypeInfo, method, v2);
      System_Object___ctor(v14, 0LL);
      v4->fields.__8__1 = (struct BattleResultItemComponent___c__DisplayClass56_0_o *)v14;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v14, v15, v16);
      if ( !_4__this )
        goto LABEL_30;
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        goto LABEL_30;
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v19 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v17);
        UnityEngine_WaitForSeconds___ctor(v19, 0.3, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v19;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(p__2__current, (int32_t)v19, v21, v22);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
    }
    v24 = BattleResultItemComponent__PlayItemIconEffectCoroutine(_4__this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)_4__this, v24, 0LL);
    v27 = (System_Random_o *)sub_1B64314(System_Random_TypeInfo, v25, v26);
    System_Random___ctor(v27, 0LL);
    voiceIds = _4__this->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_30;
    if ( !v27 )
      goto LABEL_30;
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))v27->klass->vtable._6_Next.method)(
                                                                      v27,
                                                                      0LL,
                                                                      voiceIds->max_length,
                                                                      v27->klass->vtable._7_Next.methodPtr);
    _8__1 = v4->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_30;
    v30 = (unsigned int)this;
    _8__1->fields.IsVoiceComp = 0;
    v31 = System_Int32__ToString((int)_4__this + 272, 0LL);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)System_String__Concat_61375396(
                                                                      (System_String_o *)StringLiteral_12599/*"Servants_"*/,
                                                                      v31,
                                                                      0LL);
    v34 = _4__this->fields.voiceIds;
    if ( !v34 )
      goto LABEL_30;
    if ( v30 >= v34->max_length )
      sub_1B6432C(this, v32);
    v35 = this;
    v36 = v34->m_Items[v30];
    v37 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v37 = SeManager_TypeInfo;
    }
    v38 = (Il2CppObject *)v4->fields.__8__1;
    DEFAULT_VOLUME = v37->static_fields->DEFAULT_VOLUME;
    v40 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v32, v33);
    System_Action___ctor(
      v40,
      v38,
      Method_BattleResultItemComponent___c__DisplayClass56_0__PlayVoiceCoroutine_b__0__,
      0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)SoundManager__playVoice_38387180(
                                                                      (System_String_o *)v35,
                                                                      v36,
                                                                      DEFAULT_VOLUME,
                                                                      v40,
                                                                      0LL);
  }
  v41 = v4->fields.__8__1;
  if ( !v41 )
    goto LABEL_30;
  if ( v41->fields.IsVoiceComp )
  {
LABEL_27:
    ActionExtensions__Call(v4->fields.callback, 0LL);
    return 0;
  }
  if ( !_4__this || (v42 = _4__this->fields.parentComp) == 0LL )
LABEL_30:
    sub_1B64324(this);
  if ( v42->fields.isAddRewardEffectSkip )
    goto LABEL_27;
  v4->fields.__2__current = 0LL;
  v43 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B6406C(v43, 0, v2, v3);
  *(_DWORD *)&v43[-1].fields.isMine = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleResultItemComponent__PlayVoiceCoroutine_d__56_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF5A5 & 1) == 0 )
  {
    sub_1B640C8(&BattleResultItemComponent___c_TypeInfo, v1);
    byte_49FF5A5 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleResultItemComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleResultItemComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultItemComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleResultItemComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_37376332(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_37376724(s->fields.type, 0LL);
}


bool __fastcall BattleResultItemComponent___c___setResultData_b__48_2(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64324(this);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_37376332(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_37376724(s->fields.type, 0LL);
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
  if ( (byte_49FF5A6 & 1) == 0 )
  {
    this = (BattleResultItemComponent___c__DisplayClass48_0_o *)sub_1B640C8(
                                                                  &Method_System_Collections_Generic_List_BattleDropItem__get_Item__,
                                                                  e);
    byte_49FF5A6 = 1;
  }
  if ( !e
    || (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)v4->fields.list) == 0LL
    || (itemId = e->fields.itemId,
        (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v4->fields.i,
                                                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__)) == 0LL) )
  {
    sub_1B64324(this);
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
  __int64 v6; // x1
  __int64 v7; // x2
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *v8; // x20
  int v9; // s0
  UnityEngine_WaitForSeconds_o *v12; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  bool result; // w0
  struct BattleDropItemComponent_o *dropItem; // x8

  v2 = this;
  if ( (byte_49FF5AA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)sub_1B640C8(
                                                                               &UnityEngine_WaitForSeconds_TypeInfo,
                                                                               v3);
    byte_49FF5AA = 1;
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
          v8 = this;
          this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)UnityEngine_Component__get_transform(
                                                                                     (UnityEngine_Component_o *)v2->fields.dropItem,
                                                                                     0LL);
          if ( this )
          {
            *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
            if ( v8 )
            {
              UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v8, *(UnityEngine_Vector3_o *)&v9, 0LL);
LABEL_14:
              v12 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v6, v7);
              UnityEngine_WaitForSeconds___ctor(v12, 0.2333, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v12;
              p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B6406C(p__2__current, (int32_t)v12, v14, v15);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
              return result;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1B64324(this);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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