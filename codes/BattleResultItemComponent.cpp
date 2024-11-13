void __fastcall BattleResultItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t v14; // x1
  struct BattleResultItemComponent_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct BattleResultItemComponent_StaticFields *v22; // x0
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B1957A & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultItemComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20482/*"img_bg_total_dp"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_2981/*"BATTLE_RESULT_GET_EP"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_20483/*"img_bg_total_ep"*/, v12, v13);
    byte_4B1957A = 1;
  }
  BattleResultItemComponent_TypeInfo->static_fields->EP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_20483/*"img_bg_total_ep"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleResultItemComponent_TypeInfo->static_fields,
    StringLiteral_20483/*"img_bg_total_ep"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = StringLiteral_20482/*"img_bg_total_dp"*/;
  static_fields = BattleResultItemComponent_TypeInfo->static_fields;
  static_fields->DP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_20482/*"img_bg_total_dp"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->DP_SP_BASE_NAME, v14, v16, v17, v18, v19, v20, v21);
  v22 = BattleResultItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&v22->EP_GET_POSY_NORMAL = 3245342720LL;
  *(_QWORD *)&v22->EP_GET_FONT_NORMAL = 0x130000001ALL;
  v23 = StringLiteral_2981/*"BATTLE_RESULT_GET_EP"*/;
  v22->EP_GET_LOCALE_KEY = (struct System_String_o *)StringLiteral_2981/*"BATTLE_RESULT_GET_EP"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v22->EP_GET_LOCALE_KEY, v23, v24, v25, v26, v27, v28, v29);
  BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH = 142;
}


void __fastcall BattleResultItemComponent___ctor(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Color_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19579 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Color___TypeInfo, method, v2);
    byte_4B19579 = 1;
  }
  v4 = (struct UnityEngine_Color_array *)sub_1BCA888(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.showModeChanButtonLabelEffectColors = v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.showModeChanButtonLabelEffectColors,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__AddItemNewLine(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultItemComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Object_o *v11; // x20
  int32_t v12; // w24
  int32_t v13; // w21
  BattleResultItemComponent_o *v14; // x22
  struct UILabel_o *getEventPointLabel; // x8
  int v16; // w9
  float v17; // s1
  struct BattleViewItemlistComponent_o *v18; // x8
  int v19; // w20
  int v20; // w21
  float v21; // s9
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B1955D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6, v7);
    this = (BattleResultItemComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B1955D = 1;
  }
  itemWindow = v3->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_29;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    this = (BattleResultItemComponent_o *)itemWindow->fields.itemObjectList;
    if ( !this )
      goto LABEL_29;
    if ( v13 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      break;
    this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v13,
                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( this )
    {
      v14 = this;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( this )
      {
        getEventPointLabel = this->fields.getEventPointLabel;
        if ( getEventPointLabel )
        {
          v16 = BYTE5(getEventPointLabel->fields.mGo);
          itemWindow = v3->fields.itemWindow;
          if ( !v16 )
            v12 = v13;
          if ( !v16 )
            v11 = (UnityEngine_Object_o *)v14;
          ++v13;
          if ( itemWindow )
            continue;
        }
      }
    }
    goto LABEL_29;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleResultItemComponent_o *)UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v11 )
    {
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v11, 0LL);
      if ( this )
      {
        *(UnityEngine_Vector3_o *)(&v17 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        v18 = v3->fields.itemWindow;
        if ( v18 )
        {
          v19 = 0;
          v20 = v12 + 1;
          v21 = v17 + -113.57;
          do
          {
            this = (BattleResultItemComponent_o *)v18->fields.itemObjectList;
            if ( !this )
              break;
            if ( v20 + v19 >= SLODWORD(this->fields.m_CancellationTokenSource) )
              return;
            this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v20 + v19,
                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( !this )
              break;
            this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)this,
                                                    0LL);
            if ( !this )
              break;
            v22.fields.x = (float)((float)(v19 % 7) * 110.0) + -22.0;
            v22.fields.y = v21 + (float)((float)(v19 / 7) * -113.57);
            v22.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v22, 0LL);
            v18 = v3->fields.itemWindow;
            ++v19;
          }
          while ( v18 );
        }
      }
    }
LABEL_29:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall BattleResultItemComponent__Close(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_4B19570 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultItemComponent_endClose__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    byte_4B19570 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v11 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v8, v9, v10),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattleResultItemComponent_endClose__,
          0LL),
        !window) )
  {
    sub_1BCAA3C(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v11,
    window->klass->vtable._13_CompClose.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__DialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B19566 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, flg, method);
    sub_1BCA7E0(&Method_BattleResultItemComponent_EndCloseDialogCallBack__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B19566 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v12, 0LL);
}


void __fastcall BattleResultItemComponent__EndCloseDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19567 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3608/*"CLOSE"*/, method, v2);
    byte_4B19567 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3608/*"CLOSE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleResultItemComponent__GetEventPointUpperPriority(
        BattleResultItemComponent_o *this,
        int32_t eventPointUpperId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  BattleResultItemComponent_o *EntitiesFromEventPointUpperId; // x0
  const MethodInfo *v25; // x2
  int32_t v26; // w19
  __int64 v27; // x1
  int32_t key; // w29
  BattleResultItemComponent_o *v29; // x20
  const MethodInfo *v30; // x2
  _BOOL8 IsOpen; // x0
  __int64 v32; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  bool v34; // w21
  signed __int64 i; // x25
  _DWORD *v36; // x8
  int32_t v37; // w22
  int32_t v38; // w24
  int64_t v39; // x23
  int32_t v40; // w22
  int32_t v41; // w24
  int64_t v42; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B19576 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&eventPointUpperId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__,
      v10,
      v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___get_Current__,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Key__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Value__,
      v16,
      v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    byte_4B19576 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___)) == 0LL
    || (EntitiesFromEventPointUpperId = (BattleResultItemComponent_o *)EventPointUpperReleaseMaster__GetEntitiesFromEventPointUpperId(
                                                                         (EventPointUpperReleaseMaster_o *)Instance,
                                                                         eventPointUpperId,
                                                                         0LL),
        (Instance = (DataManager_o *)BattleResultItemComponent__GetEventPointUpperReleases(
                                       EntitiesFromEventPointUpperId,
                                       (EventPointUpperReleaseEntity_array *)EntitiesFromEventPointUpperId,
                                       v25)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v23);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v44,
    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
  v26 = 0;
  v45 = v44;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v45,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__) )
  {
    if ( !v45.fields._current.fields.value )
      sub_1BCAA3C(0LL, v27);
    key = (int32_t)v45.fields._current.fields.key;
    v29 = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___ToArray(
                                           (System_Collections_Generic_List_object__o *)v45.fields._current.fields.value,
                                           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    IsOpen = BattleResultItemComponent__GetIsAndCondGroup(v29, (EventPointUpperReleaseEntity_array *)v29, v30);
    if ( !v29 )
      sub_1BCAA3C(IsOpen, v32);
    m_CancellationTokenSource = v29->fields.m_CancellationTokenSource;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v34 = IsOpen;
      for ( i = 0LL; i < (int)m_CancellationTokenSource; ++i )
      {
        if ( i >= (unsigned __int64)(unsigned int)m_CancellationTokenSource )
          sub_1BCAA44(IsOpen, v32);
        v36 = (_DWORD *)*((_QWORD *)&v29->fields.parentComp + i);
        if ( v34 )
        {
          if ( !v36 )
            sub_1BCAA3C(IsOpen, v32);
          v38 = v36[9];
          v37 = v36[10];
          v39 = (int)v36[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v32);
          IsOpen = CondType__IsOpen(v38, v37, v39, 0, 0LL, 0LL);
          if ( !IsOpen )
            goto LABEL_28;
        }
        else
        {
          if ( !v36 )
            sub_1BCAA3C(IsOpen, v32);
          v41 = v36[9];
          v40 = v36[10];
          v42 = (int)v36[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v32);
          IsOpen = CondType__IsOpen(v41, v40, v42, 0, 0LL, 0LL);
          if ( IsOpen )
            break;
          if ( i >= LODWORD(v29->fields.m_CancellationTokenSource) - 1 )
            goto LABEL_28;
        }
        LODWORD(m_CancellationTokenSource) = v29->fields.m_CancellationTokenSource;
      }
    }
    if ( v26 < key )
      v26 = key;
  }
LABEL_28:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v45,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
  return v26;
}


System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *__fastcall BattleResultItemComponent__GetEventPointUpperReleases(
        BattleResultItemComponent_o *this,
        EventPointUpperReleaseEntity_array *entities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_Dictionary_int__object__o *v19; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v21; // x1
  signed int max_length; // w8
  unsigned int v23; // w24
  EventPointUpperReleaseEntity_o *v24; // x21
  int32_t priority; // w22
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_object__o *v29; // x23
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8

  if ( (byte_4B19577 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__,
      entities,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__, v5, v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__,
      v9,
      v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo, v17, v18);
    byte_4B19577 = 1;
  }
  v19 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo,
                                                                  entities,
                                                                  method,
                                                                  v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v19,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
  if ( !entities )
    goto LABEL_18;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= max_length )
        sub_1BCAA44(Item, v21);
      v24 = entities->m_Items[v23];
      if ( !v24 || !v19 )
        break;
      priority = v24->fields.priority;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v19,
              priority,
              (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__) )
      {
        v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo,
                                                             v26,
                                                             v27,
                                                             v28);
        System_Collections_Generic_List_object____ctor(
          v29,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v19,
          priority,
          (Il2CppObject *)v29,
          (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
      }
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                            v19,
                                                            priority,
                                                            (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
      if ( !Item )
        break;
      items = Item->fields._items;
      v37 = Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__;
      ++Item->fields._version;
      if ( !items )
        break;
      size = Item->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          (Il2CppObject *)v24,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        Item->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v24;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)v24, v30, v31, v32, v33, v34, v35);
      }
      max_length = entities->max_length;
      if ( (int)++v23 >= max_length )
        return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v19;
    }
LABEL_18:
    sub_1BCAA3C(Item, v21);
  }
  return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v19;
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

  if ( (byte_4B19578 & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&priority, entities);
    byte_4B19578 = 1;
  }
  if ( !entities )
LABEL_15:
    sub_1BCAA3C(this, *(_QWORD *)&priority);
  max_length = entities->max_length;
  if ( max_length < 1 )
  {
LABEL_10:
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
        sub_1BCAA44(this, *(_QWORD *)&priority);
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
        sub_1BCAA44(this, entities);
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
    sub_1BCAA3C(this, entities);
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
  __int64 v8; // x2
  const MethodInfo *v9; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleResultItemComponent_o *v11; // x21
  struct BattleResultComponent_o *parentComp; // x8
  BattleResultItemComponent_o *EventPointUpperPriority; // x0
  const MethodInfo *v14; // x3

  v6 = this;
  if ( (byte_4B19575 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointUpperMaster___, eventDetailEntity, userEventPoint);
    this = (BattleResultItemComponent_o *)sub_1BCA7E0(
                                            &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                            v7,
                                            v8);
    byte_4B19575 = 1;
  }
  if ( !eventDetailEntity )
    goto LABEL_14;
  if ( !EventDetailEntity__IsEventPointByQp(eventDetailEntity, 0LL) )
    goto LABEL_12;
  this = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointUpperMaster___);
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
    sub_1BCAA44(this, eventDetailEntity);
  parentComp = this->fields.parentComp;
  if ( !parentComp )
LABEL_14:
    sub_1BCAA3C(this, eventDetailEntity);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleWindowComponent_o *window; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20

  if ( (byte_4B19556 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_2975/*"BATTLE_RESULTITEM_TITLECONF"*/, v4, v5);
    byte_4B19556 = 1;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2975/*"BATTLE_RESULTITEM_TITLECONF"*/, 0LL);
  if ( !window )
    goto LABEL_14;
  v8 = (System_String_o *)window;
  if ( !System_String__Equals_62409536((System_String_o *)window, (System_String_o *)StringLiteral_2975/*"BATTLE_RESULTITEM_TITLECONF"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_14;
    UILabel__set_text((UILabel_o *)window, v8, 0LL);
  }
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  if ( !window )
LABEL_14:
    sub_1BCAA3C(window, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
}


void __fastcall BattleResultItemComponent__OnClickSwitchShowMode(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *showModeChangeButton; // x0
  __int64 *v13; // x8
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19573 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultItemComponent_OnClickSwitchShowMode__, method, v2);
    sub_1BCA7E0(&StringLiteral_17652/*"btn_bg_20"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17653/*"btn_bg_21"*/, v6, v7);
    byte_4B19573 = 1;
  }
  v8 = Method_BattleResultItemComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_BattleResultItemComponent_OnClickSwitchShowMode__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  showModeChangeButton = this->fields.showModeChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !showModeChangeButton
    || (isShowPossessionNum ? (v13 = &StringLiteral_17652/*"btn_bg_20"*/) : (v13 = &StringLiteral_17653/*"btn_bg_21"*/),
        UIButton__set_normalSprite(showModeChangeButton, (System_String_o *)*v13, 0LL),
        (showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(showModeChangeButton, v10);
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
    sub_1BCAA44(showModeChangeButton, v10);
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
  v20.fields.a = *p_r;
  v20.fields.b = *p_a;
  v20.fields.g = *p_b;
  v20.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)showModeChangeButton, v20, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *touchNextRoot; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  BattleWindowComponent_EndCall_o *v15; // x21
  const MethodInfo *v16; // x1

  if ( (byte_4B19557 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultItemComponent_endOpen__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v6, v7);
    sub_1BCA7E0(&StringLiteral_5560/*"END_OPEN"*/, v8, v9);
    byte_4B19557 = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0LL);
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot
    || (touchNextRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      touchNextRoot,
                                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (UIWidget__set_depth((UIWidget_o *)touchNextRoot, 200, 0LL),
        (touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5560/*"END_OPEN"*/, 0LL),
        window = this->fields.window,
        v15 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v12, v13, v14),
        BattleWindowComponent_EndCall___ctor(v15, (Il2CppObject *)this, Method_BattleResultItemComponent_endOpen__, 0LL),
        !window) )
  {
LABEL_9:
    sub_1BCAA3C(touchNextRoot, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v15,
    window->klass->vtable._11_CompOpen.methodPtr);
  BattleResultItemComponent__setCondensedScale(this, v16);
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B19562 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_TypeInfo, method, v2);
    byte_4B19562 = 1;
  }
  v5 = sub_1BCAA2C(BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__PlayVoiceCoroutine(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
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

  if ( (byte_4B19561 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultItemComponent__PlayVoiceCoroutine_d__57_TypeInfo, callback, method);
    byte_4B19561 = 1;
  }
  v6 = sub_1BCAA2C(BattleResultItemComponent__PlayVoiceCoroutine_d__57_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 48) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 48), (int64_t)callback, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleResultItemComponent__SetAddItemIconEffect(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultItemComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  int32_t size; // w8
  int v25; // w22
  int v26; // w23
  Il2CppObject *v27; // x20
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x20
  struct BattleViewItemlistComponent_o *v31; // x8
  int32_t v32; // w28
  Il2CppObject *v33; // x20
  int32_t v34; // w21
  struct UILabel_o *getEventPointLabel; // x8
  BattleResultItemComponent_o *v36; // x23
  BattleResultItemComponent_o *v37; // x24
  BattleResultItemComponent_o *v38; // x25
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int32_t animationSvtId; // [xsp+8h] [xbp-68h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-64h] BYREF

  v3 = this;
  if ( (byte_4B1955F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_18992/*"ef_additem"*/, v18, v19);
    this = (BattleResultItemComponent_o *)sub_1BCA7E0(&StringLiteral_5929/*"Effect/BattleResult/{0}/{1}"*/, v20, v21);
    byte_4B1955F = 1;
  }
  itemWindow = v3->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_30;
  itemObjectList = itemWindow->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_30;
  size = itemObjectList->fields._size;
  g_eventId = v3->fields.g_eventId;
  v25 = 7 * (size / 7);
  if ( size == v25 )
    v26 = -21;
  else
    v26 = -14;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId);
  animationSvtId = v3->fields.animationSvtId;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId);
  v30 = System_String__Format_62415592((System_String_o *)StringLiteral_5929/*"Effect/BattleResult/{0}/{1}"*/, v27, v28, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v29);
  this = (BattleResultItemComponent_o *)AssetManager__getAssetStorage(v30, 0LL);
  if ( !this
    || (this = (BattleResultItemComponent_o *)AssetData__GetObject_object__49237568(
                                                (AssetData_o *)this,
                                                (System_String_o *)StringLiteral_18992/*"ef_additem"*/,
                                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696),
        (v31 = v3->fields.itemWindow) == 0LL) )
  {
LABEL_30:
    sub_1BCAA3C(this, method);
  }
  v32 = v26 + v25;
  v33 = (Il2CppObject *)this;
  v34 = 0;
  while ( 1 )
  {
    this = (BattleResultItemComponent_o *)v31->fields.itemObjectList;
    if ( !this )
      goto LABEL_30;
    if ( v34 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      break;
    if ( v32 <= v34 )
    {
      this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v34,
                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_30;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( !this )
        goto LABEL_30;
      getEventPointLabel = this->fields.getEventPointLabel;
      v36 = this;
      if ( !getEventPointLabel )
        goto LABEL_30;
      if ( BYTE5(getEventPointLabel->fields.mGo) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        this = (BattleResultItemComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                v33,
                                                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_30;
        v37 = this;
        this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
        if ( !this )
          goto LABEL_30;
        v38 = this;
        UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v3->fields.effectRoot, 0LL);
        if ( !byte_4B109C1 )
        {
          sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v39, v40);
          byte_4B109C1 = 1;
        }
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v38,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( !byte_4B109C6 )
        {
          sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v41, v42);
          byte_4B109C6 = 1;
        }
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v38,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v37, 0, 0LL);
        v36->fields.eventPointMaxSprite = (struct UISprite_o *)v37;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v36->fields.eventPointMaxSprite,
          (int64_t)v37,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
      }
    }
    v31 = v3->fields.itemWindow;
    ++v34;
    if ( !v31 )
      goto LABEL_30;
  }
}


void __fastcall BattleResultItemComponent__SetAddItemSvtAnimation(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  Il2CppObject *Object_object__49237568; // x20
  UnityEngine_GameObject_o *v24; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Transform_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int32_t animationSvtId; // [xsp+8h] [xbp-38h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1955E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_19043/*"ef_presenter"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_5929/*"Effect/BattleResult/{0}/{1}"*/, v14, v15);
    byte_4B1955E = 1;
  }
  g_eventId = this->fields.g_eventId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId);
  animationSvtId = this->fields.animationSvtId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId);
  v19 = System_String__Format_62415592((System_String_o *)StringLiteral_5929/*"Effect/BattleResult/{0}/{1}"*/, v16, v17, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v18);
  AssetStorage = AssetManager__getAssetStorage(v19, 0LL);
  if ( !AssetStorage )
    goto LABEL_16;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              AssetStorage,
                              (System_String_o *)StringLiteral_19043/*"ef_presenter"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                  Object_object__49237568,
                                  (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !AssetStorage
    || (v24 = (UnityEngine_GameObject_o *)AssetStorage,
        AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)AssetStorage,
                                        0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (v26 = (UnityEngine_Transform_o *)AssetStorage) == 0LL )
  {
LABEL_16:
    sub_1BCAA3C(AssetStorage, v21);
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)AssetStorage, itemWindow->fields.listRoot, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v27, v28);
    byte_4B109C1 = 1;
  }
  UnityEngine_Transform__set_localPosition(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v29, v30);
    byte_4B109C6 = 1;
  }
  UnityEngine_Transform__set_localScale(v26, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  UnityEngine_GameObject__SetActive(v24, 0, 0LL);
  this->fields.addItemSvtAnimationObj = v24;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.addItemSvtAnimationObj,
    (int64_t)v24,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x28
  int64_t Master_object; // x0
  __int64 v66; // x1
  __int64 v67; // x1
  Il2CppObject *Entity; // x0
  EventDetailEntity_o *v69; // x21
  __int64 v70; // x8
  UserEventPointEntity_o *v71; // x8
  int32_t v72; // w26
  int64_t EventPointNoGroup; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x8
  EventConquestInfo_o *v78; // x23
  __int64 v79; // x1
  Il2CppObject *v80; // x21
  EventConquestInfo_o *v81; // x8
  int64_t getNum; // x21
  int64_t v83; // x22
  int32_t ImageId; // w4
  const MethodInfo *v85; // x7
  BattleResultItemComponent_o *v86; // x0
  int32_t v87; // w1
  int64_t v88; // x2
  int64_t v89; // x3
  bool IsShowEventPointMax; // w5
  int32_t v91; // w6
  Il2CppObject *MasterData_object; // x0
  __int64 v93; // x1
  UserEventRaidMaster_o *v94; // x22
  UnityEngine_Object_o *rootEventDamagePoint; // x23
  __int64 v96; // x1
  int64_t TotalDamagePoint; // x20
  BalanceConfig_c *v98; // x8
  int64_t UserRaidDamagePointMax; // x22
  int64_t v100; // x20
  int64_t v101; // x0
  UILabel_o *getEventDamagePointLabel; // x22
  Il2CppObject *v103; // x0
  UILabel_o *nowEventDamagePointLabel; // x22
  Il2CppObject *v105; // x0
  __int64 v106; // x1
  BattleResultItemComponent_c *v107; // x0
  System_String_o *DP_SP_BASE_NAME; // x20
  System_String_o *v109; // x0
  struct UISprite_o *eventDamageBGSprite; // x8
  Il2CppObject *v111; // x20
  BattleResultItemComponent_c *v112; // x0
  __int64 v113; // x1
  UISprite_o *eventDamageIconSprite; // x20
  int32_t pointImageId; // w21
  int64_t v116; // x25
  System_Func_object__bool__o *v117; // x27
  __int64 v118; // x27
  const MethodInfo *v119; // x3
  UserEventPointEntity_o *v120; // x8
  int64_t v121; // x26
  UserEventPointEntity_o *v122; // x8
  int32_t v123; // w23
  int64_t v124; // [xsp+8h] [xbp-78h] BYREF
  int64_t v125; // [xsp+10h] [xbp-70h] BYREF
  int32_t v126; // [xsp+1Ch] [xbp-64h] BYREF

  v126 = eventId;
  if ( (byte_4B1955B & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&eventId, oldUserPoint);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v18, v19);
    sub_1BCA7E0(&BattleResultItemComponent_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_BetterList_string__Contains__, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v24, v25);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, v26, v27);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v28, v29);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v30, v31);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v32, v33);
    sub_1BCA7E0(&DataManager_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v36, v37);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v38, v39);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v40, v41);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_UserEventPointEntity___, v42, v43);
    sub_1BCA7E0(&System_Func_UserEventPointEntity__bool__TypeInfo, v44, v45);
    sub_1BCA7E0(&long_TypeInfo, v46, v47);
    sub_1BCA7E0(&System_Math_TypeInfo, v48, v49);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v50, v51);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v52, v53);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v54, v55);
    sub_1BCA7E0(&Method_BattleResultItemComponent___c__DisplayClass51_0__SetEventInfo_b__0__, v56, v57);
    sub_1BCA7E0(&BattleResultItemComponent___c__DisplayClass51_0_TypeInfo, v58, v59);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_856/*"+ {0:#,0}"*/, v62, v63);
    byte_4B1955B = 1;
  }
  v64 = sub_1BCAA2C(
          BattleResultItemComponent___c__DisplayClass51_0_TypeInfo,
          *(_QWORD *)&eventId,
          oldUserPoint,
          addDamagePoint);
  System_Object___ctor((Il2CppObject *)v64, 0LL);
  if ( !v64 )
    goto LABEL_88;
  *(_DWORD *)(v64 + 16) = eventGroupId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v66);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_88;
  if ( !DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          eventId,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v67);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_88;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             eventId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v69 = (EventDetailEntity_o *)Entity;
  Master_object = EventDetailEntity__IsEventPoint((EventDetailEntity_o *)Entity, 0LL);
  if ( (Master_object & 1) == 0 )
  {
    Master_object = EventDetailEntity__IsMakeFarm(v69, 0LL);
    if ( (Master_object & 1) == 0 )
      return;
  }
  if ( isNotDisplayEventPoint )
    return;
  if ( !oldUserPoint || (v70 = *(_QWORD *)&oldUserPoint->max_length) == 0 )
  {
    Master_object = EventDetailEntity__IsMakeFarm(v69, 0LL);
    if ( (Master_object & 1) != 0 )
    {
      if ( !eventConquestInfos )
        return;
      v77 = *(_QWORD *)&eventConquestInfos->max_length;
      if ( !v77 )
        return;
      if ( !(_DWORD)v77 )
        goto LABEL_89;
      v78 = eventConquestInfos->m_Items[0];
      if ( !v78 || v78->fields.rewardNum < 1 )
        return;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v66);
      v80 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v79);
      Master_object = NetworkManager__get_UserId(0LL);
      if ( v80 )
      {
        Master_object = (int64_t)UserItemMaster__GetEntityDefinitely(
                                   (UserItemMaster_o *)v80,
                                   Master_object,
                                   v78->fields.objectId,
                                   0LL);
        if ( !eventConquestInfos->max_length )
          goto LABEL_89;
        v81 = eventConquestInfos->m_Items[0];
        if ( v81 )
        {
          if ( Master_object )
          {
            getNum = v81->fields.getNum;
            v83 = *(int *)(Master_object + 28);
            Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
            if ( Master_object )
            {
              Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                         v78->fields.objectId,
                                         (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
              if ( Master_object )
              {
                ImageId = ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0LL);
                v86 = this;
                v87 = eventId;
                v88 = getNum;
                v89 = v83;
                IsShowEventPointMax = 0;
                v91 = 0;
LABEL_87:
                BattleResultItemComponent__SetEventPointUi(v86, v87, v88, v89, ImageId, IsShowEventPointMax, v91, v85);
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
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_88;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Master_object,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
      if ( !MasterData_object )
        return;
      v94 = (UserEventRaidMaster_o *)MasterData_object;
      rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
      if ( UnityEngine_Object__op_Equality(rootEventDamagePoint, 0LL, 0LL) )
        return;
      TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(v94, eventId, 0LL);
      v98 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v96);
        v98 = BalanceConfig_TypeInfo;
      }
      UserRaidDamagePointMax = v98->static_fields->UserRaidDamagePointMax;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v96);
      v100 = System_Math__Min_63220536(TotalDamagePoint, UserRaidDamagePointMax, 0LL);
      v101 = System_Math__Min_63220536(
               addDamagePoint,
               BalanceConfig_TypeInfo->static_fields->UserRaidDamagePointMax,
               0LL);
      getEventDamagePointLabel = this->fields.getEventDamagePointLabel;
      v125 = v101;
      v103 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v125);
      Master_object = (int64_t)System_String__Format((System_String_o *)StringLiteral_856/*"+ {0:#,0}"*/, v103, 0LL);
      if ( getEventDamagePointLabel )
      {
        UILabel__set_text(getEventDamagePointLabel, (System_String_o *)Master_object, 0LL);
        nowEventDamagePointLabel = this->fields.nowEventDamagePointLabel;
        v124 = v100;
        v105 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v124);
        Master_object = (int64_t)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v105, 0LL);
        if ( nowEventDamagePointLabel )
        {
          UILabel__set_text(nowEventDamagePointLabel, (System_String_o *)Master_object, 0LL);
          v107 = BattleResultItemComponent_TypeInfo;
          if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, v106);
            v107 = BattleResultItemComponent_TypeInfo;
          }
          DP_SP_BASE_NAME = v107->static_fields->DP_SP_BASE_NAME;
          v109 = System_Int32__ToString((int32_t)&v126, 0LL);
          Master_object = (int64_t)System_String__Concat_62401220(DP_SP_BASE_NAME, v109, 0LL);
          eventDamageBGSprite = this->fields.eventDamageBGSprite;
          if ( eventDamageBGSprite )
          {
            v111 = (Il2CppObject *)Master_object;
            Master_object = (int64_t)eventDamageBGSprite->fields.mAtlas;
            if ( Master_object )
            {
              Master_object = (int64_t)UIAtlas__GetListOfSprites((UIAtlas_o *)Master_object, 0LL);
              if ( Master_object )
              {
                if ( !BetterList_object___Contains(
                        (BetterList_T__o *)Master_object,
                        v111,
                        (const MethodInfo_312D960 *)Method_BetterList_string__Contains__) )
                {
                  v112 = BattleResultItemComponent_TypeInfo;
                  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, v66);
                    v112 = BattleResultItemComponent_TypeInfo;
                  }
                  v111 = (Il2CppObject *)v112->static_fields->DP_SP_BASE_NAME;
                }
                Master_object = (int64_t)this->fields.eventDamageBGSprite;
                if ( Master_object )
                {
                  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)v111, 0LL);
                  eventDamageIconSprite = this->fields.eventDamageIconSprite;
                  pointImageId = v69->fields.pointImageId;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v113);
                  AtlasManager__SetItem(eventDamageIconSprite, pointImageId, 0LL);
                  Master_object = (int64_t)this->fields.rootEventDamagePoint;
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
LABEL_88:
    sub_1BCAA3C(Master_object, v66);
  }
  if ( !(_DWORD)v70 )
    goto LABEL_89;
  v71 = oldUserPoint->m_Items[0];
  if ( !v71 )
    goto LABEL_88;
  v72 = *(_DWORD *)(v64 + 16);
  if ( v72 > 0 || !v71->fields.groupId )
  {
    if ( v72 <= 0 )
      EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
    else
      EventPointNoGroup = UserEventPointMaster__GetEventPoint(eventId, v72, 0LL);
    v116 = EventPointNoGroup;
    v117 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_UserEventPointEntity__bool__TypeInfo, v74, v75, v76);
    System_Func_object__bool____ctor(
      v117,
      (Il2CppObject *)v64,
      Method_BattleResultItemComponent___c__DisplayClass51_0__SetEventInfo_b__0__,
      0LL);
    Master_object = (int64_t)System_Linq_Enumerable__First_object__49493664(
                               (System_Collections_Generic_IEnumerable_TSource__o *)oldUserPoint,
                               (System_Func_TSource__bool__o *)v117,
                               (const MethodInfo_2F336A0 *)Method_System_Linq_Enumerable_First_UserEventPointEntity___);
    if ( v72 <= 0 )
    {
      if ( !oldUserPoint->max_length )
        goto LABEL_89;
      Master_object = (int64_t)oldUserPoint->m_Items[0];
      if ( !Master_object )
        goto LABEL_88;
    }
    else if ( !Master_object )
    {
      goto LABEL_88;
    }
    v118 = v116 - *(_QWORD *)(Master_object + 32);
    if ( v116 <= 0 && v118 < 1 )
      return;
    Master_object = EventDetailEntity__IsEventPointByQp(v69, 0LL);
    if ( (Master_object & 1) != 0 )
    {
      if ( !oldUserPoint->max_length )
        goto LABEL_89;
      v120 = oldUserPoint->m_Items[0];
      if ( !v120 )
        goto LABEL_88;
      v121 = v120->fields.value + countQp;
      if ( BattleResultItemComponent__GetIsShowEventPointMax(this, v69, v116, v119) )
      {
        Master_object = BattleResultItemComponent__GetIsShowEventPointMax(this, v69, v121, v119);
        if ( (Master_object & 1) != 0 )
          v121 = v116;
        if ( oldUserPoint->max_length )
        {
          v122 = oldUserPoint->m_Items[0];
          if ( !v122 )
            goto LABEL_88;
          v118 = v121 - v122->fields.value;
          goto LABEL_86;
        }
LABEL_89:
        sub_1BCAA44(Master_object, v66);
      }
      v118 = countQp;
    }
    else
    {
      v121 = v116;
    }
LABEL_86:
    v123 = v69->fields.pointImageId;
    IsShowEventPointMax = BattleResultItemComponent__GetIsShowEventPointMax(this, v69, v121, v119);
    v86 = this;
    v87 = eventId;
    v88 = v118;
    v89 = v121;
    ImageId = v123;
    v91 = boostRate;
    goto LABEL_87;
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  UILabel_o *getEventPointLabel; // x25
  Il2CppObject *v37; // x0
  System_String_o *IfExists; // x0
  System_String_o *v39; // x1
  UILabel_o *nowEventPointLabel; // x24
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  UISprite_o *eventIconSprite; // x23
  UILabel_o *getTitleLabel; // x22
  __int64 v45; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v47; // x1
  BattleResultItemComponent_c *v48; // x8
  UnityEngine_GameObject_o *v49; // x22
  struct BattleResultItemComponent_StaticFields *static_fields; // x8
  __int64 v51; // x9
  UILabel_o *v52; // x22
  __int64 v53; // x0
  __int64 v54; // x1
  BattleResultItemComponent_c *v55; // x8
  __int64 v56; // x23
  System_String_o *EP_GET_LOCALE_KEY; // x24
  System_String_o *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_String_o *v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  UILabel_o *getBoostLabel; // x22
  System_String_o *v75; // x23
  Il2CppObject *v76; // x0
  __int64 v77; // x1
  BattleResultItemComponent_c *v78; // x0
  System_String_o *EP_SP_BASE_NAME; // x21
  System_String_o *v80; // x0
  struct UISprite_o *eventPointBgSprite; // x8
  Il2CppObject *v82; // x21
  BattleResultItemComponent_c *v83; // x0
  __int64 v84; // x1
  UnityEngine_Object_o *eventPointMaxSprite; // x21
  int64_t v86; // [xsp+8h] [xbp-68h] BYREF
  int64_t v87; // [xsp+10h] [xbp-60h] BYREF
  int32_t v88; // [xsp+1Ch] [xbp-54h] BYREF

  v88 = eventId;
  if ( (byte_4B1955C & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&eventId, addEventPoint);
    sub_1BCA7E0(&BattleResultItemComponent_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_BetterList_string__Contains__, v16, v17);
    sub_1BCA7E0(&long_TypeInfo, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    sub_1BCA7E0(&float_TypeInfo, v24, v25);
    sub_1BCA7E0(&string___TypeInfo, v26, v27);
    sub_1BCA7E0(&StringLiteral_2982/*"BATTLE_RESULT_GET_EP_RATE"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_856/*"+ {0:#,0}"*/, v34, v35);
    byte_4B1955C = 1;
  }
  getEventPointLabel = this->fields.getEventPointLabel;
  v87 = addEventPoint;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v87);
  IfExists = System_String__Format((System_String_o *)StringLiteral_856/*"+ {0:#,0}"*/, v37, 0LL);
  if ( !getEventPointLabel )
    goto LABEL_49;
  UILabel__set_text(getEventPointLabel, IfExists, 0LL);
  nowEventPointLabel = this->fields.nowEventPointLabel;
  v86 = totalEventPoint;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v86);
  IfExists = System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v41, 0LL);
  if ( !nowEventPointLabel )
    goto LABEL_49;
  UILabel__set_text(nowEventPointLabel, IfExists, 0LL);
  CommonFunction__ScalingLabelWidth(this->fields.getEventPointLabel, 215, 0LL);
  CommonFunction__ScalingLabelWidth(this->fields.nowEventPointLabel, 215, 0LL);
  eventIconSprite = this->fields.eventIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v42);
  AtlasManager__SetItem(eventIconSprite, imageId, 0LL);
  IfExists = (System_String_o *)BattleResultItemComponent_TypeInfo;
  getTitleLabel = this->fields.getTitleLabel;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, v39);
  if ( !getTitleLabel )
    goto LABEL_49;
  v45 = 24LL;
  if ( boostRate > 0 )
    v45 = 28LL;
  UILabel__set_fontSize(
    getTitleLabel,
    *(_DWORD *)((char *)&BattleResultItemComponent_TypeInfo->static_fields->EP_SP_BASE_NAME + v45),
    0LL);
  IfExists = (System_String_o *)this->fields.getTitleLabel;
  if ( !IfExists )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IfExists, 0LL);
  v48 = BattleResultItemComponent_TypeInfo;
  v49 = gameObject;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, v47);
    v48 = BattleResultItemComponent_TypeInfo;
  }
  static_fields = v48->static_fields;
  v51 = 16LL;
  if ( boostRate > 0 )
    v51 = 20LL;
  GameObjectExtensions__SetLocalPositionY(v49, *(float *)((char *)&static_fields->EP_SP_BASE_NAME + v51), 0LL);
  v52 = this->fields.getTitleLabel;
  v53 = sub_1BCA888(string___TypeInfo, 2LL);
  v55 = BattleResultItemComponent_TypeInfo;
  v56 = v53;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, v54);
    v55 = BattleResultItemComponent_TypeInfo;
  }
  EP_GET_LOCALE_KEY = v55->static_fields->EP_GET_LOCALE_KEY;
  v58 = System_Int32__ToString((int32_t)&v88, 0LL);
  IfExists = System_String__Concat_62401220(EP_GET_LOCALE_KEY, v58, 0LL);
  if ( !v56 )
    goto LABEL_49;
  if ( !*(_DWORD *)(v56 + 24)
    || (*(_QWORD *)(v56 + 32) = IfExists,
        sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 32), (int64_t)IfExists, v59, v60, v61, v62, v63, v64),
        *(_DWORD *)(v56 + 24) <= 1u) )
  {
    sub_1BCAA44(IfExists, v39);
  }
  v71 = BattleResultItemComponent_TypeInfo->static_fields->EP_GET_LOCALE_KEY;
  *(_QWORD *)(v56 + 40) = v71;
  sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 40), (int64_t)v71, v65, v66, v67, v68, v69, v70);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v56, 0LL);
  if ( !v52 )
LABEL_49:
    sub_1BCAA3C(IfExists, v39);
  UILabel__set_text(v52, IfExists, 0LL);
  getBoostLabel = this->fields.getBoostLabel;
  if ( boostRate <= 0 )
  {
    v39 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !getBoostLabel )
      goto LABEL_49;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
    v75 = LocalizationManager__Get((System_String_o *)StringLiteral_2982/*"BATTLE_RESULT_GET_EP_RATE"*/, 0LL);
    *(float *)&v87 = (float)((float)boostRate / 1000.0) + 1.0;
    v76 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v87);
    IfExists = System_String__Format(v75, v76, 0LL);
    v39 = IfExists;
    if ( !getBoostLabel )
      goto LABEL_49;
  }
  UILabel__set_text(getBoostLabel, v39, 0LL);
  v78 = BattleResultItemComponent_TypeInfo;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, v77);
    v78 = BattleResultItemComponent_TypeInfo;
  }
  EP_SP_BASE_NAME = v78->static_fields->EP_SP_BASE_NAME;
  v80 = System_Int32__ToString((int32_t)&v88, 0LL);
  IfExists = System_String__Concat_62401220(EP_SP_BASE_NAME, v80, 0LL);
  eventPointBgSprite = this->fields.eventPointBgSprite;
  if ( !eventPointBgSprite )
    goto LABEL_49;
  v82 = (Il2CppObject *)IfExists;
  IfExists = (System_String_o *)eventPointBgSprite->fields.mAtlas;
  if ( !IfExists )
    goto LABEL_49;
  IfExists = (System_String_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)IfExists, 0LL);
  if ( !IfExists )
    goto LABEL_49;
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)IfExists,
          v82,
          (const MethodInfo_312D960 *)Method_BetterList_string__Contains__) )
  {
    v83 = BattleResultItemComponent_TypeInfo;
    if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, v39);
      v83 = BattleResultItemComponent_TypeInfo;
    }
    v82 = (Il2CppObject *)v83->static_fields->EP_SP_BASE_NAME;
  }
  IfExists = (System_String_o *)this->fields.eventPointBgSprite;
  if ( !IfExists )
    goto LABEL_49;
  UISprite__set_spriteName((UISprite_o *)IfExists, (System_String_o *)v82, 0LL);
  eventPointMaxSprite = (UnityEngine_Object_o *)this->fields.eventPointMaxSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v84);
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
    sub_1BCAA3C(nomalRootObj, *(_QWORD *)&eventId);
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
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_Component_o *groupRootObj; // x0
  UILabel_o *getQpLabel; // x27
  Il2CppObject *v32; // x0
  int32_t qp; // w29
  int32_t QpMax; // w8
  int v35; // w26
  UILabel_o *nowQpLabel; // x25
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  UnityEngine_Object_o *rootEventDamagePoint; // x25
  const MethodInfo *v40; // [xsp+8h] [xbp-78h]
  int v41; // [xsp+18h] [xbp-68h] BYREF
  int32_t v42; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B1955A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId, oldUsrPoint);
    sub_1BCA7E0(&int_TypeInfo, v22, v23);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_856/*"+ {0:#,0}"*/, v28, v29);
    byte_4B1955A = 1;
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
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_856/*"+ {0:#,0}"*/, v32, 0LL);
  if ( !getQpLabel )
    goto LABEL_30;
  UILabel__set_text(getQpLabel, (System_String_o *)groupRootObj, 0LL);
  if ( !userGame )
    goto LABEL_30;
  qp = userGame->fields.qp;
  groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
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
      j_il2cpp_runtime_class_init_0(groupRootObj, *(_QWORD *)&eventId);
      groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v35 > QpMax )
    {
LABEL_33:
      if ( !LODWORD(groupRootObj[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(groupRootObj, *(_QWORD *)&eventId);
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
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v37, 0LL);
  if ( !nowQpLabel
    || (UILabel__set_text(nowQpLabel, (System_String_o *)groupRootObj, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.getQpLabel, 215, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.nowQpLabel, 215, 0LL),
        (groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventPoint) == 0LL) )
  {
LABEL_30:
    sub_1BCAA3C(groupRootObj, *(_QWORD *)&eventId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0LL);
  rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
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
      v40);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__StartPresenterAnimation(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *addItemSvtAnimationObj; // x0
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  float v9; // s0
  float v10; // s1
  float v11; // s2
  float v12; // s10
  float v13; // s8
  float v14; // s9
  const MethodInfo *v15; // x2
  struct BattleViewItemlistComponent_o *v16; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s8
  float v22; // s10
  float v23; // s9
  System_Collections_IEnumerator_o *v24; // x1
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19560 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, callback, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v5, v6);
    byte_4B19560 = 1;
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
                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         addItemSvtAnimationObj,
                                                         0LL);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_position(
                                    (UnityEngine_Transform_o *)addItemSvtAnimationObj,
                                    0LL);
  addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  v12 = v9;
  v13 = v10;
  v14 = v11;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         addItemSvtAnimationObj,
                                                         0LL);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  v25.fields.y = v13;
  v25.fields.z = v14;
  v25.fields.x = v12 + 0.05;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)addItemSvtAnimationObj, v25, 0LL);
  v16 = this->fields.itemWindow;
  if ( !v16 )
    goto LABEL_19;
  itemObjectList = v16->fields.itemObjectList;
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
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)addItemSvtAnimationObj,
                                           0LL);
        addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
        if ( addItemSvtAnimationObj )
        {
          v21 = v18;
          v22 = v19;
          v23 = v20;
          addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                 addItemSvtAnimationObj,
                                                                 0LL);
          if ( addItemSvtAnimationObj )
          {
            v26.fields.y = v22 + 9.0;
            v26.fields.x = v21;
            v26.fields.z = v23;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)addItemSvtAnimationObj, v26, 0LL);
            goto LABEL_18;
          }
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(addItemSvtAnimationObj, callback);
  }
LABEL_18:
  v24 = BattleResultItemComponent__PlayVoiceCoroutine(this, callback, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v24, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__commandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B1956E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, flg, method);
    sub_1BCA7E0(&Method_BattleResultItemComponent_EndCloseDialogCallBack__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B1956E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v12, 0LL);
}


void __fastcall BattleResultItemComponent__endClose(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4B19571 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B19571 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(gameObject, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endCommandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1956F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3608/*"CLOSE"*/, method, v2);
    byte_4B1956F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3608/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endItemDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1956B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3608/*"CLOSE"*/, method, v2);
    byte_4B1956B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3608/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endOpen(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19558 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9370/*"NEXT"*/, method, v2);
    byte_4B19558 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9370/*"NEXT"*/, 0LL),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0LL) )
  {
    sub_1BCAA3C(myFsm, method);
  }
  BattleViewItemlistComponent__setShow((BattleViewItemlistComponent_o *)myFsm, 0LL);
}


BattleDropItem_o *__fastcall BattleResultItemComponent__getNewDrop(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *newDroplist; // x0
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_BattleDropItem__o *v11; // x8
  BattleDropItem_o *v12; // x19

  if ( (byte_4B19572 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v6, v7);
    byte_4B19572 = 1;
  }
  newDroplist = (System_Collections_Generic_List_object__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0LL;
  Item = System_Collections_Generic_List_object___get_Item(
           newDroplist,
           0,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
  v11 = this->fields.newDroplist;
  if ( !v11 )
    sub_1BCAA3C(Item, v10);
  v12 = (BattleDropItem_o *)Item;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)v11,
    0,
    (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v12;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__itemDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B1956A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, flg, method);
    sub_1BCA7E0(&Method_BattleResultItemComponent_endItemDialogCallBack__, v4, v5);
    sub_1BCA7E0(&Method_BattleResultItemComponent_itemDialogCallBack__, v6, v7);
    byte_4B1956A = 1;
  }
  v8 = Method_BattleResultItemComponent_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_itemDialogCallBack__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_BattleResultItemComponent_itemDialogCallBack__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  itemDialog = this->fields.itemDialog;
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_BattleResultItemComponent_endItemDialogCallBack__, 0LL);
  if ( !itemDialog )
    sub_1BCAA3C(v15, v16);
  ItemDetailInfoComponent__Close_31668900(itemDialog, v14, 0LL);
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

  if ( (byte_4B19563 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_TypeInfo, itemIconEffectObj, dropItem);
    byte_4B19563 = 1;
  }
  v6 = sub_1BCAA2C(
         BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_TypeInfo,
         itemIconEffectObj,
         dropItem,
         method);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = itemIconEffectObj;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)itemIconEffectObj, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = dropItem;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)dropItem, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleResultItemComponent__setCondensedScale(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *getBoostLabel; // x0
  UILabel_o *getTitleLabel; // x20

  if ( (byte_4B19574 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultItemComponent_TypeInfo, method, v2);
    byte_4B19574 = 1;
  }
  getBoostLabel = (UILabel_o *)BattleResultItemComponent_TypeInfo;
  getTitleLabel = this->fields.getTitleLabel;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo, method);
  if ( !getTitleLabel
    || (UILabel__SetCondensedScale(
          getTitleLabel,
          BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH,
          0LL),
        (getBoostLabel = this->fields.getBoostLabel) == 0LL) )
  {
    sub_1BCAA3C(getBoostLabel, method);
  }
  UILabel__SetCondensedScale(
    getBoostLabel,
    BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH,
    0LL);
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
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x26
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  System_Collections_Generic_List_object__o *v84; // x22
  void *object; // x0
  struct BattleDropItem_array *gifts; // x1
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  System_Collections_Generic_List_object__o **v93; // x24
  __int64 v94; // x2
  __int64 v95; // x3
  System_Collections_Generic_List_object__o *v96; // x27
  System_Predicate_object__o *v97; // x22
  Il2CppObject *v98; // x28
  struct BattleResultItemComponent___c_StaticFields *static_fields; // x0
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  System_Collections_Generic_List_T__o *All; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x22
  __int64 v116; // x8
  int v117; // w9
  System_Predicate_object__o **v118; // x25
  System_Predicate_object__o *v119; // x22
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  _DWORD *v126; // x22
  int max_length; // w8
  __int64 v128; // x9
  BattleDropItem_o *v129; // x12
  struct System_String_array *voiceIds; // x1
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x3
  System_Collections_Generic_List_object__o *v140; // x23
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x3
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x25
  BattleResultItemComponent___c_c *v145; // x0
  System_Predicate_object__o *_9__48_2; // x22
  Il2CppObject *v147; // x26
  struct BattleResultItemComponent___c_StaticFields *v148; // x0
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  BattleViewItemlistComponent_o *itemWindow; // x22
  BattleDropItem_array *v156; // x23
  __int64 v157; // x1
  __int64 v158; // x2
  __int64 v159; // x3
  BattleDropItemComponent_ClickDelegate_o *v160; // x25
  const MethodInfo *v161; // x1
  const MethodInfo *v162; // x1
  const MethodInfo *v163; // x1
  UserGameEntity_o *SelfUserGame; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v165; // x28
  int32_t v166; // w26
  _BOOL8 v167; // x0
  __int64 v168; // x1
  BattleDropItem_o *current; // x22
  _BOOL8 isAutoSellItem; // x0
  __int64 v171; // x1
  Il2CppObject *v172; // x0
  __int64 v173; // x1
  int klass; // w8
  UserEventEntity_array *v175; // x2
  int64_t v176; // x4
  signed int v177; // w8
  signed int v178; // w20
  int32_t conquestRewardQp; // w29
  EventConquestInfo_o *v180; // x22
  int v181; // w8
  __int64 v182; // x8
  UserGameEntity_o *oldGamea; // [xsp+8h] [xbp-108h]
  int32_t eventGroupId; // [xsp+20h] [xbp-F0h]
  const MethodInfo *v185; // [xsp+28h] [xbp-E8h]
  UserGameEntity_o *v186; // [xsp+60h] [xbp-B0h]
  UserEventPointEntity_array *oldUsrPointa; // [xsp+68h] [xbp-A8h]
  int32_t eventIda; // [xsp+74h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v189; // [xsp+78h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v190; // [xsp+90h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+A8h] [xbp-68h] BYREF

  if ( (byte_4B19559 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Find_DropUpInfo___, drop, *(_QWORD *)&getqp);
    sub_1BCA7E0(&BattleDropItem_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_BattleResultItemComponent_setShowConf__, v26, v27);
    sub_1BCA7E0(&BattleDropItemComponent_ClickDelegate_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v30, v31);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, v32, v33);
    sub_1BCA7E0(&DataManager_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v36, v37);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__get_Current__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__, v46, v47);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__, v48, v49);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__, v50, v51);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__Insert__, v52, v53);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, v54, v55);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem___ctor__, v56, v57);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v58, v59);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v60, v61);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleDropItem__TypeInfo, v62, v63);
    sub_1BCA7E0(&System_Predicate_DropUpInfo__TypeInfo, v64, v65);
    sub_1BCA7E0(&System_Predicate_BattleDropItem__TypeInfo, v66, v67);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v68, v69);
    sub_1BCA7E0(&Method_BattleResultItemComponent___c__setResultData_b__48_0__, v70, v71);
    sub_1BCA7E0(&Method_BattleResultItemComponent___c__setResultData_b__48_2__, v72, v73);
    sub_1BCA7E0(&Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__, v74, v75);
    sub_1BCA7E0(&BattleResultItemComponent___c__DisplayClass48_0_TypeInfo, v76, v77);
    sub_1BCA7E0(&BattleResultItemComponent___c_TypeInfo, v78, v79);
    byte_4B19559 = 1;
  }
  entity = 0LL;
  memset(&v190, 0, sizeof(v190));
  v80 = sub_1BCAA2C(
          BattleResultItemComponent___c__DisplayClass48_0_TypeInfo,
          drop,
          *(_QWORD *)&getqp,
          *(_QWORD *)&originalGetQp);
  System_Object___ctor((Il2CppObject *)v80, 0LL);
  eventIda = eventId;
  this->fields.g_eventId = eventId;
  v84 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleDropItem__TypeInfo,
                                                       v81,
                                                       v82,
                                                       v83);
  System_Collections_Generic_List_object____ctor(
    v84,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
  if ( !v80 )
    goto LABEL_27;
  *(_QWORD *)(v80 + 16) = v84;
  v93 = (System_Collections_Generic_List_object__o **)(v80 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v80 + 16), (int64_t)v84, v87, v88, v89, v90, v91, v92);
  object = *(void **)(v80 + 16);
  if ( !object )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)object,
    (System_Collections_Generic_IEnumerable_T__o *)drop,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
  object = BattleResultItemComponent___c_TypeInfo;
  v96 = *v93;
  if ( !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo, gifts);
    object = BattleResultItemComponent___c_TypeInfo;
  }
  v97 = *(System_Predicate_object__o **)(*((_QWORD *)object + 23) + 8LL);
  if ( !v97 )
  {
    if ( !*((_DWORD *)object + 56) )
    {
      j_il2cpp_runtime_class_init_0(object, gifts);
      object = BattleResultItemComponent___c_TypeInfo;
    }
    v98 = (Il2CppObject *)**((_QWORD **)object + 23);
    v97 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_BattleDropItem__TypeInfo, gifts, v94, v95);
    System_Predicate_object____ctor(v97, v98, Method_BattleResultItemComponent___c__setResultData_b__48_0__, 0LL);
    static_fields = BattleResultItemComponent___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Predicate_BattleDropItem__o *)v97;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__48_0,
      (int64_t)v97,
      v100,
      v101,
      v102,
      v103,
      v104,
      v105);
  }
  if ( !v96 )
    goto LABEL_27;
  All = System_Collections_Generic_List_object___FindAll(
          v96,
          (System_Predicate_T__o *)v97,
          (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
  this->fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)All;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.newDroplist, (int64_t)All, v107, v108, v109, v110, v111, v112);
  if ( getqp >= 1 )
  {
    v115 = sub_1BCAA2C(BattleDropItem_TypeInfo, gifts, v113, v114);
    BattleDropItem___ctor((BattleDropItem_o *)v115, 0LL);
    if ( !v115 )
      goto LABEL_27;
    *(_QWORD *)(v115 + 20) = 0x500000002LL;
    BattleDropItem__setNum((BattleDropItem_o *)v115, getqp, originalGetQp, 0LL);
    object = *v93;
    if ( !*v93 )
      goto LABEL_27;
    System_Collections_Generic_List_object___Insert(
      (System_Collections_Generic_List_object__o *)object,
      0,
      (Il2CppObject *)v115,
      (const MethodInfo_35A2A0C *)Method_System_Collections_Generic_List_BattleDropItem__Insert__);
  }
  v186 = oldGame;
  oldUsrPointa = oldUsrPoint;
  if ( dropupinfos )
  {
    v116 = *(_QWORD *)(v80 + 16);
    *(_DWORD *)(v80 + 24) = 0;
    if ( !v116 )
      goto LABEL_27;
    v117 = 0;
    v118 = (System_Predicate_object__o **)(v80 + 32);
    while ( v117 < *(_DWORD *)(v116 + 24) )
    {
      v119 = *v118;
      if ( !*v118 )
      {
        v119 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_DropUpInfo__TypeInfo, gifts, v113, v114);
        System_Predicate_object____ctor(
          v119,
          (Il2CppObject *)v80,
          Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__,
          0LL);
        *(_QWORD *)(v80 + 32) = v119;
        sub_1BCA784((PartyOrganizationUtility_o *)(v80 + 32), (int64_t)v119, v120, v121, v122, v123, v124, v125);
      }
      object = System_Array__Find_object_(
                 (System_Object_array *)dropupinfos,
                 (System_Predicate_T__o *)v119,
                 (const MethodInfo_300CA48 *)Method_System_Array_Find_DropUpInfo___);
      if ( object )
      {
        v126 = object;
        object = *v93;
        if ( !*v93 )
          goto LABEL_27;
        object = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)object,
                   *(_DWORD *)(v80 + 24),
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !object )
          goto LABEL_27;
        *((_DWORD *)object + 18) = v126[5];
      }
      v116 = *(_QWORD *)(v80 + 16);
      v117 = *(_DWORD *)(v80 + 24) + 1;
      *(_DWORD *)(v80 + 24) = v117;
      if ( !v116 )
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
        v128 = 0LL;
        while ( (unsigned int)v128 < max_length )
        {
          v129 = gifts->m_Items[v128];
          if ( !v129 )
            goto LABEL_27;
          ++v128;
          v129->fields.isAddReward = 1;
          if ( (int)v128 >= max_length )
            goto LABEL_35;
        }
LABEL_94:
        sub_1BCAA44(object, gifts);
      }
LABEL_35:
      object = *v93;
      if ( !*v93 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)object,
        (System_Collections_Generic_IEnumerable_T__o *)gifts,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      this->fields.animationSvtId = rewardBonus->fields.animationId;
      voiceIds = rewardBonus->fields.voiceIds;
      this->fields.voiceIds = voiceIds;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.voiceIds,
        (int64_t)voiceIds,
        v131,
        v132,
        v133,
        v134,
        v135,
        v136);
      v140 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_BattleDropItem__TypeInfo,
                                                            v137,
                                                            v138,
                                                            v139);
      System_Collections_Generic_List_object____ctor(
        v140,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
      if ( !v140 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        v140,
        (System_Collections_Generic_IEnumerable_T__o *)rewardBonus->fields.gifts,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      newDroplist = this->fields.newDroplist;
      v145 = BattleResultItemComponent___c_TypeInfo;
      if ( !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo, v141);
        v145 = BattleResultItemComponent___c_TypeInfo;
      }
      _9__48_2 = (System_Predicate_object__o *)v145->static_fields->__9__48_2;
      if ( !_9__48_2 )
      {
        if ( !v145->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v145, v141);
          v145 = BattleResultItemComponent___c_TypeInfo;
        }
        v147 = (Il2CppObject *)v145->static_fields->__9;
        _9__48_2 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                   System_Predicate_BattleDropItem__TypeInfo,
                                                   v141,
                                                   v142,
                                                   v143);
        System_Predicate_object____ctor(
          _9__48_2,
          v147,
          Method_BattleResultItemComponent___c__setResultData_b__48_2__,
          0LL);
        v148 = BattleResultItemComponent___c_TypeInfo->static_fields;
        v148->__9__48_2 = (struct System_Predicate_BattleDropItem__o *)_9__48_2;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v148->__9__48_2,
          (int64_t)_9__48_2,
          v149,
          v150,
          v151,
          v152,
          v153,
          v154);
      }
      object = System_Collections_Generic_List_object___FindAll(
                 v140,
                 (System_Predicate_T__o *)_9__48_2,
                 (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
      if ( !newDroplist )
LABEL_27:
        sub_1BCAA3C(object, gifts);
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)newDroplist,
        (System_Collections_Generic_IEnumerable_T__o *)object,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    }
  }
  object = *v93;
  if ( !*v93 )
    goto LABEL_27;
  itemWindow = this->fields.itemWindow;
  v156 = (BattleDropItem_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)object,
                                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  v160 = (BattleDropItemComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                      BattleDropItemComponent_ClickDelegate_TypeInfo,
                                                      v157,
                                                      v158,
                                                      v159);
  BattleDropItemComponent_ClickDelegate___ctor(
    v160,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_setShowConf__,
    0LL);
  if ( !itemWindow )
    goto LABEL_27;
  BattleViewItemlistComponent__setListDataCustomColumn_44957240(
    itemWindow,
    v156,
    eventIda,
    v160,
    this->fields.itemColumnCount,
    0LL);
  object = this->fields.itemWindow;
  if ( !object )
    goto LABEL_27;
  BattleViewItemlistComponent__setHide((BattleViewItemlistComponent_o *)object, 0LL);
  if ( rewardBonus )
  {
    BattleResultItemComponent__AddItemNewLine(this, v161);
    BattleResultItemComponent__SetAddItemSvtAnimation(this, v162);
    BattleResultItemComponent__SetAddItemIconEffect(this, v163);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !object )
    goto LABEL_27;
  object = DataManager__GetMasterData_object_(
             (DataManager_o *)object,
             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*v93 )
    goto LABEL_27;
  v165 = (DataMasterBase_TMaster__TEntity__PKType__o *)object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v189,
    *v93,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
  v166 = 0;
  v190 = v189;
  while ( 1 )
  {
    v167 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v190,
             (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    if ( !v167 )
      break;
    current = (BattleDropItem_o *)v190.fields._current;
    if ( !v190.fields._current )
      sub_1BCAA3C(v167, v168);
    isAutoSellItem = BattleDropItem__isAutoSellItem((BattleDropItem_o *)v190.fields._current, 0LL);
    if ( current->fields.type == 2 )
    {
      if ( !v165 )
        sub_1BCAA3C(isAutoSellItem, v171);
      v172 = DataMasterBase_object__object__int___GetEntity(
               v165,
               current->fields.objectId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v172 )
        sub_1BCAA3C(0LL, v173);
      klass = (int)v172[3].klass;
      if ( klass == 1 || klass == 16 )
        v166 += BattleDropItem__getTotalNum(current, 0LL);
    }
    v166 += current->fields.num * current->fields.sellQp;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v190,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
  if ( !eventConquestInfos )
    goto LABEL_27;
  v177 = eventConquestInfos->max_length;
  if ( v177 < 1 )
  {
    conquestRewardQp = 0;
    if ( !viewGroupIds )
      goto LABEL_27;
  }
  else
  {
    v178 = 0;
    conquestRewardQp = 0;
    do
    {
      if ( v178 >= (unsigned int)v177 )
        goto LABEL_94;
      v180 = eventConquestInfos->m_Items[v178];
      if ( !v180 )
        goto LABEL_27;
      if ( v180->fields.type == 2 )
      {
        if ( !v165 )
          goto LABEL_27;
        object = DataMasterBase_object__object__int___GetEntity(
                   v165,
                   v180->fields.objectId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( object )
        {
          v181 = *((_DWORD *)object + 12);
          if ( v181 == 16 || v181 == 1 )
            conquestRewardQp += v180->fields.getNum;
        }
      }
      v177 = eventConquestInfos->max_length;
      ++v178;
    }
    while ( v178 < v177 );
    if ( !viewGroupIds )
      goto LABEL_27;
  }
  v182 = *(_QWORD *)&viewGroupIds->max_length;
  if ( (_DWORD)v182 == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, gifts);
    object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !object )
      goto LABEL_27;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)object,
           &entity,
           eventIda,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    v182 = *(_QWORD *)&viewGroupIds->max_length;
  }
  if ( v182 )
  {
    BattleResultItemComponent__SetGroupEventRoot(
      this,
      eventIda,
      v175,
      oldUsrPointa,
      v176,
      SelfUserGame,
      v166,
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
    v166,
    boostRate,
    conquestRewardQp,
    firstClearRewardQp,
    v186,
    eventConquestInfos,
    isNotDisplayEventPoint,
    eventGroupId,
    v185);
}


void __fastcall BattleResultItemComponent__setShowCommandCodeConf(
        BattleResultItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1956C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9764/*"OPEN_COMMANDCODE"*/, commandCodeId, method);
    byte_4B1956C = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_1BCAA3C(0LL, commandCodeId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9764/*"OPEN_COMMANDCODE"*/, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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

  if ( (byte_4B19568 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9771/*"OPEN_ITEM"*/, *(_QWORD *)&itemId, method);
    byte_4B19568 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_1BCAA3C(0LL, *(_QWORD *)&itemId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9771/*"OPEN_ITEM"*/, 0LL);
}


void __fastcall BattleResultItemComponent__setShowServantConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v4; // x19

  v4 = this;
  if ( (byte_4B19564 & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_1BCA7E0(&StringLiteral_9779/*"OPEN_SERVANT"*/, dropItem, method);
    byte_4B19564 = 1;
  }
  v4->fields.tmp_userSvtId = 0LL;
  v4->fields.tmp_svtId = 0;
  if ( !dropItem
    || (!BattleDropItem__isAutoSellItem(dropItem, 0LL)
      ? (v4->fields.tmp_userSvtId = dropItem->fields.userSvtId)
      : (v4->fields.tmp_svtId = dropItem->fields.objectId),
        (this = (BattleResultItemComponent_o *)v4->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(this, dropItem);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9779/*"OPEN_SERVANT"*/, 0LL);
}


void __fastcall BattleResultItemComponent__showCommandCodeDialog(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  ServantStatusDialog_EndDelegate_o *v21; // x22

  if ( (byte_4B1956D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultItemComponent_commandCodeDialogCallBack__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6, v7);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B1956D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v21 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v18, v19, v20),
        ServantStatusDialog_EndDelegate___ctor(
          v21,
          (Il2CppObject *)this,
          Method_BattleResultItemComponent_commandCodeDialogCallBack__,
          0LL),
        !v17) )
  {
    sub_1BCAA3C(Instance, v15);
  }
  CommonUI__OpenServantStatusDialog_30778960((CommonUI_o *)v17, 0, (UserCommandCodeEntity_o *)Entity, v21, 0LL, 0LL);
}


void __fastcall BattleResultItemComponent__showItemDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  ItemDetailInfoComponent_CallbackFunc_o *v20; // x22

  if ( (byte_4B19569 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultItemComponent_itemDialogCallBack__, method, v2);
    sub_1BCA7E0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B19569 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v16 = (ItemEntity_o *)Entity,
        v20 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v17,
                                                          v18,
                                                          v19),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v20,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultItemComponent_itemDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_1BCAA3C(Instance, v13);
  }
  ItemDetailInfoComponent__Open(itemDialog, v16, v20, 50, 0LL);
}


void __fastcall BattleResultItemComponent__showServantDialog(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t tmp_userSvtId; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  Il2CppObject *Instance; // x20
  int64_t v13; // x21
  ServantStatusDialog_EndDelegate_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t tmp_svtId; // w21
  ServantStatusDialog_EndDelegate_o *v18; // x22

  if ( (byte_4B19565 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultItemComponent_DialogCallBack__, method, v2);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B19565 = 1;
  }
  tmp_userSvtId = this->fields.tmp_userSvtId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( tmp_userSvtId >= 1 )
  {
    v13 = this->fields.tmp_userSvtId;
    v14 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v9, v10, v11);
    ServantStatusDialog_EndDelegate___ctor(
      v14,
      (Il2CppObject *)this,
      Method_BattleResultItemComponent_DialogCallBack__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_30775636((CommonUI_o *)Instance, 0, v13, v14, 0LL, 0LL);
      return;
    }
LABEL_8:
    sub_1BCAA3C(v15, v16);
  }
  tmp_svtId = this->fields.tmp_svtId;
  v18 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v9, v10, v11);
  ServantStatusDialog_EndDelegate___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_DialogCallBack__,
    0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_30779656((CommonUI_o *)Instance, 0, tmp_svtId, v18, 0LL);
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
  __int64 v2; // x2
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t _1__state; // w8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_Collections_Generic_List_object__o *executingCallback; // x0
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v16; // x9
  __int128 v17; // q0
  struct System_Collections_Generic_List_Enumerator_GameObject__o *p__7__wrap1; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x1
  UnityEngine_GameObject_o *current; // x0
  Il2CppObject *Component_object; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  _BYTE *monitor; // x8
  System_Collections_IEnumerator_o *v31; // x1
  UnityEngine_Coroutine_o *started; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  UnityEngine_MonoBehaviour_c *klass; // x8
  __int64 v37; // x0
  __int64 v38; // x1
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v39; // x8
  BattleResultComponent_o *v40; // x0
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v42; // x19
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Collections_Generic_List_Enumerator_T__o v50[2]; // [xsp+8h] [xbp-78h] BYREF
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o **v51; // [xsp+48h] [xbp-38h]
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v52; // [xsp+58h] [xbp-28h] BYREF

  v52 = this;
  v3 = this;
  if ( (byte_4B1957D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8, v9);
    this = (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *)sub_1BCA7E0(
                                                                               &UnityEngine_WaitForSeconds_TypeInfo,
                                                                               v10,
                                                                               v11);
    byte_4B1957D = 1;
  }
  v51 = &v52;
  _1__state = v3->fields.__1__state;
  _4__this = (UnityEngine_MonoBehaviour_o *)v3->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_1BCAA3C(this, method);
    m_CancellationTokenSource = _4__this[1].fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      sub_1BCAA3C(this, method);
    executingCallback = (System_Collections_Generic_List_object__o *)m_CancellationTokenSource[1].fields._executingCallback;
    if ( !executingCallback )
      sub_1BCAA3C(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      v50,
      executingCallback,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v16 = v52;
    v17 = *(_OWORD *)&v50[0].fields._list;
    p__7__wrap1 = &v52->fields.__7__wrap1;
    v50[1] = v50[0];
    v52->fields.__7__wrap1.fields._current = (struct UnityEngine_GameObject_o *)v50[0].fields._current;
    *(_OWORD *)&v16->fields.__7__wrap1.fields._list = v17;
    sub_1BCA784((PartyOrganizationUtility_o *)p__7__wrap1, 0LL, v19, v20, v21, v22, v23, v24);
    v3 = v52;
  }
  v3->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v3->fields.__7__wrap1,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v52->fields.__7__wrap1.fields._current;
    if ( !current )
      sub_1BCAA3C(0LL, v25);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         current,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    if ( !Component_object )
      sub_1BCAA3C(0LL, v28);
    monitor = Component_object[7].monitor;
    if ( !monitor )
      sub_1BCAA3C(Component_object, v28);
    if ( monitor[77] )
    {
      if ( !_4__this )
        sub_1BCAA3C(Component_object, v28);
      v31 = BattleResultItemComponent__itemFlashAnimationCoroutine(
              (BattleResultItemComponent_o *)Component_object,
              (UnityEngine_GameObject_o *)Component_object[9].monitor,
              (BattleDropItemComponent_o *)Component_object,
              v29);
      started = UnityEngine_MonoBehaviour__StartCoroutine_70139516(_4__this, v31, 0LL);
      klass = _4__this[1].klass;
      if ( !klass )
        sub_1BCAA3C(started, v33);
      if ( !LOBYTE(klass->_2.initializationExceptionGCHandle) )
      {
        v42 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, v33, v34, v35);
        UnityEngine_WaitForSeconds___ctor(v42, 0.01, 0LL);
        v43 = v52;
        v52->fields.__2__current = (Il2CppObject *)v42;
        sub_1BCA784((PartyOrganizationUtility_o *)&v43->fields.__2__current, (int64_t)v42, v44, v45, v46, v47, v48, v49);
        result = 1;
        v52->fields.__1__state = 1;
        return result;
      }
    }
    v3 = v52;
  }
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58____m__Finally1(v52, v25);
  v39 = v52;
  v52->fields.__7__wrap1.fields._list = 0LL;
  *(_QWORD *)&v39->fields.__7__wrap1.fields._index = 0LL;
  v39->fields.__7__wrap1.fields._current = 0LL;
  if ( !_4__this )
    sub_1BCAA3C(v37, v38);
  v40 = (BattleResultComponent_o *)_4__this[1].klass;
  if ( !v40 )
    sub_1BCAA3C(0LL, v38);
  BattleResultComponent__QpFix(v40, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2

  if ( (byte_4B1957E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    byte_4B1957E = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t _1__state; // w8
  BattleResultItemComponent_o *_4__this; // x20
  Il2CppObject *v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x2
  __int64 v33; // x3
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_WaitForSeconds_o *v35; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  bool result; // w0
  System_Collections_IEnumerator_o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Random_o *v48; // x21
  struct System_String_array *voiceIds; // x8
  struct BattleResultItemComponent___c__DisplayClass57_0_o *_8__1; // x8
  il2cpp_array_size_t v51; // w22
  System_String_o *v52; // x0
  __int64 v53; // x2
  __int64 v54; // x3
  struct System_String_array *v55; // x8
  BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *v56; // x21
  System_String_o *v57; // x22
  SeManager_c *v58; // x0
  Il2CppObject *v59; // x24
  float DEFAULT_VOLUME; // s8
  System_Action_o *v61; // x23
  __int64 v62; // x1
  struct BattleResultItemComponent___c__DisplayClass57_0_o *v63; // x8
  struct BattleResultComponent_o *v64; // x8
  PartyOrganizationUtility_o *v65; // x19

  v8 = this;
  if ( (byte_4B1957F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Random_TypeInfo, v9, v10);
    sub_1BCA7E0(&SeManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&SoundManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_BattleResultItemComponent___c__DisplayClass57_0__PlayVoiceCoroutine_b__0__, v15, v16);
    sub_1BCA7E0(&BattleResultItemComponent___c__DisplayClass57_0_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v19, v20);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)sub_1BCA7E0(&StringLiteral_12818/*"Servants_"*/, v21, v22);
    byte_4B1957F = 1;
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
      v25 = (Il2CppObject *)sub_1BCAA2C(BattleResultItemComponent___c__DisplayClass57_0_TypeInfo, method, v2, v3);
      System_Object___ctor(v25, 0LL);
      v8->fields.__8__1 = (struct BattleResultItemComponent___c__DisplayClass57_0_o *)v25;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v25, v26, v27, v28, v29, v30, v31);
      if ( !_4__this )
        goto LABEL_30;
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        goto LABEL_30;
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v35 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v32, v33);
        UnityEngine_WaitForSeconds___ctor(v35, 0.3, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v35;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(p__2__current, (int64_t)v35, v37, v38, v39, v40, v41, v42);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
    }
    v44 = BattleResultItemComponent__PlayItemIconEffectCoroutine(_4__this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, v44, 0LL);
    v48 = (System_Random_o *)sub_1BCAA2C(System_Random_TypeInfo, v45, v46, v47);
    System_Random___ctor(v48, 0LL);
    voiceIds = _4__this->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_30;
    if ( !v48 )
      goto LABEL_30;
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))v48->klass->vtable._6_Next.method)(
                                                                      v48,
                                                                      0LL,
                                                                      voiceIds->max_length,
                                                                      v48->klass->vtable._7_Next.methodPtr);
    _8__1 = v8->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_30;
    v51 = (unsigned int)this;
    _8__1->fields.IsVoiceComp = 0;
    v52 = System_Int32__ToString((int)_4__this + 272, 0LL);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)System_String__Concat_62401220(
                                                                      (System_String_o *)StringLiteral_12818/*"Servants_"*/,
                                                                      v52,
                                                                      0LL);
    v55 = _4__this->fields.voiceIds;
    if ( !v55 )
      goto LABEL_30;
    if ( v51 >= v55->max_length )
      sub_1BCAA44(this, method);
    v56 = this;
    v57 = v55->m_Items[v51];
    v58 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
      v58 = SeManager_TypeInfo;
    }
    v59 = (Il2CppObject *)v8->fields.__8__1;
    DEFAULT_VOLUME = v58->static_fields->DEFAULT_VOLUME;
    v61 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v53, v54);
    System_Action___ctor(
      v61,
      v59,
      Method_BattleResultItemComponent___c__DisplayClass57_0__PlayVoiceCoroutine_b__0__,
      0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v62);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)SoundManager__playVoice_39419392(
                                                                      (System_String_o *)v56,
                                                                      v57,
                                                                      DEFAULT_VOLUME,
                                                                      v61,
                                                                      0LL);
  }
  v63 = v8->fields.__8__1;
  if ( !v63 )
    goto LABEL_30;
  if ( v63->fields.IsVoiceComp )
  {
LABEL_27:
    ActionExtensions__Call(v8->fields.callback, 0LL);
    return 0;
  }
  if ( !_4__this || (v64 = _4__this->fields.parentComp) == 0LL )
LABEL_30:
    sub_1BCAA3C(this, method);
  if ( v64->fields.isAddRewardEffectSkip )
    goto LABEL_27;
  v8->fields.__2__current = 0LL;
  v65 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BCA784(v65, 0LL, v2, v3, v4, v5, v6, v7);
  *(_DWORD *)&v65[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattleResultItemComponent__PlayVoiceCoroutine_d__57_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1957B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultItemComponent___c_TypeInfo, v1, v2);
    byte_4B1957B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleResultItemComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleResultItemComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultItemComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleResultItemComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_38401528(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_38401920(s->fields.type, 0LL);
}


bool __fastcall BattleResultItemComponent___c___setResultData_b__48_2(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BCAA3C(this, 0LL);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_38401528(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_38401920(s->fields.type, 0LL);
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
  if ( (byte_4B1957C & 1) == 0 )
  {
    this = (BattleResultItemComponent___c__DisplayClass48_0_o *)sub_1BCA7E0(
                                                                  &Method_System_Collections_Generic_List_BattleDropItem__get_Item__,
                                                                  e,
                                                                  method);
    byte_4B1957C = 1;
  }
  if ( !e
    || (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)v4->fields.list) == 0LL
    || (itemId = e->fields.itemId,
        (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v4->fields.i,
                                                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__)) == 0LL) )
  {
    sub_1BCAA3C(this, e);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t _1__state; // w8
  UnityEngine_Object_o *itemIconEffectObj; // x20
  __int64 v8; // x2
  __int64 v9; // x3
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *v10; // x20
  int v11; // s0
  UnityEngine_WaitForSeconds_o *v14; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  bool result; // w0
  struct BattleDropItemComponent_o *dropItem; // x8

  v3 = this;
  if ( (byte_4B19580 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)sub_1BCA7E0(
                                                                               &UnityEngine_WaitForSeconds_TypeInfo,
                                                                               v4,
                                                                               v5);
    byte_4B19580 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    dropItem = v3->fields.dropItem;
    v3->fields.__1__state = -1;
    if ( !dropItem )
      goto LABEL_19;
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)dropItem->fields.root;
    if ( !this )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  else if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    itemIconEffectObj = (UnityEngine_Object_o *)v3->fields.itemIconEffectObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Inequality(itemIconEffectObj, 0LL, 0LL) )
      goto LABEL_14;
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)v3->fields.itemIconEffectObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)v3->fields.itemIconEffectObj;
      if ( this )
      {
        this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)UnityEngine_GameObject__get_transform(
                                                                                   (UnityEngine_GameObject_o *)this,
                                                                                   0LL);
        if ( v3->fields.dropItem )
        {
          v10 = this;
          this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)UnityEngine_Component__get_transform(
                                                                                     (UnityEngine_Component_o *)v3->fields.dropItem,
                                                                                     0LL);
          if ( this )
          {
            *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
            if ( v10 )
            {
              UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v10, *(UnityEngine_Vector3_o *)&v11, 0LL);
LABEL_14:
              v14 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v8, v9);
              UnityEngine_WaitForSeconds___ctor(v14, 0.2333, 0LL);
              v3->fields.__2__current = (Il2CppObject *)v14;
              p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
              sub_1BCA784(p__2__current, (int64_t)v14, v16, v17, v18, v19, v20, v21);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
              return result;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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