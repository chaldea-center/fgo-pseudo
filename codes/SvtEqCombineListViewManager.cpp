void __fastcall SvtEqCombineListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  int32_t v4; // w1

  if ( (byte_4A5ED9A & 1) == 0 )
  {
    sub_1B885B0(&SvtEqCombineListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13096/*"SvtEqCombine"*/);
    byte_4A5ED9A = 1;
  }
  static_fields = SvtEqCombineListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->COLOR_VAL = 0x13EC00000LL;
  v4 = StringLiteral_13096/*"SvtEqCombine"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_13096/*"SvtEqCombine"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->SORT_SAVE_KEY, v4, v1, v2);
  SvtEqCombineListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void __fastcall SvtEqCombineListViewManager___ctor(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5ED99 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    byte_4A5ED99 = 1;
  }
  this->fields.selectMax = 20;
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  this->fields.tempMtSvtList = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tempMtSvtList, (int32_t)v3, v4, v5);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SvtEqCombineListViewManager__CancelDragEnd(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
    {
      do
        SvtEqCombineListViewManager__CancelDragSelect(this, dragStartIndex++, v2);
      while ( dragStartIndex <= this->fields.dragEndIndex );
    }
    else
    {
      do
        SvtEqCombineListViewManager__CancelDragSelect(this, dragEndIndex++, v2);
      while ( dragEndIndex <= this->fields.dragStartIndex );
    }
  }
  SvtEqCombineListViewManager__RefrashListDisp(this, method);
  this->fields.dragEndIndex = -1;
  *(_QWORD *)&this->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
  this->fields.isDragSelect = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__CancelDragSelect(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *v7; // x0
  int32_t *v8; // x1
  System_Collections_Generic_List_ListViewItem__o *v9; // x2
  int32_t v10; // w3
  const MethodInfo *v11; // x4

  if ( (byte_4A5ED97 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED97 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
  {
    sub_1B8880C(itemSortList, *(_QWORD *)&index);
  }
  methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    LODWORD(itemSortList[6].monitor) = -1;
  }
  else
  {
    sub_1B88ACC(itemSortList);
    SvtEqCombineListViewManager__GetFocusItemIndex(v7, v8, v9, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SvtEqCombineListViewManager__CheckCompareQp(
        SvtEqCombineListViewManager_o *this,
        int32_t nowCombineQp,
        const MethodInfo *method)
{
  int32_t CombineQpSvtEq; // w19
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w21
  System_Collections_Generic_List_object__o *v8; // x22
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *v11; // x0
  int32_t *v12; // x1
  int32_t *v13; // x2
  int32_t v14; // w3
  const MethodInfo *v15; // x4

  CombineQpSvtEq = nowCombineQp;
  if ( (byte_4A5ED63 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED63 = 1;
  }
  if ( !this->fields.selectSum )
    return CombineQpSvtEq;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_1B8880C(itemList, *(_QWORD *)&nowCombineQp);
  size = itemList->fields._size;
  if ( size < 1 )
    return CombineQpSvtEq;
  v7 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_18;
    v8 = itemList;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) && BYTE1(v8[4].klass) )
    {
      itemList = (System_Collections_Generic_List_object__o *)v8[3].klass;
      if ( !itemList )
        goto LABEL_18;
      if ( CombineQpSvtEq < UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)itemList, 0LL) )
      {
        itemList = (System_Collections_Generic_List_object__o *)v8[3].klass;
        if ( !itemList )
          goto LABEL_18;
        CombineQpSvtEq = UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)itemList, 0LL);
      }
    }
    if ( size == ++v7 )
      return CombineQpSvtEq;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_18;
  }
  sub_1B88ACC(itemList);
  return SvtEqCombineListViewManager__CheckIncrementLv(v11, v12, v13, v14, v15);
}


void __fastcall SvtEqCombineListViewManager__CheckDragMax(
        SvtEqCombineListViewManager_o *this,
        bool *isMaxLvSelected,
        const MethodInfo *method)
{
  void *itemList; // x0
  int v6; // w24
  int v7; // w25
  _BOOL8 v8; // x0
  __int64 v9; // x1
  SvtEqCombineListViewItem_o *current; // x21
  __int64 methodPtr_low; // x9
  __int64 v12; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  const MethodInfo *v14; // x1
  UserServantEntity_o *v15; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  float v20; // s8
  float v21; // s0
  unsigned int v22; // w8
  struct UserServantEntity_o *v23; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  __int64 v25; // x22
  __int64 v26; // x23
  int32_t v27; // w8
  int v28; // w23
  int v29; // w22
  const MethodInfo *v30; // x4
  int32_t LevelMax; // w21
  int32_t v32; // w8
  int32_t v33; // w22
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+40h] [xbp-80h] BYREF
  __int64 checkLv; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4A5ED65 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED65 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  checkLv = 0LL;
  memset(&v35, 0, sizeof(v35));
  *isMaxLvSelected = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v6 = 0;
  v7 = 0;
  v36 = v34;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v36,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = (SvtEqCombineListViewItem_o *)v36.fields._current;
    if ( !v36.fields._current )
      goto LABEL_49;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v36.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)v36.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_1B88ACC(v36.fields._current);
LABEL_49:
      sub_1B8880C(v8, v9);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v36.fields._current, 0LL) || current->fields.dragSelectNum >= 1 )
    {
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        sub_1B8880C(0LL, v12);
      if ( !UserServantEntity__isLevelMax(baseUsrSvtData, 0LL) )
        goto LABEL_16;
      v15 = this->fields.baseUsrSvtData;
      if ( !v15 )
        sub_1B8880C(0LL, v14);
      if ( UserServantEntity__isLevelMax(v15, 0LL) && current->fields.isLimitCntTarget )
      {
LABEL_16:
        v7 += current->fields.materialExp;
        v6 += SvtEqCombineListViewItem__get_GetAddTotalExp(current, v14);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_53;
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      combineEventList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v35 = v34;
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v18 )
        break;
      if ( !v35.fields._current )
        sub_1B8880C(v18, v19);
      if ( HIDWORD(v35.fields._current[1].klass) == 17 )
      {
        v20 = *(float *)&v35.fields._current[3].monitor;
        if ( !byte_4A5638E )
        {
          sub_1B885B0(&System_Math_TypeInfo);
          byte_4A5638E = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v21 = v20 * (float)v7;
        v22 = vcvtps_s32_f32(v21);
        if ( ceilf(v21) == INFINITY )
          v7 = 0x80000000;
        else
          v7 = v22;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( itemList )
    {
      itemList = DataManager__GetMasterData_object_(
                   (DataManager_o *)itemList,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      v23 = this->fields.baseUsrSvtData;
      if ( v23 )
      {
        v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemList;
        v26 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
        v25 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v38.fields.currentCryptoKey = v26;
        *(_QWORD *)&v38.fields.fakeValue = v25;
        itemList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v38, 0LL);
        if ( v24 )
        {
          itemList = DataMasterBase_object__object__int___GetEntity(
                       v24,
                       (int32_t)itemList,
                       (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( itemList )
          {
            v27 = *((_DWORD *)itemList + 33);
            itemList = this->fields.baseUsrSvtData;
            this->fields.expType = v27;
            if ( itemList )
            {
              v29 = *((_DWORD *)itemList + 65);
              LODWORD(checkLv) = *((_DWORD *)itemList + 64);
              v28 = checkLv;
              LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)itemList, 0LL);
              if ( v28 == LevelMax )
              {
                v32 = 0;
              }
              else
              {
                v33 = v7 + v6 + v29;
                while ( !SvtEqCombineListViewManager__CheckIncrementLv(
                           this,
                           (int32_t *)&checkLv,
                           (int32_t *)&checkLv + 1,
                           v33,
                           v30) )
                  ;
                v32 = HIDWORD(checkLv);
              }
              *isMaxLvSelected = v32 >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_53:
    sub_1B8880C(itemList, isMaxLvSelected);
  }
}


bool __fastcall SvtEqCombineListViewManager__CheckIncrementLv(
        SvtEqCombineListViewManager_o *this,
        int32_t *checkLv,
        int32_t *increLv,
        int32_t totalExp,
        const MethodInfo *method)
{
  void *baseUsrSvtData; // x0
  int32_t LevelMax; // w0
  int32_t v11; // w8
  int32_t v12; // w8
  bool result; // w0

  if ( (byte_4A5ED66 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ED66 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)baseUsrSvtData, 0LL);
  if ( *checkLv >= LevelMax )
  {
    *increLv = LevelMax;
    return 1;
  }
  baseUsrSvtData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_object_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0LL)) == 0LL )
  {
LABEL_16:
    sub_1B8880C(baseUsrSvtData, checkLv);
  }
  v11 = *((_DWORD *)baseUsrSvtData + 6);
  if ( v11 <= totalExp )
  {
    if ( v11 != totalExp )
    {
      result = 0;
      ++*checkLv;
      return result;
    }
    v12 = *((_DWORD *)baseUsrSvtData + 5) + 1;
  }
  else
  {
    v12 = *((_DWORD *)baseUsrSvtData + 5);
  }
  *increLv = v12;
  return 1;
}


bool __fastcall SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(
        SvtEqCombineListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *selectedMtSvtList_k__BackingField; // x0
  const MethodInfo *v6; // x1
  bool v7; // w20
  int v8; // w19
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5ED80 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    byte_4A5ED80 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
  {
    if ( selectedMtSvtList_k__BackingField->fields._size < 1 )
    {
      LOBYTE(selectedMtSvtList_k__BackingField) = 0;
    }
    else
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v10,
        selectedMtSvtList_k__BackingField,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v10,
               (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
        if ( !v7 )
          break;
        if ( !v10.fields._current )
          sub_1B8880C(0LL, v6);
        if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v10.fields._current, v6) == usrSvtId )
        {
          v8 = 5;
          goto LABEL_12;
        }
      }
      v8 = 2;
LABEL_12:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v10,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      LOBYTE(selectedMtSvtList_k__BackingField) = v7 && v8 == 5;
    }
  }
  return (char)selectedMtSvtList_k__BackingField;
}


bool __fastcall SvtEqCombineListViewManager__CheckIsSelectMaterial(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isSelectMaterial;
}


bool __fastcall SvtEqCombineListViewManager__CheckMaterialEquipped(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w22
  int32_t v5; // w20
  System_Collections_Generic_List_object__o *v6; // x21
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4A5ED74 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED74 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1B8880C(itemList, method);
  size = itemList->fields._size;
  if ( size < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v5,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_15;
    v6 = itemList;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL)
      && (BYTE4(v6[5].klass) || BYTE4(v6[6].klass) || BYTE5(v6[6].klass)) )
    {
      return 1;
    }
    if ( size == ++v5 )
      return 0;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_15;
  }
  sub_1B88ACC(itemList);
  return (unsigned __int8)SvtEqCombineListViewManager__GetSelectedMaterialList(v9, v10);
}


void __fastcall SvtEqCombineListViewManager__ClearSelectedSvtList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4A5ED78 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    byte_4A5ED78 = 1;
  }
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
  {
    size = selectedMtSvtList_k__BackingField->fields._size;
    v5 = selectedMtSvtList_k__BackingField->fields._version + 1;
    selectedMtSvtList_k__BackingField->fields._size = 0;
    selectedMtSvtList_k__BackingField->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)selectedMtSvtList_k__BackingField->fields._items, 0, size, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__CloseServantCheckEquipDialog(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantCheckEquipDialog_o *servantEquipCheckDialog; // x0
  const MethodInfo *v6; // x1

  servantEquipCheckDialog = this->fields.servantEquipCheckDialog;
  if ( !servantEquipCheckDialog )
    goto LABEL_6;
  ServantCheckEquipDialog__Close(servantEquipCheckDialog, 0LL);
  if ( isDecide )
  {
    SvtEqCombineListViewManager__SetSelectedMaterialInfo(this, v6);
    servantEquipCheckDialog = (ServantCheckEquipDialog_o *)this->fields.combineRootComponent;
    if ( servantEquipCheckDialog )
    {
      CombineRootComponent__SetSelectSvtEqMaterialList((CombineRootComponent_o *)servantEquipCheckDialog, 0LL);
      return;
    }
LABEL_6:
    sub_1B8880C(servantEquipCheckDialog, isDecide);
  }
}


void __fastcall SvtEqCombineListViewManager__CreateList(
        SvtEqCombineListViewManager_o *this,
        int32_t type,
        int32_t modeKind,
        EventUpValSetupInfo_o *setupInfo,
        EventUpValSetupInfo_o *finishSetupInfo,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_c *v11; // x0
  ListViewSort_o *sort; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v17; // x1
  struct ListViewSort_o **p_sort; // x22
  UnityEngine_GameObject_o *gameObject; // x25
  System_Collections_ICollection_o **p_alignedBonusFilterInfos; // x25
  int32_t v21; // w2
  int32_t v22; // w3
  System_Int32_array *servantEquipFilterEventCampaignIds; // x2
  System_Int32_array *servantEquipFilterEventIds; // x3
  System_Int32_array *v25; // x4
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  struct ListViewSort_o *v29; // x26
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x4
  UILabel_o *spendQpInfoLabel; // x23
  UILabel_o *getExpInfoLabel; // x23
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x4
  const MethodInfo *v37; // x2

  if ( (byte_4A5ED5D & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6900/*"GET_EXP_INFO"*/);
    sub_1B885B0(&StringLiteral_9212/*"NEED_QP_INFO"*/);
    byte_4A5ED5D = 1;
  }
  this->fields.currentType = type;
  v11 = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v11);
  sortStatusList = SvtEqCombineListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_37;
  if ( sortStatusList->max_length <= type )
    sub_1B88814(sort, v13);
  v17 = sortStatusList->m_Items[type];
  this->fields.sort = v17;
  p_sort = &this->fields.sort;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v17, v14, v15);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_37;
  sort->fields.listViewKind = 1;
  ListViewSort__Load(sort, 0LL);
  this->fields.dragEndIndex = -1;
  *(_QWORD *)&this->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
  sort = (ListViewSort_o *)this->fields.bgTxtSprite;
  this->fields.isDragSelect = 1;
  if ( !sort )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  sort = (ListViewSort_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)sort & 1, 0LL);
  p_alignedBonusFilterInfos = (System_Collections_ICollection_o **)&this->fields.alignedBonusFilterInfos;
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v21, v22);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_37;
  sort->fields.isBonusKind = 0;
  if ( !setupInfo )
  {
    servantEquipFilterEventCampaignIds = 0LL;
    servantEquipFilterEventIds = 0LL;
    if ( finishSetupInfo )
      goto LABEL_13;
LABEL_15:
    v25 = 0LL;
    goto LABEL_16;
  }
  servantEquipFilterEventCampaignIds = setupInfo->fields.servantEquipFilterEventCampaignIds;
  servantEquipFilterEventIds = setupInfo->fields.servantEquipFilterEventIds;
  if ( !finishSetupInfo )
    goto LABEL_15;
LABEL_13:
  v25 = finishSetupInfo->fields.servantEquipFilterEventIds;
LABEL_16:
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         sort,
                         0LL,
                         servantEquipFilterEventCampaignIds,
                         servantEquipFilterEventIds,
                         v25,
                         0LL,
                         0,
                         0LL);
  *p_alignedBonusFilterInfos = (System_Collections_ICollection_o *)AlignedBonusFilter;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos,
    (int32_t)AlignedBonusFilter,
    v27,
    v28);
  v29 = *p_sort;
  sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(*p_alignedBonusFilterInfos, 0LL);
  if ( !v29 )
    goto LABEL_37;
  v29->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
  sort = (ListViewSort_o *)this->fields.scaleChangeButton;
  if ( !sort )
    goto LABEL_37;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
  if ( !type )
  {
    SvtEqCombineListViewManager__SetDispActive(this, 0, v30);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v35);
    SvtEqCombineListViewManager__SetServantList(this, 0, setupInfo, finishSetupInfo, v36);
    sort = (ListViewSort_o *)this->fields.selectInfoLabel;
    if ( sort )
    {
      sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
      if ( sort )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 0, 0LL);
        goto LABEL_32;
      }
    }
    goto LABEL_37;
  }
  if ( type == 1 )
  {
    SvtEqCombineListViewManager__SetDispActive(this, 1, v30);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v31);
    this->fields.selectMax = 20;
    SvtEqCombineListViewManager__SetServantList(this, 1, setupInfo, finishSetupInfo, v32);
    sort = (ListViewSort_o *)this->fields.selectInfoLabel;
    if ( sort )
    {
      sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
      if ( sort )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
        sort = (ListViewSort_o *)this->fields.getExpInfo;
        if ( sort )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
          spendQpInfoLabel = this->fields.spendQpInfoLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9212/*"NEED_QP_INFO"*/, 0LL);
          if ( spendQpInfoLabel )
          {
            UILabel__set_text(spendQpInfoLabel, (System_String_o *)sort, 0LL);
            getExpInfoLabel = this->fields.getExpInfoLabel;
            sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6900/*"GET_EXP_INFO"*/, 0LL);
            if ( getExpInfoLabel )
            {
              UILabel__set_text(getExpInfoLabel, (System_String_o *)sort, 0LL);
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_37:
    sub_1B8880C(sort, v13);
  }
LABEL_32:
  sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_37;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !*p_sort || !sort )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0LL);
  SvtEqCombineListViewManager__SetStatusKind(this, modeKind, v37);
  if ( !type )
    EventTutorialMaster__CheckTutorial(-1, 57, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall SvtEqCombineListViewManager__CreateSorteData(const MethodInfo *method)
{
  SvtEqCombineListViewManager_c *v1; // x0
  __int64 v2; // x0
  int32_t v3; // w2
  int32_t v4; // w3
  SvtEqCombineListViewManager_c *v5; // x8
  __int64 v6; // x19
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v8; // x24
  __int64 i; // x22
  SvtEqCombineListViewManager_c *v10; // x0
  struct SvtEqCombineListViewManager_StaticFields *v11; // x8
  unsigned int *sortStatusList; // x26
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  ListViewSort_o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x0
  int v22; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5ED58 & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort___TypeInfo);
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewManager_TypeInfo);
    byte_4A5ED58 = 1;
  }
  v1 = SvtEqCombineListViewManager_TypeInfo;
  v22 = 0;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v1 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( !v1->static_fields->isInitSystem )
  {
    v2 = sub_1B88658(ListViewSort___TypeInfo, 2LL);
    v5 = SvtEqCombineListViewManager_TypeInfo;
    v6 = v2;
    if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v5 = SvtEqCombineListViewManager_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->sortStatusList, v6, v3, v4);
    v8 = 0LL;
    for ( i = 8LL; ; i += 2LL )
    {
      v10 = SvtEqCombineListViewManager_TypeInfo;
      if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
        v10 = SvtEqCombineListViewManager_TypeInfo;
      }
      v11 = v10->static_fields;
      if ( i == 12 )
        break;
      sortStatusList = (unsigned int *)v11->sortStatusList;
      SORT_SAVE_KEY = v11->SORT_SAVE_KEY;
      v22 = v8 + 1;
      v14 = System_Int32__ToString((int32_t)&v22, 0LL);
      v15 = System_String__Concat_61707032(SORT_SAVE_KEY, v14, 0LL);
      v16 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
      ListViewSort___ctor_40759068(v16, v15, 3, 0, 0LL);
      if ( !sortStatusList )
        sub_1B8880C(v17, v18);
      if ( v16 )
      {
        v17 = sub_1B886EC(v16, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v17 )
        {
          v21 = sub_1B88830(0LL);
          sub_1B886D8(v21, 0LL);
        }
      }
      if ( v8 >= sortStatusList[6] )
        sub_1B88814(v17, v18);
      *(_QWORD *)&sortStatusList[i] = v16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&sortStatusList[i], (int32_t)v16, v19, v20);
      ++v8;
    }
    v11->isInitSystem = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__DecideDragSelect(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 methodPtr_low; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  int32_t selectSum; // w8
  int items; // w21
  _BOOL8 v12; // x0
  __int64 v13; // x1
  int klass; // w9
  void *v15; // x0
  int v16; // w1
  __int64 v17; // x20
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5ED96 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED96 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_22;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_22;
  v6 = itemSortList;
  methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    if ( SLODWORD(itemSortList[6].monitor) < 1 )
      goto LABEL_20;
    isDragSelect = this->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)itemSortList, 0LL);
    if ( isDragSelect )
    {
      if ( !IsSelect )
      {
        selectSum = this->fields.selectSum;
        if ( selectSum < this->fields.selectMax )
        {
          LODWORD(v6->fields._items) = selectSum;
          this->fields.selectSum = selectSum + 1;
        }
      }
      goto LABEL_20;
    }
    if ( !IsSelect )
      goto LABEL_20;
    items = (int)v6->fields._items;
    ListViewItem__set_IsSelect((ListViewItem_o *)v6, 0, 0LL);
    BYTE2(v6[4].monitor) = 0;
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    --this->fields.selectSum;
    if ( itemSortList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v18,
        itemSortList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v18,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v12 )
          break;
        if ( !v18.fields._current )
          sub_1B8880C(v12, v13);
        klass = (int)v18.fields._current[1].klass;
        if ( klass > items )
          LODWORD(v18.fields._current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v18,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_20;
    }
LABEL_22:
    sub_1B8880C(itemSortList, *(_QWORD *)&index);
  }
  sub_1B88ACC(itemSortList);
  if ( v16 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C73040();
  }
  v17 = *(_QWORD *)__cxa_begin_catch(v15);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v17 )
    sub_1B88804(v17);
LABEL_20:
  LODWORD(v6[6].monitor) = -1;
}


void __fastcall SvtEqCombineListViewManager__DeleteContinueData(const MethodInfo *method)
{
  SvtEqCombineListViewManager_c *v1; // x0
  __int64 v2; // x1
  __int64 v3; // x20
  SvtEqCombineListViewManager_c *v4; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4A5ED59 & 1) == 0 )
  {
    sub_1B885B0(&SvtEqCombineListViewManager_TypeInfo);
    byte_4A5ED59 = 1;
  }
  v1 = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v1);
  v3 = 0LL;
  do
  {
    v4 = SvtEqCombineListViewManager_TypeInfo;
    if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v4 = SvtEqCombineListViewManager_TypeInfo;
    }
    sortStatusList = v4->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_13;
    if ( (unsigned int)v3 >= sortStatusList->max_length )
      sub_1B88814(v4, v2);
    v4 = (SvtEqCombineListViewManager_c *)sortStatusList->m_Items[v3];
    if ( !v4 )
LABEL_13:
      sub_1B8880C(v4, v2);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v4, 0LL);
    ++v3;
  }
  while ( (_DWORD)v3 != 2 );
}


void __fastcall SvtEqCombineListViewManager__DestroyList(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6);
}


void __fastcall SvtEqCombineListViewManager__EndClickTabChoice(
        SvtEqCombineListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  SvtEqCombineListViewManager__SetStatusKind(this, 2, method);
  SvtEqCombineListViewManager__ReleaseAll(this, v4);
  SvtEqCombineListViewManager__ModifyList(this, 0, v5);
  SvtEqCombineListViewManager__SetMode_45436372(this, 2, v6);
}


void __fastcall SvtEqCombineListViewManager__EndClickTabLock(
        SvtEqCombineListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  SvtEqCombineListViewManager__SetStatusKind(this, 1, method);
  SvtEqCombineListViewManager__ReleaseAll(this, v4);
  SvtEqCombineListViewManager__ModifyList(this, 0, v5);
  SvtEqCombineListViewManager__SetMode_45436372(this, 2, v6);
}


void __fastcall SvtEqCombineListViewManager__EndClickTabStatus(
        SvtEqCombineListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  SvtEqCombineListViewManager__SetStatusKind(this, 0, method);
  SvtEqCombineListViewManager__ModifyList(this, 0, v4);
  SvtEqCombineListViewManager__SetMode_45436372(this, 2, v5);
}


void __fastcall SvtEqCombineListViewManager__EndCloseSelectFilterKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SvtEqCombineListViewManager__EndSelectFilterKind(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A5ED82 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__);
    byte_4A5ED82 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SvtEqCombineListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1B8880C(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0LL);
}


void __fastcall SvtEqCombineListViewManager__EndSelectSortKind(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5ED87 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5ED87 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall SvtEqCombineListViewManager__EndStatusSync(
        SvtEqCombineListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct SvtEqCombineListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  ServantStatusBattleListViewItem_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (ServantStatusBattleListViewItem_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0LL;
    sub_1B88554(p_requestCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))requestCallback->fields.m_target)(
      requestCallback->fields.original_method_info,
      1LL,
      *(_QWORD *)&requestCallback->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SvtEqCombineListViewManager__GetAmountSortValue(
        SvtEqCombineListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewItem_o *v11; // x0
  ListViewSort_o *v12; // x1
  const MethodInfo *v13; // x2

  v3 = svtId;
  if ( (byte_4A5ED8A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED8A = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1B8880C(itemList, *(_QWORD *)&svtId);
  size = itemList->fields._size;
  if ( size < 1 )
  {
    return 0LL;
  }
  else
  {
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_13;
      *(_QWORD *)&svtId = SvtEqCombineListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( LODWORD(itemList[3].fields._syncRoot) == v3 )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_13;
    }
    sub_1B88ACC(itemList);
    return SvtEqCombineListViewItem__IsMatchFilter(v11, v12, v13);
  }
}


int32_t __fastcall SvtEqCombineListViewManager__GetBaseCollectionLv(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v6; // q1
  UserServantCollectionMaster_o *v7; // x20
  struct UserServantEntity_o *v8; // x8
  int64_t v9; // x19
  __int64 v10; // x21
  __int64 v11; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5ED68 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ED68 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v6 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v7 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v14, 0LL);
  v8 = this->fields.baseUsrSvtData;
  if ( !v8 )
    goto LABEL_14;
  v9 = Instance;
  v11 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  if ( !v7 )
LABEL_14:
    sub_1B8880C(Instance, v4);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v7, v9, Instance, 0LL);
  if ( EntityDefinitely )
    LODWORD(EntityDefinitely) = EntityDefinitely->fields.maxLv;
  return (int)EntityDefinitely;
}


int32_t __fastcall SvtEqCombineListViewManager__GetCombineInfoMsgLbFontSize(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (unsigned int)(this->fields.modeKind - 1) < 2 )
    return 14;
  if ( this->fields.currentType )
    return 12;
  return 20;
}


bool __fastcall SvtEqCombineListViewManager__GetDragSelect(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isDragSelect;
}


bool __fastcall SvtEqCombineListViewManager__GetFocusItemIndex(
        SvtEqCombineListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4A5ED98 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SvtEqCombineListViewManager_o *)sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED98 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_15:
      sub_1B8880C(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)list,
                                                v8,
                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_15;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        goto LABEL_15;
      }
      if ( BYTE1(this->fields.topFocusOffset) || HIBYTE(this->fields.topFocusOffset) )
        break;
      if ( sum == ++v8 )
        return 1;
    }
    *index = v8;
  }
  return 1;
}


int32_t __fastcall SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
        SvtEqCombineListViewManager_o *this,
        UserServantEntity_array *list,
        const MethodInfo *method)
{
  signed int max_length; // w8
  signed int v5; // w21
  int32_t v6; // w20

  if ( !list )
    goto LABEL_10;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1B88814(this, list);
      this = (SvtEqCombineListViewManager_o *)list->m_Items[v5];
      if ( !this )
        break;
      this = (SvtEqCombineListViewManager_o *)UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)this, 0LL);
      max_length = list->max_length;
      ++v5;
      v6 += (unsigned __int8)this & 1;
      if ( v5 >= max_length )
        return v6;
    }
LABEL_10:
    sub_1B8880C(this, list);
  }
  return 0;
}


SvtEqCombineListViewItem_o *__fastcall SvtEqCombineListViewManager__GetItem(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SvtEqCombineListViewItem_o *result; // x0
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *v7; // x0
  int64_t v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4A5ED69 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED69 = 1;
  }
  result = (SvtEqCombineListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SvtEqCombineListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1B88ACC(result);
        SvtEqCombineListViewManager__ModifyItem(v7, v8, v9);
      }
    }
  }
  return result;
}


UserServantEntity_o *__fastcall SvtEqCombineListViewManager__GetSelectBaseSvtData(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  ServantStatusBattleListViewItem_o *p_baseUsrSvtData; // x19
  ServantStatusBattleListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  Il2CppObject *Entity; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]

  if ( (byte_4A5ED67 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ED67 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  p_baseUsrSvtData = (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  klass = p_baseUsrSvtData->klass;
  if ( !p_baseUsrSvtData->klass )
    goto LABEL_12;
  byval_arg = klass->_1.byval_arg;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v14.fields.fakeValue = byval_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v13, 0LL);
  if ( !v8 )
LABEL_12:
    sub_1B8880C(Instance, v4);
  Entity = DataMasterBase_object__object__long___GetEntity(
             v8,
             (int64_t)Instance,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUsrSvtData->klass = (ServantStatusBattleListViewItem_c *)Entity;
  sub_1B88554(p_baseUsrSvtData, (int32_t)Entity, v10, v11);
  return (UserServantEntity_o *)p_baseUsrSvtData->klass;
}


SetCombineData_o *__fastcall SvtEqCombineListViewManager__GetSelectCombineData(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.combineData;
}


UserServantEntity_o *__fastcall SvtEqCombineListViewManager__GetSelectUsrSvtEntity(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectUsrSvtEntity;
}


System_Collections_Generic_List_SvtEqCombineListViewItem__o *__fastcall SvtEqCombineListViewManager__GetSelectedMaterialList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  void *itemList; // x0
  int v6; // w23
  int32_t v7; // w21
  Il2CppObject *v8; // x22
  __int64 methodPtr_low; // x9
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_Comparison_T__o *v16; // x21
  Il2CppObject *v17; // x22
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int v21; // w23
  int32_t v22; // w21
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *result; // x0
  SvtEqCombineListViewManager_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_4A5ED75 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_SvtEqCombineListViewItem__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    sub_1B885B0(&Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__138_0__);
    sub_1B885B0(&SvtEqCombineListViewManager___c_TypeInfo);
    byte_4A5ED75 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  v6 = *((_DWORD *)itemList + 6);
  if ( v6 < 1 )
  {
LABEL_18:
    itemList = SvtEqCombineListViewManager___c_TypeInfo;
    if ( !SvtEqCombineListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager___c_TypeInfo);
      itemList = SvtEqCombineListViewManager___c_TypeInfo;
    }
    v16 = *(System_Comparison_T__o **)(*((_QWORD *)itemList + 23) + 8LL);
    if ( !v16 )
    {
      if ( !*((_DWORD *)itemList + 56) )
      {
        j_il2cpp_runtime_class_init_0(itemList);
        itemList = SvtEqCombineListViewManager___c_TypeInfo;
      }
      v17 = (Il2CppObject *)**((_QWORD **)itemList + 23);
      v16 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_SvtEqCombineListViewItem__TypeInfo);
      System_Comparison_object____ctor(
        v16,
        v17,
        Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__138_0__,
        0LL);
      static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__138_0 = (struct System_Comparison_SvtEqCombineListViewItem__o *)v16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__138_0, (int32_t)v16, v19, v20);
    }
    if ( v3 )
    {
      System_Collections_Generic_List_object___Sort_55571192(
        v3,
        v16,
        (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__);
      if ( v3->fields._size < 1 )
        return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
      v21 = 0;
      v22 = 0;
      while ( 1 )
      {
        itemList = System_Collections_Generic_List_object___get_Item(
                     v3,
                     v22,
                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
        if ( !itemList )
          break;
        if ( *((_DWORD *)itemList + 39) > v21 )
        {
          itemList = System_Collections_Generic_List_object___get_Item(
                       v3,
                       v22,
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
          if ( !itemList )
            break;
          v21 = *((_DWORD *)itemList + 39);
          itemList = System_Collections_Generic_List_object___get_Item(
                       v3,
                       v22,
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
          if ( !itemList )
            break;
          this->fields.lastSelectIndex = *((_DWORD *)itemList + 6);
        }
        if ( ++v22 >= v3->fields._size )
          return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
      }
    }
LABEL_34:
    sub_1B8880C(itemList, v4);
  }
  v7 = 0;
  while ( 1 )
  {
    itemList = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)itemList,
                 v7,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_34;
    v8 = (Il2CppObject *)itemList;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    itemList = (void *)ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL);
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      if ( !v3 )
        goto LABEL_34;
      items = v3->fields._items;
      v13 = Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_34;
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v8,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v15 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v15[4] = (Il2CppClass *)v8;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v8, v10, v11);
      }
    }
    if ( v6 == ++v7 )
      goto LABEL_18;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_34;
  }
  sub_1B88ACC(itemList);
  SvtEqCombineListViewManager__SetSelectedMaterialInfo(v24, v25);
  return result;
}


bool __fastcall SvtEqCombineListViewManager__GetSwapChoiceList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  SvtEqCombineListViewItem_c *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 methodPtr_low; // x9
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  bool result; // w0
  SvtEqCombineListViewManager_o *v38; // x0
  const MethodInfo *v39; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-80h]

  if ( (byte_4A5ED8D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED8D = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      v9 = SvtEqCombineListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1B88ACC(itemList);
        SvtEqCombineListViewManager__OnClickNormalStatus(v38, v39);
        return result;
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 247) )
      {
        if ( *(_BYTE *)(itemList + 165) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v42.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v41 = v42;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v41, 0LL);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = (SvtEqCombineListViewItem_c *)itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              (int64_t)v9,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v42.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v40 = v42;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v40, 0LL);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = (SvtEqCombineListViewItem_c *)itemList;
          if ( (unsigned int)v25 >= v23->max_length )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1B8880C(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)choiceList, 0, v10, v11);
    v36 = unchoiceList;
    v35 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unchoiceList = v32;
    v36 = unchoiceList;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


bool __fastcall SvtEqCombineListViewManager__GetSwapLockList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  SvtEqCombineListViewItem_c *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 methodPtr_low; // x9
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  SvtEqCombineListViewManager_o *v38; // x0
  System_Int64_array **v39; // x1
  System_Int64_array **v40; // x2
  const MethodInfo *v41; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+40h] [xbp-80h]

  if ( (byte_4A5ED8C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED8C = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      v9 = SvtEqCombineListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1B88ACC(itemList);
        return SvtEqCombineListViewManager__GetSwapChoiceList(v38, v39, v40, v41);
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 246) )
      {
        if ( *(_BYTE *)(itemList + 160) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v44.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v43 = v44;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v43, 0LL);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = (SvtEqCombineListViewItem_c *)itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              (int64_t)v9,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v44.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v42 = v44;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v42, 0LL);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = (SvtEqCombineListViewItem_c *)itemList;
          if ( (unsigned int)v25 >= v23->max_length )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1B8880C(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lockList, 0, v10, v11);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


void __fastcall SvtEqCombineListViewManager__InitBackListView(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  SvtEqCombineListViewManager__StatusRequest(this, 0LL, v2);
  SvtEqCombineListViewManager__SetStatusKind(this, 0, v4);
}


void __fastcall SvtEqCombineListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  SvtEqCombineListViewManager_c *v2; // x0
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4A5ED5A & 1) == 0 )
  {
    sub_1B885B0(&SvtEqCombineListViewManager_TypeInfo);
    byte_4A5ED5A = 1;
  }
  v2 = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v2 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( v2->static_fields->isInitSystem )
  {
    for ( i = 0LL; ; ++i )
    {
      if ( !v2->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v2);
        v2 = SvtEqCombineListViewManager_TypeInfo;
      }
      sortStatusList = v2->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_15;
      if ( (unsigned int)i >= sortStatusList->max_length )
        sub_1B88814(v2, v1);
      v2 = (SvtEqCombineListViewManager_c *)sortStatusList->m_Items[i];
      if ( !v2 )
LABEL_15:
        sub_1B8880C(v2, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v2, 0LL);
      if ( (_DWORD)i == 1 )
        break;
      v2 = SvtEqCombineListViewManager_TypeInfo;
    }
  }
}


bool __fastcall SvtEqCombineListViewManager__IsDragEnable(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewItem_o *item,
        const MethodInfo *method)
{
  bool result; // w0

  if ( this->fields.modeKind )
    return 0;
  result = 0;
  if ( item && this->fields.currentType == 1 )
    return !SvtEqCombineListViewItem__get_IsCanNotSelect(item, (const MethodInfo *)item)
        && (ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL)
         || this->fields.modeKind
         || this->fields.selectSum < this->fields.selectMax);
  return result;
}


bool __fastcall SvtEqCombineListViewManager__IsDragStart(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.dragStartIndex >= 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SvtEqCombineListViewManager__IsSelectEnable(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewItem_o *item,
        int32_t addSum,
        bool isDrag,
        const MethodInfo *method)
{
  bool isMaxLvSelected; // [xsp+Ch] [xbp-14h] BYREF

  isMaxLvSelected = 0;
  if ( !item )
    return 0;
  if ( this->fields.modeKind )
    return 1;
  if ( isDrag
    && this->fields.itemType == 1
    && (SvtEqCombineListViewManager__CheckDragMax(this, &isMaxLvSelected, *(const MethodInfo **)&addSum), isMaxLvSelected) )
  {
    return 0;
  }
  else
  {
    return this->fields.selectSum + addSum < this->fields.selectMax;
  }
}


void __fastcall SvtEqCombineListViewManager__ModifyItem(
        SvtEqCombineListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  SvtEqCombineListViewItem_c *v12; // x1
  __int64 methodPtr_low; // x9
  _OWORD *monitor; // x8
  _QWORD *p_monitor; // x22
  __int128 v16; // q0
  int64_t v17; // x0
  Il2CppObject v18; // q0
  int32_t v19; // w2
  int32_t v20; // w3
  int64_t UserSvtId; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  UnityEngine_Object_o *v24; // x22
  __int64 v25; // x1
  void *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4A5ED6A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED6A = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_36:
      sub_1B8880C(Instance, v5);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_36;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v30.fields._list = *(_OWORD *)&v29.fields.currentCryptoKey;
  v30.fields._current = (Il2CppObject *)v29.fields.fakeValue;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v30,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v9 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      goto LABEL_30;
    v12 = SvtEqCombineListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v30.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_1B88ACC(v30.fields._current);
LABEL_30:
      if ( !Entity )
        sub_1B8880C(v9, v10);
      sub_1B8880C(v9, v10);
    }
    if ( Entity )
    {
      p_monitor = &v30.fields._current[7].monitor;
      monitor = v30.fields._current[7].monitor;
      if ( !monitor )
        sub_1B8880C(v9, SvtEqCombineListViewItem_TypeInfo);
      v16 = monitor[2];
      *(_OWORD *)&v29.fields.currentCryptoKey = monitor[1];
      *(_OWORD *)&v29.fields.fakeValue = v16;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v28 = v29;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v28, 0LL);
      v18 = Entity[2];
      *(Il2CppObject *)&v27.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v27.fields.fakeValue = v18;
      if ( v17 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v27, 0LL) )
      {
        *p_monitor = Entity;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&current[7].monitor, (int32_t)Entity, v19, v20);
      }
    }
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)current, (const MethodInfo *)v12);
    if ( !SelfUserGame )
      sub_1B8880C(UserSvtId, v22);
    BYTE4(current[10].klass) = UserSvtId == SelfUserGame->fields.favoriteUserSvtId;
    SvtEqCombineListViewItem__ModifyLockItem((SvtEqCombineListViewItem_o *)current, v22);
    SvtEqCombineListViewItem__ModifyChoiceItem((SvtEqCombineListViewItem_o *)current, v23);
    v24 = (UnityEngine_Object_o *)current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
    {
      v26 = current[6].monitor;
      if ( !v26 )
        sub_1B8880C(0LL, v25);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v26 + 392LL))(
        v26,
        current,
        *(_QWORD *)(*(_QWORD *)v26 + 400LL));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__ModifyList(
        SvtEqCombineListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  bool v3; // w21
  SvtEqCombineListViewManager_o *v4; // x19
  int32_t currentType; // w8
  void *ServantEquipList; // x21
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_Generic_List_object__o *v8; // x23
  int v9; // w8
  __int64 v10; // x20
  __int64 v11; // x24
  __int128 v12; // q0
  struct UserServantEntity_o *v13; // x8
  __int128 v14; // q0
  SvtEqCombineListViewManager_o *v15; // x25
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_object__o *v22; // x22
  System_Collections_Generic_List_object__o *v23; // x23
  int32_t v24; // w21
  __int128 v25; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v27; // q0
  int32_t v28; // w24
  SvtEqCombineListViewManager_o *v29; // x25
  unsigned int v30; // w20
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  __int128 v32; // q1
  __int64 v33; // x28
  __int128 v34; // q0
  SvtEqCombineListViewManager_o *v35; // x26
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v43; // x25
  int v44; // w28
  unsigned int v45; // w26
  __int64 v46; // x8
  __int128 v47; // q0
  SvtEqCombineListViewManager_o *v48; // x23
  int32_t v49; // w24
  SvtEqCombineListViewItem_o *v50; // x22
  __int64 methodPtr_low; // x9
  struct UnityEngine_GameObject_o *v52; // x8
  __int128 v53; // q0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v55; // q0
  int64_t v56; // x0
  const MethodInfo *v57; // x5
  SvtEqCombineListViewManager_o *v58; // x0
  ListViewObject_o *v59; // x1
  ListViewItem_o *v60; // x2
  const MethodInfo *v61; // x3
  bool isIconSizeChangea; // [xsp+Ch] [xbp-1A4h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-1A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+10h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+30h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+130h] [xbp-80h]

  v3 = isIconSizeChange;
  v4 = this;
  if ( (byte_4A5ED6D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76052560);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (SvtEqCombineListViewManager_o *)sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED6D = 1;
  }
  currentType = v4->fields.currentType;
  isIconSizeChangea = v3;
  if ( currentType == 1 )
  {
    this = (SvtEqCombineListViewManager_o *)v4->fields.userServantMaster;
    if ( !this )
      goto LABEL_102;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0LL);
    v22 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_55562536(
      v22,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76052560);
    v23 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v4->fields.baseUsrSvtData )
    {
      if ( !v22 )
        goto LABEL_102;
      if ( v22->fields._size >= 1 )
      {
        v24 = 0;
        do
        {
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    v22,
                                                    v24,
                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !this )
            goto LABEL_102;
          v25 = *(_OWORD *)&this->fields.dropObjectList;
          *(UnityEngine_MonoBehaviour_Fields *)&v73.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
          *(_OWORD *)&v73.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v70 = v73;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                    &v70,
                                                    0LL);
          baseUsrSvtData = v4->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_102;
          v27 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v69.fields.fakeValue = v27;
          if ( this == (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                          &v69,
                                                          0LL) )
            System_Collections_Generic_List_object___RemoveAt(
              v22,
              v24,
              (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
          ++v24;
        }
        while ( v24 < v22->fields._size );
      }
      ServantEquipList = System_Collections_Generic_List_object___ToArray(
                           v22,
                           (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    }
    this = (SvtEqCombineListViewManager_o *)v4->fields._selectedMtSvtList_k__BackingField;
    if ( this && SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
    {
      v28 = 0;
      while ( 1 )
      {
        this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v28,
                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
        if ( !v22 )
          goto LABEL_102;
        if ( v22->fields._size >= 1 )
          break;
LABEL_67:
        this = (SvtEqCombineListViewManager_o *)v4->fields._selectedMtSvtList_k__BackingField;
        if ( !this )
          goto LABEL_102;
        if ( ++v28 >= SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          if ( !v23 )
            goto LABEL_102;
          System_Collections_Generic_List_object___AddRange(
            v23,
            (System_Collections_Generic_IEnumerable_T__o *)v22,
            (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___ToArray(
                                                    v23,
                                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
          ServantEquipList = this;
          goto LABEL_71;
        }
      }
      v29 = this;
      v30 = 0;
      while ( 1 )
      {
        if ( !ServantEquipList )
          goto LABEL_102;
        if ( v30 >= *((_DWORD *)ServantEquipList + 6) )
          break;
        if ( !v29 )
          goto LABEL_102;
        dragParentObject = v29->fields.dragParentObject;
        if ( !dragParentObject )
          goto LABEL_102;
        v32 = *(_OWORD *)&dragParentObject[1].monitor;
        v33 = *((_QWORD *)ServantEquipList + (int)v30 + 4);
        *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)&dragParentObject->fields.m_CachedPtr;
        *(_OWORD *)&v73.fields.fakeValue = v32;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v68 = v73;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                  &v68,
                                                  0LL);
        if ( !v33 )
          goto LABEL_102;
        v34 = *(_OWORD *)(v33 + 32);
        v35 = this;
        *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)(v33 + 16);
        *(_OWORD *)&v67.fields.fakeValue = v34;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                  &v67,
                                                  0LL);
        if ( v35 == this )
        {
          if ( !v23 )
            goto LABEL_102;
          *(_QWORD *)&isIconSizeChange = v29->fields.dragParentObject;
          items = v23->fields._items;
          v39 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v23->fields._version;
          if ( !items )
            goto LABEL_102;
          size = v23->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              (Il2CppObject *)isIconSizeChange,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v41[4] = (Il2CppClass *)isIconSizeChange;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 4), isIconSizeChange, v36, v37);
          }
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___Remove(
                                                    v22,
                                                    (Il2CppObject *)v29->fields.dragParentObject,
                                                    (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        if ( (signed int)++v30 >= v22->fields._size )
          goto LABEL_67;
      }
LABEL_100:
      sub_1B88814(this, isIconSizeChange);
    }
LABEL_71:
    if ( !ServantEquipList )
      goto LABEL_102;
    if ( !*((_QWORD *)ServantEquipList + 3) )
    {
      this = (SvtEqCombineListViewManager_o *)v4->fields.emptyListNoticeLabel;
      if ( !this )
        goto LABEL_102;
      this = (SvtEqCombineListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
      if ( !this )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
  }
  else
  {
    if ( currentType )
      goto LABEL_102;
    this = (SvtEqCombineListViewManager_o *)v4->fields.levelUpInfoImg;
    if ( !this )
      goto LABEL_102;
    this = (SvtEqCombineListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (SvtEqCombineListViewManager_o *)v4->fields.userServantMaster;
    if ( !this )
      goto LABEL_102;
    this = (SvtEqCombineListViewManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0LL);
    if ( !this )
      goto LABEL_102;
    ServantEquipList = this;
    if ( !this->fields.m_CancellationTokenSource )
    {
      this = (SvtEqCombineListViewManager_o *)v4->fields.emptyListNoticeLabel;
      if ( !this )
        goto LABEL_102;
      this = (SvtEqCombineListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
      if ( !this )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_55562536(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76052560);
    v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v4->fields.baseUsrSvtData )
    {
      v9 = *((_DWORD *)ServantEquipList + 6);
      if ( v9 >= 1 )
      {
        v10 = 0LL;
        while ( (unsigned int)v10 < v9 )
        {
          v11 = *((_QWORD *)ServantEquipList + v10 + 4);
          if ( !v11 )
            goto LABEL_102;
          v12 = *(_OWORD *)(v11 + 32);
          *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
          *(_OWORD *)&v73.fields.fakeValue = v12;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v72 = v73;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                    &v72,
                                                    0LL);
          v13 = v4->fields.baseUsrSvtData;
          if ( !v13 )
            goto LABEL_102;
          v14 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
          v15 = this;
          *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v71.fields.fakeValue = v14;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                    &v71,
                                                    0LL);
          if ( v15 == this )
          {
            if ( !v8 )
              goto LABEL_102;
            v18 = v8->fields._items;
            v19 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v8->fields._version;
            if ( !v18 )
              goto LABEL_102;
            v20 = v8->fields._size;
            if ( (unsigned int)v20 >= v18->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v11,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &v18->obj.klass + v20;
              v8->fields._size = v20 + 1;
              v21[4] = (Il2CppClass *)v11;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), v11, v16, v17);
            }
            if ( !v7 )
              goto LABEL_102;
            this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___Remove(
                                                      v7,
                                                      (Il2CppObject *)v11,
                                                      (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          v9 = *((_DWORD *)ServantEquipList + 6);
          if ( (int)++v10 >= v9 )
            goto LABEL_30;
        }
        goto LABEL_100;
      }
LABEL_30:
      if ( !v8 )
        goto LABEL_102;
      System_Collections_Generic_List_object___AddRange(
        v8,
        (System_Collections_Generic_IEnumerable_T__o *)v7,
        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___ToArray(
                                                v8,
                                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      ServantEquipList = this;
      if ( !this )
        goto LABEL_102;
    }
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_102;
  v43 = *((_QWORD *)ServantEquipList + 3);
  if ( (int)v43 >= 1 )
  {
    v44 = itemList->fields._size;
    v45 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v46 = *((_QWORD *)ServantEquipList + (int)v45 + 4);
      if ( !v46 )
        goto LABEL_102;
      v47 = *(_OWORD *)(v46 + 32);
      *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)(v46 + 16);
      *(_OWORD *)&v73.fields.fakeValue = v47;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v66 = v73;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                &v66,
                                                0LL);
      if ( v44 >= 1 )
        break;
LABEL_98:
      if ( ++v45 == (_DWORD)v43 )
        return;
      if ( v45 >= *((_DWORD *)ServantEquipList + 6) )
        goto LABEL_100;
    }
    v48 = this;
    v49 = 0;
    while ( 1 )
    {
      this = (SvtEqCombineListViewManager_o *)v4->fields.itemList;
      if ( !this )
        goto LABEL_102;
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v49,
                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_102;
      *(_QWORD *)&isIconSizeChange = SvtEqCombineListViewItem_TypeInfo;
      v50 = (SvtEqCombineListViewItem_o *)this;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      v52 = this->fields.dragParentObject;
      if ( v52 )
      {
        v53 = *(_OWORD *)&v52[1].monitor;
        *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)&v52->fields.m_CachedPtr;
        *(_OWORD *)&v73.fields.fakeValue = v53;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v65 = v73;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                  &v65,
                                                  0LL);
        if ( this == v48 )
        {
          userSvtEntity = v50->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v55 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v73.fields.fakeValue = v55;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v64 = v73;
            v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v64, 0LL);
            SvtEqCombineListViewManager__ModifyLockItem_45433676(v4, v50, v56, 1, isIconSizeChangeb, v57);
            goto LABEL_98;
          }
LABEL_102:
          sub_1B8880C(this, isIconSizeChange);
        }
      }
      if ( v44 == ++v49 )
        goto LABEL_98;
    }
    sub_1B88ACC(this);
    SvtEqCombineListViewManager__SetObjectItem(v58, v59, v60, v61);
  }
}


void __fastcall SvtEqCombineListViewManager__ModifyLockItem(
        SvtEqCombineListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v12; // w29
  int64_t v13; // x0
  SvtEqCombineListViewItem_c *v14; // x1
  Il2CppObject *current; // x22
  __int64 methodPtr_low; // x9
  _OWORD *monitor; // x8
  _QWORD *p_monitor; // x23
  __int128 v19; // q0
  int64_t v20; // x0
  Il2CppObject v21; // q0
  int64_t v22; // x24
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x1
  UnityEngine_Object_o *v26; // x23
  __int64 v27; // x1
  void *v28; // x0
  __int64 v29; // x1
  ListViewObject_o *v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4A5ED6B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED6B = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_42:
      sub_1B8880C(Instance, v9);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v34.fields._list = *(_OWORD *)&v33.fields.currentCryptoKey;
  v34.fields._current = (Il2CppObject *)v33.fields.fakeValue;
  v12 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v13 & 1) == 0 )
      break;
    current = v34.fields._current;
    if ( v34.fields._current )
    {
      v14 = SvtEqCombineListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v34.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)v34.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1B88ACC(v34.fields._current);
LABEL_36:
        sub_1B8880C(v13, v14);
      }
      if ( Entity )
      {
        p_monitor = &v34.fields._current[7].monitor;
        monitor = v34.fields._current[7].monitor;
        if ( !monitor )
          sub_1B8880C(v13, SvtEqCombineListViewItem_TypeInfo);
        v19 = monitor[2];
        *(_OWORD *)&v33.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v33.fields.fakeValue = v19;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = v33;
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v32, 0LL);
        v21 = Entity[2];
        v22 = v20;
        *(Il2CppObject *)&v31.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v31.fields.fakeValue = v21;
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v31, 0LL);
        if ( v22 == v13 )
        {
          *p_monitor = Entity;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&current[7].monitor, (int32_t)Entity, v23, v24);
        }
      }
    }
    else if ( Entity )
    {
      sub_1B8880C(v13, v14);
    }
    if ( v12 )
    {
      if ( !current )
        goto LABEL_36;
      SvtEqCombineListViewItem__ModifyLockItem((SvtEqCombineListViewItem_o *)current, (const MethodInfo *)v14);
      SvtEqCombineListViewItem__ModifyChoiceItem((SvtEqCombineListViewItem_o *)current, v25);
    }
    else if ( !current )
    {
      sub_1B8880C(v13, v14);
    }
    v26 = (UnityEngine_Object_o *)current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
    {
      v28 = current[6].monitor;
      if ( !v28 )
        sub_1B8880C(0LL, v27);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v28 + 392LL))(
        v28,
        current,
        *(_QWORD *)(*(_QWORD *)v28 + 400LL));
      if ( isIconSizeChange )
      {
        v30 = (ListViewObject_o *)current[6].monitor;
        if ( !v30 )
          sub_1B8880C(0LL, v29);
        ListViewObject__SetItemSeed(v30, (ListViewItem_o *)current, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall SvtEqCombineListViewManager__ModifyLockItem_45433676(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewItem_o *servantItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v10; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v12; // q1
  SvtEqCombineListViewManager_o *v13; // x23
  int64_t v14; // x0
  __int128 v15; // q1
  SvtEqCombineListViewManager_o *v16; // x25
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4A5ED6C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (SvtEqCombineListViewManager_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ED6C = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (SvtEqCombineListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (SvtEqCombineListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (SvtEqCombineListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              usrSvtId,
                                              (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_26;
      userSvtEntity = servantItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v13 = this;
      *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v23.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v22 = v23;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v22, 0LL);
      v15 = *(_OWORD *)&v13->fields.dropObjectList;
      v16 = (SvtEqCombineListViewManager_o *)v14;
      *(UnityEngine_MonoBehaviour_Fields *)&v21.fields.currentCryptoKey = v13->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v21.fields.fakeValue = v15;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                &v21,
                                                0LL);
      if ( v16 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v13;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&servantItem->fields.userSvtEntity, (int32_t)v13, v17, v18);
      }
    }
  }
  if ( isIconSizeChange || !isInit )
  {
    if ( !servantItem )
      goto LABEL_26;
  }
  else
  {
    if ( !servantItem )
      goto LABEL_26;
    SvtEqCombineListViewItem__ModifyLockItem(servantItem, (const MethodInfo *)servantItem);
    SvtEqCombineListViewItem__ModifyChoiceItem(servantItem, v19);
  }
  viewObject = (UnityEngine_Object_o *)servantItem->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    this = (SvtEqCombineListViewManager_o *)servantItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(SvtEqCombineListViewManager_o *, SvtEqCombineListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
        this,
        servantItem,
        this->klass->vtable._6_GetFocusItemIndex.methodPtr);
      if ( !isIconSizeChange )
        return;
      this = (SvtEqCombineListViewManager_o *)servantItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)servantItem, v10->fields.seed, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1B8880C(this, servantItem);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickBonusFilterKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4A5ED84 & 1) == 0 )
  {
    sub_1B885B0(&Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__);
    byte_4A5ED84 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(0LL, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickChoiceTab(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4A5ED90 & 1) == 0 )
  {
    sub_1B885B0(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_EndClickTabChoice__);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_OnClickChoiceTab__);
    byte_4A5ED90 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SvtEqCombineListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v6 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1B887FC(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabChoice__,
        v7);
      SvtEqCombineListViewManager__StatusRequest(this, v6, v8);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 2, v5);
      SvtEqCombineListViewManager__ReleaseAll(this, v9);
      SvtEqCombineListViewManager__ModifyList(this, 0, v10);
      SvtEqCombineListViewManager__SetMode_45436372(this, 2, v11);
    }
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickCollectLock(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4A5ED8F & 1) == 0 )
  {
    sub_1B885B0(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_EndClickTabLock__);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_OnClickCollectLock__);
    byte_4A5ED8F = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SvtEqCombineListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v6 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1B887FC(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabLock__,
        v7);
      SvtEqCombineListViewManager__StatusRequest(this, v6, v8);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 1, v5);
      SvtEqCombineListViewManager__ReleaseAll(this, v9);
      SvtEqCombineListViewManager__ModifyList(this, 0, v10);
      SvtEqCombineListViewManager__SetMode_45436372(this, 2, v11);
    }
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickDecide(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isDecideFlg; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  struct CombineRootComponent_o *v7; // x0
  __int64 v8; // x1
  CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v10; // x1
  ServantCheckEquipDialog_o *servantEquipCheckDialog; // x20
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v13; // x22

  if ( (byte_4A5ED73 & 1) == 0 )
  {
    sub_1B885B0(&ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_OnClickDecide__);
    byte_4A5ED73 = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_OnClickDecide__;
  isDecideFlg = this->fields.isDecideFlg;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_SvtEqCombineListViewManager_OnClickDecide__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  if ( isDecideFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    v7 = (struct CombineRootComponent_o *)SvtEqCombineListViewManager__CheckMaterialEquipped(this, v6);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._isOpenCheckEquipDialog_k__BackingField = (unsigned __int8)v7 & 1;
    if ( !combineRootComponent )
      goto LABEL_15;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0LL);
    if ( this->fields._isOpenCheckEquipDialog_k__BackingField )
    {
      servantEquipCheckDialog = this->fields.servantEquipCheckDialog;
      SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, v10);
      v13 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1B887FC(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v13,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__,
        0LL);
      if ( servantEquipCheckDialog )
      {
        ServantCheckEquipDialog__Open(servantEquipCheckDialog, SelectedMaterialList, 0, v13, 0LL);
        return;
      }
LABEL_15:
      sub_1B8880C(v7, v8);
    }
    SvtEqCombineListViewManager__SetSelectedMaterialInfo(this, v10);
    v7 = this->fields.combineRootComponent;
    if ( !v7 )
      goto LABEL_15;
    if ( v7->fields.state == 4 )
      CombineRootComponent__SetSelectSvtEqMaterialList(v7, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickFilter2Kind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w21
  int32_t v9; // w9

  if ( (byte_4A5ED85 & 1) == 0 )
  {
    sub_1B885B0(&Method_SvtEqCombineListViewManager_OnClickFilter2Kind__);
    sub_1B885B0(&SvtEqCombineListViewManager_TypeInfo);
    byte_4A5ED85 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SvtEqCombineListViewManager_OnClickFilter2Kind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort
      || (filter2Kind = sort->fields.filter2Kind, !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished)
      && (j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo), (sort = this->fields.sort) == 0LL) )
    {
      sub_1B8880C(v5, v6);
    }
    if ( filter2Kind + 1 <= SvtEqCombineListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM )
      v9 = filter2Kind + 1;
    else
      v9 = 0;
    sort->fields.filter2Kind = v9;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickFilterKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A5ED81 & 1) == 0 )
  {
    sub_1B885B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_EndSelectFilterKind__);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_OnClickFilterKind__);
    byte_4A5ED81 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SvtEqCombineListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v7 )
      sub_1B8880C(v9, v10);
    CommonUI__OpenServantFilterSelectMenu_30500992(v7, 5, sort, (ListViewManager_o *)this, v8, -1, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickListView(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall SvtEqCombineListViewManager__OnClickLockModeItem(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x19
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewItem_o *Item; // x0
  _QWORD *v7; // x8
  SvtEqCombineListViewItem_o *v8; // x20
  System_Reflection_MethodBase_o *v9; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v11; // q1
  int64_t v12; // x0
  const MethodInfo *v13; // x4
  const MethodInfo *v14; // x2
  SvtEqCombineListViewManager_o *v15; // x0
  SvtEqCombineListViewItem_o *v16; // x1
  const MethodInfo *v17; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4A5ED7E & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_OnClickLockModeItem__);
    this = (SvtEqCombineListViewManager_o *)sub_1B885B0(&SvtEqCombineListViewObject_TypeInfo);
    byte_4A5ED7E = 1;
  }
  if ( !obj )
    goto LABEL_13;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1B88ACC(obj);
    SvtEqCombineListViewManager__IsDragEnable(v15, v16, v17);
    return;
  }
  Item = SvtEqCombineListViewObject__GetItem(
           (SvtEqCombineListViewObject_o *)obj,
           (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  v7 = Method_SvtEqCombineListViewManager_OnClickLockModeItem__;
  v8 = Item;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B885C8(Method_SvtEqCombineListViewManager_OnClickLockModeItem__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 11, 0LL);
  if ( !v8 || (userSvtEntity = v8->fields.userSvtEntity, v8->fields.isSwapLock ^= 1u, !userSvtEntity) )
LABEL_13:
    sub_1B8880C(this, obj);
  v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v19.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v18 = v19;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v18, 0LL);
  SvtEqCombineListViewManager__ModifyLockItem(v4, v12, 0, 0, v13);
  SvtEqCombineListViewManager__SetMode_45436372(v4, 3, v14);
}


void __fastcall SvtEqCombineListViewManager__OnClickNormalStatus(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A5ED8E & 1) == 0 )
  {
    sub_1B885B0(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_EndClickTabStatus__);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_OnClickNormalStatus__);
    byte_4A5ED8E = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SvtEqCombineListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1B887FC(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndClickTabStatus__,
      v6);
    SvtEqCombineListViewManager__StatusRequest(this, v5, v7);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickReleaseAll(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A5ED79 & 1) == 0 )
  {
    sub_1B885B0(&Method_SvtEqCombineListViewManager_OnClickReleaseAll__);
    byte_4A5ED79 = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_OnClickReleaseAll__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_SvtEqCombineListViewManager_OnClickReleaseAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  SvtEqCombineListViewManager__ReleaseAll(this, v5);
}


void __fastcall SvtEqCombineListViewManager__OnClickScaleChange(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  SvtEqCombineListViewManager_o *v10; // x0
  int v11; // w8
  ServantStatusBattleListViewItem_o *p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v14; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4A5ED8B & 1) == 0 )
  {
    sub_1B885B0(&Method_SvtEqCombineListViewManager_OnClickScaleChange__);
    byte_4A5ED8B = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_SvtEqCombineListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v10 = this;
    v11 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v10 = this;
    v11 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v10 = this;
    v11 = 1;
LABEL_11:
    v10->fields.seed = smallSizeSeed;
    p_seed = (ServantStatusBattleListViewItem_o *)&v10->fields.seed;
    p_seed[3].fields.dispLimitCount.fields.hiddenValue = v11;
    sub_1B88554(p_seed, (int32_t)smallSizeSeed, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v14 = this->fields.scaleType,
        sort->fields.iconScaleKind = v14,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v14, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1B8880C(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  SvtEqCombineListViewManager__ModifyList(this, 1, v16);
  SvtEqCombineListViewManager__SetMode_45436372(this, 2, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall SvtEqCombineListViewManager__OnClickSelectBase(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x19
  __int64 methodPtr_low; // x9
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtEqCombineListViewItem_o *v7; // x21
  __int128 v8; // q1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w2
  int v15; // w9
  int32_t v16; // w22
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  struct UserServantEntity_o *userSvtEntity; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  SvtEqCombineListViewManager_o *v22; // x0
  ListViewObject_o *v23; // x1
  const MethodInfo *v24; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_4A5ED7C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_OnClickSelectBase__);
    this = (SvtEqCombineListViewManager_o *)sub_1B885B0(&SvtEqCombineListViewObject_TypeInfo);
    byte_4A5ED7C = 1;
  }
  if ( !obj )
    goto LABEL_31;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1B88ACC(obj);
    SvtEqCombineListViewManager__OnClickListView(v22, v23, v24);
    return;
  }
  this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewObject__GetItem(
                                            (SvtEqCombineListViewObject_o *)obj,
                                            (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  v7 = (SvtEqCombineListViewItem_o *)this;
  if ( baseUsrSvtData )
  {
    v8 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v26.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v25 = v26;
    this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                              &v25,
                                              0LL);
    if ( !v7 )
      goto LABEL_31;
    if ( this == (SvtEqCombineListViewManager_o *)SvtEqCombineListViewItem__get_UserSvtId(v7, (const MethodInfo *)obj) )
    {
      v9 = Method_SvtEqCombineListViewManager_OnClickSelectBase__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1B885C8(Method_SvtEqCombineListViewManager_OnClickSelectBase__);
      v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
      v4->fields.baseUsrSvtData = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.baseUsrSvtData, 0, v11, v12);
      tempMtSvtList = v4->fields.tempMtSvtList;
      if ( tempMtSvtList )
      {
        size = tempMtSvtList->fields._size;
        v15 = tempMtSvtList->fields._version + 1;
        tempMtSvtList->fields._size = 0;
        tempMtSvtList->fields._version = v15;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, size, 0LL);
        goto LABEL_26;
      }
LABEL_31:
      sub_1B8880C(this, obj);
    }
  }
  else if ( !this )
  {
    goto LABEL_31;
  }
  if ( v7->fields.type )
  {
    v16 = 0;
  }
  else if ( v7->fields.isLvMax && v7->fields.isLimitCntMax )
  {
    v16 = 2;
  }
  else
  {
    v16 = 2 * v7->fields.isSvtEqMaterial;
  }
  v17 = Method_SvtEqCombineListViewManager_OnClickSelectBase__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1B885C8(Method_SvtEqCombineListViewManager_OnClickSelectBase__);
  v18 = (System_Reflection_MethodBase_o *)sub_1B88594(v17, v17[4]);
  OverwriteAssetSoundName__PlaySystemSe(v18, v16, 0LL);
  userSvtEntity = v7->fields.userSvtEntity;
  v4->fields.baseUsrSvtData = userSvtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.baseUsrSvtData, (int32_t)userSvtEntity, v20, v21);
LABEL_26:
  this = (SvtEqCombineListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_31;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v4->fields.baseUsrSvtData != 0LL, 0LL);
  this = (SvtEqCombineListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_31;
  if ( HIDWORD(this->fields.getBasicExpLabel) == 4 )
    CombineRootComponent__ShowBaseSvtEq((CombineRootComponent_o *)this, 0LL);
}


void __fastcall SvtEqCombineListViewManager__OnClickSelectMaterial(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x19
  __int64 methodPtr_low; // x9
  ListViewItem_o *v6; // x20
  const MethodInfo *v7; // x1
  int32_t selectNum; // w21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  int32_t klass; // w9
  int32_t selectSum; // w8
  void *v13; // x0
  int v14; // w1
  __int64 v15; // x20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4A5ED7D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    this = (SvtEqCombineListViewManager_o *)sub_1B885B0(&SvtEqCombineListViewObject_TypeInfo);
    byte_4A5ED7D = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !obj )
    goto LABEL_21;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1B88ACC(obj);
    if ( v14 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      sub_1C73040();
    }
    v15 = *(_QWORD *)__cxa_begin_catch(v13);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v15 )
      sub_1B88804(v15);
    goto LABEL_18;
  }
  this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewObject__GetItem(
                                            (SvtEqCombineListViewObject_o *)obj,
                                            (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  if ( !this )
    goto LABEL_21;
  v6 = (ListViewItem_o *)this;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
  {
    selectNum = v6->fields.selectNum;
    ListViewItem__set_IsSelect(v6, 0, 0LL);
    this = (SvtEqCombineListViewManager_o *)v4->fields.itemList;
    --v4->fields.selectSum;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v16,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v16,
               (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v9 )
          break;
        if ( !v16.fields._current )
          sub_1B8880C(v9, v10);
        klass = (int32_t)v16.fields._current[1].klass;
        if ( klass > selectNum )
          LODWORD(v16.fields._current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_18;
    }
LABEL_21:
    sub_1B8880C(this, obj);
  }
  selectSum = v4->fields.selectSum;
  if ( v4->fields.modeKind || selectSum < v4->fields.selectMax )
  {
    v6->fields.selectNum = selectSum;
    v4->fields.selectSum = selectSum + 1;
LABEL_18:
    SvtEqCombineListViewManager__RefrashListDisp(v4, v7);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickSortAscendingOrder(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4A5ED88 & 1) == 0 )
  {
    sub_1B885B0(&Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__);
    byte_4A5ED88 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickSortKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t itemType; // w23
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantSortSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4A5ED86 & 1) == 0 )
  {
    sub_1B885B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_EndSelectSortKind__);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_OnClickSortKind__);
    byte_4A5ED86 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SvtEqCombineListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    itemType = this->fields.itemType;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_1B8880C(v10, v11);
    CommonUI__OpenServantSortSelectMenu(v8, 2, sort, itemType == 1, v9, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnLongPushListView(
        SvtEqCombineListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  SvtEqCombineListViewItem_c *v7; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_object__o *selectedMtSvtList_k__BackingField; // x0
  const MethodInfo *v10; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v12; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct UserServantEntity_o *monitor; // x1
  void *v17; // x0
  int v18; // w1
  __int64 v19; // x22
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5ED7F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_OnLongPushListView__);
    byte_4A5ED7F = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    v5 = Method_SvtEqCombineListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_SvtEqCombineListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( item
      && ((v7 = SvtEqCombineListViewItem_TypeInfo,
           methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
       || (SvtEqCombineListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo) )
    {
      sub_1B88ACC(item);
      if ( v18 != 1 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v21,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
        sub_1C73040();
      }
      v19 = *(_QWORD *)__cxa_begin_catch(v17);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v21,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      if ( v19 )
        sub_1B88804(v19);
    }
    else
    {
      selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._selectedMtSvtList_k__BackingField;
      this->fields.isSelectMaterial = 0;
      if ( selectedMtSvtList_k__BackingField && selectedMtSvtList_k__BackingField->fields._size >= 1 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v20,
          selectedMtSvtList_k__BackingField,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
        v21 = v20;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v21,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__) )
        {
          if ( !v21.fields._current )
            sub_1B8880C(0LL, v10);
          UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v21.fields._current, v10);
          if ( !item )
            sub_1B8880C(UserSvtId, v12);
          if ( UserSvtId == SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)item, v12) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v21,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      }
    }
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL), !item)
      || (monitor = (struct UserServantEntity_o *)item[1].monitor,
          this->fields.selectUsrSvtEntity = monitor,
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectUsrSvtEntity, (int32_t)monitor, v14, v15),
          (scrollView = (UnityEngine_Behaviour_o *)this->fields.combineRootComponent) == 0LL) )
    {
      sub_1B8880C(scrollView, v7);
    }
    if ( HIDWORD(scrollView[18].klass) == 4 )
      CombineRootComponent__SelectShowServant((CombineRootComponent_o *)scrollView, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnMoveEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A5ED72 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5ED72 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
                v10,
                1LL,
                v10->klass->vtable._9_SetDragAmount.methodPtr),
              (v10 = this->fields.scrollView) == 0LL) )
        {
          sub_1B8880C(v10, v7);
        }
        UIScrollView__UpdatePosition(v10, 0LL);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__RefrashListDisp(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x20
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t CombineQpSvtEq; // w0
  const MethodInfo *v7; // x2
  int32_t v8; // w21
  __int64 itemList; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  SvtEqCombineListViewItem_o *current; // x22
  __int64 methodPtr_low; // x9
  __int64 v14; // x1
  UserServantEntity_o *v15; // x0
  const MethodInfo *v16; // x1
  UserServantEntity_o *v17; // x0
  int32_t addTotalExp; // w24
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v20; // x22
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x23
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *v36; // x24
  int klass_high; // w8
  float v38; // s8
  int32_t selectExp; // s9
  float v40; // s0
  int32_t v41; // w8
  float v42; // s8
  int32_t selectQp; // s9
  float v44; // s0
  int32_t v45; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v47; // x0
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  float v51; // s1
  float v52; // s0
  float v53; // s3
  float v54; // s2
  UILabel_o *getBasicExpLabel; // x21
  Il2CppObject *v56; // x0
  UILabel_o *getAccExpLabel; // x21
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x0
  const MethodInfo *v62; // x2
  struct UserServantEntity_o *v63; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x21
  __int64 v65; // x22
  __int64 v66; // x23
  int32_t v67; // w8
  const MethodInfo *v68; // x4
  int32_t LevelMax; // w21
  struct UserServantEntity_o *v70; // x8
  int32_t increLv; // w22
  int32_t lv; // w23
  bool v73; // w22
  _BOOL8 v74; // x0
  __int64 v75; // x1
  Il2CppObject *v76; // x21
  __int64 v77; // x9
  bool v78; // w1
  SvtEqCombineListViewManager_o *v79; // x0
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w8
  int32_t v82; // w21
  int32_t selectMax; // [xsp+4h] [xbp-CCh] BYREF
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+20h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16

  if ( (byte_4A5ED64 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    sub_1B885B0(&StringLiteral_24971/*"{0:N0}"*/);
    sub_1B885B0(&StringLiteral_12376/*"SUM_INFO"*/);
    byte_4A5ED64 = 1;
  }
  memset(&v86, 0, sizeof(v86));
  memset(&v85, 0, sizeof(v85));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(this, method);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *(_QWORD *)&this->fields.selectQp = 0LL;
  this->fields.addTotalExp = 0;
  this->fields.isAllUpMax = 0;
  if ( baseUsrSvtData && this->fields.itemType == 1 )
  {
    CombineQpSvtEq = UserServantEntity__getCombineQpSvtEq(baseUsrSvtData, 0LL);
    v8 = SvtEqCombineListViewManager__CheckCompareQp(this, CombineQpSvtEq, v7);
  }
  else
  {
    v8 = 0;
  }
  itemList = (__int64)this->fields.itemList;
  if ( !itemList )
    goto LABEL_95;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v84,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v86 = v84;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v86,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v10 )
      break;
    current = (SvtEqCombineListViewItem_o *)v86.fields._current;
    if ( !v86.fields._current )
      goto LABEL_94;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v86.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)v86.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_1B88ACC(v86.fields._current);
LABEL_94:
      sub_1B8880C(v10, v11);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v86.fields._current, 0LL) )
    {
      v15 = this->fields.baseUsrSvtData;
      this->fields.selectQp += v8;
      if ( !v15 )
        goto LABEL_97;
      if ( !UserServantEntity__isLevelMax(v15, 0LL) )
        goto LABEL_19;
      v17 = this->fields.baseUsrSvtData;
      if ( !v17 )
        sub_1B8880C(0LL, v16);
      if ( UserServantEntity__isLevelMax(v17, 0LL) && current->fields.isLimitCntTarget )
      {
LABEL_19:
        addTotalExp = this->fields.addTotalExp;
        this->fields.selectExp += current->fields.materialExp;
        this->fields.addTotalExp = SvtEqCombineListViewItem__get_GetAddTotalExp(current, v16) + addTotalExp;
      }
    }
    else
    {
      current->fields.isMaxSelect = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v86,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
  LODWORD(v84.fields._list) = this->fields.selectSum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84, v21, v22, v23);
  selectMax = this->fields.selectMax;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax, v25, v26, v27);
  itemList = (__int64)System_String__Format_61721404(v20, v24, v28, 0LL);
  if ( !selectInfoLabel )
    goto LABEL_95;
  UILabel__set_text(selectInfoLabel, (System_String_o *)itemList, 0LL);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_95;
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v84,
      combineEventList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v85 = v84;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v85,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v34 )
        break;
      v36 = v85.fields._current;
      if ( !v85.fields._current )
        sub_1B8880C(v34, v35);
      klass_high = HIDWORD(v85.fields._current[1].klass);
      if ( klass_high == 17 )
      {
        v38 = *(float *)&v85.fields._current[3].monitor;
        selectExp = this->fields.selectExp;
        if ( !byte_4A5638E )
        {
          sub_1B885B0(&System_Math_TypeInfo);
          byte_4A5638E = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v40 = v38 * (float)selectExp;
        v41 = vcvtps_s32_f32(v40);
        if ( ceilf(v40) == INFINITY )
          v41 = 0x80000000;
        this->fields.selectExp = v41;
        klass_high = HIDWORD(v36[1].klass);
      }
      if ( klass_high == 16 )
      {
        v42 = *(float *)&v36[3].monitor;
        selectQp = this->fields.selectQp;
        if ( !byte_4A5638E )
        {
          sub_1B885B0(&System_Math_TypeInfo);
          byte_4A5638E = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v44 = v42 * (float)selectQp;
        v45 = vcvtps_s32_f32(v44);
        if ( ceilf(v44) == INFINITY )
          v45 = 0x80000000;
        this->fields.selectQp = v45;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v85,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v84.fields._list) = this->fields.selectQp;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84, v29, v30, v31);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v47, 0LL);
  if ( !spendQpLabel )
LABEL_95:
    sub_1B8880C(itemList, v3);
  UILabel__set_text(spendQpLabel, (System_String_o *)itemList, 0LL);
  if ( this->fields.itemType == 1 )
  {
    itemList = (__int64)this->fields.spendQpLabel;
    v51 = 0.0;
    if ( this->fields.selectQp <= this->fields.userQP )
      v51 = 1.0;
    if ( !itemList )
      goto LABEL_95;
    v52 = 1.0;
    v53 = 1.0;
    v54 = v51;
    UIWidget__set_color((UIWidget_o *)itemList, *(UnityEngine_Color_o *)(&v51 - 1), 0LL);
  }
  getBasicExpLabel = this->fields.getBasicExpLabel;
  LODWORD(v84.fields._list) = this->fields.selectExp;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84, v48, v49, v50);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v56, 0LL);
  if ( !getBasicExpLabel )
    goto LABEL_95;
  UILabel__set_text(getBasicExpLabel, (System_String_o *)itemList, 0LL);
  getAccExpLabel = this->fields.getAccExpLabel;
  selectMax = this->fields.addTotalExp;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax, v58, v59, v60);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v61, 0LL);
  if ( !getAccExpLabel )
    goto LABEL_95;
  UILabel__set_text(getAccExpLabel, (System_String_o *)itemList, 0LL);
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !itemList )
      goto LABEL_95;
    itemList = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)itemList,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    v63 = this->fields.baseUsrSvtData;
    if ( !v63 )
      goto LABEL_95;
    v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemList;
    v66 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
    v65 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v87.fields.currentCryptoKey = v66;
    *(_QWORD *)&v87.fields.fakeValue = v65;
    itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v87, 0LL);
    if ( !v64 )
      goto LABEL_95;
    itemList = (__int64)DataMasterBase_object__object__int___GetEntity(
                          v64,
                          itemList,
                          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !itemList )
      goto LABEL_95;
    v67 = *(_DWORD *)(itemList + 132);
    itemList = (__int64)this->fields.baseUsrSvtData;
    this->fields.expType = v67;
    if ( !itemList )
      goto LABEL_95;
    this->fields.totalExp = *(_DWORD *)(itemList + 260) + this->fields.selectExp + this->fields.addTotalExp;
    this->fields.checkLv = *(_DWORD *)(itemList + 256);
    LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)itemList, 0LL);
    if ( this->fields.checkLv != LevelMax )
    {
      do
        itemList = SvtEqCombineListViewManager__CheckIncrementLv(
                     this,
                     &this->fields.checkLv,
                     &this->fields.increLv,
                     this->fields.totalExp,
                     v68);
      while ( (itemList & 1) == 0 );
      v70 = this->fields.baseUsrSvtData;
      if ( !v70 )
        goto LABEL_95;
      itemList = (__int64)this->fields.levelUpInfoImg;
      if ( !itemList )
        goto LABEL_95;
      increLv = this->fields.increLv;
      lv = v70->fields.lv;
      itemList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL);
      if ( !itemList )
        goto LABEL_95;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, increLv - lv > 0, 0LL);
    }
    itemList = (__int64)this->fields.itemList;
    if ( !itemList )
      goto LABEL_95;
    v73 = this->fields.increLv >= LevelMax;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v84,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v86 = v84;
    while ( 1 )
    {
      v74 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v86,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v74 )
        break;
      v76 = v86.fields._current;
      if ( !v86.fields._current )
        sub_1B8880C(v74, v75);
      v77 = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v86.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v77
        || (SvtEqCombineListViewItem_c *)v86.fields._current->klass->_2.typeHierarchy[v77 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1B88ACC(v86.fields._current);
LABEL_97:
        sub_1B8880C(v15, v14);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v86.fields._current, 0LL) )
        BYTE2(v76[15].klass) = v73;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v86,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  if ( this->fields.selectSum >= 1 )
  {
    v78 = 1;
    v79 = this;
    goto LABEL_81;
  }
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_95;
  if ( tempMtSvtList->fields._size <= 0 )
  {
    v79 = this;
    v78 = 0;
LABEL_81:
    SvtEqCombineListViewManager__SetBtnEnable(v79, v78, v62);
    if ( !ObjectList )
      goto LABEL_95;
    goto LABEL_87;
  }
  itemList = (__int64)this->fields.allReleaseButton;
  if ( !itemList )
    goto LABEL_95;
  itemList = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)itemList + 536LL))(
               itemList,
               3LL,
               1LL,
               *(_QWORD *)(*(_QWORD *)itemList + 544LL));
  if ( !ObjectList )
    goto LABEL_95;
LABEL_87:
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v82 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (__int64)System_Collections_Generic_List_object___get_Item(
                            ObjectList,
                            v82,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__);
      if ( !itemList )
        break;
      (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)itemList + 456LL))(
        itemList,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)itemList + 464LL));
      if ( ++v82 >= ObjectList->fields._size )
        return;
    }
    goto LABEL_95;
  }
}


void __fastcall SvtEqCombineListViewManager__ReleaseAll(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x9
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5ED7A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED7A = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( this->fields.selectSum >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      itemList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v10 = v9;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v4 )
        break;
      current = v10.fields._current;
      if ( !v10.fields._current )
        goto LABEL_16;
      ListViewItem__set_IsSelect((ListViewItem_o *)v10.fields._current, 0, 0LL);
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1B88ACC(current);
LABEL_16:
        sub_1B8880C(v4, v5);
      }
      BYTE2(current[10].monitor) = 0;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)itemList,
                                                                    0LL)) == 0LL )
    {
LABEL_17:
      sub_1B8880C(itemList, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
    *(_QWORD *)&this->fields.totalExp = 0LL;
    this->fields.checkLv = 0;
    SvtEqCombineListViewManager__RefrashListDisp(this, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__RequestListObject(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5ED70 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5ED70 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      SvtEqCombineListViewObject__Init_45438484((SvtEqCombineListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__RequestListObject_45437456(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5ED71 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5ED71 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      SvtEqCombineListViewObject__Init_45438568((SvtEqCombineListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


void __fastcall SvtEqCombineListViewManager__ResetInit(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  UnityEngine_Component_o *levelUpInfoImg; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x8
  int32_t size; // w2
  int v9; // w9
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t v11; // w2
  int v12; // w9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5ED7B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4A5ED7B = 1;
  }
  memset(&v15, 0, sizeof(v15));
  this->fields.baseUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData, 0, v2, v3);
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
  {
    size = selectedMtSvtList_k__BackingField->fields._size;
    v9 = selectedMtSvtList_k__BackingField->fields._version + 1;
    selectedMtSvtList_k__BackingField->fields._size = 0;
    selectedMtSvtList_k__BackingField->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)selectedMtSvtList_k__BackingField->fields._items, 0, size, 0LL);
  }
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_19;
  v11 = tempMtSvtList->fields._size;
  v12 = tempMtSvtList->fields._version + 1;
  tempMtSvtList->fields._size = 0;
  tempMtSvtList->fields._version = v12;
  if ( v11 >= 1 )
    System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, v11, 0LL);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v15.fields._current )
        sub_1B8880C(0LL, v14);
      ListViewItem__set_IsSelect((ListViewItem_o *)v15.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  this->fields.selectSum = 0;
  if ( !levelUpInfoImg
    || (levelUpInfoImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL)) == 0LL )
  {
LABEL_19:
    sub_1B8880C(levelUpInfoImg, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelUpInfoImg, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetBtnEnable(
        SvtEqCombineListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  bool v5; // w21
  UnityEngine_Component_o *decideBtnBg; // x0
  float v7; // s0
  float v8; // s3
  float v9; // s1
  float v10; // s2
  __int64 v11; // x1

  v5 = isEnable;
  if ( (byte_4A5ED60 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4A5ED60 = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = v5;
  if ( !decideBtnBg )
    goto LABEL_12;
  decideBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             decideBtnBg,
                                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v7 = 1.0;
  if ( !this->fields.isDecideFlg )
    v7 = 0.5;
  if ( !decideBtnBg
    || (v8 = 1.0,
        v9 = v7,
        v10 = v7,
        UIWidget__set_color((UIWidget_o *)decideBtnBg, *(UnityEngine_Color_o *)&v7, 0LL),
        (decideBtnBg = (UnityEngine_Component_o *)this->fields.allReleaseButton) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(decideBtnBg, isEnable);
  }
  if ( isEnable )
    v11 = 0LL;
  else
    v11 = 3LL;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))decideBtnBg->klass[1]._1.implementedInterfaces)(
    decideBtnBg,
    v11,
    1LL,
    decideBtnBg->klass[1]._1.interfaceOffsets);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetDispActive(
        SvtEqCombineListViewManager_o *this,
        bool isShow,
        const MethodInfo *method)
{
  void *allReleaseButton; // x0
  float v6; // s8
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5ED5F & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&SvtEqCombineListViewManager_TypeInfo);
    byte_4A5ED5F = 1;
  }
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allReleaseButton, 0LL);
  if ( !allReleaseButton )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0LL);
  allReleaseButton = this->fields.decideButton;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allReleaseButton, 0LL);
  if ( !allReleaseButton )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0LL);
  allReleaseButton = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    allReleaseButton = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( !this->fields.spendQpBg )
    goto LABEL_40;
  v6 = **((float **)allReleaseButton + 23);
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.spendQpBg,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( isShow )
    v6 = 1.0;
  if ( !allReleaseButton )
    goto LABEL_40;
  v7.fields.a = 1.0;
  v7.fields.r = v6;
  v7.fields.g = v6;
  v7.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v7, 0LL);
  allReleaseButton = this->fields.spendQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v8.fields.a = 1.0;
  v8.fields.r = v6;
  v8.fields.g = v6;
  v8.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v8, 0LL);
  allReleaseButton = this->fields.spendQpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v9.fields.a = 1.0;
  v9.fields.r = v6;
  v9.fields.g = v6;
  v9.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v9, 0LL);
  allReleaseButton = this->fields.getExpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v10.fields.a = 1.0;
  v10.fields.r = v6;
  v10.fields.g = v6;
  v10.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v10, 0LL);
  allReleaseButton = this->fields.getExpBgImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v11.fields.a = 1.0;
  v11.fields.r = v6;
  v11.fields.g = v6;
  v11.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v11, 0LL);
  allReleaseButton = this->fields.getExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v12.fields.a = 1.0;
  v12.fields.r = v6;
  v12.fields.g = v6;
  v12.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v12, 0LL);
  allReleaseButton = this->fields.getBasicExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v13.fields.a = 1.0;
  v13.fields.r = v6;
  v13.fields.g = v6;
  v13.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v13, 0LL);
  allReleaseButton = this->fields.getAccExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v14.fields.a = 1.0;
  v14.fields.r = v6;
  v14.fields.g = v6;
  v14.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v14, 0LL);
  allReleaseButton = this->fields.haveQpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v15.fields.a = 1.0;
  v15.fields.r = v6;
  v15.fields.g = v6;
  v15.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v15, 0LL);
  allReleaseButton = this->fields.haveQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v16.fields.a = 1.0;
  v16.fields.r = v6;
  v16.fields.g = v6;
  v16.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v16, 0LL);
  allReleaseButton = this->fields.haveQpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v17.fields.a = 1.0;
  v17.fields.r = v6;
  v17.fields.g = v6;
  v17.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v17, 0LL);
  allReleaseButton = this->fields.nextExpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v18.fields.a = 1.0;
  v18.fields.r = v6;
  v18.fields.g = v6;
  v18.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v18, 0LL);
  allReleaseButton = this->fields.nextExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton
    || (v19.fields.a = 1.0,
        v19.fields.r = v6,
        v19.fields.g = v6,
        v19.fields.b = v6,
        UIWidget__set_color((UIWidget_o *)allReleaseButton, v19, 0LL),
        (allReleaseButton = this->fields.nextExpLabel) == 0LL)
    || (allReleaseButton = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)allReleaseButton,
                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_40:
    sub_1B8880C(allReleaseButton, isShow);
  }
  v20.fields.a = 1.0;
  v20.fields.r = v6;
  v20.fields.g = v6;
  v20.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v20, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetDragEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_4A5ED95 & 1) == 0 )
  {
    sub_1B885B0(&Method_SvtEqCombineListViewManager_SetDragEnd__);
    byte_4A5ED95 = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_SvtEqCombineListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
    {
      do
        SvtEqCombineListViewManager__DecideDragSelect(this, dragStartIndex++, v6);
      while ( dragStartIndex <= this->fields.dragEndIndex );
    }
    else
    {
      do
        SvtEqCombineListViewManager__DecideDragSelect(this, dragEndIndex++, v6);
      while ( dragEndIndex <= this->fields.dragStartIndex );
    }
  }
  SvtEqCombineListViewManager__RefrashListDisp(this, v5);
  this->fields.dragEndIndex = -1;
  *(_QWORD *)&this->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
  this->fields.isDragSelect = 1;
}


void __fastcall SvtEqCombineListViewManager__SetDragMove(
        SvtEqCombineListViewManager_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.dragEndIndex != moveIndex )
    SvtEqCombineListViewManager__SetDragSelectItem(this, this->fields.dragStartIndex, moveIndex, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SvtEqCombineListViewManager__SetDragSelect(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        bool isDragSelect,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  ListViewItem_o *v8; // x19
  SvtEqCombineListViewItem_c *v9; // x1
  __int64 methodPtr_low; // x9
  int monitor; // w8
  bool v12; // w21
  _BOOL4 v13; // w21
  bool IsSelect; // w0
  const MethodInfo *v15; // x4
  int v16; // w8
  UnityEngine_Object_o *viewObject; // x20
  __int64 v18; // x9
  bool result; // w0
  SvtEqCombineListViewObject_o *v20; // x0
  const MethodInfo *v21; // x1

  if ( (byte_4A5ED93 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewObject_TypeInfo);
    byte_4A5ED93 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_31;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_31;
  v8 = (ListViewItem_o *)itemSortList;
  v9 = SvtEqCombineListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    goto LABEL_32;
  }
  monitor = (int)itemSortList[6].monitor;
  if ( isDragSelect )
  {
    if ( (monitor & 0x80000000) != 0 )
    {
      LODWORD(itemSortList[6].monitor) = 0;
      v12 = 0;
      if ( SvtEqCombineListViewItem__get_IsCanNotSelect(
             (SvtEqCombineListViewItem_o *)itemSortList,
             (const MethodInfo *)v9) )
      {
        goto LABEL_23;
      }
      v13 = this->fields.isDragSelect;
      IsSelect = ListViewItem__get_IsSelect(v8, 0LL);
      if ( v13 )
      {
        if ( !IsSelect )
        {
          v12 = 1;
          if ( !SvtEqCombineListViewManager__IsSelectEnable(
                  this,
                  (SvtEqCombineListViewItem_o *)v8,
                  this->fields.dragSelectSum,
                  1,
                  v15) )
            goto LABEL_23;
          ++this->fields.dragSelectSum;
          v8[2].fields.sortIndex = 1;
        }
        goto LABEL_22;
      }
      if ( IsSelect )
      {
        v12 = 0;
        v16 = 1;
LABEL_19:
        v8[2].fields.sortIndex = v16;
        goto LABEL_23;
      }
    }
  }
  else if ( (monitor & 0x80000000) == 0 )
  {
    if ( !ListViewItem__get_IsSelect((ListViewItem_o *)itemSortList, 0LL) && v8[2].fields.sortIndex >= 1 )
      --this->fields.dragSelectSum;
    v12 = 0;
    v16 = -1;
    goto LABEL_19;
  }
LABEL_22:
  v12 = 0;
LABEL_23:
  viewObject = (UnityEngine_Object_o *)v8->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    return v12;
  itemSortList = (System_Collections_Generic_List_object__o *)v8->fields.viewObject;
  if ( !itemSortList )
LABEL_31:
    sub_1B8880C(itemSortList, *(_QWORD *)&index);
  v18 = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v18
    && (SvtEqCombineListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v18 - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    SvtEqCombineListViewObject__SetupDisp(
      (SvtEqCombineListViewObject_o *)itemSortList,
      (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
    return v12;
  }
LABEL_32:
  sub_1B88ACC(itemSortList);
  SvtEqCombineListViewObject__SetupDisp(v20, v21);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetDragSelectItem(
        SvtEqCombineListViewManager_o *this,
        int32_t startIndex,
        int32_t endIndex,
        const MethodInfo *method)
{
  int v5; // w22
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v9; // w25
  int32_t v10; // w26
  int32_t v11; // w8
  int32_t v12; // w9
  int v13; // w24
  int32_t v14; // w20
  int32_t v15; // w23
  int v16; // w27
  void *itemSortList; // x0
  _QWORD *v18; // x21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *v20; // x22
  __int64 v21; // x9
  SvtEqCombineListViewManager_o *v22; // x0
  int32_t v23; // w1
  bool v24; // w2
  const MethodInfo *v25; // x3

  v5 = startIndex;
  if ( (byte_4A5ED92 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewObject_TypeInfo);
    byte_4A5ED92 = 1;
  }
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
  {
    v9 = -1;
    v10 = -1;
  }
  else
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v9 = this->fields.dragEndIndex;
    else
      v9 = this->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v10 = this->fields.dragStartIndex;
    else
      v10 = this->fields.dragEndIndex;
  }
  if ( v5 <= endIndex )
    v11 = endIndex;
  else
    v11 = v5;
  if ( v5 <= endIndex )
    v12 = v5;
  else
    v12 = endIndex;
  if ( v5 < 0 )
    v13 = -1;
  else
    v13 = v11;
  if ( v5 < 0 )
    v14 = -1;
  else
    v14 = v12;
  this->fields.dragStartIndex = v5;
  this->fields.dragEndIndex = endIndex;
  if ( (v10 & 0x80000000) == 0 && v10 <= v9 )
  {
    v15 = v10;
    do
    {
      if ( v15 > v13 || (v14 & 0x80000000) != 0 || v15 < v14 )
        SvtEqCombineListViewManager__SetDragSelect(this, v15, 0, method);
      ++v15;
    }
    while ( v15 <= v9 );
  }
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 <= endIndex )
    {
      do
      {
        if ( v5 > v9 || (v10 & 0x80000000) != 0 || v5 < v10 )
          SvtEqCombineListViewManager__SetDragSelect(this, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v9 || (v10 & 0x80000000) != 0 || v5 < v10 )
          SvtEqCombineListViewManager__SetDragSelect(this, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( (v14 & 0x80000000) == 0 && this->fields.isDragSelect && v14 <= v13 )
    {
      v16 = this->fields.selectSum + 1;
      while ( 1 )
      {
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList
          || (itemSortList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)itemSortList,
                               v14,
                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
        {
LABEL_62:
          sub_1B8880C(itemSortList, *(_QWORD *)&startIndex);
        }
        *(_QWORD *)&startIndex = SvtEqCombineListViewItem_TypeInfo;
        v18 = itemSortList;
        methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)methodPtr_low
          || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
        {
          break;
        }
        if ( *((int *)itemSortList + 62) >= 1 )
        {
          *((_DWORD *)itemSortList + 62) = v16;
          v20 = (UnityEngine_Object_o *)*((_QWORD *)itemSortList + 13);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          ++v16;
          if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
          {
            itemSortList = (void *)v18[13];
            if ( !itemSortList )
              goto LABEL_62;
            v21 = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)v21
              || *(SvtEqCombineListViewObject_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * v21 - 8) != SvtEqCombineListViewObject_TypeInfo )
            {
              break;
            }
            SvtEqCombineListViewObject__SetupDisp(
              (SvtEqCombineListViewObject_o *)itemSortList,
              (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
          }
        }
        if ( ++v14 > v13 )
          return;
      }
      sub_1B88ACC(itemSortList);
      SvtEqCombineListViewManager__SetDragSelect(v22, v23, v24, v25);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetDragStart(
        SvtEqCombineListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  int32_t v4; // w20
  bool v6; // w21
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v9; // w21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *scrollView; // x20

  v4 = startIndex;
  v6 = isDragSelect;
  if ( (byte_4A5ED94 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED94 = 1;
  }
  this->fields.dragEndIndex = -1;
  *(_QWORD *)&this->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  this->fields.isDragSelect = v6;
  if ( !itemSortList )
    goto LABEL_19;
  size = itemSortList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemSortList,
                                                                    v9,
                                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemSortList )
        goto LABEL_19;
      *(_QWORD *)&startIndex = SvtEqCombineListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      LODWORD(itemSortList[6].monitor) = -1;
      if ( size == v9 )
        goto LABEL_12;
      itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_19;
    }
    sub_1B88ACC(itemSortList);
LABEL_19:
    sub_1B8880C(itemSortList, *(_QWORD *)&startIndex);
  }
LABEL_12:
  SvtEqCombineListViewManager__SetDragSelectItem(this, v4, v4, method);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( !itemSortList )
      goto LABEL_19;
    UIScrollView__Press((UIScrollView_o *)itemSortList, 0, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__SetFilterButtonImage(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4A5ED83 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17511/*"btn_filter_on"*/);
    sub_1B885B0(&StringLiteral_17510/*"btn_filter"*/);
    byte_4A5ED83 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B8880C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17510/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17511/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetMaterialSvtInfo(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  System_Collections_Generic_List_object__o *selectedMtSvtList_k__BackingField; // x0
  int64_t v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x8
  Il2CppObject *current; // x20
  int32_t v9; // w21
  Il2CppObject *Item; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x22
  __int64 methodPtr_low; // x9
  int64_t UserSvtId; // x0
  const MethodInfo *v15; // x1
  int64_t v16; // x23
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4A5ED62 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SvtEqCombineListViewManager_o *)sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED62 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  itemList = v2->fields.itemList;
  if ( !itemList )
    sub_1B8880C(this, method);
  if ( itemList->fields._size >= 1 )
  {
    selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)v2->fields._selectedMtSvtList_k__BackingField;
    if ( selectedMtSvtList_k__BackingField )
    {
      if ( selectedMtSvtList_k__BackingField->fields._size >= 1 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v17,
          selectedMtSvtList_k__BackingField,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
        v18 = v17;
LABEL_8:
        while ( 1 )
        {
          v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v18,
                 (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
          if ( (v5 & 1) == 0 )
            break;
          v7 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
          if ( !v7 )
            goto LABEL_23;
          current = v18.fields._current;
          v9 = 0;
          while ( 1 )
          {
            if ( v9 >= v7->fields._size )
              goto LABEL_8;
            Item = System_Collections_Generic_List_object___get_Item(
                     v7,
                     v9,
                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            v12 = Item;
            if ( !Item )
              sub_1B8880C(0LL, v11);
            methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
              || (SvtEqCombineListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
            {
              sub_1B88ACC(Item);
LABEL_23:
              sub_1B8880C(v5, v6);
            }
            UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(
                          (SvtEqCombineListViewItem_o *)Item,
                          (const MethodInfo *)SvtEqCombineListViewItem_TypeInfo);
            if ( !current )
              sub_1B8880C(UserSvtId, v15);
            v16 = UserSvtId;
            v5 = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)current, v15);
            if ( v16 == v5 )
              break;
            v7 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
            ++v9;
            if ( !v7 )
              goto LABEL_23;
          }
          BYTE4(v12[15].monitor) = 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v18,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      }
    }
  }
}


void __fastcall SvtEqCombineListViewManager__SetMode(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        SvtEqCombineListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  SvtEqCombineListViewManager__SetMode_45436372(this, mode, v6);
}


void __fastcall SvtEqCombineListViewManager__SetMode_45436372(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  UnityEngine_Behaviour_o *itemList; // x0
  int32_t v9; // w1
  char v10; // w22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  ListViewItem_o *current; // x21
  __int64 methodPtr_low; // x9
  const MethodInfo *v15; // x1
  int32_t selectNum; // w27
  __int64 v17; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v18; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  int32_t klass; // w9
  const MethodInfo *v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4A5ED6F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED6F = 1;
  }
  memset(&v25, 0, sizeof(v25));
  memset(&v24, 0, sizeof(v24));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, (mode & 0xFFFFFFFE) == 2, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    itemList = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !itemList )
      goto LABEL_39;
    if ( !UnityEngine_Behaviour__get_enabled(itemList, 0LL) )
    {
      itemList = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !itemList )
        goto LABEL_39;
      UnityEngine_Behaviour__set_enabled(itemList, 1, 0LL);
      itemList = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !itemList )
        goto LABEL_39;
      UIScrollView__UpdatePosition((UIScrollView_o *)itemList, 0LL);
    }
  }
  if ( (unsigned int)(mode - 1) < 2 )
  {
    itemList = (UnityEngine_Behaviour_o *)this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v23,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v25 = v23;
      v10 = 0;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v25,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v11 )
          break;
        current = (ListViewItem_o *)v25.fields._current;
        if ( !v25.fields._current )
          goto LABEL_38;
        methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v25.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (SvtEqCombineListViewItem_c *)v25.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
        {
          sub_1B88ACC(v25.fields._current);
LABEL_38:
          sub_1B8880C(v11, v12);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v25.fields._current, 0LL)
          && SvtEqCombineListViewItem__get_IsCanNotSelect((SvtEqCombineListViewItem_o *)current, v15) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0LL);
          v18 = this->fields.itemList;
          --this->fields.selectSum;
          if ( !v18 )
            sub_1B8880C(0LL, v17);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v23,
            (System_Collections_Generic_List_object__o *)v18,
            (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v24 = v23;
          while ( 1 )
          {
            v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v24,
                    (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v19 )
              break;
            if ( !v24.fields._current )
              sub_1B8880C(v19, v20);
            klass = (int32_t)v24.fields._current[1].klass;
            if ( klass > selectNum )
              LODWORD(v24.fields._current[1].klass) = klass - 1;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v24,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v10 = 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v25,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v10 & 1) != 0 )
        SvtEqCombineListViewManager__RefrashListDisp(this, v22);
      if ( mode == 2 )
        v9 = 4;
      else
        v9 = 2;
      goto LABEL_35;
    }
LABEL_39:
    sub_1B8880C(itemList, v6);
  }
  if ( mode != 3 )
    return;
  v9 = 5;
LABEL_35:
  SvtEqCombineListViewManager__RequestListObject_45437456(this, v9, v7);
}


void __fastcall SvtEqCombineListViewManager__SetMode_45437404(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  SvtEqCombineListViewManager__SetMode_45436372(this, mode, v6);
}


void __fastcall SvtEqCombineListViewManager__SetObjectItem(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x9
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A5ED6E & 1) == 0 )
  {
    this = (SvtEqCombineListViewManager_o *)sub_1B885B0(&SvtEqCombineListViewObject_TypeInfo);
    byte_4A5ED6E = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1B8880C(this, obj);
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1B88ACC(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 4;
  else
    v7 = 2;
  SvtEqCombineListViewObject__Init_45436248((SvtEqCombineListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall SvtEqCombineListViewManager__SetReleaseBtnEnable(
        SvtEqCombineListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_o *allReleaseButton; // x0
  __int64 v4; // x1

  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    sub_1B8880C(0LL, isEnable);
  if ( isEnable )
    v4 = 0LL;
  else
    v4 = 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_SetState.method)(
    allReleaseButton,
    v4,
    1LL,
    allReleaseButton->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall SvtEqCombineListViewManager__SetSelectBaseSvtData(
        SvtEqCombineListViewManager_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.baseUsrSvtData = resData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData, (int32_t)resData, (int32_t)method, v3);
}


void __fastcall SvtEqCombineListViewManager__SetSelectMaterialList(
        SvtEqCombineListViewManager_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedItems,
        const MethodInfo *method)
{
  SetCombineData_o *v5; // x22
  struct SetCombineData_o **p_combineData; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  char *combineData; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x1
  struct SetCombineData_o *v14; // x8
  System_Collections_Generic_Dictionary_long__bool__o *v15; // x20
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x1
  SvtEqCombineListViewItem_o *current; // x21
  const MethodInfo *v19; // x1
  int64_t UserSvtId; // x0
  int isUseRecommendSupportEquip; // w8
  struct SetCombineData_o *v22; // x21
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5ED77 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
    sub_1B885B0(&SetCombineData_TypeInfo);
    byte_4A5ED77 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v5 = (SetCombineData_o *)sub_1B887FC(SetCombineData_TypeInfo);
  SetCombineData___ctor(v5, 0LL);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.combineData, (int32_t)v5, v7, v8);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_23;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(combineData + 16), (int32_t)baseUsrSvtData, v10, v11);
  v14 = *p_combineData;
  if ( !*p_combineData )
    goto LABEL_23;
  *(_OWORD *)&v14->fields.selectSum = *(_OWORD *)&this->fields.selectSum;
  *(_QWORD *)&v14->fields.getHpAdjustVal = *(_QWORD *)&this->fields.getHpUpVal;
  v14->fields.isAdjustMax = this->fields.isAllUpMax;
  v15 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_1B887FC(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
  System_Collections_Generic_Dictionary_long__bool____ctor(
    v15,
    (const MethodInfo_319F750 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
  if ( !selectedItems )
    goto LABEL_23;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)selectedItems,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    if ( !v16 )
      break;
    current = (SvtEqCombineListViewItem_o *)v29.fields._current;
    if ( !v29.fields._current )
      sub_1B8880C(v16, v17);
    if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v29.fields._current, v17) >= 1 )
    {
      UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(current, v19);
      if ( current->fields.isEquiped || current->fields.isUseSupportEquip )
      {
        isUseRecommendSupportEquip = 1;
        if ( !v15 )
          goto LABEL_15;
      }
      else
      {
        isUseRecommendSupportEquip = current->fields.isUseRecommendSupportEquip;
        if ( !v15 )
LABEL_15:
          sub_1B8880C(UserSvtId, UserSvtId);
      }
      System_Collections_Generic_Dictionary_long__bool___Add(
        v15,
        UserSvtId,
        isUseRecommendSupportEquip != 0,
        (const MethodInfo_31A0130 *)Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
  if ( !v15 )
    goto LABEL_23;
  if ( System_Collections_Generic_Dictionary_long__bool___get_Count(
         v15,
         (const MethodInfo_319FDD4 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__) <= 0 )
    return;
  v22 = *p_combineData;
  Keys = System_Collections_Generic_Dictionary_long__bool___get_Keys(
           v15,
           (const MethodInfo_319FDE4 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
  combineData = (char *)System_Linq_Enumerable__ToArray_long_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                          (const MethodInfo_2EB865C *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !v22
    || (v22->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v22->fields.materialUsrSvtIdList,
          (int32_t)combineData,
          v24,
          v25),
        (combineData = (char *)*p_combineData) == 0LL) )
  {
LABEL_23:
    sub_1B8880C(combineData, v9);
  }
  *((_QWORD *)combineData + 8) = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(combineData + 64), (int32_t)v15, v26, v27);
}


void __fastcall SvtEqCombineListViewManager__SetSelectedMaterialInfo(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o **p_selectedMtSvtList_k__BackingField; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  int64_t itemList; // x0
  SvtEqCombineListViewItem_c *v8; // x1
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x21
  System_Collections_Generic_List_long__o *v13; // x22
  int v14; // w24
  int32_t v15; // w23
  __int64 methodPtr_low; // x9
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  struct System_Int64_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x2
  SvtEqCombineListViewManager_o *v24; // x0
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *v25; // x1

  if ( (byte_4A5ED76 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    byte_4A5ED76 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  p_selectedMtSvtList_k__BackingField = &this->fields._selectedMtSvtList_k__BackingField;
  this->fields._selectedMtSvtList_k__BackingField = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._selectedMtSvtList_k__BackingField,
    (int32_t)v3,
    v5,
    v6);
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_25;
  size = tempMtSvtList->fields._size;
  v11 = tempMtSvtList->fields._version + 1;
  tempMtSvtList->fields._size = 0;
  tempMtSvtList->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, size, 0LL);
  SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, (const MethodInfo *)v8);
  v13 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v13,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !SelectedMaterialList )
    goto LABEL_25;
  v14 = SelectedMaterialList->fields._size;
  if ( v14 < 1 )
  {
LABEL_20:
    itemList = (int64_t)this->fields.tempMtSvtList;
    if ( itemList )
    {
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)itemList,
        (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
      itemList = (int64_t)*p_selectedMtSvtList_k__BackingField;
      if ( *p_selectedMtSvtList_k__BackingField )
      {
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)itemList,
          (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
          (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
        if ( v13 )
        {
          v20 = System_Collections_Generic_List_long___ToArray(
                  v13,
                  (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
          this->fields.highRarityList = v20;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.highRarityList, (int32_t)v20, v21, v22);
          v24 = this;
          v25 = SelectedMaterialList;
          goto LABEL_24;
        }
      }
    }
LABEL_25:
    sub_1B8880C(itemList, v8);
  }
  v15 = 0;
  while ( 1 )
  {
    itemList = (int64_t)this->fields.itemList;
    if ( !itemList )
      goto LABEL_25;
    itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)itemList,
                          v15,
                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_25;
    v8 = SvtEqCombineListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( *(int *)(itemList + 156) >= 3 )
    {
      itemList = SvtEqCombineListViewItem__get_UserSvtId(
                   (SvtEqCombineListViewItem_o *)itemList,
                   (const MethodInfo *)SvtEqCombineListViewItem_TypeInfo);
      if ( !v13 )
        goto LABEL_25;
      items = v13->fields._items;
      v18 = Method_System_Collections_Generic_List_long__Add__;
      ++v13->fields._version;
      if ( !items )
        goto LABEL_25;
      v19 = v13->fields._size;
      v8 = (SvtEqCombineListViewItem_c *)itemList;
      if ( (unsigned int)v19 >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v13,
          itemList,
          *(const MethodInfo_34E5868 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v13->fields._size = v19 + 1;
        items->m_Items[v19] = itemList;
      }
    }
    if ( v14 == ++v15 )
      goto LABEL_20;
  }
  sub_1B88ACC(itemList);
LABEL_24:
  SvtEqCombineListViewManager__SetSelectMaterialList(v24, v25, v23);
}


void __fastcall SvtEqCombineListViewManager__SetSelectedSvtList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x1

  tempMtSvtList = this->fields.tempMtSvtList;
  if ( tempMtSvtList )
  {
    this->fields._selectedMtSvtList_k__BackingField = tempMtSvtList;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields._selectedMtSvtList_k__BackingField,
      (int32_t)tempMtSvtList,
      v2,
      v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetServantList(
        SvtEqCombineListViewManager_o *this,
        int32_t type,
        EventUpValSetupInfo_o *setupInfo,
        EventUpValSetupInfo_o *finishSetupInfo,
        const MethodInfo *method)
{
  int64_t emptyListNoticeLabel; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x25
  int32_t v15; // w2
  int32_t v16; // w3
  UserGameEntity_o *SelfUserGame; // x22
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int32_t qp; // w8
  UILabel_o *haveQpLabel; // x24
  Il2CppObject *v23; // x0
  UILabel_o *nextExpLabel; // x24
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  UserServantEntity_array *ServantEquipList; // x29
  const MethodInfo *v30; // x2
  int v31; // w20
  int32_t FriendShipSvtEquipNum; // w0
  System_Collections_Generic_List_object__o *v33; // x26
  System_Collections_Generic_List_object__o *v34; // x27
  int max_length; // w8
  __int64 v36; // x21
  UserServantEntity_o **m_Items; // x22
  UserServantEntity_o *v38; // x28
  __int128 v39; // q0
  UserServantEntity_array *v40; // x24
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v42; // q0
  int64_t v43; // x29
  int32_t v44; // w2
  int32_t v45; // w3
  bool v46; // zf
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  UILabel_o *v51; // x26
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x0
  System_Collections_Generic_List_object__o *v56; // x25
  System_Collections_Generic_List_object__o *v57; // x0
  const MethodInfo *v58; // x2
  int32_t v59; // w24
  __int128 v60; // q0
  struct UserServantEntity_o *v61; // x8
  __int128 v62; // q0
  il2cpp_array_size_t v63; // w20
  int32_t v64; // w0
  int v65; // w20
  UILabel_o *v66; // x25
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  Il2CppObject *v70; // x0
  int v71; // w24
  int v72; // w8
  unsigned int v73; // w25
  Il2CppClass **v74; // x20
  Il2CppClass *v75; // x8
  UserServantEntity_o **v76; // x20
  Il2CppClass *v77; // t1
  Il2CppType byval_arg; // q0
  int64_t v79; // x26
  System_Collections_Generic_List_object__o *selectedMtSvtList_k__BackingField; // x8
  int32_t v81; // w27
  _BOOL4 v82; // w28
  int32_t v83; // w23
  UserServantEntity_array *v84; // x21
  UserServantEntity_o *v85; // x29
  UserServantEntity_o *v86; // x20
  int64_t favoriteUserSvtId; // x22
  SvtEqCombineListViewItem_o *v88; // x27
  int32_t v89; // w2
  int32_t v90; // w3
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *v91; // x8
  __int64 v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  __int64 v95; // x8
  UILabel_o *servantInfoLabel; // x20
  System_String_o *v97; // x21
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  Il2CppObject *v101; // x22
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  Il2CppObject *v105; // x0
  const MethodInfo *v106; // x1
  const MethodInfo *v107; // x1
  const MethodInfo *v108; // [xsp+8h] [xbp-168h]
  int v109; // [xsp+1Ch] [xbp-154h]
  UserGameEntity_o *v112; // [xsp+30h] [xbp-140h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+40h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+60h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+80h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+A0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+C0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+E0h] [xbp-90h] BYREF
  int32_t svtEquipKeep; // [xsp+100h] [xbp-70h] BYREF
  float barExp; // [xsp+104h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+108h] [xbp-68h] BYREF

  if ( (byte_4A5ED61 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76052560);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SvtEqCombineListViewItem_TypeInfo);
    sub_1B885B0(&StringLiteral_24971/*"{0:N0}"*/);
    sub_1B885B0(&StringLiteral_12376/*"SUM_INFO"*/);
    byte_4A5ED61 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  emptyListNoticeLabel = (int64_t)this->fields.emptyListNoticeLabel;
  if ( !emptyListNoticeLabel )
    goto LABEL_112;
  emptyListNoticeLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)emptyListNoticeLabel,
                                    0LL);
  if ( !emptyListNoticeLabel )
    goto LABEL_112;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0LL);
  sort = this->fields.sort;
  this->fields.itemType = type;
  if ( !sort )
    goto LABEL_112;
  iconScaleKind = sort->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_12;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_12;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_12:
    this->fields.seed = normalSizeSeed;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v7, v8);
  }
  emptyListNoticeLabel = (int64_t)this->fields.sort;
  if ( !emptyListNoticeLabel )
    goto LABEL_112;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  emptyListNoticeLabel = (int64_t)ListViewSort__GetScaleKindSpriteName(
                                    (ListViewSort_o *)emptyListNoticeLabel,
                                    this->fields.scaleType,
                                    0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_112;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)emptyListNoticeLabel, 0LL);
  emptyListNoticeLabel = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_112;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)emptyListNoticeLabel,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantMaster,
    (int32_t)MasterData_object,
    v15,
    v16);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !SelfUserGame )
    goto LABEL_112;
  qp = SelfUserGame->fields.qp;
  this->fields.userQP = qp;
  haveQpLabel = this->fields.haveQpLabel;
  LODWORD(v119.fields.currentCryptoKey) = qp;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119, v18, v19, v20);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v23, 0LL);
  if ( !haveQpLabel )
    goto LABEL_112;
  UILabel__set_text(haveQpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  *(_OWORD *)&this->fields.selectSum = 0u;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  this->fields.isAllUpMax = 0;
  lateExp[0] = 0;
  nextExpLabel = this->fields.nextExpLabel;
  svtEquipKeep = 0;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v25, v26, v27);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v28, 0LL);
  if ( !nextExpLabel )
    goto LABEL_112;
  UILabel__set_text(nextExpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  v112 = SelfUserGame;
  if ( type )
  {
    v109 = 0;
    ServantEquipList = 0LL;
  }
  else
  {
    emptyListNoticeLabel = (int64_t)this->fields.levelUpInfoImg;
    if ( !emptyListNoticeLabel )
      goto LABEL_112;
    emptyListNoticeLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_112;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0LL);
    emptyListNoticeLabel = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_112;
    emptyListNoticeLabel = (int64_t)UserServantMaster__getServantEquipList(
                                      (UserServantMaster_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_112;
    v31 = *(_DWORD *)(emptyListNoticeLabel + 24);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    FriendShipSvtEquipNum = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
                              (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
                              (UserServantEntity_array *)emptyListNoticeLabel,
                              v30);
    v109 = v31 - FriendShipSvtEquipNum;
    if ( FriendShipSvtEquipNum <= 0 && v109 <= 0 )
    {
      emptyListNoticeLabel = (int64_t)this->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_112;
      emptyListNoticeLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0LL);
      if ( !emptyListNoticeLabel )
        goto LABEL_112;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
    }
    v33 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_55562536(
      v33,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76052560);
    v34 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v34,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_76;
    max_length = ServantEquipList->max_length;
    if ( max_length >= 1 )
    {
      v36 = 0LL;
      m_Items = ServantEquipList->m_Items;
      while ( 1 )
      {
        if ( (unsigned int)v36 >= max_length )
LABEL_113:
          sub_1B88814(emptyListNoticeLabel, *(_QWORD *)&type);
        v38 = m_Items[v36];
        if ( !v38 )
          break;
        v39 = *(_OWORD *)&v38->fields.id.fields.fakeValue;
        v40 = ServantEquipList;
        *(_OWORD *)&v119.fields.currentCryptoKey = *(_OWORD *)&v38->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v119.fields.fakeValue = v39;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v118 = v119;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v118, 0LL);
        baseUsrSvtData = this->fields.baseUsrSvtData;
        if ( !baseUsrSvtData )
          break;
        v42 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        v43 = emptyListNoticeLabel;
        *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v117.fields.fakeValue = v42;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v117, 0LL);
        v46 = v43 == emptyListNoticeLabel;
        ServantEquipList = v40;
        if ( v46 )
        {
          if ( !v34 )
            break;
          items = v34->fields._items;
          v48 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v34->fields._version;
          if ( !items )
            break;
          size = v34->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)v38,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = &items->obj.klass + size;
            v34->fields._size = size + 1;
            v50[4] = (Il2CppClass *)v38;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v38, v44, v45);
          }
          if ( !v33 )
            break;
          emptyListNoticeLabel = System_Collections_Generic_List_object___Remove(
                                   v33,
                                   (Il2CppObject *)v38,
                                   (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        max_length = v40->max_length;
        if ( (int)++v36 >= max_length )
          goto LABEL_48;
      }
LABEL_112:
      sub_1B8880C(emptyListNoticeLabel, *(_QWORD *)&type);
    }
LABEL_48:
    if ( !v34 )
      goto LABEL_112;
    System_Collections_Generic_List_object___AddRange(
      v34,
      (System_Collections_Generic_IEnumerable_T__o *)v33,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___ToArray(
                                      v34,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_112;
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    UserServantEntity__getExpInfo(this->fields.baseUsrSvtData, &lateExp[1], lateExp, &barExp, 0LL);
    v51 = this->fields.nextExpLabel;
    LODWORD(v119.fields.currentCryptoKey) = lateExp[0];
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119, v52, v53, v54);
    emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v55, 0LL);
    if ( !v51 )
      goto LABEL_112;
    UILabel__set_text(v51, (System_String_o *)emptyListNoticeLabel, 0LL);
  }
  if ( type != 1 )
  {
    if ( !ServantEquipList )
      goto LABEL_112;
LABEL_76:
    v71 = 0;
    goto LABEL_77;
  }
  emptyListNoticeLabel = (int64_t)*p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_112;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)emptyListNoticeLabel, 0LL);
  v56 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v56,
    (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76052560);
  v57 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( this->fields.baseUsrSvtData )
  {
    if ( !v56 )
      goto LABEL_112;
    if ( v56->fields._size >= 1 )
    {
      v59 = 0;
      do
      {
        emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___get_Item(
                                          v56,
                                          v59,
                                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !emptyListNoticeLabel )
          goto LABEL_112;
        v60 = *(_OWORD *)(emptyListNoticeLabel + 32);
        *(_OWORD *)&v119.fields.currentCryptoKey = *(_OWORD *)(emptyListNoticeLabel + 16);
        *(_OWORD *)&v119.fields.fakeValue = v60;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v116 = v119;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v116, 0LL);
        v61 = this->fields.baseUsrSvtData;
        if ( !v61 )
          goto LABEL_112;
        v62 = *(_OWORD *)&v61->fields.id.fields.fakeValue;
        *(_OWORD *)&v115.fields.currentCryptoKey = *(_OWORD *)&v61->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v115.fields.fakeValue = v62;
        if ( emptyListNoticeLabel == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v115, 0LL) )
          System_Collections_Generic_List_object___RemoveAt(
            v56,
            v59,
            (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
      }
      while ( ++v59 < v56->fields._size );
    }
    emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___ToArray(
                                      v56,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
  }
  if ( !ServantEquipList )
    goto LABEL_112;
  v63 = ServantEquipList->max_length;
  v64 = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
          (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
          ServantEquipList,
          v58);
  v65 = v63 - v64;
  if ( v64 <= 0 && v65 <= 0 )
  {
    emptyListNoticeLabel = (int64_t)this->fields.emptyListNoticeLabel;
    if ( !emptyListNoticeLabel )
      goto LABEL_112;
    emptyListNoticeLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_112;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
  }
  emptyListNoticeLabel = (int64_t)this->fields.baseUsrSvtData;
  v109 = v65;
  if ( !emptyListNoticeLabel )
    goto LABEL_112;
  UserServantEntity__getExpInfo((UserServantEntity_o *)emptyListNoticeLabel, &lateExp[1], lateExp, &barExp, 0LL);
  v66 = this->fields.nextExpLabel;
  LODWORD(v119.fields.currentCryptoKey) = lateExp[0];
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119, v67, v68, v69);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v70, 0LL);
  if ( !v66 )
    goto LABEL_112;
  UILabel__set_text(v66, (System_String_o *)emptyListNoticeLabel, 0LL);
  v71 = 1;
LABEL_77:
  v72 = ServantEquipList->max_length;
  if ( v72 >= 1 )
  {
    v73 = 0;
    while ( 1 )
    {
      if ( v73 >= v72 )
        goto LABEL_113;
      v74 = &ServantEquipList->obj.klass + (int)v73;
      v77 = v74[4];
      v76 = (UserServantEntity_o **)(v74 + 4);
      v75 = v77;
      if ( !v77 )
        goto LABEL_112;
      byval_arg = v75->_1.byval_arg;
      *(_OWORD *)&v119.fields.currentCryptoKey = *(_OWORD *)&v75->_1.name;
      *(Il2CppType *)&v119.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v114 = v119;
      emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v114, 0LL);
      v79 = emptyListNoticeLabel;
      if ( v71 )
      {
        selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._selectedMtSvtList_k__BackingField;
        if ( selectedMtSvtList_k__BackingField )
        {
          if ( selectedMtSvtList_k__BackingField->fields._size >= 1 )
            break;
        }
      }
      v82 = 0;
      v83 = 0;
LABEL_96:
      if ( v73 >= ServantEquipList->max_length )
        goto LABEL_113;
      v84 = ServantEquipList;
      v85 = *v76;
      v86 = this->fields.baseUsrSvtData;
      favoriteUserSvtId = v112->fields.favoriteUserSvtId;
      v88 = (SvtEqCombineListViewItem_o *)sub_1B887FC(SvtEqCombineListViewItem_TypeInfo);
      SvtEqCombineListViewItem___ctor(
        v88,
        type,
        v73,
        v85,
        v79 == favoriteUserSvtId,
        v86,
        v82,
        setupInfo,
        finishSetupInfo,
        v108);
      if ( (v71 & v82) == 1 )
      {
        if ( !v88 )
          goto LABEL_112;
        v88->fields.selectNum = v83;
        v91 = this->fields._selectedMtSvtList_k__BackingField;
        ++this->fields.selectSum;
        if ( !v91 )
          goto LABEL_112;
        if ( v83 == v91->fields._size - 1 )
          v88->fields.isLastSelectMaterial = 1;
      }
      emptyListNoticeLabel = (int64_t)this->fields.itemList;
      if ( !emptyListNoticeLabel )
        goto LABEL_112;
      v92 = *(_QWORD *)(emptyListNoticeLabel + 16);
      v93 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(emptyListNoticeLabel + 28);
      if ( !v92 )
        goto LABEL_112;
      ServantEquipList = v84;
      v94 = *(int *)(emptyListNoticeLabel + 24);
      if ( (unsigned int)v94 >= *(_DWORD *)(v92 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)emptyListNoticeLabel,
          (Il2CppObject *)v88,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
      }
      else
      {
        v95 = v92 + 8 * v94;
        *(_DWORD *)(emptyListNoticeLabel + 24) = v94 + 1;
        *(_QWORD *)(v95 + 32) = v88;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v95 + 32), (int32_t)v88, v89, v90);
      }
      v72 = v84->max_length;
      if ( (int)++v73 >= v72 )
        goto LABEL_108;
    }
    v81 = 0;
    v82 = 0;
    v83 = 0;
    while ( 1 )
    {
      emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___get_Item(
                                        selectedMtSvtList_k__BackingField,
                                        v81,
                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
      if ( !emptyListNoticeLabel )
        goto LABEL_112;
      emptyListNoticeLabel = SvtEqCombineListViewItem__get_UserSvtId(
                               (SvtEqCombineListViewItem_o *)emptyListNoticeLabel,
                               *(const MethodInfo **)&type);
      selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._selectedMtSvtList_k__BackingField;
      if ( !selectedMtSvtList_k__BackingField )
        goto LABEL_112;
      if ( emptyListNoticeLabel == v79 )
        v83 = v81;
      ++v81;
      if ( emptyListNoticeLabel == v79 )
        v82 = 1;
      if ( v81 >= selectedMtSvtList_k__BackingField->fields._size )
        goto LABEL_96;
    }
  }
LABEL_108:
  SvtEqCombineListViewManager__RefrashListDisp(this, *(const MethodInfo **)&type);
  servantInfoLabel = this->fields.servantInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
  LODWORD(v119.fields.currentCryptoKey) = v109;
  v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119, v98, v99, v100);
  svtEquipKeep = v112->fields.svtEquipKeep;
  v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v102, v103, v104);
  emptyListNoticeLabel = (int64_t)System_String__Format_61721404(v97, v101, v105, 0LL);
  if ( !servantInfoLabel )
    goto LABEL_112;
  UILabel__set_text(servantInfoLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  SvtEqCombineListViewManager__SetMaterialSvtInfo(this, v106);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  SvtEqCombineListViewManager__SetFilterButtonImage(this, v107);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetSortButtonImage(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v17; // x20

  if ( (byte_4A5ED89 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17541/*"btn_sort_up"*/);
    sub_1B885B0(&StringLiteral_17628/*"btn_txt_up"*/);
    sub_1B885B0(&StringLiteral_17584/*"btn_txt_new"*/);
    sub_1B885B0(&StringLiteral_17574/*"btn_txt_down"*/);
    sub_1B885B0(&StringLiteral_17591/*"btn_txt_old"*/);
    sub_1B885B0(&StringLiteral_17538/*"btn_sort_down"*/);
    byte_4A5ED89 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_43;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v6 )
      goto LABEL_43;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_43;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17628/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      v12 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v17 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)sort, 0LL);
        sort = (ListViewSort_o *)this->fields.bonusFilterKindLabel;
        if ( sort )
        {
          UIWidget__set_width((UIWidget_o *)sort, 144, 0LL);
          sort = (ListViewSort_o *)this->fields.bonusFilterKindLabel;
          if ( sort )
          {
            ((void (__fastcall *)(ListViewSort_o *, void *))sort->klass[2]._1.typeMetadataHandle)(
              sort,
              sort->klass[2]._1.interopData);
            sort = (ListViewSort_o *)this->fields.bonusFilterKindLabel;
            if ( sort )
            {
              UILabel__SetCondensedScale((UILabel_o *)sort, 144, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_43:
    sub_1B8880C(sort, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetStatusKind(
        SvtEqCombineListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v6; // x8
  UICommonButton_o *v7; // x21
  bool enabled; // w0
  __int64 *v9; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v11; // w0
  __int64 *v12; // x8
  UICommonButton_o *choiceTabButton; // x20
  bool v14; // w0
  int32_t currentType; // w8
  UILabel_o *combineInfoMsgLb; // x20
  __int64 *v17; // x8
  int32_t v18; // w8
  UILabel_o *v19; // x20
  __int64 *v20; // x8

  v3 = modeKind;
  if ( (byte_4A5ED5E & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17647/*"button_allchoice_reg"*/);
    sub_1B885B0(&StringLiteral_17650/*"button_alllock_unreg"*/);
    sub_1B885B0(&StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1B885B0(&StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1B885B0(&StringLiteral_17663/*"button_select_reg"*/);
    sub_1B885B0(&StringLiteral_7114/*"HEADER_MSG_SVTEQ_MATERIAL"*/);
    sub_1B885B0(&StringLiteral_7113/*"HEADER_MSG_SVTEQ_BASE"*/);
    sub_1B885B0(&StringLiteral_17664/*"button_select_unreg"*/);
    sub_1B885B0(&StringLiteral_17649/*"button_alllock_reg"*/);
    sub_1B885B0(&StringLiteral_17648/*"button_allchoice_unreg"*/);
    byte_4A5ED5E = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = v3;
  if ( !statusTabButton )
    goto LABEL_51;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  UnityEngine_Behaviour__set_enabled(statusTabButton, v3 != 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v6 = &StringLiteral_17663/*"button_select_reg"*/;
  if ( v3 )
    v6 = &StringLiteral_17664/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v6, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  v7 = this->fields.statusTabButton;
  if ( !v7 )
    goto LABEL_51;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(v7, enabled, 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  UnityEngine_Behaviour__set_enabled(statusTabButton, v3 != 1, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v9 = &StringLiteral_17649/*"button_alllock_reg"*/;
  if ( v3 != 1 )
    v9 = &StringLiteral_17650/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_51;
  v11 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v11, 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  UnityEngine_Behaviour__set_enabled(statusTabButton, v3 != 2, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v12 = &StringLiteral_17647/*"button_allchoice_reg"*/;
  if ( v3 != 2 )
    v12 = &StringLiteral_17648/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v12, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton
    || (statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                       statusTabButton,
                                                       0LL,
                                                       0LL,
                                                       statusTabButton->klass[1]._1.interfaceOffsets),
        (choiceTabButton = this->fields.choiceTabButton) == 0LL) )
  {
LABEL_51:
    sub_1B8880C(statusTabButton, *(_QWORD *)&modeKind);
  }
  v14 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v14, 0, 0LL);
  currentType = this->fields.currentType;
  if ( currentType == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = &StringLiteral_7114/*"HEADER_MSG_SVTEQ_MATERIAL"*/;
  }
  else
  {
    if ( currentType )
      goto LABEL_34;
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = &StringLiteral_7113/*"HEADER_MSG_SVTEQ_BASE"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v17, 0LL);
  if ( !combineInfoMsgLb )
    goto LABEL_51;
  UILabel__set_text(combineInfoMsgLb, (System_String_o *)statusTabButton, 0LL);
LABEL_34:
  v18 = this->fields.modeKind;
  if ( v18 == 2 )
  {
    v19 = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = &StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
  }
  else
  {
    if ( v18 != 1 )
      goto LABEL_44;
    v19 = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = &StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v20, 0LL);
  if ( !v19 )
    goto LABEL_51;
  UILabel__set_text(v19, (System_String_o *)statusTabButton, 0LL);
LABEL_44:
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.combineInfoMsgLb;
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    if ( this->fields.currentType )
      *(_QWORD *)&modeKind = 12LL;
    else
      *(_QWORD *)&modeKind = 20LL;
  }
  else
  {
    *(_QWORD *)&modeKind = 14LL;
  }
  if ( !statusTabButton )
    goto LABEL_51;
  UILabel__set_fontSize((UILabel_o *)statusTabButton, modeKind, 0LL);
}


void __fastcall SvtEqCombineListViewManager__StatusRequest(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  int32_t v7; // w2
  int32_t v8; // w3
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1
  System_Int64_array *v12; // x1
  System_Int64_array *v13; // x2
  bool v14; // w4
  bool v15; // w5
  int32_t v16; // w2
  int32_t v17; // w3
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  System_Int64_array *v19; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5ED91 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SvtEqCombineListViewManager_EndStatusSync__);
    byte_4A5ED91 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v19 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( SvtEqCombineListViewManager__GetSwapChoiceList(this, &choiceList, &v19, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v16, v17);
      v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v18,
                         (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v13 = v19;
        v12 = choiceList;
        v15 = 1;
        v14 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1B8880C(Request_object, v11);
    }
  }
  else if ( modeKind == 1 && SvtEqCombineListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v7, v8);
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v9,
                       (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v13 = unlockList;
      v12 = lockList;
      v14 = 1;
      v15 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v12, v13, 0, v14, v15, 0LL);
      return;
    }
    goto LABEL_19;
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall SvtEqCombineListViewManager__add_callbackFunc(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SvtEqCombineListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SvtEqCombineListViewManager_o *v10; // x0
  SvtEqCombineListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A5ED54 & 1) == 0 )
  {
    sub_1B885B0(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo);
    byte_4A5ED54 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SvtEqCombineListViewManager_CallbackFunc_c *)v7->klass != SvtEqCombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  SvtEqCombineListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall SvtEqCombineListViewManager__add_callbackFunc2(
        SvtEqCombineListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SvtEqCombineListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A5ED56 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5ED56 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  SvtEqCombineListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *__fastcall SvtEqCombineListViewManager__get_ClippingObjectList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5ED5C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5ED5C = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(
                                 (SvtEqCombineListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v3;
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *__fastcall SvtEqCombineListViewManager__get_ObjectList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5ED5B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5ED5B = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v3;
}


int32_t __fastcall SvtEqCombineListViewManager__get_getModeKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


bool __fastcall SvtEqCombineListViewManager__get_isOpenCheckEquipDialog(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._isOpenCheckEquipDialog_k__BackingField;
}


System_Collections_Generic_List_SvtEqCombineListViewItem__o *__fastcall SvtEqCombineListViewManager__get_selectedMtSvtList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._selectedMtSvtList_k__BackingField;
}


void __fastcall SvtEqCombineListViewManager__remove_callbackFunc(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SvtEqCombineListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SvtEqCombineListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A5ED55 & 1) == 0 )
  {
    sub_1B885B0(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo);
    byte_4A5ED55 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SvtEqCombineListViewManager_CallbackFunc_c *)v7->klass != SvtEqCombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  SvtEqCombineListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall SvtEqCombineListViewManager__remove_callbackFunc2(
        SvtEqCombineListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SvtEqCombineListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A5ED57 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5ED57 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  SvtEqCombineListViewManager__get_isOpenCheckEquipDialog(v10, v11);
}


void __fastcall SvtEqCombineListViewManager__set_isOpenCheckEquipDialog(
        SvtEqCombineListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isOpenCheckEquipDialog_k__BackingField = value;
}


void __fastcall SvtEqCombineListViewManager__set_selectedMtSvtList(
        SvtEqCombineListViewManager_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._selectedMtSvtList_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._selectedMtSvtList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager_CallbackFunc___ctor(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D359C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D3544;
}


System_IAsyncResult_o *__fastcall SvtEqCombineListViewManager_CallbackFunc__BeginInvoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = kind;
  if ( (byte_4A5ED9B & 1) == 0 )
  {
    sub_1B885B0(&SvtEqCombineListViewManager_ResultKind_TypeInfo);
    byte_4A5ED9B = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(SvtEqCombineListViewManager_ResultKind_TypeInfo, &v12, list, callback, object);
  v11[1] = (__int64)list;
  return (System_IAsyncResult_o *)sub_1B88564(this, v11, callback, object);
}


void __fastcall SvtEqCombineListViewManager_CallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall SvtEqCombineListViewManager_CallbackFunc__Invoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, System_Int32_array *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    list,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D3614;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D35CC;
}


System_IAsyncResult_o *__fastcall SvtEqCombineListViewManager_RequestCallbackFunc__BeginInvoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4A5ED9C & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A5ED9C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall SvtEqCombineListViewManager_RequestCallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall SvtEqCombineListViewManager_RequestCallbackFunc__Invoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall SvtEqCombineListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5ED9D & 1) == 0 )
  {
    sub_1B885B0(&SvtEqCombineListViewManager___c_TypeInfo);
    byte_4A5ED9D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(SvtEqCombineListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SvtEqCombineListViewManager___c_TypeInfo->static_fields->__9 = (struct SvtEqCombineListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)SvtEqCombineListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall SvtEqCombineListViewManager___c___ctor(
        SvtEqCombineListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SvtEqCombineListViewManager___c___GetSelectedMaterialList_b__138_0(
        SvtEqCombineListViewManager___c_o *this,
        SvtEqCombineListViewItem_o *a,
        SvtEqCombineListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.selectNum - b->fields.selectNum;
}