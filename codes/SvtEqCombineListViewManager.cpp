void SvtEqCombineListViewManager___cctor(const MethodInfo *method)
{
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  __int64 v2; // x1

  if ( (byte_4CE8669 & 1) == 0 )
  {
    sub_1C7BAE8(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13246/*"SvtEqCombine"*/);
    byte_4CE8669 = 1;
  }
  static_fields = SvtEqCombineListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->COLOR_VAL = 0x13EC00000LL;
  v2 = StringLiteral_13246/*"SvtEqCombine"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_13246/*"SvtEqCombine"*/;
  sub_1C7BA8C(&static_fields->SORT_SAVE_KEY, v2);
  SvtEqCombineListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void SvtEqCombineListViewManager___ctor(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_long__o *v4; // x20

  if ( (byte_4CE8668 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    byte_4CE8668 = 1;
  }
  this->fields.selectMax = 20;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  this->fields.tempMtSvtList = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
  sub_1C7BA8C(&this->fields.tempMtSvtList, v3);
  v4 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v4,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.tempMaterialUsrSvtIdList = v4;
  sub_1C7BA8C(&this->fields.tempMaterialUsrSvtIdList, v4);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void SvtEqCombineListViewManager__CancelDragEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
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
void SvtEqCombineListViewManager__CancelDragSelect(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 naturalAligment; // x9
  SvtEqCombineListViewManager_o *v7; // x0
  int32_t *v8; // x1
  System_Collections_Generic_List_ListViewItem__o *v9; // x2
  int32_t v10; // w3
  const MethodInfo *v11; // x4

  if ( (byte_4CE8666 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    byte_4CE8666 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0 )
  {
    sub_1C7BD40(itemSortList, *(_QWORD *)&index);
  }
  naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    HIDWORD(itemSortList[6].fields._items) = -1;
  }
  else
  {
    v7 = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(itemSortList);
    SvtEqCombineListViewManager__GetFocusItemIndex(v7, v8, v9, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t SvtEqCombineListViewManager__CheckCompareQp(
        SvtEqCombineListViewManager_o *this,
        int32_t nowCombineQp,
        const MethodInfo *method)
{
  int32_t CombineQpSvtEq; // w19
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w21
  System_Collections_Generic_List_object__o *v8; // x22
  __int64 naturalAligment; // x9
  SvtEqCombineListViewManager_o *v11; // x0
  int32_t *v12; // x1
  int32_t *v13; // x2
  int32_t v14; // w3
  const MethodInfo *v15; // x4

  CombineQpSvtEq = nowCombineQp;
  if ( (byte_4CE8631 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    byte_4CE8631 = 1;
  }
  if ( !this->fields.selectSum )
    return CombineQpSvtEq;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_1C7BD40(itemList, *(_QWORD *)&nowCombineQp);
  size = itemList->fields._size;
  if ( size < 1 )
    return CombineQpSvtEq;
  v7 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_18;
    v8 = itemList;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SvtEqCombineListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0) && BYTE1(v8[4].monitor) )
    {
      itemList = (System_Collections_Generic_List_object__o *)v8[3].monitor;
      if ( !itemList )
        goto LABEL_18;
      if ( CombineQpSvtEq < UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)itemList, 0) )
      {
        itemList = (System_Collections_Generic_List_object__o *)v8[3].monitor;
        if ( !itemList )
          goto LABEL_18;
        CombineQpSvtEq = UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)itemList, 0);
      }
    }
    if ( size == ++v7 )
      return CombineQpSvtEq;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_18;
  }
  v11 = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(itemList);
  return SvtEqCombineListViewManager__CheckIncrementLv(v11, v12, v13, v14, v15);
}


void SvtEqCombineListViewManager__CheckDragMax(
        SvtEqCombineListViewManager_o *this,
        bool *isMaxLvSelected,
        const MethodInfo *method)
{
  void *itemList; // x0
  int v6; // w24
  int v7; // w25
  __int64 v8; // x0
  __int64 v9; // x1
  SvtEqCombineListViewItem_o *current; // x21
  __int64 naturalAligment; // x9
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
  int32_t v28; // w23
  int v29; // w22
  const MethodInfo *v30; // x4
  int32_t LevelMax; // w21
  int32_t v32; // w8
  int32_t v33; // w22
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+40h] [xbp-80h] BYREF
  int32_t increLv[2]; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4CE8633 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    byte_4CE8633 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  *(_QWORD *)increLv = 0;
  memset(&v35, 0, sizeof(v35));
  *isMaxLvSelected = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v6 = 0;
  v7 = 0;
  v36 = v34;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v36,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v8 & 1) == 0 )
      break;
    current = (SvtEqCombineListViewItem_o *)v36.fields._current;
    if ( !v36.fields._current )
      goto LABEL_49;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( v36.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SvtEqCombineListViewItem_c *)v36.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      v8 = sub_1C7C0DC(v36.fields._current);
LABEL_49:
      sub_1C7BD40(v8, v9);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v36.fields._current, 0) || current->fields.dragSelectNum >= 1 )
    {
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        sub_1C7BD40(0, v12);
      if ( !UserServantEntity__isLevelMax(baseUsrSvtData, 0) )
        goto LABEL_16;
      v15 = this->fields.baseUsrSvtData;
      if ( !v15 )
        sub_1C7BD40(0, v14);
      if ( UserServantEntity__isLevelMax(v15, 0) && current->fields.isLimitCntTarget )
      {
LABEL_16:
        v7 += current->fields.materialExp;
        v6 += SvtEqCombineListViewItem__get_GetAddTotalExp(current, v14);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_53;
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      combineEventList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v35 = v34;
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v18 )
        break;
      if ( !v35.fields._current )
        sub_1C7BD40(v18, v19);
      if ( HIDWORD(v35.fields._current[1].klass) == 17 )
      {
        v20 = *(float *)&v35.fields._current[3].monitor;
        if ( !byte_4CE84E7 )
        {
          sub_1C7BAE8(&System_Math_TypeInfo);
          byte_4CE84E7 = 1;
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
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( itemList )
    {
      itemList = DataManager__GetMasterData_object_(
                   (DataManager_o *)itemList,
                   (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
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
        itemList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v38, 0);
        if ( v24 )
        {
          itemList = DataMasterBase_object__object__int___GetEntity(
                       v24,
                       (int32_t)itemList,
                       (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( itemList )
          {
            v27 = *((_DWORD *)itemList + 33);
            itemList = this->fields.baseUsrSvtData;
            this->fields.expType = v27;
            if ( itemList )
            {
              v29 = *((_DWORD *)itemList + 65);
              increLv[0] = *((_DWORD *)itemList + 64);
              v28 = increLv[0];
              LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)itemList, 0);
              if ( v28 == LevelMax )
              {
                v32 = 0;
              }
              else
              {
                v33 = v7 + v6 + v29;
                while ( !SvtEqCombineListViewManager__CheckIncrementLv(this, increLv, &increLv[1], v33, v30) )
                  ;
                v32 = increLv[1];
              }
              *isMaxLvSelected = v32 >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_53:
    sub_1C7BD40(itemList, isMaxLvSelected);
  }
}


bool SvtEqCombineListViewManager__CheckIncrementLv(
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

  if ( (byte_4CE8634 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE8634 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)baseUsrSvtData, 0);
  if ( *checkLv >= LevelMax )
  {
    *increLv = LevelMax;
    return 1;
  }
  baseUsrSvtData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_object_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0)) == 0 )
  {
LABEL_16:
    sub_1C7BD40(baseUsrSvtData, checkLv);
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


bool SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(
        SvtEqCombineListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *selectMaterialUsrSvtIdList; // x0

  if ( (byte_4CE864F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Contains__);
    byte_4CE864F = 1;
  }
  selectMaterialUsrSvtIdList = this->fields.selectMaterialUsrSvtIdList;
  if ( selectMaterialUsrSvtIdList )
    LOBYTE(selectMaterialUsrSvtIdList) = System_Collections_Generic_List_long___Contains(
                                           selectMaterialUsrSvtIdList,
                                           userSvtId,
                                           (const MethodInfo_38271A8 *)Method_System_Collections_Generic_List_long__Contains__);
  return (char)selectMaterialUsrSvtIdList;
}


bool SvtEqCombineListViewManager__CheckIsSelectMaterial(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isSelectMaterial;
}


bool SvtEqCombineListViewManager__CheckMaterialEquipped(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w22
  int32_t v5; // w20
  System_Collections_Generic_List_object__o *v6; // x21
  __int64 naturalAligment; // x9
  SvtEqCombineListViewManager_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4CE8642 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    byte_4CE8642 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1C7BD40(itemList, method);
  size = itemList->fields._size;
  if ( size < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v5,
                                                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_16;
    v6 = itemList;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SvtEqCombineListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0)
      && (BYTE4(v6[5].monitor) || BYTE4(v6[6].monitor) || BYTE5(v6[6].monitor) || BYTE6(v6[6].monitor)) )
    {
      return 1;
    }
    if ( size == ++v5 )
      return 0;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  v9 = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(itemList);
  return (unsigned __int8)SvtEqCombineListViewManager__GetSelectedMaterialList(v9, v10);
}


void SvtEqCombineListViewManager__ClearSelectedSvtList(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x8
  int32_t size; // w2
  int v5; // w9
  struct System_Collections_Generic_List_long__o *selectMaterialUsrSvtIdList; // x8
  int v7; // w9

  if ( (byte_4CE8647 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    byte_4CE8647 = 1;
  }
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
  {
    size = selectedMtSvtList_k__BackingField->fields._size;
    v5 = selectedMtSvtList_k__BackingField->fields._version + 1;
    selectedMtSvtList_k__BackingField->fields._size = 0;
    selectedMtSvtList_k__BackingField->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)selectedMtSvtList_k__BackingField->fields._items, 0, size, 0);
  }
  selectMaterialUsrSvtIdList = this->fields.selectMaterialUsrSvtIdList;
  if ( selectMaterialUsrSvtIdList )
  {
    v7 = selectMaterialUsrSvtIdList->fields._version + 1;
    selectMaterialUsrSvtIdList->fields._size = 0;
    selectMaterialUsrSvtIdList->fields._version = v7;
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__CloseServantCheckEquipDialog(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantCheckEquipDialog_o *servantEquipCheckDialog; // x0
  const MethodInfo *v6; // x1

  servantEquipCheckDialog = this->fields.servantEquipCheckDialog;
  if ( !servantEquipCheckDialog )
    goto LABEL_6;
  ServantCheckEquipDialog__Close(servantEquipCheckDialog, 0);
  if ( isDecide )
  {
    SvtEqCombineListViewManager__SetSelectedMaterialInfo(this, v6);
    servantEquipCheckDialog = (ServantCheckEquipDialog_o *)this->fields.combineRootComponent;
    if ( servantEquipCheckDialog )
    {
      CombineRootComponent__SetSelectSvtEqMaterialList((CombineRootComponent_o *)servantEquipCheckDialog, 0);
      return;
    }
LABEL_6:
    sub_1C7BD40(servantEquipCheckDialog, isDecide);
  }
}


void SvtEqCombineListViewManager__CreateList(
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
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v15; // x1
  struct ListViewSort_o **p_sort; // x22
  UnityEngine_GameObject_o *gameObject; // x25
  System_Collections_ICollection_o **p_alignedBonusFilterInfos; // x25
  System_Int32_array *servantEquipFilterEventCampaignIds; // x2
  System_Int32_array *servantEquipFilterEventIds; // x3
  System_Int32_array *v21; // x4
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  struct ListViewSort_o *v23; // x26
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x4
  UILabel_o *spendQpInfoLabel; // x23
  UILabel_o *getExpInfoLabel; // x23
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x4
  const MethodInfo *v31; // x2

  if ( (byte_4CE862B & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6953/*"GET_EXP_INFO"*/);
    sub_1C7BAE8(&StringLiteral_9264/*"NEED_QP_INFO"*/);
    byte_4CE862B = 1;
  }
  this->fields.currentType = type;
  v11 = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v11);
  sortStatusList = SvtEqCombineListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_37;
  if ( LODWORD(sortStatusList->max_length) <= type )
    sub_1C7BD48(sort);
  v15 = sortStatusList->m_Items[type];
  this->fields.sort = v15;
  p_sort = &this->fields.sort;
  sub_1C7BA8C(&this->fields.sort, v15);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_37;
  sort->fields.listViewKind = 1;
  ListViewSort__Load(sort, 0);
  sort = (ListViewSort_o *)this->fields.bgTxtSprite;
  this->fields.dragEndIndex = -1;
  *(_QWORD *)&this->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
  this->fields.isDragSelect = 1;
  if ( !sort )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
  sort = (ListViewSort_o *)BgTxtManager__IsActiveBgTxt(0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)sort & 1, 0);
  p_alignedBonusFilterInfos = (System_Collections_ICollection_o **)&this->fields.alignedBonusFilterInfos;
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C7BA8C(&this->fields.alignedBonusFilterInfos, 0);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_37;
  sort->fields.isBonusKind = 0;
  if ( !setupInfo )
  {
    servantEquipFilterEventCampaignIds = 0;
    servantEquipFilterEventIds = 0;
    if ( finishSetupInfo )
      goto LABEL_13;
LABEL_15:
    v21 = 0;
    goto LABEL_16;
  }
  servantEquipFilterEventCampaignIds = setupInfo->fields.servantEquipFilterEventCampaignIds;
  servantEquipFilterEventIds = setupInfo->fields.servantEquipFilterEventIds;
  if ( !finishSetupInfo )
    goto LABEL_15;
LABEL_13:
  v21 = finishSetupInfo->fields.servantEquipFilterEventIds;
LABEL_16:
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         sort,
                         0,
                         servantEquipFilterEventCampaignIds,
                         servantEquipFilterEventIds,
                         v21,
                         0,
                         0,
                         0);
  *p_alignedBonusFilterInfos = (System_Collections_ICollection_o *)AlignedBonusFilter;
  sub_1C7BA8C(&this->fields.alignedBonusFilterInfos, AlignedBonusFilter);
  v23 = *p_sort;
  sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(*p_alignedBonusFilterInfos, 0);
  if ( !v23 )
    goto LABEL_37;
  v23->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
  sort = (ListViewSort_o *)this->fields.scaleChangeButton;
  if ( !sort )
    goto LABEL_37;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
  if ( !sort )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
  if ( !type )
  {
    SvtEqCombineListViewManager__SetDispActive(this, 0, v24);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v29);
    SvtEqCombineListViewManager__SetServantList(this, 0, setupInfo, finishSetupInfo, v30);
    sort = (ListViewSort_o *)this->fields.selectInfoLabel;
    if ( sort )
    {
      sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
      if ( sort )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 0, 0);
        goto LABEL_32;
      }
    }
    goto LABEL_37;
  }
  if ( type == 1 )
  {
    SvtEqCombineListViewManager__SetDispActive(this, 1, v24);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v25);
    this->fields.selectMax = 20;
    SvtEqCombineListViewManager__SetServantList(this, 1, setupInfo, finishSetupInfo, v26);
    sort = (ListViewSort_o *)this->fields.selectInfoLabel;
    if ( sort )
    {
      sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
      if ( sort )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
        sort = (ListViewSort_o *)this->fields.getExpInfo;
        if ( sort )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
          spendQpInfoLabel = this->fields.spendQpInfoLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9264/*"NEED_QP_INFO"*/, 0);
          if ( spendQpInfoLabel )
          {
            UILabel__set_text(spendQpInfoLabel, (System_String_o *)sort, 0);
            getExpInfoLabel = this->fields.getExpInfoLabel;
            sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6953/*"GET_EXP_INFO"*/, 0);
            if ( getExpInfoLabel )
            {
              UILabel__set_text(getExpInfoLabel, (System_String_o *)sort, 0);
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_37:
    sub_1C7BD40(sort, v13);
  }
LABEL_32:
  sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_37;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
  if ( !*p_sort || !sort )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0);
  SvtEqCombineListViewManager__SetStatusKind(this, modeKind, v31);
  if ( !type )
    EventTutorialMaster__CheckTutorial(-1, 57, 0, 0, 0, 0, 0, 0);
}


void SvtEqCombineListViewManager__CreateSorteData(const MethodInfo *method)
{
  SvtEqCombineListViewManager_c *v1; // x0
  __int64 v2; // x0
  SvtEqCombineListViewManager_c *v3; // x8
  __int64 v4; // x19
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v6; // x24
  __int64 i; // x22
  SvtEqCombineListViewManager_c *v8; // x0
  struct SvtEqCombineListViewManager_StaticFields *v9; // x8
  unsigned int *sortStatusList; // x26
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v12; // x0
  System_String_o *v13; // x20
  ListViewSort_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x0
  int v18; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CE8626 & 1) == 0 )
  {
    sub_1C7BAE8(&ListViewSort___TypeInfo);
    sub_1C7BAE8(&ListViewSort_TypeInfo);
    sub_1C7BAE8(&SvtEqCombineListViewManager_TypeInfo);
    byte_4CE8626 = 1;
  }
  v1 = SvtEqCombineListViewManager_TypeInfo;
  v18 = 0;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v1 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( !v1->static_fields->isInitSystem )
  {
    v2 = sub_1C7BB90(ListViewSort___TypeInfo, 2);
    v3 = SvtEqCombineListViewManager_TypeInfo;
    v4 = v2;
    if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v3 = SvtEqCombineListViewManager_TypeInfo;
    }
    static_fields = v3->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v4;
    sub_1C7BA8C(&static_fields->sortStatusList, v4);
    v6 = 0;
    for ( i = 8; ; i += 2 )
    {
      v8 = SvtEqCombineListViewManager_TypeInfo;
      if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
        v8 = SvtEqCombineListViewManager_TypeInfo;
      }
      v9 = v8->static_fields;
      if ( i == 12 )
        break;
      sortStatusList = (unsigned int *)v9->sortStatusList;
      SORT_SAVE_KEY = v9->SORT_SAVE_KEY;
      v18 = v6 + 1;
      v12 = System_Int32__ToString((int32_t)&v18, 0);
      v13 = System_String__Concat_64176912(SORT_SAVE_KEY, v12, 0);
      v14 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
      ListViewSort___ctor_44358856(v14, v13, 3, 0, 0);
      if ( !sortStatusList )
        sub_1C7BD40(v15, v16);
      if ( v14 )
      {
        v15 = sub_1C7BC24(v14, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v15 )
        {
          v17 = sub_1C7BD64();
          sub_1C7BC10(v17, 0);
        }
      }
      if ( v6 >= sortStatusList[6] )
        sub_1C7BD48(v15);
      *(_QWORD *)&sortStatusList[i] = v14;
      sub_1C7BA8C(&sortStatusList[i], v14);
      ++v6;
    }
    v9->isInitSystem = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__DecideDragSelect(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 naturalAligment; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  int32_t selectSum; // w8
  int items; // w21
  _BOOL8 v12; // x0
  __int64 v13; // x1
  int v14; // w9
  void *v15; // x0
  void *v16; // x21
  int v17; // w1
  __int64 v18; // x20
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CE8665 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    byte_4CE8665 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_22;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_22;
  v6 = itemSortList;
  naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    if ( SHIDWORD(itemSortList[6].fields._items) < 1 )
      goto LABEL_20;
    isDragSelect = this->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)itemSortList, 0);
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
    ListViewItem__set_IsSelect((ListViewItem_o *)v6, 0, 0);
    BYTE2(v6[4].fields._items) = 0;
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    --this->fields.selectSum;
    if ( itemSortList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v19,
        itemSortList,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v19,
                (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v12 )
          break;
        if ( !v19.fields._current )
          sub_1C7BD40(v12, v13);
        v14 = *(_DWORD *)((char *)&v19.fields._current->klass + (unsigned __int64)&word_10);
        if ( v14 > items )
          *(_DWORD *)((char *)&v19.fields._current->klass + (unsigned __int64)&word_10) = v14 - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v19,
        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_20;
    }
LABEL_22:
    sub_1C7BD40(itemSortList, *(_QWORD *)&index);
  }
  v15 = (void *)sub_1C7C0DC(itemSortList);
  v16 = v15;
  if ( v17 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1D5FCC4(v16);
  }
  v18 = *(_QWORD *)__cxa_begin_catch(v15);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v18 )
    sub_1C7BD38(v18);
LABEL_20:
  HIDWORD(v6[6].fields._items) = -1;
}


void SvtEqCombineListViewManager__DeleteContinueData(const MethodInfo *method)
{
  SvtEqCombineListViewManager_c *v1; // x0
  __int64 v2; // x1
  __int64 v3; // x20
  SvtEqCombineListViewManager_c *v4; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4CE8627 & 1) == 0 )
  {
    sub_1C7BAE8(&SvtEqCombineListViewManager_TypeInfo);
    byte_4CE8627 = 1;
  }
  v1 = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v1);
  v3 = 0;
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
    if ( (unsigned int)v3 >= LODWORD(sortStatusList->max_length) )
      sub_1C7BD48(v4);
    v4 = (SvtEqCombineListViewManager_c *)sortStatusList->m_Items[v3];
    if ( !v4 )
LABEL_13:
      sub_1C7BD40(v4, v2);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v4, 0);
    ++v3;
  }
  while ( (_DWORD)v3 != 2 );
}


void SvtEqCombineListViewManager__DestroyList(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C7BD40(0, v3);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C7BA8C(&this->fields.alignedBonusFilterInfos, 0);
}


void SvtEqCombineListViewManager__EndClickTabChoice(
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
  SvtEqCombineListViewManager__SetMode_31933764(this, 2, v6);
}


void SvtEqCombineListViewManager__EndClickTabLock(
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
  SvtEqCombineListViewManager__SetMode_31933764(this, 2, v6);
}


void SvtEqCombineListViewManager__EndClickTabStatus(
        SvtEqCombineListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  SvtEqCombineListViewManager__SetStatusKind(this, 0, method);
  SvtEqCombineListViewManager__ModifyList(this, 0, v4);
  SvtEqCombineListViewManager__SetMode_31933764(this, 2, v5);
}


void SvtEqCombineListViewManager__EndCloseSelectFilterKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void SvtEqCombineListViewManager__EndSelectFilterKind(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CE8651 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__);
    byte_4CE8651 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    SvtEqCombineListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C7BD40(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void SvtEqCombineListViewManager__EndSelectSortKind(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CE8656 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CE8656 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


void SvtEqCombineListViewManager__EndStatusSync(
        SvtEqCombineListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct SvtEqCombineListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  struct SvtEqCombineListViewManager_RequestCallbackFunc_o **p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = &this->fields.requestCallback;
    *p_requestCallback = 0;
    sub_1C7BA8C(p_requestCallback, 0);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))requestCallback->fields.invoke_impl)(
      requestCallback->fields.method_code,
      1,
      requestCallback->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t SvtEqCombineListViewManager__GetAmountSortValue(
        SvtEqCombineListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 naturalAligment; // x9
  SvtEqCombineListViewItem_o *v11; // x0
  ListViewSort_o *v12; // x1
  const MethodInfo *v13; // x2

  v3 = svtId;
  if ( (byte_4CE8659 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    byte_4CE8659 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1C7BD40(itemList, *(_QWORD *)&svtId);
  size = itemList->fields._size;
  if ( size < 1 )
  {
    return 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_13;
      *(_QWORD *)&svtId = SvtEqCombineListViewItem_TypeInfo;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( LODWORD(itemList[4].klass) == v3 )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_13;
    }
    v11 = (SvtEqCombineListViewItem_o *)sub_1C7C0DC(itemList);
    return SvtEqCombineListViewItem__IsMatchFilter(v11, v12, v13);
  }
}


int32_t SvtEqCombineListViewManager__GetBaseCollectionLv(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4CE8636 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE8636 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v14, 0);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v16, 0);
  if ( !v7 )
LABEL_14:
    sub_1C7BD40(Instance, v4);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v7, v9, Instance, 0);
  if ( EntityDefinitely )
    LODWORD(EntityDefinitely) = EntityDefinitely->fields.maxLv;
  return (int)EntityDefinitely;
}


int32_t SvtEqCombineListViewManager__GetCombineInfoMsgLbFontSize(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (unsigned int)(this->fields.modeKind - 1) < 2 )
    return 14;
  if ( this->fields.currentType )
    return 12;
  return 20;
}


bool SvtEqCombineListViewManager__GetDragSelect(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isDragSelect;
}


bool SvtEqCombineListViewManager__GetFocusItemIndex(
        SvtEqCombineListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  __int64 naturalAligment; // x10

  if ( (byte_4CE8667 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SvtEqCombineListViewManager_o *)sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    byte_4CE8667 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_15:
      sub_1C7BD40(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)list,
                                                v8,
                                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_15;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        goto LABEL_15;
      }
      if ( BYTE1(this->fields.SortObject) || BYTE3(this->fields.SortObject) )
        break;
      if ( sum == ++v8 )
        return 1;
    }
    *index = v8;
  }
  return 1;
}


int32_t SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
        SvtEqCombineListViewManager_o *this,
        UserServantEntity_array *list,
        const MethodInfo *method)
{
  int max_length; // w8
  int v5; // w21
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
        sub_1C7BD48(this);
      this = (SvtEqCombineListViewManager_o *)list->m_Items[v5];
      if ( !this )
        break;
      this = (SvtEqCombineListViewManager_o *)UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)this, 0);
      max_length = list->max_length;
      ++v5;
      v6 += (unsigned __int8)this & 1;
      if ( v5 >= max_length )
        return v6;
    }
LABEL_10:
    sub_1C7BD40(this, list);
  }
  return 0;
}


SvtEqCombineListViewItem_o *SvtEqCombineListViewManager__GetItem(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SvtEqCombineListViewItem_o *result; // x0
  __int64 naturalAligment; // x9
  SvtEqCombineListViewManager_o *v7; // x0
  int64_t v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4CE8637 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    byte_4CE8637 = 1;
  }
  result = (SvtEqCombineListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SvtEqCombineListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        v7 = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(result);
        SvtEqCombineListViewManager__ModifyItem(v7, v8, v9);
      }
    }
  }
  return result;
}


UserServantEntity_o *SvtEqCombineListViewManager__GetSelectBaseSvtData(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserServantEntity_o **p_baseUsrSvtData; // x19
  UserServantEntity_o *v6; // x8
  __int128 v7; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  if ( (byte_4CE8635 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE8635 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v6 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_12;
  v7 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v11, 0);
  if ( !v8 )
LABEL_12:
    sub_1C7BD40(Instance, v4);
  Entity = DataMasterBase_object__object__long___GetEntity(
             v8,
             (int64_t)Instance,
             (const MethodInfo_3430858 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  *p_baseUsrSvtData = (UserServantEntity_o *)Entity;
  sub_1C7BA8C(p_baseUsrSvtData, Entity);
  return *p_baseUsrSvtData;
}


SetCombineData_o *SvtEqCombineListViewManager__GetSelectCombineData(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.combineData;
}


UserServantEntity_o *SvtEqCombineListViewManager__GetSelectUsrSvtEntity(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectUsrSvtEntity;
}


System_Collections_Generic_List_SvtEqCombineListViewItem__o *SvtEqCombineListViewManager__GetSelectedMaterialList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  __int64 itemList; // x0
  int v6; // w23
  int32_t v7; // w21
  Il2CppObject *v8; // x22
  __int64 naturalAligment; // x9
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0
  System_Comparison_T__o *v14; // x21
  Il2CppObject *v15; // x22
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x0
  int v17; // w23
  int32_t v18; // w21
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *result; // x0
  SvtEqCombineListViewManager_o *v20; // x0
  const MethodInfo *v21; // x1

  if ( (byte_4CE8643 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Comparison_SvtEqCombineListViewItem__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__141_0__);
    sub_1C7BAE8(&SvtEqCombineListViewManager___c_TypeInfo);
    byte_4CE8643 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  itemList = (__int64)this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  v6 = *(_DWORD *)(itemList + 24);
  if ( v6 < 1 )
  {
LABEL_18:
    itemList = (__int64)SvtEqCombineListViewManager___c_TypeInfo;
    if ( !SvtEqCombineListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager___c_TypeInfo);
      itemList = (__int64)SvtEqCombineListViewManager___c_TypeInfo;
    }
    v14 = *(System_Comparison_T__o **)(*(_QWORD *)(itemList + 184) + 16LL);
    if ( !v14 )
    {
      if ( !*(_DWORD *)(itemList + 224) )
      {
        j_il2cpp_runtime_class_init_0(itemList);
        itemList = (__int64)SvtEqCombineListViewManager___c_TypeInfo;
      }
      v15 = **(Il2CppObject ***)(itemList + 184);
      v14 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_SvtEqCombineListViewItem__TypeInfo);
      System_Comparison_object____ctor(
        v14,
        v15,
        Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__141_0__,
        0);
      static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__141_0 = (struct System_Comparison_SvtEqCombineListViewItem__o *)v14;
      itemList = sub_1C7BA8C(&static_fields->__9__141_0, v14);
    }
    if ( v3 )
    {
      System_Collections_Generic_List_object___Sort_58984640(
        v3,
        v14,
        (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__);
      if ( v3->fields._size < 1 )
        return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
      v17 = 0;
      v18 = 0;
      while ( 1 )
      {
        itemList = (__int64)System_Collections_Generic_List_object___get_Item(
                              v3,
                              v18,
                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
        if ( !itemList )
          break;
        if ( *(_DWORD *)(itemList + 164) > v17 )
        {
          itemList = (__int64)System_Collections_Generic_List_object___get_Item(
                                v3,
                                v18,
                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
          if ( !itemList )
            break;
          v17 = *(_DWORD *)(itemList + 164);
          itemList = (__int64)System_Collections_Generic_List_object___get_Item(
                                v3,
                                v18,
                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
          if ( !itemList )
            break;
          this->fields.lastSelectIndex = *(_DWORD *)(itemList + 24);
        }
        if ( ++v18 >= v3->fields._size )
          return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
      }
    }
LABEL_34:
    sub_1C7BD40(itemList, v4);
  }
  v7 = 0;
  while ( 1 )
  {
    itemList = (__int64)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)itemList,
                          v7,
                          (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_34;
    v8 = (Il2CppObject *)itemList;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    itemList = ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0);
    if ( (itemList & 1) != 0 )
    {
      if ( !v3 )
        goto LABEL_34;
      items = v3->fields._items;
      v11 = Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_34;
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v8,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        v13 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v13[4] = (Il2CppClass *)v8;
        sub_1C7BA8C(v13 + 4, v8);
      }
    }
    if ( v6 == ++v7 )
      goto LABEL_18;
    itemList = (__int64)this->fields.itemList;
    if ( !itemList )
      goto LABEL_34;
  }
  v20 = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(itemList);
  SvtEqCombineListViewManager__SetSelectedMaterialInfo(v20, v21);
  return result;
}


bool SvtEqCombineListViewManager__GetSwapChoiceList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  SvtEqCombineListViewItem_c *v9; // x1
  int64_t itemList; // x0
  int v11; // w25
  int32_t v12; // w24
  __int64 naturalAligment; // x9
  __int64 v14; // x8
  __int128 v15; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8
  __int128 v20; // q0
  struct System_Int64_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8
  System_Collections_Generic_List_long__o *v25; // x0
  int v26; // w21
  System_Int64_array *v27; // x0
  System_Int64_array *v28; // x1
  System_Int64_array **v29; // x0
  bool result; // w0
  SvtEqCombineListViewManager_o *v31; // x0
  const MethodInfo *v32; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-80h]

  if ( (byte_4CE865C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    byte_4CE865C = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v11 = *(_DWORD *)(itemList + 24);
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v12,
                            (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      v9 = SvtEqCombineListViewItem_TypeInfo;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != SvtEqCombineListViewItem_TypeInfo )
      {
        v31 = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(itemList);
        SvtEqCombineListViewManager__OnClickNormalStatus(v31, v32);
        return result;
      }
      v14 = *(_QWORD *)(itemList + 128);
      if ( v14 && *(_BYTE *)(itemList + 256) )
      {
        if ( *(_BYTE *)(itemList + 173) )
        {
          v15 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v35.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v34 = v35;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v34, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v17 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = (SvtEqCombineListViewItem_c *)itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v24 = v17[4];
            v25 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v25,
              (int64_t)v9,
              *(const MethodInfo_3826E30 **)(*(_QWORD *)(v24 + 192) + 112LL));
            goto LABEL_28;
          }
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v20 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v35.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v33 = v35;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v33, 0);
          if ( !v7 )
            goto LABEL_37;
          v21 = v7->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v21 )
            goto LABEL_37;
          v23 = v7->fields._size;
          v9 = (SvtEqCombineListViewItem_c *)itemList;
          if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
          {
            v24 = v22[4];
            v25 = v7;
            goto LABEL_27;
          }
          v19 = &v21->obj.klass + v23;
          v7->fields._size = v23 + 1;
        }
        v19[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v11 == ++v12 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C7BD40(itemList, v9);
  v26 = v8->fields._size + v7->fields._size;
  if ( v26 < 1 )
  {
    *choiceList = 0;
    sub_1C7BA8C(choiceList, 0);
    v29 = unchoiceList;
    v28 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_38288E8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v27;
    sub_1C7BA8C(choiceList, v27);
    v28 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_38288E8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v28;
    v29 = unchoiceList;
  }
  sub_1C7BA8C(v29, v28);
  return v26 > 0;
}


bool SvtEqCombineListViewManager__GetSwapLockList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  SvtEqCombineListViewItem_c *v9; // x1
  int64_t itemList; // x0
  int v11; // w25
  int32_t v12; // w24
  __int64 naturalAligment; // x9
  __int64 v14; // x8
  __int128 v15; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8
  __int128 v20; // q0
  struct System_Int64_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8
  System_Collections_Generic_List_long__o *v25; // x0
  int v26; // w21
  System_Int64_array *v27; // x0
  System_Int64_array *v28; // x1
  System_Int64_array **v29; // x0
  SvtEqCombineListViewManager_o *v31; // x0
  System_Int64_array **v32; // x1
  System_Int64_array **v33; // x2
  const MethodInfo *v34; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+40h] [xbp-80h]

  if ( (byte_4CE865B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    byte_4CE865B = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v11 = *(_DWORD *)(itemList + 24);
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v12,
                            (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      v9 = SvtEqCombineListViewItem_TypeInfo;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != SvtEqCombineListViewItem_TypeInfo )
      {
        v31 = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(itemList);
        return SvtEqCombineListViewManager__GetSwapChoiceList(v31, v32, v33, v34);
      }
      v14 = *(_QWORD *)(itemList + 128);
      if ( v14 && *(_BYTE *)(itemList + 255) )
      {
        if ( *(_BYTE *)(itemList + 168) )
        {
          v15 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v37.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v36 = v37;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v36, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v17 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = (SvtEqCombineListViewItem_c *)itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v24 = v17[4];
            v25 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v25,
              (int64_t)v9,
              *(const MethodInfo_3826E30 **)(*(_QWORD *)(v24 + 192) + 112LL));
            goto LABEL_28;
          }
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v20 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v37.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v35 = v37;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v35, 0);
          if ( !v7 )
            goto LABEL_37;
          v21 = v7->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v21 )
            goto LABEL_37;
          v23 = v7->fields._size;
          v9 = (SvtEqCombineListViewItem_c *)itemList;
          if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
          {
            v24 = v22[4];
            v25 = v7;
            goto LABEL_27;
          }
          v19 = &v21->obj.klass + v23;
          v7->fields._size = v23 + 1;
        }
        v19[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v11 == ++v12 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C7BD40(itemList, v9);
  v26 = v8->fields._size + v7->fields._size;
  if ( v26 < 1 )
  {
    *lockList = 0;
    sub_1C7BA8C(lockList, 0);
    v29 = unlockList;
    v28 = 0;
    *unlockList = 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_38288E8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v27;
    sub_1C7BA8C(lockList, v27);
    v28 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_38288E8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v28;
    v29 = unlockList;
  }
  sub_1C7BA8C(v29, v28);
  return v26 > 0;
}


void SvtEqCombineListViewManager__InitBackListView(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  SvtEqCombineListViewManager__StatusRequest(this, 0, v2);
  SvtEqCombineListViewManager__SetStatusKind(this, 0, v4);
}


void SvtEqCombineListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  SvtEqCombineListViewManager_c *v2; // x0
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4CE8628 & 1) == 0 )
  {
    sub_1C7BAE8(&SvtEqCombineListViewManager_TypeInfo);
    byte_4CE8628 = 1;
  }
  v2 = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v2 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( v2->static_fields->isInitSystem )
  {
    for ( i = 0; ; ++i )
    {
      if ( !v2->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v2);
        v2 = SvtEqCombineListViewManager_TypeInfo;
      }
      sortStatusList = v2->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_15;
      if ( (unsigned int)i >= LODWORD(sortStatusList->max_length) )
        sub_1C7BD48(v2);
      v2 = (SvtEqCombineListViewManager_c *)sortStatusList->m_Items[i];
      if ( !v2 )
LABEL_15:
        sub_1C7BD40(v2, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v2, 0);
      if ( (_DWORD)i == 1 )
        break;
      v2 = SvtEqCombineListViewManager_TypeInfo;
    }
  }
}


bool SvtEqCombineListViewManager__IsDragEnable(
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
        && (ListViewItem__get_IsSelect((ListViewItem_o *)item, 0)
         || this->fields.modeKind
         || this->fields.selectSum < this->fields.selectMax);
  return result;
}


bool SvtEqCombineListViewManager__IsDragStart(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.dragStartIndex >= 0;
}


// local variable allocation has failed, the output may be wrong!
bool SvtEqCombineListViewManager__IsSelectEnable(
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


void SvtEqCombineListViewManager__ModifyItem(
        SvtEqCombineListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  SvtEqCombineListViewItem_o *current; // x21
  SvtEqCombineListViewItem_c *v12; // x1
  __int64 naturalAligment; // x9
  Il2CppClass *klass; // x8
  Il2CppObject *v15; // x22
  Il2CppType byval_arg; // q0
  int64_t v17; // x0
  Il2CppObject v18; // q0
  int64_t UserSvtId; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  UnityEngine_Object_o *viewObject; // x22
  __int64 v23; // x1
  struct ListViewObject_o *v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4CE8638 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    byte_4CE8638 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( usrSvtId < 1 )
  {
    Entity = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
LABEL_36:
      sub_1C7BD40(Instance, v5);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_3430858 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_36;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v28.fields._list = *(_OWORD *)&v27.fields.currentCryptoKey;
  v28.fields._current = (Il2CppObject *)v27.fields.fakeValue;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v28,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v9 & 1) == 0 )
      break;
    current = (SvtEqCombineListViewItem_o *)v28.fields._current;
    if ( !v28.fields._current )
      goto LABEL_30;
    v12 = SvtEqCombineListViewItem_TypeInfo;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( v28.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SvtEqCombineListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      v9 = sub_1C7C0DC(v28.fields._current);
LABEL_30:
      if ( !Entity )
        sub_1C7BD40(v9, v10);
      sub_1C7BD40(v9, v10);
    }
    if ( Entity )
    {
      v15 = v28.fields._current + 8;
      klass = v28.fields._current[8].klass;
      if ( !klass )
        sub_1C7BD40(v9, SvtEqCombineListViewItem_TypeInfo);
      byval_arg = klass->_1.byval_arg;
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
      *(Il2CppType *)&v27.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v26 = v27;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v26, 0);
      v18 = Entity[2];
      *(Il2CppObject *)&v25.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v25.fields.fakeValue = v18;
      if ( v17 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v25, 0) )
      {
        v15->klass = (Il2CppClass *)Entity;
        sub_1C7BA8C(&current->fields.userSvtEntity, Entity);
      }
    }
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(current, (const MethodInfo *)v12);
    if ( !SelfUserGame )
      sub_1C7BD40(UserSvtId, v20);
    current->fields.isFavorite = UserSvtId == SelfUserGame->fields.favoriteUserSvtId;
    SvtEqCombineListViewItem__ModifyLockItem(current, v20);
    SvtEqCombineListViewItem__ModifyChoiceItem(current, v21);
    viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
    {
      v24 = current->fields.viewObject;
      if ( !v24 )
        sub_1C7BD40(0, v23);
      ((void (__fastcall *)(struct ListViewObject_o *, SvtEqCombineListViewItem_o *, const MethodInfo *))v24->klass->vtable._5_SetItem.methodPtr)(
        v24,
        current,
        v24->klass->vtable._5_SetItem.method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__ModifyList(
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
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_object__o *v20; // x22
  System_Collections_Generic_List_object__o *v21; // x23
  int32_t v22; // w21
  __int128 v23; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v25; // q0
  int32_t v26; // w24
  SvtEqCombineListViewManager_o *v27; // x25
  unsigned int v28; // w20
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  __int128 v30; // q1
  __int64 v31; // x28
  __int128 v32; // q0
  SvtEqCombineListViewManager_o *v33; // x26
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v39; // x25
  int v40; // w28
  unsigned int v41; // w26
  __int64 v42; // x8
  __int128 v43; // q0
  SvtEqCombineListViewManager_o *v44; // x23
  int32_t v45; // w24
  SvtEqCombineListViewItem_o *v46; // x22
  __int64 naturalAligment; // x9
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *v48; // x8
  __int128 v49; // q0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v51; // q0
  int64_t v52; // x0
  const MethodInfo *v53; // x5
  SvtEqCombineListViewManager_o *v54; // x0
  ListViewObject_o *v55; // x1
  ListViewItem_o *v56; // x2
  const MethodInfo *v57; // x3
  bool isIconSizeChangea; // [xsp+Ch] [xbp-1A4h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-1A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+10h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+30h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+130h] [xbp-80h]

  v3 = isIconSizeChange;
  v4 = this;
  if ( (byte_4CE863B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor___78759040);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (SvtEqCombineListViewManager_o *)sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    byte_4CE863B = 1;
  }
  currentType = v4->fields.currentType;
  isIconSizeChangea = v3;
  if ( currentType == 1 )
  {
    this = (SvtEqCombineListViewManager_o *)v4->fields.userServantMaster;
    if ( !this )
      goto LABEL_102;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0);
    v20 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58975984(
      v20,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_383E6F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78759040);
    v21 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v21,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v4->fields.baseUsrSvtData )
    {
      if ( !v20 )
        goto LABEL_102;
      if ( v20->fields._size >= 1 )
      {
        v22 = 0;
        do
        {
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    v20,
                                                    v22,
                                                    (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !this )
            goto LABEL_102;
          v23 = *(_OWORD *)&this->fields.dropObjectList;
          *(UnityEngine_MonoBehaviour_Fields *)&v69.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
          *(_OWORD *)&v69.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v66 = v69;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(
                                                    &v66,
                                                    0);
          baseUsrSvtData = v4->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_102;
          v25 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v65.fields.fakeValue = v25;
          if ( this == (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(
                                                          &v65,
                                                          0) )
            System_Collections_Generic_List_object___RemoveAt(
              v20,
              v22,
              (const MethodInfo_38405D0 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
          ++v22;
        }
        while ( v22 < v20->fields._size );
      }
      ServantEquipList = System_Collections_Generic_List_object___ToArray(
                           v20,
                           (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    }
    this = (SvtEqCombineListViewManager_o *)v4->fields._selectedMtSvtList_k__BackingField;
    if ( this && SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v26,
                                                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
        if ( !v20 )
          goto LABEL_102;
        if ( v20->fields._size >= 1 )
          break;
LABEL_67:
        this = (SvtEqCombineListViewManager_o *)v4->fields._selectedMtSvtList_k__BackingField;
        if ( !this )
          goto LABEL_102;
        if ( ++v26 >= SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          if ( !v21 )
            goto LABEL_102;
          System_Collections_Generic_List_object___AddRange(
            v21,
            (System_Collections_Generic_IEnumerable_T__o *)v20,
            (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___ToArray(
                                                    v21,
                                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
          ServantEquipList = this;
          goto LABEL_71;
        }
      }
      v27 = this;
      v28 = 0;
      while ( 1 )
      {
        if ( !ServantEquipList )
          goto LABEL_102;
        if ( v28 >= *((_DWORD *)ServantEquipList + 6) )
          break;
        if ( !v27 )
          goto LABEL_102;
        dropList = v27->fields.dropList;
        if ( !dropList )
          goto LABEL_102;
        v30 = *(_OWORD *)&dropList->fields._syncRoot;
        v31 = *((_QWORD *)ServantEquipList + (int)v28 + 4);
        *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&dropList->fields._items;
        *(_OWORD *)&v69.fields.fakeValue = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v64 = v69;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(
                                                  &v64,
                                                  0);
        if ( !v31 )
          goto LABEL_102;
        v32 = *(_OWORD *)(v31 + 32);
        v33 = this;
        *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)(v31 + 16);
        *(_OWORD *)&v63.fields.fakeValue = v32;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(
                                                  &v63,
                                                  0);
        if ( v33 == this )
        {
          if ( !v21 )
            goto LABEL_102;
          *(_QWORD *)&isIconSizeChange = v27->fields.dropList;
          items = v21->fields._items;
          v35 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v21->fields._version;
          if ( !items )
            goto LABEL_102;
          size = v21->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              (Il2CppObject *)isIconSizeChange,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v21->fields._size = size + 1;
            v37[4] = (Il2CppClass *)isIconSizeChange;
            sub_1C7BA8C(v37 + 4, isIconSizeChange);
          }
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___Remove(
                                                    v20,
                                                    (Il2CppObject *)v27->fields.dropList,
                                                    (const MethodInfo_3840324 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        if ( (signed int)++v28 >= v20->fields._size )
          goto LABEL_67;
      }
LABEL_100:
      sub_1C7BD48(this);
    }
LABEL_71:
    if ( !ServantEquipList )
      goto LABEL_102;
    if ( !*((_QWORD *)ServantEquipList + 3) )
    {
      this = (SvtEqCombineListViewManager_o *)v4->fields.emptyListNoticeLabel;
      if ( !this )
        goto LABEL_102;
      this = (SvtEqCombineListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    }
  }
  else
  {
    if ( currentType )
      goto LABEL_102;
    this = (SvtEqCombineListViewManager_o *)v4->fields.levelUpInfoImg;
    if ( !this )
      goto LABEL_102;
    this = (SvtEqCombineListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (SvtEqCombineListViewManager_o *)v4->fields.userServantMaster;
    if ( !this )
      goto LABEL_102;
    this = (SvtEqCombineListViewManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0);
    if ( !this )
      goto LABEL_102;
    ServantEquipList = this;
    if ( !this->fields.m_CancellationTokenSource )
    {
      this = (SvtEqCombineListViewManager_o *)v4->fields.emptyListNoticeLabel;
      if ( !this )
        goto LABEL_102;
      this = (SvtEqCombineListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    }
    v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58975984(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_383E6F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78759040);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v4->fields.baseUsrSvtData )
    {
      v9 = *((_DWORD *)ServantEquipList + 6);
      if ( v9 >= 1 )
      {
        v10 = 0;
        while ( (unsigned int)v10 < v9 )
        {
          v11 = *((_QWORD *)ServantEquipList + v10 + 4);
          if ( !v11 )
            goto LABEL_102;
          v12 = *(_OWORD *)(v11 + 32);
          *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
          *(_OWORD *)&v69.fields.fakeValue = v12;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v68 = v69;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(
                                                    &v68,
                                                    0);
          v13 = v4->fields.baseUsrSvtData;
          if ( !v13 )
            goto LABEL_102;
          v14 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
          v15 = this;
          *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v67.fields.fakeValue = v14;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(
                                                    &v67,
                                                    0);
          if ( v15 == this )
          {
            if ( !v8 )
              goto LABEL_102;
            v16 = v8->fields._items;
            v17 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v8->fields._version;
            if ( !v16 )
              goto LABEL_102;
            v18 = v8->fields._size;
            if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v11,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &v16->obj.klass + v18;
              v8->fields._size = v18 + 1;
              v19[4] = (Il2CppClass *)v11;
              this = (SvtEqCombineListViewManager_o *)sub_1C7BA8C(v19 + 4, v11);
            }
            if ( !v7 )
              goto LABEL_102;
            this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___Remove(
                                                      v7,
                                                      (Il2CppObject *)v11,
                                                      (const MethodInfo_3840324 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
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
        (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___ToArray(
                                                v8,
                                                (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      ServantEquipList = this;
      if ( !this )
        goto LABEL_102;
    }
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_102;
  v39 = *((_QWORD *)ServantEquipList + 3);
  if ( (int)v39 >= 1 )
  {
    v40 = itemList->fields._size;
    v41 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v42 = *((_QWORD *)ServantEquipList + (int)v41 + 4);
      if ( !v42 )
        goto LABEL_102;
      v43 = *(_OWORD *)(v42 + 32);
      *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)(v42 + 16);
      *(_OWORD *)&v69.fields.fakeValue = v43;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v62 = v69;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(
                                                &v62,
                                                0);
      if ( v40 >= 1 )
        break;
LABEL_98:
      if ( ++v41 == (_DWORD)v39 )
        return;
      if ( v41 >= *((_DWORD *)ServantEquipList + 6) )
        goto LABEL_100;
    }
    v44 = this;
    v45 = 0;
    while ( 1 )
    {
      this = (SvtEqCombineListViewManager_o *)v4->fields.itemList;
      if ( !this )
        goto LABEL_102;
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v45,
                                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_102;
      *(_QWORD *)&isIconSizeChange = SvtEqCombineListViewItem_TypeInfo;
      v46 = (SvtEqCombineListViewItem_o *)this;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      v48 = this->fields.dropList;
      if ( v48 )
      {
        v49 = *(_OWORD *)&v48->fields._syncRoot;
        *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&v48->fields._items;
        *(_OWORD *)&v69.fields.fakeValue = v49;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v61 = v69;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(
                                                  &v61,
                                                  0);
        if ( this == v44 )
        {
          userSvtEntity = v46->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v51 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v69.fields.fakeValue = v51;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v60 = v69;
            v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v60, 0);
            SvtEqCombineListViewManager__ModifyLockItem_31931068(v4, v46, v52, 1, isIconSizeChangeb, v53);
            goto LABEL_98;
          }
LABEL_102:
          sub_1C7BD40(this, isIconSizeChange);
        }
      }
      if ( v40 == ++v45 )
        goto LABEL_98;
    }
    v54 = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(this);
    SvtEqCombineListViewManager__SetObjectItem(v54, v55, v56, v57);
  }
}


void SvtEqCombineListViewManager__ModifyLockItem(
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
  __int64 v13; // x0
  SvtEqCombineListViewItem_c *v14; // x1
  SvtEqCombineListViewItem_o *current; // x22
  __int64 naturalAligment; // x9
  Il2CppClass *klass; // x8
  Il2CppObject *v18; // x23
  Il2CppType byval_arg; // q0
  int64_t v20; // x0
  Il2CppObject v21; // q0
  int64_t v22; // x24
  const MethodInfo *v23; // x1
  UnityEngine_Object_o *viewObject; // x23
  __int64 v25; // x1
  struct ListViewObject_o *v26; // x0
  __int64 v27; // x1
  ListViewObject_o *v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4CE8639 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    byte_4CE8639 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0);
  if ( usrSvtId < 1 )
  {
    Entity = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
LABEL_42:
      sub_1C7BD40(Instance, v9);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_3430858 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v32.fields._list = *(_OWORD *)&v31.fields.currentCryptoKey;
  v32.fields._current = (Il2CppObject *)v31.fields.fakeValue;
  v12 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v13 & 1) == 0 )
      break;
    current = (SvtEqCombineListViewItem_o *)v32.fields._current;
    if ( v32.fields._current )
    {
      v14 = SvtEqCombineListViewItem_TypeInfo;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( v32.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)v32.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        v13 = sub_1C7C0DC(v32.fields._current);
LABEL_36:
        sub_1C7BD40(v13, v14);
      }
      if ( Entity )
      {
        v18 = v32.fields._current + 8;
        klass = v32.fields._current[8].klass;
        if ( !klass )
          sub_1C7BD40(v13, SvtEqCombineListViewItem_TypeInfo);
        byval_arg = klass->_1.byval_arg;
        *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
        *(Il2CppType *)&v31.fields.fakeValue = byval_arg;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v30 = v31;
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v30, 0);
        v21 = Entity[2];
        v22 = v20;
        *(Il2CppObject *)&v29.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v29.fields.fakeValue = v21;
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v29, 0);
        if ( v22 == v13 )
        {
          v18->klass = (Il2CppClass *)Entity;
          v13 = sub_1C7BA8C(&current->fields.userSvtEntity, Entity);
        }
      }
    }
    else if ( Entity )
    {
      sub_1C7BD40(v13, v14);
    }
    if ( v12 )
    {
      if ( !current )
        goto LABEL_36;
      SvtEqCombineListViewItem__ModifyLockItem(current, (const MethodInfo *)v14);
      SvtEqCombineListViewItem__ModifyChoiceItem(current, v23);
    }
    else if ( !current )
    {
      sub_1C7BD40(v13, v14);
    }
    viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
    {
      v26 = current->fields.viewObject;
      if ( !v26 )
        sub_1C7BD40(0, v25);
      ((void (__fastcall *)(struct ListViewObject_o *, SvtEqCombineListViewItem_o *, const MethodInfo *))v26->klass->vtable._5_SetItem.methodPtr)(
        v26,
        current,
        v26->klass->vtable._5_SetItem.method);
      if ( isIconSizeChange )
      {
        v28 = current->fields.viewObject;
        if ( !v28 )
          sub_1C7BD40(0, v27);
        ListViewObject__SetItemSeed(v28, (ListViewItem_o *)current, this->fields.seed, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void SvtEqCombineListViewManager__ModifyLockItem_31931068(
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
  const MethodInfo *v17; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4CE863A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (SvtEqCombineListViewManager_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE863A = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (SvtEqCombineListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (SvtEqCombineListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (SvtEqCombineListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              usrSvtId,
                                              (const MethodInfo_3430858 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_26;
      userSvtEntity = servantItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v13 = this;
      *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v21.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v20 = v21;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v20, 0);
      v15 = *(_OWORD *)&v13->fields.dropObjectList;
      v16 = (SvtEqCombineListViewManager_o *)v14;
      *(UnityEngine_MonoBehaviour_Fields *)&v19.fields.currentCryptoKey = v13->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v19.fields.fakeValue = v15;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(
                                                &v19,
                                                0);
      if ( v16 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v13;
        this = (SvtEqCombineListViewManager_o *)sub_1C7BA8C(&servantItem->fields.userSvtEntity, v13);
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
    SvtEqCombineListViewItem__ModifyChoiceItem(servantItem, v17);
  }
  viewObject = (UnityEngine_Object_o *)servantItem->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
  {
    this = (SvtEqCombineListViewManager_o *)servantItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(SvtEqCombineListViewManager_o *, SvtEqCombineListViewItem_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
        this,
        servantItem,
        this->klass->vtable._5_SetSortButtonImage.method);
      if ( !isIconSizeChange )
        return;
      this = (SvtEqCombineListViewManager_o *)servantItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)servantItem, v10->fields.seed, 0);
        return;
      }
    }
LABEL_26:
    sub_1C7BD40(this, servantItem);
  }
}


void SvtEqCombineListViewManager__OnClickBonusFilterKind(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4CE8653 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__);
    byte_4CE8653 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C7BD40(0, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void SvtEqCombineListViewManager__OnClickChoiceTab(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4CE865F & 1) == 0 )
  {
    sub_1C7BAE8(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_EndClickTabChoice__);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_OnClickChoiceTab__);
    byte_4CE865F = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SvtEqCombineListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1C7BD34(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
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
      SvtEqCombineListViewManager__SetMode_31933764(this, 2, v11);
    }
  }
}


void SvtEqCombineListViewManager__OnClickCollectLock(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4CE865E & 1) == 0 )
  {
    sub_1C7BAE8(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_EndClickTabLock__);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_OnClickCollectLock__);
    byte_4CE865E = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SvtEqCombineListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1C7BD34(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
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
      SvtEqCombineListViewManager__SetMode_31933764(this, 2, v11);
    }
  }
}


void SvtEqCombineListViewManager__OnClickDecide(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4CE8641 & 1) == 0 )
  {
    sub_1C7BAE8(&ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_OnClickDecide__);
    byte_4CE8641 = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_OnClickDecide__;
  isDecideFlg = this->fields.isDecideFlg;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_SvtEqCombineListViewManager_OnClickDecide__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  if ( isDecideFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    v7 = (struct CombineRootComponent_o *)SvtEqCombineListViewManager__CheckMaterialEquipped(this, v6);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._isOpenCheckEquipDialog_k__BackingField = (unsigned __int8)v7 & 1;
    if ( !combineRootComponent )
      goto LABEL_15;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0);
    if ( this->fields._isOpenCheckEquipDialog_k__BackingField )
    {
      servantEquipCheckDialog = this->fields.servantEquipCheckDialog;
      SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, v10);
      v13 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1C7BD34(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v13,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__,
        0);
      if ( servantEquipCheckDialog )
      {
        ServantCheckEquipDialog__Open(servantEquipCheckDialog, SelectedMaterialList, 0, v13, 0);
        return;
      }
LABEL_15:
      sub_1C7BD40(v7, v8);
    }
    SvtEqCombineListViewManager__SetSelectedMaterialInfo(this, v10);
    v7 = this->fields.combineRootComponent;
    if ( !v7 )
      goto LABEL_15;
    if ( v7->fields.state == 4 )
      CombineRootComponent__SetSelectSvtEqMaterialList(v7, 0);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
}


void SvtEqCombineListViewManager__OnClickFilter2Kind(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w21
  int32_t v9; // w9

  if ( (byte_4CE8654 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_OnClickFilter2Kind__);
    sub_1C7BAE8(&SvtEqCombineListViewManager_TypeInfo);
    byte_4CE8654 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SvtEqCombineListViewManager_OnClickFilter2Kind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort
      || (filter2Kind = sort->fields.filter2Kind, !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished)
      && (j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo), (sort = this->fields.sort) == 0) )
    {
      sub_1C7BD40(v5, v6);
    }
    if ( filter2Kind + 1 <= SvtEqCombineListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM )
      v9 = filter2Kind + 1;
    else
      v9 = 0;
    sort->fields.filter2Kind = v9;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void SvtEqCombineListViewManager__OnClickFilterKind(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CE8650 & 1) == 0 )
  {
    sub_1C7BAE8(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_EndSelectFilterKind__);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_OnClickFilterKind__);
    byte_4CE8650 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SvtEqCombineListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C7BD34(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C7BD40(v9, v10);
    CommonUI__OpenServantFilterSelectMenu_31489576(v7, 5, sort, (ListViewManager_o *)this, v8, -1, 0);
  }
}


void SvtEqCombineListViewManager__OnClickListView(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void SvtEqCombineListViewManager__OnClickLockModeItem(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x19
  __int64 naturalAligment; // x9
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
  if ( (byte_4CE864D & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_OnClickLockModeItem__);
    this = (SvtEqCombineListViewManager_o *)sub_1C7BAE8(&SvtEqCombineListViewObject_TypeInfo);
    byte_4CE864D = 1;
  }
  if ( !obj )
    goto LABEL_13;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    v15 = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(obj);
    SvtEqCombineListViewManager__IsDragEnable(v15, v16, v17);
    return;
  }
  Item = SvtEqCombineListViewObject__GetItem(
           (SvtEqCombineListViewObject_o *)obj,
           (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  v7 = Method_SvtEqCombineListViewManager_OnClickLockModeItem__;
  v8 = Item;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C7BB00(Method_SvtEqCombineListViewManager_OnClickLockModeItem__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 11, 0, 0);
  if ( !v8 || (userSvtEntity = v8->fields.userSvtEntity, v8->fields.isSwapLock ^= 1u, !userSvtEntity) )
LABEL_13:
    sub_1C7BD40(this, obj);
  v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v19.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v18 = v19;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v18, 0);
  SvtEqCombineListViewManager__ModifyLockItem(v4, v12, 0, 0, v13);
  SvtEqCombineListViewManager__SetMode_31933764(v4, 3, v14);
}


void SvtEqCombineListViewManager__OnClickNormalStatus(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4CE865D & 1) == 0 )
  {
    sub_1C7BAE8(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_EndClickTabStatus__);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_OnClickNormalStatus__);
    byte_4CE865D = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SvtEqCombineListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1C7BD34(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndClickTabStatus__,
      v6);
    SvtEqCombineListViewManager__StatusRequest(this, v5, v7);
  }
}


void SvtEqCombineListViewManager__OnClickReleaseAll(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CE8648 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_OnClickReleaseAll__);
    byte_4CE8648 = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_OnClickReleaseAll__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_SvtEqCombineListViewManager_OnClickReleaseAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  SvtEqCombineListViewManager__ReleaseAll(this, v5);
}


void SvtEqCombineListViewManager__OnClickScaleChange(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  SvtEqCombineListViewManager_o *v8; // x0
  int v9; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v12; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  if ( (byte_4CE865A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_OnClickScaleChange__);
    byte_4CE865A = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_SvtEqCombineListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v8 = this;
    v9 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v8 = this;
    v9 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v8 = this;
    v9 = 1;
LABEL_11:
    v8->fields.seed = smallSizeSeed;
    p_seed = &v8->fields.seed;
    *((_DWORD *)p_seed + 163) = v9;
    sub_1C7BA8C(p_seed, smallSizeSeed);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v12 = this->fields.scaleType,
        sort->fields.iconScaleKind = v12,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v12, 0),
        !scaleChangeButtonSprite) )
  {
    sub_1C7BD40(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  SvtEqCombineListViewManager__ModifyList(this, 1, v14);
  SvtEqCombineListViewManager__SetMode_31933764(this, 2, v15);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void SvtEqCombineListViewManager__OnClickSelectBase(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x19
  __int64 naturalAligment; // x9
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtEqCombineListViewItem_o *v7; // x21
  __int128 v8; // q1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w2
  int v13; // w9
  struct System_Collections_Generic_List_long__o *tempMaterialUsrSvtIdList; // x8
  int v15; // w9
  int32_t v16; // w22
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  struct UserServantEntity_o *userSvtEntity; // x1
  SvtEqCombineListViewManager_o *v20; // x0
  ListViewObject_o *v21; // x1
  const MethodInfo *v22; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_4CE864B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_OnClickSelectBase__);
    this = (SvtEqCombineListViewManager_o *)sub_1C7BAE8(&SvtEqCombineListViewObject_TypeInfo);
    byte_4CE864B = 1;
  }
  if ( !obj )
    goto LABEL_33;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    v20 = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(obj);
    SvtEqCombineListViewManager__OnClickListView(v20, v21, v22);
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
    *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v24.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v23 = v24;
    this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(
                                              &v23,
                                              0);
    if ( !v7 )
      goto LABEL_33;
    if ( this == (SvtEqCombineListViewManager_o *)SvtEqCombineListViewItem__get_UserSvtId(v7, (const MethodInfo *)obj) )
    {
      v9 = Method_SvtEqCombineListViewManager_OnClickSelectBase__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C7BB00(Method_SvtEqCombineListViewManager_OnClickSelectBase__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0);
      v4->fields.baseUsrSvtData = 0;
      this = (SvtEqCombineListViewManager_o *)sub_1C7BA8C(&v4->fields.baseUsrSvtData, 0);
      tempMtSvtList = v4->fields.tempMtSvtList;
      if ( tempMtSvtList )
      {
        size = tempMtSvtList->fields._size;
        v13 = tempMtSvtList->fields._version + 1;
        tempMtSvtList->fields._size = 0;
        tempMtSvtList->fields._version = v13;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, size, 0);
        tempMaterialUsrSvtIdList = v4->fields.tempMaterialUsrSvtIdList;
        if ( tempMaterialUsrSvtIdList )
        {
          v15 = tempMaterialUsrSvtIdList->fields._version + 1;
          tempMaterialUsrSvtIdList->fields._size = 0;
          tempMaterialUsrSvtIdList->fields._version = v15;
          goto LABEL_28;
        }
      }
LABEL_33:
      sub_1C7BD40(this, obj);
    }
  }
  else if ( !this )
  {
    goto LABEL_33;
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
    v17 = (_QWORD *)sub_1C7BB00(Method_SvtEqCombineListViewManager_OnClickSelectBase__);
  v18 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v17, v17[4]);
  OverwriteAssetSoundName__PlaySystemSe(v18, v16, 0, 0);
  userSvtEntity = v7->fields.userSvtEntity;
  v4->fields.baseUsrSvtData = userSvtEntity;
  sub_1C7BA8C(&v4->fields.baseUsrSvtData, userSvtEntity);
LABEL_28:
  this = (SvtEqCombineListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_33;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v4->fields.baseUsrSvtData != 0, 0);
  this = (SvtEqCombineListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_33;
  if ( HIDWORD(this->fields.nextExpLabel) == 4 )
    CombineRootComponent__ShowBaseSvtEq((CombineRootComponent_o *)this, 0);
}


void SvtEqCombineListViewManager__OnClickSelectMaterial(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x19
  __int64 naturalAligment; // x9
  ListViewItem_o *v6; // x20
  const MethodInfo *v7; // x1
  int32_t selectNum; // w21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w9
  int32_t selectSum; // w8
  void *v13; // x0
  void *v14; // x21
  int v15; // w1
  __int64 v16; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4CE864C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    this = (SvtEqCombineListViewManager_o *)sub_1C7BAE8(&SvtEqCombineListViewObject_TypeInfo);
    byte_4CE864C = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !obj )
    goto LABEL_21;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    v13 = (void *)sub_1C7C0DC(obj);
    v14 = v13;
    if ( v15 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v17,
        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      sub_1D5FCC4(v14);
    }
    v16 = *(_QWORD *)__cxa_begin_catch(v13);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v16 )
      sub_1C7BD38(v16);
    goto LABEL_18;
  }
  this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewObject__GetItem(
                                            (SvtEqCombineListViewObject_o *)obj,
                                            (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  if ( !this )
    goto LABEL_21;
  v6 = (ListViewItem_o *)this;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0) )
  {
    selectNum = v6->fields.selectNum;
    ListViewItem__set_IsSelect(v6, 0, 0);
    this = (SvtEqCombineListViewManager_o *)v4->fields.itemList;
    --v4->fields.selectSum;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v17,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v17,
               (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v9 )
          break;
        if ( !v17.fields._current )
          sub_1C7BD40(v9, v10);
        v11 = *(_DWORD *)((char *)&v17.fields._current->klass + (unsigned __int64)&word_10);
        if ( v11 > selectNum )
          *(_DWORD *)((char *)&v17.fields._current->klass + (unsigned __int64)&word_10) = v11 - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v17,
        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_18;
    }
LABEL_21:
    sub_1C7BD40(this, obj);
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


void SvtEqCombineListViewManager__OnClickSortAscendingOrder(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4CE8657 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__);
    byte_4CE8657 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C7BD40(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void SvtEqCombineListViewManager__OnClickSortKind(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4CE8655 & 1) == 0 )
  {
    sub_1C7BAE8(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_EndSelectSortKind__);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_OnClickSortKind__);
    byte_4CE8655 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SvtEqCombineListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    itemType = this->fields.itemType;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C7BD34(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectSortKind__,
      0);
    if ( !v8 )
      sub_1C7BD40(v10, v11);
    CommonUI__OpenServantSortSelectMenu(v8, 2, sort, itemType == 1, v9, 0);
  }
}


void SvtEqCombineListViewManager__OnLongPushListView(
        SvtEqCombineListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  UnityEngine_Behaviour_o *scrollView; // x0
  SvtEqCombineListViewItem_c *v8; // x1
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_long__o *selectMaterialUsrSvtIdList; // x21
  int64_t UserSvtId; // x0
  struct System_Collections_Generic_List_long__o *v12; // x8
  struct UserServantEntity_o *monitor; // x1
  SvtEqCombineListViewManager_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4CE864E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Contains__);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_OnLongPushListView__);
    byte_4CE864E = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    v5 = Method_SvtEqCombineListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C7BB00(Method_SvtEqCombineListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( item )
    {
      v8 = SvtEqCombineListViewItem_TypeInfo;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        v14 = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(item);
        SvtEqCombineListViewManager__GetSelectUsrSvtEntity(v14, v15);
        return;
      }
      selectMaterialUsrSvtIdList = this->fields.selectMaterialUsrSvtIdList;
      this->fields.isSelectMaterial = 0;
      if ( selectMaterialUsrSvtIdList )
      {
        UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)item, (const MethodInfo *)v8);
        if ( System_Collections_Generic_List_long___Contains(
               selectMaterialUsrSvtIdList,
               UserSvtId,
               (const MethodInfo_38271A8 *)Method_System_Collections_Generic_List_long__Contains__) )
        {
          this->fields.isSelectMaterial = 1;
        }
      }
    }
    else
    {
      v12 = this->fields.selectMaterialUsrSvtIdList;
      this->fields.isSelectMaterial = 0;
      if ( v12 )
        goto LABEL_19;
    }
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
      if ( item )
      {
        monitor = (struct UserServantEntity_o *)item[1].monitor;
        this->fields.selectUsrSvtEntity = monitor;
        sub_1C7BA8C(&this->fields.selectUsrSvtEntity, monitor);
        scrollView = (UnityEngine_Behaviour_o *)this->fields.combineRootComponent;
        if ( scrollView )
        {
          if ( HIDWORD(scrollView[19].fields.m_CachedPtr) == 4 )
            CombineRootComponent__SelectShowServant((CombineRootComponent_o *)scrollView, 0);
          return;
        }
      }
    }
LABEL_19:
    sub_1C7BD40(scrollView, v8);
  }
}


void SvtEqCombineListViewManager__OnMoveEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4CE8640 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8640 = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v8 = this->fields.scrollView;
        if ( !v8
          || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
                v8,
                1,
                v8->klass->vtable._8_UpdateScrollbars.method),
              (v8 = this->fields.scrollView) == 0) )
        {
          sub_1C7BD40(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C7BA8C(&this->fields.callbackFunc2, 0);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__RefrashListDisp(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_SvtEqCombineListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t *p_selectQp; // x28
  System_Collections_Generic_List_object__o *v6; // x20
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t CombineQpSvtEq; // w0
  const MethodInfo *v9; // x2
  int32_t v10; // w21
  __int64 itemList; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  SvtEqCombineListViewItem_o *current; // x22
  __int64 naturalAligment; // x9
  __int64 v16; // x1
  UserServantEntity_o *v17; // x0
  const MethodInfo *v18; // x1
  UserServantEntity_o *v19; // x0
  int32_t addTotalExp; // w24
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v22; // x22
  Il2CppObject *v23; // x23
  Il2CppObject *v24; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *v29; // x29
  int klass_high; // w8
  float v31; // s8
  int32_t selectExp; // s9
  float v33; // s0
  int32_t v34; // w8
  float v35; // s8
  int v36; // s9
  float v37; // s0
  unsigned int v38; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v40; // x0
  float v41; // s1 OVERLAPPED
  float v42; // s0
  float v43; // s3
  float v44; // s2
  UILabel_o *getBasicExpLabel; // x21
  Il2CppObject *v46; // x0
  UILabel_o *getAccExpLabel; // x21
  Il2CppObject *v48; // x0
  const MethodInfo *v49; // x2
  struct UserServantEntity_o *v50; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // x21
  __int64 v52; // x22
  __int64 v53; // x23
  int32_t v54; // w8
  const MethodInfo *v55; // x4
  int32_t LevelMax; // w21
  struct UserServantEntity_o *v57; // x8
  int32_t increLv; // w22
  int32_t lv; // w23
  bool v60; // w22
  _BOOL8 v61; // x0
  __int64 v62; // x1
  Il2CppObject *v63; // x21
  __int64 v64; // x9
  bool v65; // w1
  SvtEqCombineListViewManager_o *v66; // x0
  struct System_Collections_Generic_List_long__o *tempMaterialUsrSvtIdList; // x8
  int32_t size; // w8
  int32_t v69; // w21
  int32_t selectMax; // [xsp+4h] [xbp-CCh] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+20h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_4CE8632 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25348/*"{0:N0}"*/);
    sub_1C7BAE8(&StringLiteral_12536/*"SUM_INFO"*/);
    byte_4CE8632 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  memset(&v72, 0, sizeof(v72));
  ObjectList = SvtEqCombineListViewManager__get_ObjectList(this, method);
  p_selectQp = &this->fields.selectQp;
  *(_QWORD *)&this->fields.selectQp = 0;
  v6 = (System_Collections_Generic_List_object__o *)ObjectList;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.addTotalExp = 0;
  this->fields.isAllUpMax = 0;
  if ( baseUsrSvtData && this->fields.itemType == 1 )
  {
    CombineQpSvtEq = UserServantEntity__getCombineQpSvtEq(baseUsrSvtData, 0);
    v10 = SvtEqCombineListViewManager__CheckCompareQp(this, CombineQpSvtEq, v9);
  }
  else
  {
    v10 = 0;
  }
  itemList = (__int64)this->fields.itemList;
  if ( !itemList )
    goto LABEL_95;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v73 = v71;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v73,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v12 & 1) == 0 )
      break;
    current = (SvtEqCombineListViewItem_o *)v73.fields._current;
    if ( !v73.fields._current )
      goto LABEL_94;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( v73.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SvtEqCombineListViewItem_c *)v73.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      v12 = sub_1C7C0DC(v73.fields._current);
LABEL_94:
      sub_1C7BD40(v12, v13);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v73.fields._current, 0) )
    {
      v17 = this->fields.baseUsrSvtData;
      this->fields.selectQp += v10;
      if ( !v17 )
        goto LABEL_97;
      if ( !UserServantEntity__isLevelMax(v17, 0) )
        goto LABEL_19;
      v19 = this->fields.baseUsrSvtData;
      if ( !v19 )
        sub_1C7BD40(0, v18);
      if ( UserServantEntity__isLevelMax(v19, 0) && current->fields.isLimitCntTarget )
      {
LABEL_19:
        addTotalExp = this->fields.addTotalExp;
        this->fields.selectExp += current->fields.materialExp;
        this->fields.addTotalExp = SvtEqCombineListViewItem__get_GetAddTotalExp(current, v18) + addTotalExp;
      }
    }
    else
    {
      current->fields.isMaxSelect = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v73,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12536/*"SUM_INFO"*/, 0);
  LODWORD(v71.fields._list) = this->fields.selectSum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
  selectMax = this->fields.selectMax;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax);
  itemList = (__int64)System_String__Format_64218220(v22, v23, v24, 0);
  if ( !selectInfoLabel )
    goto LABEL_95;
  UILabel__set_text(selectInfoLabel, (System_String_o *)itemList, 0);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_95;
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v71,
      combineEventList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v72 = v71;
    while ( 1 )
    {
      v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v72,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v27 )
        break;
      v29 = v72.fields._current;
      if ( !v72.fields._current )
        sub_1C7BD40(v27, v28);
      klass_high = HIDWORD(v72.fields._current[1].klass);
      if ( klass_high == 17 )
      {
        v31 = *(float *)&v72.fields._current[3].monitor;
        selectExp = this->fields.selectExp;
        if ( !byte_4CE84E7 )
        {
          sub_1C7BAE8(&System_Math_TypeInfo);
          byte_4CE84E7 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v33 = v31 * (float)selectExp;
        v34 = vcvtps_s32_f32(v33);
        if ( ceilf(v33) == INFINITY )
          v34 = 0x80000000;
        this->fields.selectExp = v34;
        klass_high = HIDWORD(v29[1].klass);
      }
      if ( klass_high == 16 )
      {
        v35 = *(float *)&v29[3].monitor;
        v36 = *p_selectQp;
        if ( !byte_4CE84E7 )
        {
          sub_1C7BAE8(&System_Math_TypeInfo);
          byte_4CE84E7 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v37 = v35 * (float)v36;
        v38 = vcvtps_s32_f32(v37);
        if ( ceilf(v37) == INFINITY )
          v38 = 0x80000000;
        *p_selectQp = v38;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v72,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v71.fields._list) = this->fields.selectQp;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_25348/*"{0:N0}"*/, v40, 0);
  if ( !spendQpLabel )
LABEL_95:
    sub_1C7BD40(itemList, v4);
  UILabel__set_text(spendQpLabel, (System_String_o *)itemList, 0);
  if ( this->fields.itemType == 1 )
  {
    itemList = (__int64)this->fields.spendQpLabel;
    v41 = 0.0;
    if ( this->fields.userQP >= this->fields.selectQp )
      v41 = 1.0;
    if ( !itemList )
      goto LABEL_95;
    v42 = 1.0;
    v43 = 1.0;
    v44 = v41;
    UIWidget__set_color((UIWidget_o *)itemList, *(UnityEngine_Color_o *)(&v41 - 1), 0);
  }
  getBasicExpLabel = this->fields.getBasicExpLabel;
  LODWORD(v71.fields._list) = this->fields.selectExp;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_25348/*"{0:N0}"*/, v46, 0);
  if ( !getBasicExpLabel )
    goto LABEL_95;
  UILabel__set_text(getBasicExpLabel, (System_String_o *)itemList, 0);
  getAccExpLabel = this->fields.getAccExpLabel;
  selectMax = this->fields.addTotalExp;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_25348/*"{0:N0}"*/, v48, 0);
  if ( !getAccExpLabel )
    goto LABEL_95;
  UILabel__set_text(getAccExpLabel, (System_String_o *)itemList, 0);
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !itemList )
      goto LABEL_95;
    itemList = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)itemList,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
    v50 = this->fields.baseUsrSvtData;
    if ( !v50 )
      goto LABEL_95;
    v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemList;
    v53 = *(_QWORD *)&v50->fields.svtId.fields.currentCryptoKey;
    v52 = *(_QWORD *)&v50->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v74.fields.currentCryptoKey = v53;
    *(_QWORD *)&v74.fields.fakeValue = v52;
    itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v74, 0);
    if ( !v51 )
      goto LABEL_95;
    itemList = (__int64)DataMasterBase_object__object__int___GetEntity(
                          v51,
                          itemList,
                          (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !itemList )
      goto LABEL_95;
    v54 = *(_DWORD *)(itemList + 132);
    itemList = (__int64)this->fields.baseUsrSvtData;
    this->fields.expType = v54;
    if ( !itemList )
      goto LABEL_95;
    this->fields.totalExp = *(_DWORD *)(itemList + 260) + this->fields.selectExp + this->fields.addTotalExp;
    this->fields.checkLv = *(_DWORD *)(itemList + 256);
    LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)itemList, 0);
    if ( this->fields.checkLv != LevelMax )
    {
      do
        itemList = SvtEqCombineListViewManager__CheckIncrementLv(
                     this,
                     &this->fields.checkLv,
                     &this->fields.increLv,
                     this->fields.totalExp,
                     v55);
      while ( (itemList & 1) == 0 );
      v57 = this->fields.baseUsrSvtData;
      if ( !v57 )
        goto LABEL_95;
      itemList = (__int64)this->fields.levelUpInfoImg;
      if ( !itemList )
        goto LABEL_95;
      increLv = this->fields.increLv;
      lv = v57->fields.lv;
      itemList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0);
      if ( !itemList )
        goto LABEL_95;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, increLv - lv > 0, 0);
    }
    itemList = (__int64)this->fields.itemList;
    if ( !itemList )
      goto LABEL_95;
    v60 = this->fields.increLv >= LevelMax;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v71,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v73 = v71;
    while ( 1 )
    {
      v61 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v73,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v61 )
        break;
      v63 = v73.fields._current;
      if ( !v73.fields._current )
        sub_1C7BD40(v61, v62);
      v64 = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( v73.fields._current->klass->_2.naturalAligment < (unsigned int)v64
        || (SvtEqCombineListViewItem_c *)v73.fields._current->klass->_2.typeHierarchy[v64 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        v17 = (UserServantEntity_o *)sub_1C7C0DC(v73.fields._current);
LABEL_97:
        sub_1C7BD40(v17, v16);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v73.fields._current, 0) )
        BYTE2(v63[15].monitor) = v60;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v73,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  if ( this->fields.selectSum >= 1 )
  {
    v65 = 1;
    v66 = this;
    goto LABEL_81;
  }
  tempMaterialUsrSvtIdList = this->fields.tempMaterialUsrSvtIdList;
  if ( !tempMaterialUsrSvtIdList )
    goto LABEL_95;
  if ( tempMaterialUsrSvtIdList->fields._size <= 0 )
  {
    v66 = this;
    v65 = 0;
LABEL_81:
    SvtEqCombineListViewManager__SetBtnEnable(v66, v65, v49);
    if ( !v6 )
      goto LABEL_95;
    goto LABEL_87;
  }
  itemList = (__int64)this->fields.allReleaseButton;
  if ( !itemList )
    goto LABEL_95;
  itemList = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)itemList + 536LL))(
               itemList,
               3,
               1,
               *(_QWORD *)(*(_QWORD *)itemList + 544LL));
  if ( !v6 )
    goto LABEL_95;
LABEL_87:
  size = v6->fields._size;
  if ( size >= 1 )
  {
    v69 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (__int64)System_Collections_Generic_List_object___get_Item(
                            v6,
                            v69,
                            (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__);
      if ( !itemList )
        break;
      (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)itemList + 456LL))(
        itemList,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)itemList + 464LL));
      if ( ++v69 >= v6->fields._size )
        return;
    }
    goto LABEL_95;
  }
}


void SvtEqCombineListViewManager__ReleaseAll(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x9
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CE8649 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    byte_4CE8649 = 1;
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
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v10 = v9;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( (v4 & 1) == 0 )
        break;
      current = v10.fields._current;
      if ( !v10.fields._current )
        goto LABEL_16;
      ListViewItem__set_IsSelect((ListViewItem_o *)v10.fields._current, 0, 0);
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        v4 = sub_1C7C0DC(current);
LABEL_16:
        sub_1C7BD40(v4, v5);
      }
      BYTE2(current[11].klass) = 0;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)itemList,
                                                                    0)) == 0 )
    {
LABEL_17:
      sub_1C7BD40(itemList, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0);
    *(_QWORD *)&this->fields.totalExp = 0;
    this->fields.checkLv = 0;
    SvtEqCombineListViewManager__RefrashListDisp(this, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__RequestListObject(
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

  if ( (byte_4CE863E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CE863E = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C7BD40(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C7BD40(v12, v13);
      SvtEqCombineListViewObject__Init_31935876((SvtEqCombineListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__RequestListObject_31934848(
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

  if ( (byte_4CE863F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CE863F = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C7BD40(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C7BD40(v10, v11);
      SvtEqCombineListViewObject__Init_31935960((SvtEqCombineListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


void SvtEqCombineListViewManager__ResetInit(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x8
  int32_t size; // w2
  int v6; // w9
  struct System_Collections_Generic_List_long__o *selectMaterialUsrSvtIdList; // x8
  int v8; // w9
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t v10; // w2
  int v11; // w9
  struct System_Collections_Generic_List_long__o *tempMaterialUsrSvtIdList; // x8
  int v13; // w9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v15; // x1
  UnityEngine_Component_o *levelUpInfoImg; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CE864A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4CE864A = 1;
  }
  memset(&v17, 0, sizeof(v17));
  this->fields.baseUsrSvtData = 0;
  sub_1C7BA8C(&this->fields.baseUsrSvtData, 0);
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
  {
    size = selectedMtSvtList_k__BackingField->fields._size;
    v6 = selectedMtSvtList_k__BackingField->fields._version + 1;
    selectedMtSvtList_k__BackingField->fields._size = 0;
    selectedMtSvtList_k__BackingField->fields._version = v6;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)selectedMtSvtList_k__BackingField->fields._items, 0, size, 0);
  }
  selectMaterialUsrSvtIdList = this->fields.selectMaterialUsrSvtIdList;
  if ( selectMaterialUsrSvtIdList )
  {
    v8 = selectMaterialUsrSvtIdList->fields._version + 1;
    selectMaterialUsrSvtIdList->fields._size = 0;
    selectMaterialUsrSvtIdList->fields._version = v8;
  }
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( tempMtSvtList )
  {
    v10 = tempMtSvtList->fields._size;
    v11 = tempMtSvtList->fields._version + 1;
    tempMtSvtList->fields._size = 0;
    tempMtSvtList->fields._version = v11;
    if ( v10 >= 1 )
      System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, v10, 0);
  }
  tempMaterialUsrSvtIdList = this->fields.tempMaterialUsrSvtIdList;
  if ( tempMaterialUsrSvtIdList )
  {
    v13 = tempMaterialUsrSvtIdList->fields._version + 1;
    tempMaterialUsrSvtIdList->fields._size = 0;
    tempMaterialUsrSvtIdList->fields._version = v13;
  }
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v17.fields._current )
        sub_1C7BD40(0, v15);
      ListViewItem__set_IsSelect((ListViewItem_o *)v17.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  this->fields.selectSum = 0;
  if ( !levelUpInfoImg
    || (levelUpInfoImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0)) == 0 )
  {
    sub_1C7BD40(levelUpInfoImg, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelUpInfoImg, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__SetBtnEnable(
        SvtEqCombineListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  bool v5; // w21
  UnityEngine_Component_o *decideBtnBg; // x0
  float v7; // s0 OVERLAPPED
  float v8; // s3
  float v9; // s1
  float v10; // s2
  __int64 v11; // x1

  v5 = isEnable;
  if ( (byte_4CE862E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4CE862E = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = v5;
  if ( !decideBtnBg )
    goto LABEL_12;
  decideBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             decideBtnBg,
                                             (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v7 = 1.0;
  if ( !this->fields.isDecideFlg )
    v7 = 0.5;
  if ( !decideBtnBg
    || (v8 = 1.0,
        v9 = v7,
        v10 = v7,
        UIWidget__set_color((UIWidget_o *)decideBtnBg, *(UnityEngine_Color_o *)&v7, 0),
        (decideBtnBg = (UnityEngine_Component_o *)this->fields.allReleaseButton) == 0) )
  {
LABEL_12:
    sub_1C7BD40(decideBtnBg, isEnable);
  }
  if ( isEnable )
    v11 = 0;
  else
    v11 = 3;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppClass **))decideBtnBg->klass[1]._1.nestedTypes)(
    decideBtnBg,
    v11,
    1,
    decideBtnBg->klass[1]._1.implementedInterfaces);
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__SetDispActive(
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

  if ( (byte_4CE862D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C7BAE8(&SvtEqCombineListViewManager_TypeInfo);
    byte_4CE862D = 1;
  }
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allReleaseButton, 0);
  if ( !allReleaseButton )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0);
  allReleaseButton = this->fields.decideButton;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allReleaseButton, 0);
  if ( !allReleaseButton )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0);
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
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( isShow )
    v6 = 1.0;
  if ( !allReleaseButton )
    goto LABEL_40;
  v7.fields.a = 1.0;
  v7.fields.r = v6;
  v7.fields.g = v6;
  v7.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v7, 0);
  allReleaseButton = this->fields.spendQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v8.fields.a = 1.0;
  v8.fields.r = v6;
  v8.fields.g = v6;
  v8.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v8, 0);
  allReleaseButton = this->fields.spendQpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v9.fields.a = 1.0;
  v9.fields.r = v6;
  v9.fields.g = v6;
  v9.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v9, 0);
  allReleaseButton = this->fields.getExpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v10.fields.a = 1.0;
  v10.fields.r = v6;
  v10.fields.g = v6;
  v10.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v10, 0);
  allReleaseButton = this->fields.getExpBgImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v11.fields.a = 1.0;
  v11.fields.r = v6;
  v11.fields.g = v6;
  v11.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v11, 0);
  allReleaseButton = this->fields.getExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v12.fields.a = 1.0;
  v12.fields.r = v6;
  v12.fields.g = v6;
  v12.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v12, 0);
  allReleaseButton = this->fields.getBasicExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v13.fields.a = 1.0;
  v13.fields.r = v6;
  v13.fields.g = v6;
  v13.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v13, 0);
  allReleaseButton = this->fields.getAccExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v14.fields.a = 1.0;
  v14.fields.r = v6;
  v14.fields.g = v6;
  v14.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v14, 0);
  allReleaseButton = this->fields.haveQpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v15.fields.a = 1.0;
  v15.fields.r = v6;
  v15.fields.g = v6;
  v15.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v15, 0);
  allReleaseButton = this->fields.haveQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v16.fields.a = 1.0;
  v16.fields.r = v6;
  v16.fields.g = v6;
  v16.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v16, 0);
  allReleaseButton = this->fields.haveQpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v17.fields.a = 1.0;
  v17.fields.r = v6;
  v17.fields.g = v6;
  v17.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v17, 0);
  allReleaseButton = this->fields.nextExpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v18.fields.a = 1.0;
  v18.fields.r = v6;
  v18.fields.g = v6;
  v18.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v18, 0);
  allReleaseButton = this->fields.nextExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton
    || (v19.fields.a = 1.0,
        v19.fields.r = v6,
        v19.fields.g = v6,
        v19.fields.b = v6,
        UIWidget__set_color((UIWidget_o *)allReleaseButton, v19, 0),
        (allReleaseButton = this->fields.nextExpLabel) == 0)
    || (allReleaseButton = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)allReleaseButton,
                             (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_40:
    sub_1C7BD40(allReleaseButton, isShow);
  }
  v20.fields.a = 1.0;
  v20.fields.r = v6;
  v20.fields.g = v6;
  v20.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v20, 0);
}


void SvtEqCombineListViewManager__SetDragEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_4CE8664 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_SetDragEnd__);
    byte_4CE8664 = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_SvtEqCombineListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
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


void SvtEqCombineListViewManager__SetDragMove(
        SvtEqCombineListViewManager_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.dragEndIndex != moveIndex )
    SvtEqCombineListViewManager__SetDragSelectItem(this, this->fields.dragStartIndex, moveIndex, v3);
}


// local variable allocation has failed, the output may be wrong!
bool SvtEqCombineListViewManager__SetDragSelect(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        bool isDragSelect,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  ListViewItem_o *v8; // x19
  SvtEqCombineListViewItem_c *v9; // x1
  __int64 naturalAligment; // x9
  int items_high; // w8
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

  if ( (byte_4CE8662 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C7BAE8(&SvtEqCombineListViewObject_TypeInfo);
    byte_4CE8662 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_31;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_31;
  v8 = (ListViewItem_o *)itemSortList;
  v9 = SvtEqCombineListViewItem_TypeInfo;
  naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    goto LABEL_32;
  }
  items_high = HIDWORD(itemSortList[6].fields._items);
  if ( isDragSelect )
  {
    if ( items_high < 0 )
    {
      HIDWORD(itemSortList[6].fields._items) = 0;
      v12 = 0;
      if ( SvtEqCombineListViewItem__get_IsCanNotSelect(
             (SvtEqCombineListViewItem_o *)itemSortList,
             (const MethodInfo *)v9) )
      {
        goto LABEL_23;
      }
      v13 = this->fields.isDragSelect;
      IsSelect = ListViewItem__get_IsSelect(v8, 0);
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
          v8[2].fields.index = 1;
        }
        goto LABEL_22;
      }
      if ( IsSelect )
      {
        v12 = 0;
        v16 = 1;
LABEL_19:
        v8[2].fields.index = v16;
        goto LABEL_23;
      }
    }
  }
  else if ( (items_high & 0x80000000) == 0 )
  {
    if ( !ListViewItem__get_IsSelect((ListViewItem_o *)itemSortList, 0) && v8[2].fields.index >= 1 )
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
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
    return v12;
  itemSortList = (System_Collections_Generic_List_object__o *)v8->fields.viewObject;
  if ( !itemSortList )
LABEL_31:
    sub_1C7BD40(itemSortList, *(_QWORD *)&index);
  v18 = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)v18
    && (SvtEqCombineListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v18 - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    SvtEqCombineListViewObject__SetupDisp(
      (SvtEqCombineListViewObject_o *)itemSortList,
      (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
    return v12;
  }
LABEL_32:
  v20 = (SvtEqCombineListViewObject_o *)sub_1C7C0DC(itemSortList);
  SvtEqCombineListViewObject__SetupDisp(v20, v21);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__SetDragSelectItem(
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
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *v20; // x22
  __int64 v21; // x9
  SvtEqCombineListViewManager_o *v22; // x0
  int32_t v23; // w1
  bool v24; // w2
  const MethodInfo *v25; // x3

  v5 = startIndex;
  if ( (byte_4CE8661 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C7BAE8(&SvtEqCombineListViewObject_TypeInfo);
    byte_4CE8661 = 1;
  }
  dragStartIndex = this->fields.dragStartIndex;
  if ( dragStartIndex < 0 )
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
      if ( v15 > v13 || v14 < 0 || v15 < v14 )
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
        if ( v5 > v9 || v10 < 0 || v5 < v10 )
          SvtEqCombineListViewManager__SetDragSelect(this, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v9 || v10 < 0 || v5 < v10 )
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
                               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0 )
        {
LABEL_62:
          sub_1C7BD40(itemSortList, *(_QWORD *)&startIndex);
        }
        *(_QWORD *)&startIndex = SvtEqCombineListViewItem_TypeInfo;
        v18 = itemSortList;
        naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)naturalAligment
          || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * naturalAligment - 8) != SvtEqCombineListViewItem_TypeInfo )
        {
          break;
        }
        if ( *((int *)itemSortList + 65) >= 1 )
        {
          *((_DWORD *)itemSortList + 65) = v16;
          v20 = (UnityEngine_Object_o *)*((_QWORD *)itemSortList + 14);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          ++v16;
          if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
          {
            itemSortList = (void *)v18[14];
            if ( !itemSortList )
              goto LABEL_62;
            v21 = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
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
      v22 = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(itemSortList);
      SvtEqCombineListViewManager__SetDragSelect(v22, v23, v24, v25);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__SetDragStart(
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
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *scrollView; // x20

  v4 = startIndex;
  v6 = isDragSelect;
  if ( (byte_4CE8663 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    byte_4CE8663 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  this->fields.dragEndIndex = -1;
  *(_QWORD *)&this->fields.dragSelectSum = 0xFFFFFFFF00000000LL;
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
                                                                    (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemSortList )
        goto LABEL_19;
      *(_QWORD *)&startIndex = SvtEqCombineListViewItem_TypeInfo;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemSortList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      HIDWORD(itemSortList[6].fields._items) = -1;
      if ( size == v9 )
        goto LABEL_12;
      itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_19;
    }
    itemSortList = (System_Collections_Generic_List_object__o *)sub_1C7C0DC(itemSortList);
LABEL_19:
    sub_1C7BD40(itemSortList, *(_QWORD *)&startIndex);
  }
LABEL_12:
  SvtEqCombineListViewManager__SetDragSelectItem(this, v4, v4, method);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( !itemSortList )
      goto LABEL_19;
    UIScrollView__Press((UIScrollView_o *)itemSortList, 0, 0);
  }
}


void SvtEqCombineListViewManager__SetFilterButtonImage(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4CE8652 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17575/*"btn_filter_on"*/);
    sub_1C7BAE8(&StringLiteral_17574/*"btn_filter"*/);
    byte_4CE8652 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C7BD40(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17574/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17575/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void SvtEqCombineListViewManager__SetMaterialSvtInfo(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  SvtEqCombineListViewManager___c_c *v4; // x0
  System_Func_object__object__o *_9__118_0; // x21
  Il2CppObject *v6; // x22
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_T__o *v8; // x20
  System_Action_object__o *v9; // x21

  if ( (byte_4CE8630 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_SvtEqCombineListViewItem__TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_SvtEqCombineListViewItem___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_ListViewItem__SvtEqCombineListViewItem___);
    sub_1C7BAE8(&System_Func_ListViewItem__SvtEqCombineListViewItem__TypeInfo);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager__SetMaterialSvtInfo_b__118_1__);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager___c__SetMaterialSvtInfo_b__118_0__);
    sub_1C7BAE8(&SvtEqCombineListViewManager___c_TypeInfo);
    byte_4CE8630 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.selectMaterialUsrSvtIdList, 0) )
  {
    itemList = this->fields.itemList;
    v4 = SvtEqCombineListViewManager___c_TypeInfo;
    if ( !SvtEqCombineListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager___c_TypeInfo);
      v4 = SvtEqCombineListViewManager___c_TypeInfo;
    }
    _9__118_0 = (System_Func_object__object__o *)v4->static_fields->__9__118_0;
    if ( !_9__118_0 )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = SvtEqCombineListViewManager___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v4->static_fields->__9;
      _9__118_0 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_ListViewItem__SvtEqCombineListViewItem__TypeInfo);
      System_Func_object__object____ctor(
        _9__118_0,
        v6,
        Method_SvtEqCombineListViewManager___c__SetMaterialSvtInfo_b__118_0__,
        0);
      static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__118_0 = (struct System_Func_ListViewItem__SvtEqCombineListViewItem__o *)_9__118_0;
      sub_1C7BA8C(&static_fields->__9__118_0, _9__118_0);
    }
    v8 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                                                          (System_Func_TSource__TResult__o *)_9__118_0,
                                                          (const MethodInfo_31A5F40 *)Method_System_Linq_Enumerable_Select_ListViewItem__SvtEqCombineListViewItem___);
    v9 = (System_Action_object__o *)sub_1C7BD34(System_Action_SvtEqCombineListViewItem__TypeInfo);
    System_Action_object____ctor(
      v9,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager__SetMaterialSvtInfo_b__118_1__,
      0);
    BasicHelper__ForEach_object_(
      v8,
      (System_Action_T__o *)v9,
      (const MethodInfo_315C348 *)Method_BasicHelper_ForEach_SvtEqCombineListViewItem___);
  }
}


void SvtEqCombineListViewManager__SetMode(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        SvtEqCombineListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C7BA8C(&this->fields.callbackFunc, callback);
  SvtEqCombineListViewManager__SetMode_31933764(this, mode, v6);
}


void SvtEqCombineListViewManager__SetMode_31933764(
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
  __int64 v11; // x0
  __int64 v12; // x1
  ListViewItem_o *current; // x21
  __int64 naturalAligment; // x9
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

  if ( (byte_4CE863D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    byte_4CE863D = 1;
  }
  memset(&v25, 0, sizeof(v25));
  memset(&v24, 0, sizeof(v24));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, (mode & 0xFFFFFFFE) == 2, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    itemList = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !itemList )
      goto LABEL_39;
    if ( !UnityEngine_Behaviour__get_enabled(itemList, 0) )
    {
      itemList = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !itemList )
        goto LABEL_39;
      UnityEngine_Behaviour__set_enabled(itemList, 1, 0);
      itemList = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !itemList )
        goto LABEL_39;
      UIScrollView__UpdatePosition((UIScrollView_o *)itemList, 0);
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
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v25 = v23;
      v10 = 0;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v25,
                (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v11 & 1) == 0 )
          break;
        current = (ListViewItem_o *)v25.fields._current;
        if ( !v25.fields._current )
          goto LABEL_38;
        naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
        if ( v25.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (SvtEqCombineListViewItem_c *)v25.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
        {
          v11 = sub_1C7C0DC(v25.fields._current);
LABEL_38:
          sub_1C7BD40(v11, v12);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v25.fields._current, 0)
          && SvtEqCombineListViewItem__get_IsCanNotSelect((SvtEqCombineListViewItem_o *)current, v15) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0);
          v18 = this->fields.itemList;
          --this->fields.selectSum;
          if ( !v18 )
            sub_1C7BD40(0, v17);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v23,
            (System_Collections_Generic_List_object__o *)v18,
            (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v24 = v23;
          while ( 1 )
          {
            v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v24,
                    (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v19 )
              break;
            if ( !v24.fields._current )
              sub_1C7BD40(v19, v20);
            klass = (int32_t)v24.fields._current[1].klass;
            if ( klass > selectNum )
              LODWORD(v24.fields._current[1].klass) = klass - 1;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v24,
            (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v10 = 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v25,
        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v10 & 1) != 0 )
        SvtEqCombineListViewManager__RefrashListDisp(this, v22);
      if ( mode == 2 )
        v9 = 4;
      else
        v9 = 2;
      goto LABEL_35;
    }
LABEL_39:
    sub_1C7BD40(itemList, v6);
  }
  if ( mode != 3 )
    return;
  v9 = 5;
LABEL_35:
  SvtEqCombineListViewManager__RequestListObject_31934848(this, v9, v7);
}


void SvtEqCombineListViewManager__SetMode_31934796(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C7BA8C(&this->fields.callbackFunc2, callback);
  SvtEqCombineListViewManager__SetMode_31933764(this, mode, v6);
}


void SvtEqCombineListViewManager__SetObjectItem(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v5; // x20
  __int64 naturalAligment; // x9
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CE863C & 1) == 0 )
  {
    this = (SvtEqCombineListViewManager_o *)sub_1C7BAE8(&SvtEqCombineListViewObject_TypeInfo);
    byte_4CE863C = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1C7BD40(this, obj);
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    this = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 4;
  else
    v7 = 2;
  SvtEqCombineListViewObject__Init_31933640((SvtEqCombineListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void SvtEqCombineListViewManager__SetRecommendedSelectedMaterialList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array *recommendedUserSvtIdIdList,
        SetCombineData_o *recommendedCombineData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *v7; // x0
  __int64 v8; // x1
  void *tempMaterialUsrSvtIdList; // x0
  int v10; // w8
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x8
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t size; // w2
  int v14; // w9
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o **p_tempMtSvtList; // x20
  System_Collections_Generic_List_object__o *v16; // x21
  int32_t v17; // w2
  int v18; // w8

  if ( (byte_4CE8646 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    byte_4CE8646 = 1;
  }
  v7 = (struct System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)recommendedUserSvtIdIdList,
                                                           (const MethodInfo_31B3D0C *)Method_System_Linq_Enumerable_ToList_long___);
  this->fields.selectMaterialUsrSvtIdList = v7;
  sub_1C7BA8C(&this->fields.selectMaterialUsrSvtIdList, v7);
  tempMaterialUsrSvtIdList = this->fields.tempMaterialUsrSvtIdList;
  if ( !tempMaterialUsrSvtIdList )
    goto LABEL_13;
  v10 = *((_DWORD *)tempMaterialUsrSvtIdList + 7) + 1;
  *((_DWORD *)tempMaterialUsrSvtIdList + 6) = 0;
  *((_DWORD *)tempMaterialUsrSvtIdList + 7) = v10;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)tempMaterialUsrSvtIdList,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.selectMaterialUsrSvtIdList,
    (const MethodInfo_382703C *)Method_System_Collections_Generic_List_long__AddRange__);
  this->fields.combineData = recommendedCombineData;
  sub_1C7BA8C(&this->fields.combineData, recommendedCombineData);
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( !selectedMtSvtList_k__BackingField )
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    this->fields._selectedMtSvtList_k__BackingField = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v12;
    tempMaterialUsrSvtIdList = (void *)sub_1C7BA8C(&this->fields._selectedMtSvtList_k__BackingField, v12);
    selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
    if ( !selectedMtSvtList_k__BackingField )
      goto LABEL_13;
  }
  size = selectedMtSvtList_k__BackingField->fields._size;
  v14 = selectedMtSvtList_k__BackingField->fields._version + 1;
  selectedMtSvtList_k__BackingField->fields._size = 0;
  selectedMtSvtList_k__BackingField->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)selectedMtSvtList_k__BackingField->fields._items, 0, size, 0);
  tempMaterialUsrSvtIdList = this->fields.tempMtSvtList;
  p_tempMtSvtList = &this->fields.tempMtSvtList;
  if ( !tempMaterialUsrSvtIdList )
  {
    v16 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    *p_tempMtSvtList = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v16;
    sub_1C7BA8C(&this->fields.tempMtSvtList, v16);
    tempMaterialUsrSvtIdList = *p_tempMtSvtList;
    if ( !*p_tempMtSvtList )
      goto LABEL_13;
  }
  v17 = *((_DWORD *)tempMaterialUsrSvtIdList + 6);
  v18 = *((_DWORD *)tempMaterialUsrSvtIdList + 7) + 1;
  *((_DWORD *)tempMaterialUsrSvtIdList + 6) = 0;
  *((_DWORD *)tempMaterialUsrSvtIdList + 7) = v18;
  if ( v17 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)tempMaterialUsrSvtIdList + 2), 0, v17, 0);
    tempMaterialUsrSvtIdList = *p_tempMtSvtList;
    if ( !*p_tempMtSvtList )
LABEL_13:
      sub_1C7BD40(tempMaterialUsrSvtIdList, v8);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)tempMaterialUsrSvtIdList,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields._selectedMtSvtList_k__BackingField,
    (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
  this->fields._isOpenCheckEquipDialog_k__BackingField = 0;
}


void SvtEqCombineListViewManager__SetReleaseBtnEnable(
        SvtEqCombineListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_o *allReleaseButton; // x0
  __int64 v4; // x1

  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    sub_1C7BD40(0, isEnable);
  if ( isEnable )
    v4 = 0;
  else
    v4 = 3;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))allReleaseButton->klass->vtable._14_SetState.methodPtr)(
    allReleaseButton,
    v4,
    1,
    allReleaseButton->klass->vtable._14_SetState.method);
}


void SvtEqCombineListViewManager__SetSelectBaseSvtData(
        SvtEqCombineListViewManager_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  this->fields.baseUsrSvtData = resData;
  sub_1C7BA8C(&this->fields.baseUsrSvtData, resData);
}


void SvtEqCombineListViewManager__SetSelectMaterialList(
        SvtEqCombineListViewManager_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedItems,
        const MethodInfo *method)
{
  SetCombineData_o *v5; // x22
  struct SetCombineData_o **p_combineData; // x19
  __int64 v7; // x1
  struct System_Int64_array *combineData; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x1
  struct SetCombineData_o *v10; // x8
  System_Collections_Generic_Dictionary_long__bool__o *v11; // x20
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  SvtEqCombineListViewItem_o *current; // x21
  const MethodInfo *v15; // x1
  int64_t UserSvtId; // x0
  int64_t v17; // x1
  int64_t v18; // x29
  int v19; // w8
  System_Collections_Generic_Dictionary_long__bool__o *v20; // x0
  struct SetCombineData_o *v21; // x21
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CE8645 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
    sub_1C7BAE8(&SetCombineData_TypeInfo);
    byte_4CE8645 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v5 = (SetCombineData_o *)sub_1C7BD34(SetCombineData_TypeInfo);
  SetCombineData___ctor(v5, 0);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v5;
  sub_1C7BA8C(&this->fields.combineData, v5);
  combineData = (struct System_Int64_array *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_26;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  combineData->bounds = (Il2CppArrayBounds *)baseUsrSvtData;
  combineData = (struct System_Int64_array *)sub_1C7BA8C(&combineData->bounds, baseUsrSvtData);
  v10 = *p_combineData;
  if ( !*p_combineData )
    goto LABEL_26;
  *(_OWORD *)&v10->fields.selectSum = *(_OWORD *)&this->fields.selectSum;
  *(_QWORD *)&v10->fields.getHpAdjustVal = *(_QWORD *)&this->fields.getHpUpVal;
  v10->fields.isAdjustMax = this->fields.isAllUpMax;
  v11 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
  System_Collections_Generic_Dictionary_long__bool____ctor(
    v11,
    (const MethodInfo_34C18EC *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
  if ( !selectedItems )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)selectedItems,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    if ( !v12 )
      break;
    current = (SvtEqCombineListViewItem_o *)v24.fields._current;
    if ( !v24.fields._current )
      sub_1C7BD40(v12, v13);
    if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v24.fields._current, v13) >= 1 )
    {
      UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(current, v15);
      v17 = UserSvtId;
      if ( current->fields.isEquiped || (v18 = UserSvtId, current->fields.isUseSupportEquip) )
      {
        v19 = 1;
        v20 = v11;
        if ( !v11 )
          goto LABEL_18;
      }
      else
      {
        v19 = current->fields.isUseRecommendSupportEquip || current->fields.isUseGrandServantEquip;
        v20 = v11;
        v17 = v18;
        if ( !v11 )
LABEL_18:
          sub_1C7BD40(v20, v17);
      }
      System_Collections_Generic_Dictionary_long__bool___Add(
        v20,
        v17,
        v19 != 0,
        (const MethodInfo_34C22CC *)Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
  if ( !v11 )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_long__bool___get_Count(
         v11,
         (const MethodInfo_34C1F70 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__) <= 0 )
    return;
  v21 = *p_combineData;
  Keys = System_Collections_Generic_Dictionary_long__bool___get_Keys(
           v11,
           (const MethodInfo_34C1F80 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
  combineData = System_Linq_Enumerable__ToArray_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                  (const MethodInfo_31AF15C *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !v21
    || (v21->fields.materialUsrSvtIdList = combineData,
        sub_1C7BA8C(&v21->fields.materialUsrSvtIdList, combineData),
        (combineData = (struct System_Int64_array *)*p_combineData) == 0) )
  {
LABEL_26:
    sub_1C7BD40(combineData, v7);
  }
  combineData->m_Items[4] = (int64_t)v11;
  sub_1C7BA8C(&combineData->m_Items[4], v11);
}


void SvtEqCombineListViewManager__SetSelectedMaterialInfo(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o **p_selectedMtSvtList_k__BackingField; // x22
  __int64 tempMaterialUsrSvtIdList; // x0
  SvtEqCombineListViewItem_c *v6; // x1
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x20
  System_Collections_Generic_List_long__o *v11; // x21
  int v12; // w24
  int32_t v13; // w23
  __int64 naturalAligment; // x9
  struct System_Int64_array *items; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  SvtEqCombineListViewManager___c_c *v18; // x0
  System_Func_object__long__o *_9__142_0; // x22
  Il2CppObject *v20; // x23
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  struct System_Collections_Generic_List_long__o *v23; // x0
  int v24; // w8
  struct System_Int64_array *v25; // x0
  const MethodInfo *v26; // x2
  SvtEqCombineListViewManager_o *v27; // x0
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *v28; // x1

  if ( (byte_4CE8644 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_SvtEqCombineListViewItem__long___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1C7BAE8(&System_Func_SvtEqCombineListViewItem__long__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager___c__SetSelectedMaterialInfo_b__142_0__);
    sub_1C7BAE8(&SvtEqCombineListViewManager___c_TypeInfo);
    byte_4CE8644 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  p_selectedMtSvtList_k__BackingField = &this->fields._selectedMtSvtList_k__BackingField;
  this->fields._selectedMtSvtList_k__BackingField = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
  tempMaterialUsrSvtIdList = sub_1C7BA8C(&this->fields._selectedMtSvtList_k__BackingField, v3);
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_32;
  size = tempMtSvtList->fields._size;
  v9 = tempMtSvtList->fields._version + 1;
  tempMtSvtList->fields._size = 0;
  tempMtSvtList->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, size, 0);
  SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, (const MethodInfo *)v6);
  v11 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !SelectedMaterialList )
    goto LABEL_32;
  v12 = SelectedMaterialList->fields._size;
  if ( v12 < 1 )
  {
LABEL_20:
    tempMaterialUsrSvtIdList = (__int64)this->fields.tempMtSvtList;
    if ( tempMaterialUsrSvtIdList )
    {
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)tempMaterialUsrSvtIdList,
        (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
        (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
      tempMaterialUsrSvtIdList = (__int64)*p_selectedMtSvtList_k__BackingField;
      if ( *p_selectedMtSvtList_k__BackingField )
      {
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)tempMaterialUsrSvtIdList,
          (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
          (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
        v18 = SvtEqCombineListViewManager___c_TypeInfo;
        if ( !SvtEqCombineListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager___c_TypeInfo);
          v18 = SvtEqCombineListViewManager___c_TypeInfo;
        }
        _9__142_0 = (System_Func_object__long__o *)v18->static_fields->__9__142_0;
        if ( !_9__142_0 )
        {
          if ( !v18->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v18);
            v18 = SvtEqCombineListViewManager___c_TypeInfo;
          }
          v20 = (Il2CppObject *)v18->static_fields->__9;
          _9__142_0 = (System_Func_object__long__o *)sub_1C7BD34(System_Func_SvtEqCombineListViewItem__long__TypeInfo);
          System_Func_object__long____ctor(
            _9__142_0,
            v20,
            Method_SvtEqCombineListViewManager___c__SetSelectedMaterialInfo_b__142_0__,
            0);
          static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__142_0 = (struct System_Func_SvtEqCombineListViewItem__long__o *)_9__142_0;
          sub_1C7BA8C(&static_fields->__9__142_0, _9__142_0);
        }
        v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)SelectedMaterialList,
                                                                     (System_Func_TSource__TResult__o *)_9__142_0,
                                                                     (const MethodInfo_31A5C4C *)Method_System_Linq_Enumerable_Select_SvtEqCombineListViewItem__long___);
        v23 = (struct System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                                  v22,
                                                                  (const MethodInfo_31B3D0C *)Method_System_Linq_Enumerable_ToList_long___);
        this->fields.selectMaterialUsrSvtIdList = v23;
        sub_1C7BA8C(&this->fields.selectMaterialUsrSvtIdList, v23);
        tempMaterialUsrSvtIdList = (__int64)this->fields.tempMaterialUsrSvtIdList;
        if ( tempMaterialUsrSvtIdList )
        {
          v24 = *(_DWORD *)(tempMaterialUsrSvtIdList + 28) + 1;
          *(_DWORD *)(tempMaterialUsrSvtIdList + 24) = 0;
          *(_DWORD *)(tempMaterialUsrSvtIdList + 28) = v24;
          System_Collections_Generic_List_long___AddRange(
            (System_Collections_Generic_List_long__o *)tempMaterialUsrSvtIdList,
            (System_Collections_Generic_IEnumerable_T__o *)this->fields.selectMaterialUsrSvtIdList,
            (const MethodInfo_382703C *)Method_System_Collections_Generic_List_long__AddRange__);
          if ( v11 )
          {
            v25 = System_Collections_Generic_List_long___ToArray(
                    v11,
                    (const MethodInfo_38288E8 *)Method_System_Collections_Generic_List_long__ToArray__);
            this->fields.highRarityList = v25;
            sub_1C7BA8C(&this->fields.highRarityList, v25);
            v27 = this;
            v28 = SelectedMaterialList;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_32:
    sub_1C7BD40(tempMaterialUsrSvtIdList, v6);
  }
  v13 = 0;
  while ( 1 )
  {
    tempMaterialUsrSvtIdList = (__int64)this->fields.itemList;
    if ( !tempMaterialUsrSvtIdList )
      goto LABEL_32;
    tempMaterialUsrSvtIdList = (__int64)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)tempMaterialUsrSvtIdList,
                                          v13,
                                          (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !tempMaterialUsrSvtIdList )
      goto LABEL_32;
    v6 = SvtEqCombineListViewItem_TypeInfo;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)tempMaterialUsrSvtIdList + 304LL) < (unsigned int)naturalAligment
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)tempMaterialUsrSvtIdList + 200LL)
                                        + 8 * naturalAligment
                                        - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( *(int *)(tempMaterialUsrSvtIdList + 164) >= 3 )
    {
      tempMaterialUsrSvtIdList = SvtEqCombineListViewItem__get_UserSvtId(
                                   (SvtEqCombineListViewItem_o *)tempMaterialUsrSvtIdList,
                                   (const MethodInfo *)SvtEqCombineListViewItem_TypeInfo);
      if ( !v11 )
        goto LABEL_32;
      items = v11->fields._items;
      v16 = Method_System_Collections_Generic_List_long__Add__;
      ++v11->fields._version;
      if ( !items )
        goto LABEL_32;
      v17 = v11->fields._size;
      v6 = (SvtEqCombineListViewItem_c *)tempMaterialUsrSvtIdList;
      if ( (unsigned int)v17 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v11,
          tempMaterialUsrSvtIdList,
          *(const MethodInfo_3826E30 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v11->fields._size = v17 + 1;
        items->m_Items[v17] = tempMaterialUsrSvtIdList;
      }
    }
    if ( v12 == ++v13 )
      goto LABEL_20;
  }
  v27 = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(tempMaterialUsrSvtIdList);
LABEL_31:
  SvtEqCombineListViewManager__SetSelectMaterialList(v27, v28, v26);
}


void SvtEqCombineListViewManager__SetSelectedSvtList(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x1

  tempMtSvtList = this->fields.tempMtSvtList;
  if ( tempMtSvtList )
  {
    this->fields._selectedMtSvtList_k__BackingField = tempMtSvtList;
    sub_1C7BA8C(&this->fields._selectedMtSvtList_k__BackingField, tempMtSvtList);
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__SetServantList(
        SvtEqCombineListViewManager_o *this,
        int32_t type,
        EventUpValSetupInfo_o *setupInfo,
        EventUpValSetupInfo_o *finishSetupInfo,
        const MethodInfo *method)
{
  __int64 emptyListNoticeLabel; // x0
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x25
  UserGameEntity_o *SelfUserGame; // x22
  int64_t qp; // x8
  UILabel_o *haveQpLabel; // x24
  Il2CppObject *v16; // x0
  UILabel_o *nextExpLabel; // x24
  Il2CppObject *v18; // x0
  UserServantEntity_array *ServantEquipList; // x29
  const MethodInfo *v20; // x2
  int v21; // w20
  int32_t FriendShipSvtEquipNum; // w0
  System_Collections_Generic_List_object__o *v23; // x26
  System_Collections_Generic_List_object__o *v24; // x27
  int max_length; // w8
  __int64 v26; // x21
  UserServantEntity_o **m_Items; // x22
  UserServantEntity_o *v28; // x28
  __int128 v29; // q0
  UserServantEntity_array *v30; // x24
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v32; // q0
  __int64 v33; // x29
  bool v34; // zf
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  UILabel_o *v39; // x26
  Il2CppObject *v40; // x0
  System_Collections_Generic_List_object__o *v41; // x25
  System_Collections_Generic_List_object__o *v42; // x0
  const MethodInfo *v43; // x2
  int32_t v44; // w24
  __int128 v45; // q0
  struct UserServantEntity_o *v46; // x8
  __int128 v47; // q0
  int v48; // w20
  int32_t v49; // w0
  int v50; // w20
  UILabel_o *v51; // x25
  Il2CppObject *v52; // x0
  int v53; // w24
  int v54; // w8
  unsigned int v55; // w25
  Il2CppClass **v56; // x20
  Il2CppClass *v57; // x8
  UserServantEntity_o **v58; // x20
  Il2CppClass *v59; // t1
  Il2CppType byval_arg; // q0
  __int64 v61; // x26
  _BOOL4 v62; // w28
  int32_t v63; // w23
  int32_t v64; // w27
  int64_t Item; // x8
  UserServantEntity_array *v66; // x21
  UserServantEntity_o *v67; // x29
  UserServantEntity_o *v68; // x20
  int64_t favoriteUserSvtId; // x22
  SvtEqCombineListViewItem_o *v70; // x27
  struct System_Collections_Generic_List_long__o *selectMaterialUsrSvtIdList; // x8
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8
  UILabel_o *servantInfoLabel; // x20
  System_String_o *v77; // x21
  Il2CppObject *v78; // x22
  Il2CppObject *v79; // x0
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x1
  const MethodInfo *v82; // [xsp+8h] [xbp-168h]
  int v83; // [xsp+1Ch] [xbp-154h]
  UserGameEntity_o *v86; // [xsp+30h] [xbp-140h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+40h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+60h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+80h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+A0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+C0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+E0h] [xbp-90h] BYREF
  int32_t svtEquipKeep; // [xsp+100h] [xbp-70h] BYREF
  float barExp; // [xsp+104h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+108h] [xbp-68h] BYREF

  if ( (byte_4CE862F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor___78759040);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25348/*"{0:N0}"*/);
    sub_1C7BAE8(&StringLiteral_12536/*"SUM_INFO"*/);
    byte_4CE862F = 1;
  }
  *(_QWORD *)lateExp = 0;
  barExp = 0.0;
  emptyListNoticeLabel = (__int64)this->fields.emptyListNoticeLabel;
  if ( !emptyListNoticeLabel )
    goto LABEL_109;
  emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)emptyListNoticeLabel,
                                    0);
  if ( !emptyListNoticeLabel )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0);
  sort = this->fields.sort;
  this->fields.itemType = type;
  if ( !sort )
    goto LABEL_109;
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
    sub_1C7BA8C(&this->fields.seed, normalSizeSeed);
  }
  emptyListNoticeLabel = (__int64)this->fields.sort;
  if ( !emptyListNoticeLabel )
    goto LABEL_109;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  emptyListNoticeLabel = (__int64)ListViewSort__GetScaleKindSpriteName(
                                    (ListViewSort_o *)emptyListNoticeLabel,
                                    this->fields.scaleType,
                                    0);
  if ( !scaleChangeButtonSprite )
    goto LABEL_109;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)emptyListNoticeLabel, 0);
  emptyListNoticeLabel = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_109;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)emptyListNoticeLabel,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1C7BA8C(&this->fields.userServantMaster, MasterData_object);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !SelfUserGame )
    goto LABEL_109;
  qp = SelfUserGame->fields.qp;
  this->fields.userQP = qp;
  haveQpLabel = this->fields.haveQpLabel;
  v93.fields.currentCryptoKey = qp;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v93);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25348/*"{0:N0}"*/, v16, 0);
  if ( !haveQpLabel )
    goto LABEL_109;
  UILabel__set_text(haveQpLabel, (System_String_o *)emptyListNoticeLabel, 0);
  *(_QWORD *)&this->fields.getHpUpVal = 0;
  this->fields.isAllUpMax = 0;
  *(_OWORD *)&this->fields.selectSum = 0u;
  lateExp[0] = 0;
  nextExpLabel = this->fields.nextExpLabel;
  svtEquipKeep = 0;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25348/*"{0:N0}"*/, v18, 0);
  if ( !nextExpLabel )
    goto LABEL_109;
  UILabel__set_text(nextExpLabel, (System_String_o *)emptyListNoticeLabel, 0);
  v86 = SelfUserGame;
  if ( type )
  {
    v83 = 0;
    ServantEquipList = 0;
  }
  else
  {
    emptyListNoticeLabel = (__int64)this->fields.levelUpInfoImg;
    if ( !emptyListNoticeLabel )
      goto LABEL_109;
    emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)emptyListNoticeLabel,
                                      0);
    if ( !emptyListNoticeLabel )
      goto LABEL_109;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0);
    emptyListNoticeLabel = (__int64)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_109;
    emptyListNoticeLabel = (__int64)UserServantMaster__getServantEquipList(
                                      (UserServantMaster_o *)emptyListNoticeLabel,
                                      0);
    if ( !emptyListNoticeLabel )
      goto LABEL_109;
    v21 = *(_DWORD *)(emptyListNoticeLabel + 24);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    FriendShipSvtEquipNum = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
                              (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
                              (UserServantEntity_array *)emptyListNoticeLabel,
                              v20);
    v83 = v21 - FriendShipSvtEquipNum;
    if ( FriendShipSvtEquipNum <= 0 && v83 <= 0 )
    {
      emptyListNoticeLabel = (__int64)this->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_109;
      emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0);
      if ( !emptyListNoticeLabel )
        goto LABEL_109;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0);
    }
    v23 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58975984(
      v23,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_383E6F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78759040);
    v24 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v24,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_76;
    max_length = ServantEquipList->max_length;
    if ( max_length >= 1 )
    {
      v26 = 0;
      m_Items = ServantEquipList->m_Items;
      while ( (unsigned int)v26 < max_length )
      {
        v28 = m_Items[v26];
        if ( !v28 )
          goto LABEL_109;
        v29 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
        v30 = ServantEquipList;
        *(_OWORD *)&v93.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v93.fields.fakeValue = v29;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v92 = v93;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v92, 0);
        baseUsrSvtData = this->fields.baseUsrSvtData;
        if ( !baseUsrSvtData )
          goto LABEL_109;
        v32 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        v33 = emptyListNoticeLabel;
        *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v91.fields.fakeValue = v32;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v91, 0);
        v34 = v33 == emptyListNoticeLabel;
        ServantEquipList = v30;
        if ( v34 )
        {
          if ( !v24 )
            goto LABEL_109;
          items = v24->fields._items;
          v36 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v24->fields._version;
          if ( !items )
            goto LABEL_109;
          size = v24->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              (Il2CppObject *)v28,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v24->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v28;
            emptyListNoticeLabel = sub_1C7BA8C(v38 + 4, v28);
          }
          if ( !v23 )
            goto LABEL_109;
          emptyListNoticeLabel = System_Collections_Generic_List_object___Remove(
                                   v23,
                                   (Il2CppObject *)v28,
                                   (const MethodInfo_3840324 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        max_length = v30->max_length;
        if ( (int)++v26 >= max_length )
          goto LABEL_48;
      }
LABEL_110:
      sub_1C7BD48(emptyListNoticeLabel);
    }
LABEL_48:
    if ( !v24 )
      goto LABEL_109;
    System_Collections_Generic_List_object___AddRange(
      v24,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___ToArray(
                                      v24,
                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_109;
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    UserServantEntity__getExpInfo(this->fields.baseUsrSvtData, &lateExp[1], lateExp, &barExp, 0);
    v39 = this->fields.nextExpLabel;
    LODWORD(v93.fields.currentCryptoKey) = lateExp[0];
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
    emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25348/*"{0:N0}"*/, v40, 0);
    if ( !v39 )
      goto LABEL_109;
    UILabel__set_text(v39, (System_String_o *)emptyListNoticeLabel, 0);
  }
  if ( type != 1 )
  {
    if ( !ServantEquipList )
      goto LABEL_109;
LABEL_76:
    v53 = 0;
    goto LABEL_77;
  }
  emptyListNoticeLabel = (__int64)*p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_109;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)emptyListNoticeLabel, 0);
  v41 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58975984(
    v41,
    (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
    (const MethodInfo_383E6F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78759040);
  v42 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( this->fields.baseUsrSvtData )
  {
    if ( !v41 )
      goto LABEL_109;
    if ( v41->fields._size >= 1 )
    {
      v44 = 0;
      while ( 1 )
      {
        emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                          v41,
                                          v44,
                                          (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !emptyListNoticeLabel )
          break;
        v45 = *(_OWORD *)(emptyListNoticeLabel + 32);
        *(_OWORD *)&v93.fields.currentCryptoKey = *(_OWORD *)(emptyListNoticeLabel + 16);
        *(_OWORD *)&v93.fields.fakeValue = v45;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v90 = v93;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v90, 0);
        v46 = this->fields.baseUsrSvtData;
        if ( !v46 )
          break;
        v47 = *(_OWORD *)&v46->fields.id.fields.fakeValue;
        *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&v46->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v89.fields.fakeValue = v47;
        if ( emptyListNoticeLabel == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v89, 0) )
          System_Collections_Generic_List_object___RemoveAt(
            v41,
            v44,
            (const MethodInfo_38405D0 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
        if ( ++v44 >= v41->fields._size )
          goto LABEL_65;
      }
LABEL_109:
      sub_1C7BD40(emptyListNoticeLabel, *(_QWORD *)&type);
    }
LABEL_65:
    emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___ToArray(
                                      v41,
                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
  }
  if ( !ServantEquipList )
    goto LABEL_109;
  v48 = ServantEquipList->max_length;
  v49 = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
          (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
          ServantEquipList,
          v43);
  v50 = v48 - v49;
  if ( v49 <= 0 && v50 <= 0 )
  {
    emptyListNoticeLabel = (__int64)this->fields.emptyListNoticeLabel;
    if ( !emptyListNoticeLabel )
      goto LABEL_109;
    emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)emptyListNoticeLabel,
                                      0);
    if ( !emptyListNoticeLabel )
      goto LABEL_109;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0);
  }
  emptyListNoticeLabel = (__int64)this->fields.baseUsrSvtData;
  v83 = v50;
  if ( !emptyListNoticeLabel )
    goto LABEL_109;
  UserServantEntity__getExpInfo((UserServantEntity_o *)emptyListNoticeLabel, &lateExp[1], lateExp, &barExp, 0);
  v51 = this->fields.nextExpLabel;
  LODWORD(v93.fields.currentCryptoKey) = lateExp[0];
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25348/*"{0:N0}"*/, v52, 0);
  if ( !v51 )
    goto LABEL_109;
  UILabel__set_text(v51, (System_String_o *)emptyListNoticeLabel, 0);
  v53 = 1;
LABEL_77:
  v54 = ServantEquipList->max_length;
  if ( v54 >= 1 )
  {
    v55 = 0;
    while ( v55 < v54 )
    {
      v56 = &ServantEquipList->obj.klass + (int)v55;
      v59 = v56[4];
      v58 = (UserServantEntity_o **)(v56 + 4);
      v57 = v59;
      if ( !v59 )
        goto LABEL_109;
      byval_arg = v57->_1.byval_arg;
      *(_OWORD *)&v93.fields.currentCryptoKey = *(_OWORD *)&v57->_1.name;
      *(Il2CppType *)&v93.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v88 = v93;
      emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v88, 0);
      v61 = emptyListNoticeLabel;
      if ( v53
        && (emptyListNoticeLabel = BasicHelper__IsNullOrEmpty(
                                     (System_Collections_ICollection_o *)this->fields.selectMaterialUsrSvtIdList,
                                     0),
            (emptyListNoticeLabel & 1) == 0) )
      {
        emptyListNoticeLabel = (__int64)this->fields.selectMaterialUsrSvtIdList;
        if ( !emptyListNoticeLabel )
          goto LABEL_109;
        v63 = 0;
        v62 = 0;
        v64 = 0;
        while ( v64 < *(_DWORD *)(emptyListNoticeLabel + 24) )
        {
          Item = System_Collections_Generic_List_long___get_Item(
                   (System_Collections_Generic_List_long__o *)emptyListNoticeLabel,
                   v64,
                   (const MethodInfo_3826B40 *)Method_System_Collections_Generic_List_long__get_Item__);
          emptyListNoticeLabel = (__int64)this->fields.selectMaterialUsrSvtIdList;
          if ( Item == v61 )
          {
            v62 = 1;
            v63 = v64;
          }
          ++v64;
          if ( !emptyListNoticeLabel )
            goto LABEL_109;
        }
      }
      else
      {
        v62 = 0;
        v63 = 0;
      }
      if ( v55 >= LODWORD(ServantEquipList->max_length) )
        break;
      v66 = ServantEquipList;
      v67 = *v58;
      v68 = this->fields.baseUsrSvtData;
      favoriteUserSvtId = v86->fields.favoriteUserSvtId;
      v70 = (SvtEqCombineListViewItem_o *)sub_1C7BD34(SvtEqCombineListViewItem_TypeInfo);
      SvtEqCombineListViewItem___ctor(
        v70,
        type,
        v55,
        v67,
        v61 == favoriteUserSvtId,
        v68,
        v62,
        setupInfo,
        finishSetupInfo,
        v82);
      if ( (v53 & v62) == 1 )
      {
        if ( !v70 )
          goto LABEL_109;
        v70->fields.selectNum = v63;
        selectMaterialUsrSvtIdList = this->fields.selectMaterialUsrSvtIdList;
        ++this->fields.selectSum;
        if ( !selectMaterialUsrSvtIdList )
          goto LABEL_109;
        if ( v63 == selectMaterialUsrSvtIdList->fields._size - 1 )
          v70->fields.isLastSelectMaterial = 1;
      }
      emptyListNoticeLabel = (__int64)this->fields.itemList;
      if ( !emptyListNoticeLabel )
        goto LABEL_109;
      v72 = *(_QWORD *)(emptyListNoticeLabel + 16);
      v73 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(emptyListNoticeLabel + 28);
      if ( !v72 )
        goto LABEL_109;
      ServantEquipList = v66;
      v74 = *(int *)(emptyListNoticeLabel + 24);
      if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)emptyListNoticeLabel,
          (Il2CppObject *)v70,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = v72 + 8 * v74;
        *(_DWORD *)(emptyListNoticeLabel + 24) = v74 + 1;
        *(_QWORD *)(v75 + 32) = v70;
        emptyListNoticeLabel = sub_1C7BA8C(v75 + 32, v70);
      }
      v54 = v66->max_length;
      if ( (int)++v55 >= v54 )
        goto LABEL_105;
    }
    goto LABEL_110;
  }
LABEL_105:
  SvtEqCombineListViewManager__RefrashListDisp(this, *(const MethodInfo **)&type);
  servantInfoLabel = this->fields.servantInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_12536/*"SUM_INFO"*/, 0);
  LODWORD(v93.fields.currentCryptoKey) = v83;
  v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
  svtEquipKeep = v86->fields.svtEquipKeep;
  v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  emptyListNoticeLabel = (__int64)System_String__Format_64218220(v77, v78, v79, 0);
  if ( !servantInfoLabel )
    goto LABEL_109;
  UILabel__set_text(servantInfoLabel, (System_String_o *)emptyListNoticeLabel, 0);
  SvtEqCombineListViewManager__SetMaterialSvtInfo(this, v80);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  SvtEqCombineListViewManager__SetFilterButtonImage(this, v81);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
}


void SvtEqCombineListViewManager__SetSortButtonImage(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4CE8658 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17611/*"btn_sort_up"*/);
    sub_1C7BAE8(&StringLiteral_17711/*"btn_txt_up"*/);
    sub_1C7BAE8(&StringLiteral_17662/*"btn_txt_new"*/);
    sub_1C7BAE8(&StringLiteral_17652/*"btn_txt_down"*/);
    sub_1C7BAE8(&StringLiteral_17669/*"btn_txt_old"*/);
    sub_1C7BAE8(&StringLiteral_17608/*"btn_sort_down"*/);
    byte_4CE8658 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_43;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_43;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
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
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17669/*"btn_txt_old"*/ : &StringLiteral_17662/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      v12 = (System_String_o **)&StringLiteral_17608/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17611/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17711/*"btn_txt_up"*/ : &StringLiteral_17652/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      v12 = (System_String_o **)&StringLiteral_17611/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17608/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v17 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(sort, this->fields.alignedBonusFilterInfos, 0, 0);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)sort, 0);
        sort = (ListViewSort_o *)this->fields.bonusFilterKindLabel;
        if ( sort )
        {
          UIWidget__set_width((UIWidget_o *)sort, 144, 0);
          sort = (ListViewSort_o *)this->fields.bonusFilterKindLabel;
          if ( sort )
          {
            ((void (__fastcall *)(ListViewSort_o *, void *))sort->klass[2]._1.parent)(
              sort,
              sort->klass[2]._1.generic_class);
            sort = (ListViewSort_o *)this->fields.bonusFilterKindLabel;
            if ( sort )
            {
              UILabel__SetCondensedScale((UILabel_o *)sort, 144, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_43:
    sub_1C7BD40(sort, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__SetStatusKind(
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
  if ( (byte_4CE862C & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17730/*"button_allchoice_reg"*/);
    sub_1C7BAE8(&StringLiteral_17733/*"button_alllock_unreg"*/);
    sub_1C7BAE8(&StringLiteral_11706/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C7BAE8(&StringLiteral_11707/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C7BAE8(&StringLiteral_17746/*"button_select_reg"*/);
    sub_1C7BAE8(&StringLiteral_7229/*"HEADER_MSG_SVTEQ_MATERIAL"*/);
    sub_1C7BAE8(&StringLiteral_7228/*"HEADER_MSG_SVTEQ_BASE"*/);
    sub_1C7BAE8(&StringLiteral_17747/*"button_select_unreg"*/);
    sub_1C7BAE8(&StringLiteral_17732/*"button_alllock_reg"*/);
    sub_1C7BAE8(&StringLiteral_17731/*"button_allchoice_unreg"*/);
    byte_4CE862C = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = v3;
  if ( !statusTabButton )
    goto LABEL_51;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  UnityEngine_Behaviour__set_enabled(statusTabButton, v3 != 0, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v6 = &StringLiteral_17746/*"button_select_reg"*/;
  if ( v3 )
    v6 = &StringLiteral_17747/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v6, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                 statusTabButton,
                                                 0,
                                                 0,
                                                 statusTabButton->klass[1]._1.implementedInterfaces);
  v7 = this->fields.statusTabButton;
  if ( !v7 )
    goto LABEL_51;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0);
  UICommonButton__SetColliderEnable(v7, enabled, 0, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  UnityEngine_Behaviour__set_enabled(statusTabButton, v3 != 1, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v9 = &StringLiteral_17732/*"button_alllock_reg"*/;
  if ( v3 != 1 )
    v9 = &StringLiteral_17733/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                 statusTabButton,
                                                 0,
                                                 0,
                                                 statusTabButton->klass[1]._1.implementedInterfaces);
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_51;
  v11 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
  UICommonButton__SetColliderEnable(lockTabButton, v11, 0, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  UnityEngine_Behaviour__set_enabled(statusTabButton, v3 != 2, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v12 = &StringLiteral_17730/*"button_allchoice_reg"*/;
  if ( v3 != 2 )
    v12 = &StringLiteral_17731/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v12, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton
    || (statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                       statusTabButton,
                                                       0,
                                                       0,
                                                       statusTabButton->klass[1]._1.implementedInterfaces),
        (choiceTabButton = this->fields.choiceTabButton) == 0) )
  {
LABEL_51:
    sub_1C7BD40(statusTabButton, *(_QWORD *)&modeKind);
  }
  v14 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
  UICommonButton__SetColliderEnable(choiceTabButton, v14, 0, 0);
  currentType = this->fields.currentType;
  if ( currentType == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = &StringLiteral_7229/*"HEADER_MSG_SVTEQ_MATERIAL"*/;
  }
  else
  {
    if ( currentType )
      goto LABEL_34;
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = &StringLiteral_7228/*"HEADER_MSG_SVTEQ_BASE"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v17, 0);
  if ( !combineInfoMsgLb )
    goto LABEL_51;
  UILabel__set_text(combineInfoMsgLb, (System_String_o *)statusTabButton, 0);
LABEL_34:
  v18 = this->fields.modeKind;
  if ( v18 == 2 )
  {
    v19 = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = &StringLiteral_11706/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
  }
  else
  {
    if ( v18 != 1 )
      goto LABEL_44;
    v19 = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = &StringLiteral_11707/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v20, 0);
  if ( !v19 )
    goto LABEL_51;
  UILabel__set_text(v19, (System_String_o *)statusTabButton, 0);
LABEL_44:
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.combineInfoMsgLb;
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    if ( this->fields.currentType )
      *(_QWORD *)&modeKind = 12;
    else
      *(_QWORD *)&modeKind = 20;
  }
  else
  {
    *(_QWORD *)&modeKind = 14;
  }
  if ( !statusTabButton )
    goto LABEL_51;
  UILabel__set_fontSize((UILabel_o *)statusTabButton, modeKind, 0);
}


void SvtEqCombineListViewManager__StatusRequest(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1
  System_Int64_array *v10; // x1
  System_Int64_array *v11; // x2
  bool v12; // w4
  bool v13; // w5
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CE8660 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SvtEqCombineListViewManager_EndStatusSync__);
    byte_4CE8660 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v15 = 0;
  choiceList = 0;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( SvtEqCombineListViewManager__GetSwapChoiceList(this, &choiceList, &v15, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1C7BA8C(&this->fields.requestCallback, callback);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v14,
                         (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v11 = v15;
        v10 = choiceList;
        v13 = 1;
        v12 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1C7BD40(Request_object, v9);
    }
  }
  else if ( modeKind == 1 && SvtEqCombineListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1C7BA8C(&this->fields.requestCallback, callback);
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndStatusSync__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v7,
                       (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v11 = unlockList;
      v10 = lockList;
      v12 = 1;
      v13 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v10, v11, 0, v12, v13, 0);
      return;
    }
    goto LABEL_19;
  }
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}


void SvtEqCombineListViewManager___SetMaterialSvtInfo_b__118_1(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewItem_o *x,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x20
  System_Collections_Generic_List_long__o *selectMaterialUsrSvtIdList; // x20

  v4 = this;
  if ( (byte_4CE866A & 1) == 0 )
  {
    this = (SvtEqCombineListViewManager_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Contains__);
    byte_4CE866A = 1;
  }
  if ( !x
    || (selectMaterialUsrSvtIdList = v4->fields.selectMaterialUsrSvtIdList,
        this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewItem__get_UserSvtId(x, (const MethodInfo *)x),
        !selectMaterialUsrSvtIdList) )
  {
    sub_1C7BD40(this, x);
  }
  if ( System_Collections_Generic_List_long___Contains(
         selectMaterialUsrSvtIdList,
         (int64_t)this,
         (const MethodInfo_38271A8 *)Method_System_Collections_Generic_List_long__Contains__) )
  {
    x->fields.isCanNotLock = 1;
  }
}


void SvtEqCombineListViewManager__add_callbackFunc(
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

  if ( (byte_4CE8622 & 1) == 0 )
  {
    sub_1C7BAE8(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo);
    byte_4CE8622 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SvtEqCombineListViewManager_CallbackFunc_c *)v7->klass != SvtEqCombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(v7);
  SvtEqCombineListViewManager__remove_callbackFunc(v10, v11, v12);
}


void SvtEqCombineListViewManager__add_callbackFunc2(
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

  if ( (byte_4CE8624 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CE8624 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(v7);
  SvtEqCombineListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *SvtEqCombineListViewManager__get_ClippingObjectList(
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
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CE862A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE862A = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C7BD40(0, v10);
      Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(
                                 (SvtEqCombineListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C7BD40(0, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_44341312((ListViewManager_o *)this, Item, 0);
        if ( v14 )
        {
          if ( !v3 )
            sub_1C7BD40(v14, v15);
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C7BD40(v14, v15);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C7BD40(Item, v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C7BD40(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1C7BA8C(v19 + 4, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v3;
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *SvtEqCombineListViewManager__get_ObjectList(
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
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CE8629 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8629 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C7BD40(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C7BD40(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C7BA8C(v14 + 4, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v3;
}


int32_t SvtEqCombineListViewManager__get_getModeKind(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.modeKind;
}


bool SvtEqCombineListViewManager__get_isOpenCheckEquipDialog(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._isOpenCheckEquipDialog_k__BackingField;
}


System_Collections_Generic_List_SvtEqCombineListViewItem__o *SvtEqCombineListViewManager__get_selectedMtSvtList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._selectedMtSvtList_k__BackingField;
}


void SvtEqCombineListViewManager__remove_callbackFunc(
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

  if ( (byte_4CE8623 & 1) == 0 )
  {
    sub_1C7BAE8(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo);
    byte_4CE8623 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SvtEqCombineListViewManager_CallbackFunc_c *)v7->klass != SvtEqCombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(v7);
  SvtEqCombineListViewManager__add_callbackFunc2(v10, v11, v12);
}


void SvtEqCombineListViewManager__remove_callbackFunc2(
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

  if ( (byte_4CE8625 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CE8625 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SvtEqCombineListViewManager_o *)sub_1C7C0DC(v7);
  SvtEqCombineListViewManager__get_isOpenCheckEquipDialog(v10, v11);
}


void SvtEqCombineListViewManager__set_isOpenCheckEquipDialog(
        SvtEqCombineListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isOpenCheckEquipDialog_k__BackingField = value;
}


void SvtEqCombineListViewManager__set_selectedMtSvtList(
        SvtEqCombineListViewManager_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *value,
        const MethodInfo *method)
{
  this->fields._selectedMtSvtList_k__BackingField = value;
  sub_1C7BA8C(&this->fields._selectedMtSvtList_k__BackingField, value);
}


void SvtEqCombineListViewManager_CallbackFunc___ctor(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C7BA8C(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA843C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA83E4;
}


System_IAsyncResult_o *SvtEqCombineListViewManager_CallbackFunc__BeginInvoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = kind;
  if ( (byte_4CE866B & 1) == 0 )
  {
    sub_1C7BAE8(&SvtEqCombineListViewManager_ResultKind_TypeInfo);
    byte_4CE866B = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(SvtEqCombineListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = list;
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v11, callback, object);
}


void SvtEqCombineListViewManager_CallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void SvtEqCombineListViewManager_CallbackFunc__Invoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, System_Int32_array *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    list,
    this->fields.method);
}


void SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C7BA8C(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA84B4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA846C;
}


System_IAsyncResult_o *SvtEqCombineListViewManager_RequestCallbackFunc__BeginInvoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4CE866C & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CE866C = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void SvtEqCombineListViewManager_RequestCallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void SvtEqCombineListViewManager_RequestCallbackFunc__Invoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}


void SvtEqCombineListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CE866D & 1) == 0 )
  {
    sub_1C7BAE8(&SvtEqCombineListViewManager___c_TypeInfo);
    byte_4CE866D = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(SvtEqCombineListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SvtEqCombineListViewManager___c_TypeInfo->static_fields->__9 = (struct SvtEqCombineListViewManager___c_o *)v1;
  sub_1C7BA8C(SvtEqCombineListViewManager___c_TypeInfo->static_fields, v1);
}


void SvtEqCombineListViewManager___c___ctor(SvtEqCombineListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t SvtEqCombineListViewManager___c___GetSelectedMaterialList_b__141_0(
        SvtEqCombineListViewManager___c_o *this,
        SvtEqCombineListViewItem_o *a,
        SvtEqCombineListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C7BD40(this, a);
  return a->fields.selectNum - b->fields.selectNum;
}


SvtEqCombineListViewItem_o *SvtEqCombineListViewManager___c___SetMaterialSvtInfo_b__118_0(
        SvtEqCombineListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x9
  SvtEqCombineListViewManager___c_o *v6; // x0
  SvtEqCombineListViewItem_o *v7; // x1
  SvtEqCombineListViewItem_o *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_4CE866E & 1) == 0 )
  {
    sub_1C7BAE8(&SvtEqCombineListViewItem_TypeInfo);
    byte_4CE866E = 1;
  }
  if ( !item )
    return (SvtEqCombineListViewItem_o *)item;
  naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (SvtEqCombineListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    return (SvtEqCombineListViewItem_o *)item;
  }
  v6 = (SvtEqCombineListViewManager___c_o *)sub_1C7C0DC(item);
  return (SvtEqCombineListViewItem_o *)SvtEqCombineListViewManager___c___GetSelectedMaterialList_b__141_0(
                                         v6,
                                         v7,
                                         v8,
                                         v9);
}


int64_t SvtEqCombineListViewManager___c___SetSelectedMaterialInfo_b__142_0(
        SvtEqCombineListViewManager___c_o *this,
        SvtEqCombineListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return SvtEqCombineListViewItem__get_UserSvtId(x, (const MethodInfo *)x);
}