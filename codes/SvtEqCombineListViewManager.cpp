void SvtEqCombineListViewManager___cctor(const MethodInfo *method)
{
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  __int64 v2; // x1

  if ( (byte_4C3D0EA & 1) == 0 )
  {
    sub_1C37058(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_13192/*"SvtEqCombine"*/);
    byte_4C3D0EA = 1;
  }
  static_fields = SvtEqCombineListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->COLOR_VAL = 0x13EC00000LL;
  v2 = StringLiteral_13192/*"SvtEqCombine"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_13192/*"SvtEqCombine"*/;
  sub_1C36FFC(&static_fields->SORT_SAVE_KEY, v2);
  SvtEqCombineListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void SvtEqCombineListViewManager___ctor(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_long__o *v4; // x20

  if ( (byte_4C3D0E9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_1C37058(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C3D0E9 = 1;
  }
  this->fields.selectMax = 20;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  this->fields.tempMtSvtList = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
  sub_1C36FFC(&this->fields.tempMtSvtList, v3);
  v4 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v4,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.tempMaterialUsrSvtIdList = v4;
  sub_1C36FFC(&this->fields.tempMaterialUsrSvtIdList, v4);
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

  if ( (byte_4C3D0E7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0E7 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0 )
  {
    sub_1C372B4(itemSortList);
  }
  naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    HIDWORD(itemSortList[6].fields._items) = -1;
  }
  else
  {
    v7 = (SvtEqCombineListViewManager_o *)sub_1C37574(itemSortList);
    SvtEqCombineListViewManager__GetFocusItemIndex(v7, v8, v9, v10, v11);
  }
}


int32_t SvtEqCombineListViewManager__CheckCompareQp(
        SvtEqCombineListViewManager_o *this,
        int32_t nowCombineQp,
        const MethodInfo *method)
{
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

  if ( (byte_4C3D0B2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0B2 = 1;
  }
  if ( !this->fields.selectSum )
    return nowCombineQp;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_1C372B4(itemList);
  size = itemList->fields._size;
  if ( size < 1 )
    return nowCombineQp;
  v7 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( nowCombineQp < UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)itemList, 0) )
      {
        itemList = (System_Collections_Generic_List_object__o *)v8[3].monitor;
        if ( !itemList )
          goto LABEL_18;
        nowCombineQp = UserServantEntity__getCombineQpSvtEq((UserServantEntity_o *)itemList, 0);
      }
    }
    if ( size == ++v7 )
      return nowCombineQp;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_18;
  }
  v11 = (SvtEqCombineListViewManager_o *)sub_1C37574(itemList);
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
  SvtEqCombineListViewItem_o *current; // x21
  __int64 naturalAligment; // x9
  UserServantEntity_o *baseUsrSvtData; // x0
  const MethodInfo *v12; // x1
  UserServantEntity_o *v13; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v16; // x0
  float v17; // s8
  float v18; // s0
  unsigned int v19; // w8
  struct UserServantEntity_o *v20; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  __int64 v22; // x22
  __int64 v23; // x23
  int32_t v24; // w8
  int32_t v25; // w23
  int v26; // w22
  const MethodInfo *v27; // x4
  int32_t LevelMax; // w21
  int32_t v29; // w8
  int32_t v30; // w22
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+40h] [xbp-80h] BYREF
  int32_t increLv[2]; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4C3D0B4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0B4 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  *(_QWORD *)increLv = 0;
  memset(&v32, 0, sizeof(v32));
  *isMaxLvSelected = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v6 = 0;
  v7 = 0;
  v33 = v31;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v33,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v8 & 1) == 0 )
      break;
    current = (SvtEqCombineListViewItem_o *)v33.fields._current;
    if ( !v33.fields._current )
      goto LABEL_49;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( v33.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SvtEqCombineListViewItem_c *)v33.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      v8 = sub_1C37574(v33.fields._current);
LABEL_49:
      sub_1C372B4(v8);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v33.fields._current, 0) || current->fields.dragSelectNum >= 1 )
    {
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        sub_1C372B4(0);
      if ( !UserServantEntity__isLevelMax(baseUsrSvtData, 0) )
        goto LABEL_16;
      v13 = this->fields.baseUsrSvtData;
      if ( !v13 )
        sub_1C372B4(0);
      if ( UserServantEntity__isLevelMax(v13, 0) && current->fields.isLimitCntTarget )
      {
LABEL_16:
        v7 += current->fields.materialExp;
        v6 += SvtEqCombineListViewItem__get_GetAddTotalExp(current, v12);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_53;
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      combineEventList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v32 = v31;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v16 )
        break;
      if ( !v32.fields._current )
        sub_1C372B4(v16);
      if ( HIDWORD(v32.fields._current[1].klass) == 17 )
      {
        v17 = *(float *)&v32.fields._current[3].monitor;
        if ( !byte_4C3CFE8 )
        {
          sub_1C37058(&System_Math_TypeInfo);
          byte_4C3CFE8 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v18 = v17 * (float)v7;
        v19 = vcvtps_s32_f32(v18);
        if ( ceilf(v18) == INFINITY )
          v7 = 0x80000000;
        else
          v7 = v19;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( itemList )
    {
      itemList = DataManager__GetMasterData_object_(
                   (DataManager_o *)itemList,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
      v20 = this->fields.baseUsrSvtData;
      if ( v20 )
      {
        v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemList;
        v23 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v35.fields.currentCryptoKey = v23;
        *(_QWORD *)&v35.fields.fakeValue = v22;
        itemList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v35, 0);
        if ( v21 )
        {
          itemList = DataMasterBase_object__object__int___GetEntity(
                       v21,
                       (int32_t)itemList,
                       (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( itemList )
          {
            v24 = *((_DWORD *)itemList + 33);
            itemList = this->fields.baseUsrSvtData;
            this->fields.expType = v24;
            if ( itemList )
            {
              v26 = *((_DWORD *)itemList + 65);
              increLv[0] = *((_DWORD *)itemList + 64);
              v25 = increLv[0];
              LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)itemList, 0);
              if ( v25 == LevelMax )
              {
                v29 = 0;
              }
              else
              {
                v30 = v7 + v6 + v26;
                while ( !SvtEqCombineListViewManager__CheckIncrementLv(this, increLv, &increLv[1], v30, v27) )
                  ;
                v29 = increLv[1];
              }
              *isMaxLvSelected = v29 >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_53:
    sub_1C372B4(itemList);
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

  if ( (byte_4C3D0B5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D0B5 = 1;
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
  baseUsrSvtData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_object_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0)) == 0 )
  {
LABEL_16:
    sub_1C372B4(baseUsrSvtData);
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

  if ( (byte_4C3D0D0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_long__Contains__);
    byte_4C3D0D0 = 1;
  }
  selectMaterialUsrSvtIdList = this->fields.selectMaterialUsrSvtIdList;
  if ( selectMaterialUsrSvtIdList )
    LOBYTE(selectMaterialUsrSvtIdList) = System_Collections_Generic_List_long___Contains(
                                           selectMaterialUsrSvtIdList,
                                           userSvtId,
                                           (const MethodInfo_378B3D0 *)Method_System_Collections_Generic_List_long__Contains__);
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

  if ( (byte_4C3D0C3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0C3 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1C372B4(itemList);
  size = itemList->fields._size;
  if ( size < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v5,
                                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  v9 = (SvtEqCombineListViewManager_o *)sub_1C37574(itemList);
  return (unsigned __int8)SvtEqCombineListViewManager__GetSelectedMaterialList(v9, v10);
}


void SvtEqCombineListViewManager__ClearSelectedSvtList(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x8
  int32_t size; // w2
  int v5; // w9
  struct System_Collections_Generic_List_long__o *selectMaterialUsrSvtIdList; // x8
  int v7; // w9

  if ( (byte_4C3D0C8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    byte_4C3D0C8 = 1;
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
    sub_1C372B4(servantEquipCheckDialog);
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
  SvtEqCombineListViewManager_c *inited; // x0
  ListViewSort_o *sort; // x0
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v14; // x1
  struct ListViewSort_o **p_sort; // x22
  UnityEngine_GameObject_o *gameObject; // x25
  System_Collections_ICollection_o **p_alignedBonusFilterInfos; // x25
  System_Int32_array *servantEquipFilterEventCampaignIds; // x2
  System_Int32_array *servantEquipFilterEventIds; // x3
  System_Int32_array *v20; // x4
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  struct ListViewSort_o *v22; // x26
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x4
  UILabel_o *spendQpInfoLabel; // x23
  UILabel_o *getExpInfoLabel; // x23
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x4
  const MethodInfo *v30; // x2

  if ( (byte_4C3D0AC & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_6940/*"GET_EXP_INFO"*/);
    sub_1C37058(&StringLiteral_9238/*"NEED_QP_INFO"*/);
    byte_4C3D0AC = 1;
  }
  this->fields.currentType = type;
  inited = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    inited = (SvtEqCombineListViewManager_c *)j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)inited);
  sortStatusList = SvtEqCombineListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_37;
  if ( LODWORD(sortStatusList->max_length) <= type )
    sub_1C372BC(sort);
  v14 = sortStatusList->m_Items[type];
  this->fields.sort = v14;
  p_sort = &this->fields.sort;
  sub_1C36FFC(&this->fields.sort, v14);
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
  sub_1C36FFC(&this->fields.alignedBonusFilterInfos, 0);
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
    v20 = 0;
    goto LABEL_16;
  }
  servantEquipFilterEventCampaignIds = setupInfo->fields.servantEquipFilterEventCampaignIds;
  servantEquipFilterEventIds = setupInfo->fields.servantEquipFilterEventIds;
  if ( !finishSetupInfo )
    goto LABEL_15;
LABEL_13:
  v20 = finishSetupInfo->fields.servantEquipFilterEventIds;
LABEL_16:
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         sort,
                         0,
                         servantEquipFilterEventCampaignIds,
                         servantEquipFilterEventIds,
                         v20,
                         0,
                         0,
                         0);
  *p_alignedBonusFilterInfos = (System_Collections_ICollection_o *)AlignedBonusFilter;
  sub_1C36FFC(&this->fields.alignedBonusFilterInfos, AlignedBonusFilter);
  v22 = *p_sort;
  sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(*p_alignedBonusFilterInfos, 0);
  if ( !v22 )
    goto LABEL_37;
  v22->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
  sort = (ListViewSort_o *)this->fields.scaleChangeButton;
  if ( !sort )
    goto LABEL_37;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
  if ( !sort )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
  if ( !type )
  {
    SvtEqCombineListViewManager__SetDispActive(this, 0, v23);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v28);
    SvtEqCombineListViewManager__SetServantList(this, 0, setupInfo, finishSetupInfo, v29);
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
    SvtEqCombineListViewManager__SetDispActive(this, 1, v23);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v24);
    this->fields.selectMax = 20;
    SvtEqCombineListViewManager__SetServantList(this, 1, setupInfo, finishSetupInfo, v25);
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
          sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9238/*"NEED_QP_INFO"*/, 0);
          if ( spendQpInfoLabel )
          {
            UILabel__set_text(spendQpInfoLabel, (System_String_o *)sort, 0);
            getExpInfoLabel = this->fields.getExpInfoLabel;
            sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6940/*"GET_EXP_INFO"*/, 0);
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
    sub_1C372B4(sort);
  }
LABEL_32:
  sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_37;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0);
  if ( !*p_sort || !sort )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0);
  SvtEqCombineListViewManager__SetStatusKind(this, modeKind, v30);
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
  __int64 v16; // x0
  int v17; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3D0A7 & 1) == 0 )
  {
    sub_1C37058(&ListViewSort___TypeInfo);
    sub_1C37058(&ListViewSort_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewManager_TypeInfo);
    byte_4C3D0A7 = 1;
  }
  v1 = SvtEqCombineListViewManager_TypeInfo;
  v17 = 0;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v1 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( !v1->static_fields->isInitSystem )
  {
    v2 = sub_1C37100(ListViewSort___TypeInfo, 2);
    v3 = SvtEqCombineListViewManager_TypeInfo;
    v4 = v2;
    if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v3 = SvtEqCombineListViewManager_TypeInfo;
    }
    static_fields = v3->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v4;
    sub_1C36FFC(&static_fields->sortStatusList, v4);
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
      v17 = v6 + 1;
      v12 = System_Int32__ToString((int32_t)&v17, 0);
      v13 = System_String__Concat_63561656(SORT_SAVE_KEY, v12, 0);
      v14 = (ListViewSort_o *)sub_1C372A4(ListViewSort_TypeInfo);
      ListViewSort___ctor_43838564(v14, v13, 3, 0, 0);
      if ( !sortStatusList )
        sub_1C372B4(v15);
      if ( v14 )
      {
        v15 = sub_1C37194(v14, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v15 )
        {
          v16 = sub_1C372D8();
          sub_1C37180(v16, 0);
        }
      }
      if ( v6 >= sortStatusList[6] )
        sub_1C372BC(v15);
      *(_QWORD *)&sortStatusList[i] = v14;
      sub_1C36FFC(&sortStatusList[i], v14);
      ++v6;
    }
    v9->isInitSystem = 1;
  }
}


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
  int v13; // w9
  void *v14; // x0
  void *v15; // x21
  int v16; // w1
  __int64 v17; // x20
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3D0E6 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0E6 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_22;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v18,
        itemSortList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v18,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v12 )
          break;
        if ( !v18.fields._current )
          sub_1C372B4(v12);
        v13 = *(_DWORD *)((char *)&v18.fields._current->klass + (unsigned __int64)&word_10);
        if ( v13 > items )
          *(_DWORD *)((char *)&v18.fields._current->klass + (unsigned __int64)&word_10) = v13 - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v18,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_20;
    }
LABEL_22:
    sub_1C372B4(itemSortList);
  }
  v14 = (void *)sub_1C37574(itemSortList);
  v15 = v14;
  if ( v16 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1D2018C(v15);
  }
  v17 = *(_QWORD *)__cxa_begin_catch(v14);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v17 )
    sub_1C372AC(v17);
LABEL_20:
  HIDWORD(v6[6].fields._items) = -1;
}


void SvtEqCombineListViewManager__DeleteContinueData(const MethodInfo *method)
{
  SvtEqCombineListViewManager_c *inited; // x0
  __int64 v2; // x20
  SvtEqCombineListViewManager_c *v3; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4C3D0A8 & 1) == 0 )
  {
    sub_1C37058(&SvtEqCombineListViewManager_TypeInfo);
    byte_4C3D0A8 = 1;
  }
  inited = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    inited = (SvtEqCombineListViewManager_c *)j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)inited);
  v2 = 0;
  do
  {
    v3 = SvtEqCombineListViewManager_TypeInfo;
    if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v3 = SvtEqCombineListViewManager_TypeInfo;
    }
    sortStatusList = v3->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_13;
    if ( (unsigned int)v2 >= LODWORD(sortStatusList->max_length) )
      sub_1C372BC(v3);
    v3 = (SvtEqCombineListViewManager_c *)sortStatusList->m_Items[v2];
    if ( !v3 )
LABEL_13:
      sub_1C372B4(v3);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v3, 0);
    ++v2;
  }
  while ( (_DWORD)v2 != 2 );
}


void SvtEqCombineListViewManager__DestroyList(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C372B4(0);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C36FFC(&this->fields.alignedBonusFilterInfos, 0);
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
  SvtEqCombineListViewManager__SetMode_31539360(this, 2, v6);
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
  SvtEqCombineListViewManager__SetMode_31539360(this, 2, v6);
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
  SvtEqCombineListViewManager__SetMode_31539360(this, 2, v5);
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

  if ( (byte_4C3D0D2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__);
    byte_4C3D0D2 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    SvtEqCombineListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C372B4(v8);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void SvtEqCombineListViewManager__EndSelectSortKind(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3D0D7 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3D0D7 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
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
    sub_1C36FFC(p_requestCallback, 0);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))requestCallback->fields.invoke_impl)(
      requestCallback->fields.method_code,
      1,
      requestCallback->fields.method);
  }
}


int64_t SvtEqCombineListViewManager__GetAmountSortValue(
        SvtEqCombineListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 naturalAligment; // x9
  SvtEqCombineListViewItem_o *v11; // x0
  ListViewSort_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C3D0DA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0DA = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1C372B4(itemList);
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
                                                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_13;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( LODWORD(itemList[4].klass) == svtId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_13;
    }
    v11 = (SvtEqCombineListViewItem_o *)sub_1C37574(itemList);
    return SvtEqCombineListViewItem__IsMatchFilter(v11, v12, v13);
  }
}


int32_t SvtEqCombineListViewManager__GetBaseCollectionLv(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v5; // q1
  UserServantCollectionMaster_o *v6; // x20
  struct UserServantEntity_o *v7; // x8
  int64_t v8; // x19
  __int64 v9; // x21
  __int64 v10; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C3D0B7 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D0B7 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v5 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v6 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v13, 0);
  v7 = this->fields.baseUsrSvtData;
  if ( !v7 )
    goto LABEL_14;
  v8 = Instance;
  v10 = *(_QWORD *)&v7->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&v7->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v15, 0);
  if ( !v6 )
LABEL_14:
    sub_1C372B4(Instance);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v6, v8, Instance, 0);
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

  if ( (byte_4C3D0E8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SvtEqCombineListViewManager_o *)sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0E8 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_15:
      sub_1C372B4(this);
    v8 = 0;
    while ( 1 )
    {
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)list,
                                                v8,
                                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        sub_1C372BC(this);
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
    sub_1C372B4(this);
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

  if ( (byte_4C3D0B8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0B8 = 1;
  }
  result = (SvtEqCombineListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SvtEqCombineListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        v7 = (SvtEqCombineListViewManager_o *)sub_1C37574(result);
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
  UserServantEntity_o **p_baseUsrSvtData; // x19
  UserServantEntity_o *v5; // x8
  __int128 v6; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_4C3D0B6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D0B6 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v5 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_12;
  v6 = *(_OWORD *)&v5->fields.id.fields.fakeValue;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&v5->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v10, 0);
  if ( !v7 )
LABEL_12:
    sub_1C372B4(Instance);
  Entity = DataMasterBase_object__object__long___GetEntity(
             v7,
             (int64_t)Instance,
             (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  *p_baseUsrSvtData = (UserServantEntity_o *)Entity;
  sub_1C36FFC(p_baseUsrSvtData, Entity);
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
  __int64 itemList; // x0
  int v5; // w23
  int32_t v6; // w21
  Il2CppObject *v7; // x22
  __int64 naturalAligment; // x9
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x0
  System_Comparison_T__o *v13; // x21
  Il2CppObject *v14; // x22
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x0
  int v16; // w23
  int32_t v17; // w21
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *result; // x0
  SvtEqCombineListViewManager_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_4C3D0C4 & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_SvtEqCombineListViewItem__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C37058(&Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__141_0__);
    sub_1C37058(&SvtEqCombineListViewManager___c_TypeInfo);
    byte_4C3D0C4 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  itemList = (__int64)this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  v5 = *(_DWORD *)(itemList + 24);
  if ( v5 < 1 )
  {
LABEL_18:
    itemList = (__int64)SvtEqCombineListViewManager___c_TypeInfo;
    if ( !SvtEqCombineListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager___c_TypeInfo);
      itemList = (__int64)SvtEqCombineListViewManager___c_TypeInfo;
    }
    v13 = *(System_Comparison_T__o **)(*(_QWORD *)(itemList + 184) + 16LL);
    if ( !v13 )
    {
      if ( !*(_DWORD *)(itemList + 224) )
      {
        j_il2cpp_runtime_class_init_0(itemList);
        itemList = (__int64)SvtEqCombineListViewManager___c_TypeInfo;
      }
      v14 = **(Il2CppObject ***)(itemList + 184);
      v13 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_SvtEqCombineListViewItem__TypeInfo);
      System_Comparison_object____ctor(
        v13,
        v14,
        Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__141_0__,
        0);
      static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__141_0 = (struct System_Comparison_SvtEqCombineListViewItem__o *)v13;
      itemList = sub_1C36FFC(&static_fields->__9__141_0, v13);
    }
    if ( v3 )
    {
      System_Collections_Generic_List_object___Sort_58346216(
        v3,
        v13,
        (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__);
      if ( v3->fields._size < 1 )
        return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        itemList = (__int64)System_Collections_Generic_List_object___get_Item(
                              v3,
                              v17,
                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
        if ( !itemList )
          break;
        if ( *(_DWORD *)(itemList + 164) > v16 )
        {
          itemList = (__int64)System_Collections_Generic_List_object___get_Item(
                                v3,
                                v17,
                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
          if ( !itemList )
            break;
          v16 = *(_DWORD *)(itemList + 164);
          itemList = (__int64)System_Collections_Generic_List_object___get_Item(
                                v3,
                                v17,
                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
          if ( !itemList )
            break;
          this->fields.lastSelectIndex = *(_DWORD *)(itemList + 24);
        }
        if ( ++v17 >= v3->fields._size )
          return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
      }
    }
LABEL_34:
    sub_1C372B4(itemList);
  }
  v6 = 0;
  while ( 1 )
  {
    itemList = (__int64)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)itemList,
                          v6,
                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_34;
    v7 = (Il2CppObject *)itemList;
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
      v10 = Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_34;
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v7,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        v12 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v12[4] = (Il2CppClass *)v7;
        sub_1C36FFC(v12 + 4, v7);
      }
    }
    if ( v5 == ++v6 )
      goto LABEL_18;
    itemList = (__int64)this->fields.itemList;
    if ( !itemList )
      goto LABEL_34;
  }
  v19 = (SvtEqCombineListViewManager_o *)sub_1C37574(itemList);
  SvtEqCombineListViewManager__SetSelectedMaterialInfo(v19, v20);
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
  int64_t itemList; // x0
  int v10; // w25
  int32_t v11; // w24
  __int64 naturalAligment; // x9
  __int64 v13; // x8
  __int128 v14; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  int64_t v18; // x1
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

  if ( (byte_4C3D0DD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0DD = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v10 = *(_DWORD *)(itemList + 24);
  if ( v10 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v11,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != SvtEqCombineListViewItem_TypeInfo )
      {
        v31 = (SvtEqCombineListViewManager_o *)sub_1C37574(itemList);
        SvtEqCombineListViewManager__OnClickNormalStatus(v31, v32);
        return result;
      }
      v13 = *(_QWORD *)(itemList + 128);
      if ( v13 && *(_BYTE *)(itemList + 256) )
      {
        if ( *(_BYTE *)(itemList + 173) )
        {
          v14 = *(_OWORD *)(v13 + 32);
          *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)(v13 + 16);
          *(_OWORD *)&v35.fields.fakeValue = v14;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v34 = v35;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v34, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v16 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v18 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v24 = v16[4];
            v25 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v25,
              v18,
              *(const MethodInfo_378B058 **)(*(_QWORD *)(v24 + 192) + 112LL));
            goto LABEL_28;
          }
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v20 = *(_OWORD *)(v13 + 32);
          *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)(v13 + 16);
          *(_OWORD *)&v35.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v33 = v35;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v33, 0);
          if ( !v7 )
            goto LABEL_37;
          v21 = v7->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v21 )
            goto LABEL_37;
          v23 = v7->fields._size;
          v18 = itemList;
          if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
          {
            v24 = v22[4];
            v25 = v7;
            goto LABEL_27;
          }
          v19 = &v21->obj.klass + v23;
          v7->fields._size = v23 + 1;
        }
        v19[4] = (Il2CppClass *)v18;
      }
LABEL_28:
      if ( v10 == ++v11 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C372B4(itemList);
  v26 = v8->fields._size + v7->fields._size;
  if ( v26 < 1 )
  {
    *choiceList = 0;
    sub_1C36FFC(choiceList, 0);
    v29 = unchoiceList;
    v28 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v27;
    sub_1C36FFC(choiceList, v27);
    v28 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v28;
    v29 = unchoiceList;
  }
  sub_1C36FFC(v29, v28);
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
  int64_t itemList; // x0
  int v10; // w25
  int32_t v11; // w24
  __int64 naturalAligment; // x9
  __int64 v13; // x8
  __int128 v14; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  int64_t v18; // x1
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

  if ( (byte_4C3D0DC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0DC = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v10 = *(_DWORD *)(itemList + 24);
  if ( v10 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v11,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != SvtEqCombineListViewItem_TypeInfo )
      {
        v31 = (SvtEqCombineListViewManager_o *)sub_1C37574(itemList);
        return SvtEqCombineListViewManager__GetSwapChoiceList(v31, v32, v33, v34);
      }
      v13 = *(_QWORD *)(itemList + 128);
      if ( v13 && *(_BYTE *)(itemList + 255) )
      {
        if ( *(_BYTE *)(itemList + 168) )
        {
          v14 = *(_OWORD *)(v13 + 32);
          *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(v13 + 16);
          *(_OWORD *)&v37.fields.fakeValue = v14;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v36 = v37;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v36, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v16 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v18 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v24 = v16[4];
            v25 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v25,
              v18,
              *(const MethodInfo_378B058 **)(*(_QWORD *)(v24 + 192) + 112LL));
            goto LABEL_28;
          }
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v20 = *(_OWORD *)(v13 + 32);
          *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(v13 + 16);
          *(_OWORD *)&v37.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v35 = v37;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v35, 0);
          if ( !v7 )
            goto LABEL_37;
          v21 = v7->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v21 )
            goto LABEL_37;
          v23 = v7->fields._size;
          v18 = itemList;
          if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
          {
            v24 = v22[4];
            v25 = v7;
            goto LABEL_27;
          }
          v19 = &v21->obj.klass + v23;
          v7->fields._size = v23 + 1;
        }
        v19[4] = (Il2CppClass *)v18;
      }
LABEL_28:
      if ( v10 == ++v11 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C372B4(itemList);
  v26 = v8->fields._size + v7->fields._size;
  if ( v26 < 1 )
  {
    *lockList = 0;
    sub_1C36FFC(lockList, 0);
    v29 = unlockList;
    v28 = 0;
    *unlockList = 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v27;
    sub_1C36FFC(lockList, v27);
    v28 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v28;
    v29 = unlockList;
  }
  sub_1C36FFC(v29, v28);
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
  SvtEqCombineListViewManager_c *v1; // x0
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4C3D0A9 & 1) == 0 )
  {
    sub_1C37058(&SvtEqCombineListViewManager_TypeInfo);
    byte_4C3D0A9 = 1;
  }
  v1 = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v1 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( v1->static_fields->isInitSystem )
  {
    for ( i = 0; ; ++i )
    {
      if ( !v1->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v1);
        v1 = SvtEqCombineListViewManager_TypeInfo;
      }
      sortStatusList = v1->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_15;
      if ( (unsigned int)i >= LODWORD(sortStatusList->max_length) )
        sub_1C372BC(v1);
      v1 = (SvtEqCombineListViewManager_c *)sortStatusList->m_Items[i];
      if ( !v1 )
LABEL_15:
        sub_1C372B4(v1);
      ListViewSort__InitLoad((ListViewSort_o *)v1, 0);
      if ( (_DWORD)i == 1 )
        break;
      v1 = SvtEqCombineListViewManager_TypeInfo;
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
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x20
  __int64 v8; // x0
  SvtEqCombineListViewItem_o *current; // x21
  SvtEqCombineListViewItem_c *v10; // x1
  __int64 naturalAligment; // x9
  Il2CppClass *klass; // x8
  Il2CppObject *v13; // x22
  Il2CppType byval_arg; // q0
  int64_t v15; // x0
  Il2CppObject v16; // q0
  int64_t UserSvtId; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  UnityEngine_Object_o *viewObject; // x22
  struct ListViewObject_o *v21; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4C3D0B9 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0B9 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( usrSvtId < 1 )
  {
    Entity = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
LABEL_36:
      sub_1C372B4(Instance);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_36;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v25.fields._list = *(_OWORD *)&v24.fields.currentCryptoKey;
  v25.fields._current = (Il2CppObject *)v24.fields.fakeValue;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v25,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v8 & 1) == 0 )
      break;
    current = (SvtEqCombineListViewItem_o *)v25.fields._current;
    if ( !v25.fields._current )
      goto LABEL_30;
    v10 = SvtEqCombineListViewItem_TypeInfo;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( v25.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SvtEqCombineListViewItem_c *)v25.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      v8 = sub_1C37574(v25.fields._current);
LABEL_30:
      if ( !Entity )
        sub_1C372B4(v8);
      sub_1C372B4(v8);
    }
    if ( Entity )
    {
      v13 = v25.fields._current + 8;
      klass = v25.fields._current[8].klass;
      if ( !klass )
        sub_1C372B4(v8);
      byval_arg = klass->_1.byval_arg;
      *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
      *(Il2CppType *)&v24.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v23 = v24;
      v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v23, 0);
      v16 = Entity[2];
      *(Il2CppObject *)&v22.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v22.fields.fakeValue = v16;
      if ( v15 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v22, 0) )
      {
        v13->klass = (Il2CppClass *)Entity;
        sub_1C36FFC(&current->fields.userSvtEntity, Entity);
      }
    }
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(current, (const MethodInfo *)v10);
    if ( !SelfUserGame )
      sub_1C372B4(UserSvtId);
    current->fields.isFavorite = UserSvtId == SelfUserGame->fields.favoriteUserSvtId;
    SvtEqCombineListViewItem__ModifyLockItem(current, v18);
    SvtEqCombineListViewItem__ModifyChoiceItem(current, v19);
    viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
    {
      v21 = current->fields.viewObject;
      if ( !v21 )
        sub_1C372B4(0);
      ((void (__fastcall *)(struct ListViewObject_o *, SvtEqCombineListViewItem_o *, const MethodInfo *))v21->klass->vtable._5_SetItem.methodPtr)(
        v21,
        current,
        v21->klass->vtable._5_SetItem.method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void SvtEqCombineListViewManager__ModifyList(
        SvtEqCombineListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
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
  Il2CppObject *v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v40; // x25
  int v41; // w28
  unsigned int v42; // w26
  __int64 v43; // x8
  __int128 v44; // q0
  SvtEqCombineListViewManager_o *v45; // x23
  int32_t v46; // w24
  SvtEqCombineListViewItem_o *v47; // x22
  __int64 naturalAligment; // x9
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *v49; // x8
  __int128 v50; // q0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v52; // q0
  int64_t v53; // x0
  const MethodInfo *v54; // x5
  SvtEqCombineListViewManager_o *v55; // x0
  ListViewObject_o *v56; // x1
  ListViewItem_o *v57; // x2
  const MethodInfo *v58; // x3
  bool isIconSizeChangea; // [xsp+Ch] [xbp-1A4h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-1A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+10h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+30h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+130h] [xbp-80h]

  v4 = this;
  if ( (byte_4C3D0BC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity___ctor___78072824);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (SvtEqCombineListViewManager_o *)sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0BC = 1;
  }
  currentType = v4->fields.currentType;
  isIconSizeChangea = isIconSizeChange;
  if ( currentType == 1 )
  {
    this = (SvtEqCombineListViewManager_o *)v4->fields.userServantMaster;
    if ( !this )
      goto LABEL_102;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0);
    v20 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58337560(
      v20,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78072824);
    v21 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v21,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !this )
            goto LABEL_102;
          v23 = *(_OWORD *)&this->fields.dropObjectList;
          *(UnityEngine_MonoBehaviour_Fields *)&v70.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
          *(_OWORD *)&v70.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v67 = v70;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                    &v67,
                                                    0);
          baseUsrSvtData = v4->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_102;
          v25 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v66.fields.fakeValue = v25;
          if ( this == (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                          &v66,
                                                          0) )
            System_Collections_Generic_List_object___RemoveAt(
              v20,
              v22,
              (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
          ++v22;
        }
        while ( v22 < v20->fields._size );
      }
      ServantEquipList = System_Collections_Generic_List_object___ToArray(
                           v20,
                           (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
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
            (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___ToArray(
                                                    v21,
                                                    (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
        *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&dropList->fields._items;
        *(_OWORD *)&v70.fields.fakeValue = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v65 = v70;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                  &v65,
                                                  0);
        if ( !v31 )
          goto LABEL_102;
        v32 = *(_OWORD *)(v31 + 32);
        v33 = this;
        *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)(v31 + 16);
        *(_OWORD *)&v64.fields.fakeValue = v32;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                  &v64,
                                                  0);
        if ( v33 == this )
        {
          if ( !v21 )
            goto LABEL_102;
          v34 = (Il2CppObject *)v27->fields.dropList;
          items = v21->fields._items;
          v36 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v21->fields._version;
          if ( !items )
            goto LABEL_102;
          size = v21->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              v34,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v21->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v34;
            sub_1C36FFC(v38 + 4, v34);
          }
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___Remove(
                                                    v20,
                                                    (Il2CppObject *)v27->fields.dropList,
                                                    (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        if ( (signed int)++v28 >= v20->fields._size )
          goto LABEL_67;
      }
LABEL_100:
      sub_1C372BC(this);
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
    v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58337560(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78072824);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v12;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v69 = v70;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                    &v69,
                                                    0);
          v13 = v4->fields.baseUsrSvtData;
          if ( !v13 )
            goto LABEL_102;
          v14 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
          v15 = this;
          *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v68.fields.fakeValue = v14;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                    &v68,
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
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &v16->obj.klass + v18;
              v8->fields._size = v18 + 1;
              v19[4] = (Il2CppClass *)v11;
              this = (SvtEqCombineListViewManager_o *)sub_1C36FFC(v19 + 4, v11);
            }
            if ( !v7 )
              goto LABEL_102;
            this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___Remove(
                                                      v7,
                                                      (Il2CppObject *)v11,
                                                      (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
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
        (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___ToArray(
                                                v8,
                                                (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      ServantEquipList = this;
      if ( !this )
        goto LABEL_102;
    }
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_102;
  v40 = *((_QWORD *)ServantEquipList + 3);
  if ( (int)v40 >= 1 )
  {
    v41 = itemList->fields._size;
    v42 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v43 = *((_QWORD *)ServantEquipList + (int)v42 + 4);
      if ( !v43 )
        goto LABEL_102;
      v44 = *(_OWORD *)(v43 + 32);
      *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v43 + 16);
      *(_OWORD *)&v70.fields.fakeValue = v44;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v63 = v70;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                &v63,
                                                0);
      if ( v41 >= 1 )
        break;
LABEL_98:
      if ( ++v42 == (_DWORD)v40 )
        return;
      if ( v42 >= *((_DWORD *)ServantEquipList + 6) )
        goto LABEL_100;
    }
    v45 = this;
    v46 = 0;
    while ( 1 )
    {
      this = (SvtEqCombineListViewManager_o *)v4->fields.itemList;
      if ( !this )
        goto LABEL_102;
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v46,
                                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_102;
      v47 = (SvtEqCombineListViewItem_o *)this;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      v49 = this->fields.dropList;
      if ( v49 )
      {
        v50 = *(_OWORD *)&v49->fields._syncRoot;
        *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&v49->fields._items;
        *(_OWORD *)&v70.fields.fakeValue = v50;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v62 = v70;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                  &v62,
                                                  0);
        if ( this == v45 )
        {
          userSvtEntity = v47->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v52 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v70.fields.fakeValue = v52;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v61 = v70;
            v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v61, 0);
            SvtEqCombineListViewManager__ModifyLockItem_31536664(v4, v47, v53, 1, isIconSizeChangeb, v54);
            goto LABEL_98;
          }
LABEL_102:
          sub_1C372B4(this);
        }
      }
      if ( v41 == ++v46 )
        goto LABEL_98;
    }
    v55 = (SvtEqCombineListViewManager_o *)sub_1C37574(this);
    SvtEqCombineListViewManager__SetObjectItem(v55, v56, v57, v58);
  }
}


void SvtEqCombineListViewManager__ModifyLockItem(
        SvtEqCombineListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v11; // w29
  __int64 v12; // x0
  SvtEqCombineListViewItem_c *v13; // x1
  SvtEqCombineListViewItem_o *current; // x22
  __int64 naturalAligment; // x9
  Il2CppClass *klass; // x8
  Il2CppObject *v17; // x23
  Il2CppType byval_arg; // q0
  int64_t v19; // x0
  Il2CppObject v20; // q0
  int64_t v21; // x24
  const MethodInfo *v22; // x1
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v24; // x0
  ListViewObject_o *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4C3D0BA & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0BA = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0);
  if ( usrSvtId < 1 )
  {
    Entity = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
LABEL_42:
      sub_1C372B4(Instance);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v29.fields._list = *(_OWORD *)&v28.fields.currentCryptoKey;
  v29.fields._current = (Il2CppObject *)v28.fields.fakeValue;
  v11 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v12 & 1) == 0 )
      break;
    current = (SvtEqCombineListViewItem_o *)v29.fields._current;
    if ( v29.fields._current )
    {
      v13 = SvtEqCombineListViewItem_TypeInfo;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( v29.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)v29.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        v12 = sub_1C37574(v29.fields._current);
LABEL_36:
        sub_1C372B4(v12);
      }
      if ( Entity )
      {
        v17 = v29.fields._current + 8;
        klass = v29.fields._current[8].klass;
        if ( !klass )
          sub_1C372B4(v12);
        byval_arg = klass->_1.byval_arg;
        *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
        *(Il2CppType *)&v28.fields.fakeValue = byval_arg;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v27 = v28;
        v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v27, 0);
        v20 = Entity[2];
        v21 = v19;
        *(Il2CppObject *)&v26.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v26.fields.fakeValue = v20;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v26, 0);
        if ( v21 == v12 )
        {
          v17->klass = (Il2CppClass *)Entity;
          v12 = sub_1C36FFC(&current->fields.userSvtEntity, Entity);
        }
      }
    }
    else if ( Entity )
    {
      sub_1C372B4(v12);
    }
    if ( v11 )
    {
      if ( !current )
        goto LABEL_36;
      SvtEqCombineListViewItem__ModifyLockItem(current, (const MethodInfo *)v13);
      SvtEqCombineListViewItem__ModifyChoiceItem(current, v22);
    }
    else if ( !current )
    {
      sub_1C372B4(v12);
    }
    viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
    {
      v24 = current->fields.viewObject;
      if ( !v24 )
        sub_1C372B4(0);
      ((void (__fastcall *)(struct ListViewObject_o *, SvtEqCombineListViewItem_o *, const MethodInfo *))v24->klass->vtable._5_SetItem.methodPtr)(
        v24,
        current,
        v24->klass->vtable._5_SetItem.method);
      if ( isIconSizeChange )
      {
        v25 = current->fields.viewObject;
        if ( !v25 )
          sub_1C372B4(0);
        ListViewObject__SetItemSeed(v25, (ListViewItem_o *)current, this->fields.seed, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void SvtEqCombineListViewManager__ModifyLockItem_31536664(
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
  if ( (byte_4C3D0BB & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (SvtEqCombineListViewManager_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D0BB = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (SvtEqCombineListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (SvtEqCombineListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (SvtEqCombineListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              usrSvtId,
                                              (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v20, 0);
      v15 = *(_OWORD *)&v13->fields.dropObjectList;
      v16 = (SvtEqCombineListViewManager_o *)v14;
      *(UnityEngine_MonoBehaviour_Fields *)&v19.fields.currentCryptoKey = v13->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v19.fields.fakeValue = v15;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                &v19,
                                                0);
      if ( v16 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v13;
        this = (SvtEqCombineListViewManager_o *)sub_1C36FFC(&servantItem->fields.userSvtEntity, v13);
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
    sub_1C372B4(this);
  }
}


void SvtEqCombineListViewManager__OnClickBonusFilterKind(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ListViewSort_o *sort; // x0

  if ( (byte_4C3D0D4 & 1) == 0 )
  {
    sub_1C37058(&Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__);
    byte_4C3D0D4 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C372B4(0);
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

  if ( (byte_4C3D0E0 & 1) == 0 )
  {
    sub_1C37058(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SvtEqCombineListViewManager_EndClickTabChoice__);
    sub_1C37058(&Method_SvtEqCombineListViewManager_OnClickChoiceTab__);
    byte_4C3D0E0 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewManager_OnClickChoiceTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1C372A4(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
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
      SvtEqCombineListViewManager__SetMode_31539360(this, 2, v11);
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

  if ( (byte_4C3D0DF & 1) == 0 )
  {
    sub_1C37058(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SvtEqCombineListViewManager_EndClickTabLock__);
    sub_1C37058(&Method_SvtEqCombineListViewManager_OnClickCollectLock__);
    byte_4C3D0DF = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewManager_OnClickCollectLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1C372A4(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
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
      SvtEqCombineListViewManager__SetMode_31539360(this, 2, v11);
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
  CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v9; // x1
  ServantCheckEquipDialog_o *servantEquipCheckDialog; // x20
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v12; // x22

  if ( (byte_4C3D0C2 & 1) == 0 )
  {
    sub_1C37058(&ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__);
    sub_1C37058(&Method_SvtEqCombineListViewManager_OnClickDecide__);
    byte_4C3D0C2 = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_OnClickDecide__;
  isDecideFlg = this->fields.isDecideFlg;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewManager_OnClickDecide__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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
      SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, v9);
      v12 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1C372A4(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v12,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__,
        0);
      if ( servantEquipCheckDialog )
      {
        ServantCheckEquipDialog__Open(servantEquipCheckDialog, SelectedMaterialList, 0, v12, 0);
        return;
      }
LABEL_15:
      sub_1C372B4(v7);
    }
    SvtEqCombineListViewManager__SetSelectedMaterialInfo(this, v9);
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
  __int64 inited; // x0
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w21
  int32_t v8; // w9

  if ( (byte_4C3D0D5 & 1) == 0 )
  {
    sub_1C37058(&Method_SvtEqCombineListViewManager_OnClickFilter2Kind__);
    sub_1C37058(&SvtEqCombineListViewManager_TypeInfo);
    byte_4C3D0D5 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewManager_OnClickFilter2Kind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort
      || (filter2Kind = sort->fields.filter2Kind, !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished)
      && (inited = j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo), (sort = this->fields.sort) == 0) )
    {
      sub_1C372B4(inited);
    }
    if ( filter2Kind + 1 <= SvtEqCombineListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM )
      v8 = filter2Kind + 1;
    else
      v8 = 0;
    sort->fields.filter2Kind = v8;
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

  if ( (byte_4C3D0D1 & 1) == 0 )
  {
    sub_1C37058(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SvtEqCombineListViewManager_EndSelectFilterKind__);
    sub_1C37058(&Method_SvtEqCombineListViewManager_OnClickFilterKind__);
    byte_4C3D0D1 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C372A4(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C372B4(v9);
    CommonUI__OpenServantFilterSelectMenu_31215100(v7, 5, sort, (ListViewManager_o *)this, v8, -1, 0);
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
  if ( (byte_4C3D0CE & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SvtEqCombineListViewManager_OnClickLockModeItem__);
    this = (SvtEqCombineListViewManager_o *)sub_1C37058(&SvtEqCombineListViewObject_TypeInfo);
    byte_4C3D0CE = 1;
  }
  if ( !obj )
    goto LABEL_13;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    v15 = (SvtEqCombineListViewManager_o *)sub_1C37574(obj);
    SvtEqCombineListViewManager__IsDragEnable(v15, v16, v17);
    return;
  }
  Item = SvtEqCombineListViewObject__GetItem(
           (SvtEqCombineListViewObject_o *)obj,
           (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  v7 = Method_SvtEqCombineListViewManager_OnClickLockModeItem__;
  v8 = Item;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewManager_OnClickLockModeItem__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C3703C(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 11, 0, 0);
  if ( !v8 || (userSvtEntity = v8->fields.userSvtEntity, v8->fields.isSwapLock ^= 1u, !userSvtEntity) )
LABEL_13:
    sub_1C372B4(this);
  v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v19.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v18 = v19;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v18, 0);
  SvtEqCombineListViewManager__ModifyLockItem(v4, v12, 0, 0, v13);
  SvtEqCombineListViewManager__SetMode_31539360(v4, 3, v14);
}


void SvtEqCombineListViewManager__OnClickNormalStatus(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4C3D0DE & 1) == 0 )
  {
    sub_1C37058(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SvtEqCombineListViewManager_EndClickTabStatus__);
    sub_1C37058(&Method_SvtEqCombineListViewManager_OnClickNormalStatus__);
    byte_4C3D0DE = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewManager_OnClickNormalStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1C372A4(SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C3D0C9 & 1) == 0 )
  {
    sub_1C37058(&Method_SvtEqCombineListViewManager_OnClickReleaseAll__);
    byte_4C3D0C9 = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_OnClickReleaseAll__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewManager_OnClickReleaseAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  SvtEqCombineListViewManager__ReleaseAll(this, v5);
}


void SvtEqCombineListViewManager__OnClickScaleChange(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  SvtEqCombineListViewManager_o *v7; // x0
  int v8; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v11; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( (byte_4C3D0DB & 1) == 0 )
  {
    sub_1C37058(&Method_SvtEqCombineListViewManager_OnClickScaleChange__);
    byte_4C3D0DB = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v7 = this;
    v8 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v7 = this;
    v8 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v7 = this;
    v8 = 1;
LABEL_11:
    v7->fields.seed = smallSizeSeed;
    p_seed = &v7->fields.seed;
    *((_DWORD *)p_seed + 163) = v8;
    sub_1C36FFC(p_seed, smallSizeSeed);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v11 = this->fields.scaleType,
        sort->fields.iconScaleKind = v11,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v11, 0),
        !scaleChangeButtonSprite) )
  {
    sub_1C372B4(sort);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  SvtEqCombineListViewManager__ModifyList(this, 1, v13);
  SvtEqCombineListViewManager__SetMode_31539360(this, 2, v14);
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
  const MethodInfo *v9; // x1
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w2
  int v14; // w9
  struct System_Collections_Generic_List_long__o *tempMaterialUsrSvtIdList; // x8
  int v16; // w9
  int32_t v17; // w22
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  struct UserServantEntity_o *userSvtEntity; // x1
  SvtEqCombineListViewManager_o *v21; // x0
  ListViewObject_o *v22; // x1
  const MethodInfo *v23; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_4C3D0CC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SvtEqCombineListViewManager_OnClickSelectBase__);
    this = (SvtEqCombineListViewManager_o *)sub_1C37058(&SvtEqCombineListViewObject_TypeInfo);
    byte_4C3D0CC = 1;
  }
  if ( !obj )
    goto LABEL_33;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    v21 = (SvtEqCombineListViewManager_o *)sub_1C37574(obj);
    SvtEqCombineListViewManager__OnClickListView(v21, v22, v23);
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
    *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v25.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v24 = v25;
    this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                              &v24,
                                              0);
    if ( !v7 )
      goto LABEL_33;
    if ( this == (SvtEqCombineListViewManager_o *)SvtEqCombineListViewItem__get_UserSvtId(v7, v9) )
    {
      v10 = Method_SvtEqCombineListViewManager_OnClickSelectBase__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewManager_OnClickSelectBase__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C3703C(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0, 0);
      v4->fields.baseUsrSvtData = 0;
      this = (SvtEqCombineListViewManager_o *)sub_1C36FFC(&v4->fields.baseUsrSvtData, 0);
      tempMtSvtList = v4->fields.tempMtSvtList;
      if ( tempMtSvtList )
      {
        size = tempMtSvtList->fields._size;
        v14 = tempMtSvtList->fields._version + 1;
        tempMtSvtList->fields._size = 0;
        tempMtSvtList->fields._version = v14;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, size, 0);
        tempMaterialUsrSvtIdList = v4->fields.tempMaterialUsrSvtIdList;
        if ( tempMaterialUsrSvtIdList )
        {
          v16 = tempMaterialUsrSvtIdList->fields._version + 1;
          tempMaterialUsrSvtIdList->fields._size = 0;
          tempMaterialUsrSvtIdList->fields._version = v16;
          goto LABEL_28;
        }
      }
LABEL_33:
      sub_1C372B4(this);
    }
  }
  else if ( !this )
  {
    goto LABEL_33;
  }
  if ( v7->fields.type )
  {
    v17 = 0;
  }
  else if ( v7->fields.isLvMax && v7->fields.isLimitCntMax )
  {
    v17 = 2;
  }
  else
  {
    v17 = 2 * v7->fields.isSvtEqMaterial;
  }
  v18 = Method_SvtEqCombineListViewManager_OnClickSelectBase__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewManager_OnClickSelectBase__);
  v19 = (System_Reflection_MethodBase_o *)sub_1C3703C(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, v17, 0, 0);
  userSvtEntity = v7->fields.userSvtEntity;
  v4->fields.baseUsrSvtData = userSvtEntity;
  sub_1C36FFC(&v4->fields.baseUsrSvtData, userSvtEntity);
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
  int32_t v10; // w9
  int32_t selectSum; // w8
  void *v12; // x0
  void *v13; // x21
  int v14; // w1
  __int64 v15; // x20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4C3D0CD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    this = (SvtEqCombineListViewManager_o *)sub_1C37058(&SvtEqCombineListViewObject_TypeInfo);
    byte_4C3D0CD = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !obj )
    goto LABEL_21;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    v12 = (void *)sub_1C37574(obj);
    v13 = v12;
    if ( v14 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      sub_1D2018C(v13);
    }
    v15 = *(_QWORD *)__cxa_begin_catch(v12);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v15 )
      sub_1C372AC(v15);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v16,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v16,
               (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v9 )
          break;
        if ( !v16.fields._current )
          sub_1C372B4(v9);
        v10 = *(_DWORD *)((char *)&v16.fields._current->klass + (unsigned __int64)&word_10);
        if ( v10 > selectNum )
          *(_DWORD *)((char *)&v16.fields._current->klass + (unsigned __int64)&word_10) = v10 - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_18;
    }
LABEL_21:
    sub_1C372B4(this);
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_4C3D0D8 & 1) == 0 )
  {
    sub_1C37058(&Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__);
    byte_4C3D0D8 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C372B4(v5);
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

  if ( (byte_4C3D0D6 & 1) == 0 )
  {
    sub_1C37058(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SvtEqCombineListViewManager_EndSelectSortKind__);
    sub_1C37058(&Method_SvtEqCombineListViewManager_OnClickSortKind__);
    byte_4C3D0D6 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    itemType = this->fields.itemType;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C372A4(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectSortKind__,
      0);
    if ( !v8 )
      sub_1C372B4(v10);
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

  if ( (byte_4C3D0CF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_long__Contains__);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C37058(&Method_SvtEqCombineListViewManager_OnLongPushListView__);
    byte_4C3D0CF = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    v5 = Method_SvtEqCombineListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewManager_OnLongPushListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( item )
    {
      v8 = SvtEqCombineListViewItem_TypeInfo;
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        v14 = (SvtEqCombineListViewManager_o *)sub_1C37574(item);
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
               (const MethodInfo_378B3D0 *)Method_System_Collections_Generic_List_long__Contains__) )
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
        sub_1C36FFC(&this->fields.selectUsrSvtEntity, monitor);
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
    sub_1C372B4(scrollView);
  }
}


void SvtEqCombineListViewManager__OnMoveEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v7; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C3D0C1 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D0C1 = 1;
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
        v7 = this->fields.scrollView;
        if ( !v7
          || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v7->klass->vtable._8_UpdateScrollbars.methodPtr)(
                v7,
                1,
                v7->klass->vtable._8_UpdateScrollbars.method),
              (v7 = this->fields.scrollView) == 0) )
        {
          sub_1C372B4(v7);
        }
        UIScrollView__UpdatePosition(v7, 0);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C36FFC(&this->fields.callbackFunc2, 0);
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
  int32_t *p_selectQp; // x28
  System_Collections_Generic_List_object__o *v5; // x20
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t CombineQpSvtEq; // w0
  const MethodInfo *v8; // x2
  int32_t v9; // w21
  __int64 itemList; // x0
  __int64 v11; // x0
  SvtEqCombineListViewItem_o *current; // x22
  __int64 naturalAligment; // x9
  UserServantEntity_o *v14; // x0
  const MethodInfo *v15; // x1
  UserServantEntity_o *v16; // x0
  int32_t addTotalExp; // w24
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v19; // x22
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  Il2CppObject *v26; // x23
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  Il2CppObject *v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v42; // x0
  Il2CppObject *v43; // x29
  int klass_high; // w8
  float v45; // s8
  int32_t selectExp; // s9
  float v47; // s0
  int32_t v48; // w8
  float v49; // s8
  int v50; // s9
  float v51; // s0
  unsigned int v52; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v54; // x0
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  __int64 v58; // x5
  __int64 v59; // x6
  __int64 v60; // x7
  float v61; // s1 OVERLAPPED
  float v62; // s0
  float v63; // s3
  float v64; // s2
  UILabel_o *getBasicExpLabel; // x21
  Il2CppObject *v66; // x0
  UILabel_o *getAccExpLabel; // x21
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  __int64 v71; // x5
  __int64 v72; // x6
  __int64 v73; // x7
  Il2CppObject *v74; // x0
  const MethodInfo *v75; // x2
  struct UserServantEntity_o *v76; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v77; // x21
  __int64 v78; // x22
  __int64 v79; // x23
  int32_t v80; // w8
  const MethodInfo *v81; // x4
  int32_t LevelMax; // w21
  struct UserServantEntity_o *v83; // x8
  int32_t increLv; // w22
  int32_t lv; // w23
  bool v86; // w22
  _BOOL8 v87; // x0
  Il2CppObject *v88; // x21
  __int64 v89; // x9
  bool v90; // w1
  SvtEqCombineListViewManager_o *v91; // x0
  struct System_Collections_Generic_List_long__o *tempMaterialUsrSvtIdList; // x8
  int32_t size; // w8
  int32_t v94; // w21
  int32_t selectMax; // [xsp+4h] [xbp-CCh] BYREF
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+20h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16

  if ( (byte_4C3D0B3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C37058(&StringLiteral_25092/*"{0:N0}"*/);
    sub_1C37058(&StringLiteral_12478/*"SUM_INFO"*/);
    byte_4C3D0B3 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  memset(&v97, 0, sizeof(v97));
  ObjectList = SvtEqCombineListViewManager__get_ObjectList(this, method);
  p_selectQp = &this->fields.selectQp;
  *(_QWORD *)&this->fields.selectQp = 0;
  v5 = (System_Collections_Generic_List_object__o *)ObjectList;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.addTotalExp = 0;
  this->fields.isAllUpMax = 0;
  if ( baseUsrSvtData && this->fields.itemType == 1 )
  {
    CombineQpSvtEq = UserServantEntity__getCombineQpSvtEq(baseUsrSvtData, 0);
    v9 = SvtEqCombineListViewManager__CheckCompareQp(this, CombineQpSvtEq, v8);
  }
  else
  {
    v9 = 0;
  }
  itemList = (__int64)this->fields.itemList;
  if ( !itemList )
    goto LABEL_95;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v96,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v98 = v96;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v98,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v11 & 1) == 0 )
      break;
    current = (SvtEqCombineListViewItem_o *)v98.fields._current;
    if ( !v98.fields._current )
      goto LABEL_94;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( v98.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SvtEqCombineListViewItem_c *)v98.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      v11 = sub_1C37574(v98.fields._current);
LABEL_94:
      sub_1C372B4(v11);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v98.fields._current, 0) )
    {
      v14 = this->fields.baseUsrSvtData;
      this->fields.selectQp += v9;
      if ( !v14 )
        goto LABEL_97;
      if ( !UserServantEntity__isLevelMax(v14, 0) )
        goto LABEL_19;
      v16 = this->fields.baseUsrSvtData;
      if ( !v16 )
        sub_1C372B4(0);
      if ( UserServantEntity__isLevelMax(v16, 0) && current->fields.isLimitCntTarget )
      {
LABEL_19:
        addTotalExp = this->fields.addTotalExp;
        this->fields.selectExp += current->fields.materialExp;
        this->fields.addTotalExp = SvtEqCombineListViewItem__get_GetAddTotalExp(current, v15) + addTotalExp;
      }
    }
    else
    {
      current->fields.isMaxSelect = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v98,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12478/*"SUM_INFO"*/, 0);
  LODWORD(v96.fields._list) = this->fields.selectSum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96, v20, v21, v22, v23, v24, v25);
  selectMax = this->fields.selectMax;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax, v27, v28, v29, v30, v31, v32);
  itemList = (__int64)System_String__Format_63602948(v19, v26, v33, 0);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v96,
      combineEventList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v97 = v96;
    while ( 1 )
    {
      v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v97,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v42 )
        break;
      v43 = v97.fields._current;
      if ( !v97.fields._current )
        sub_1C372B4(v42);
      klass_high = HIDWORD(v97.fields._current[1].klass);
      if ( klass_high == 17 )
      {
        v45 = *(float *)&v97.fields._current[3].monitor;
        selectExp = this->fields.selectExp;
        if ( !byte_4C3CFE8 )
        {
          sub_1C37058(&System_Math_TypeInfo);
          byte_4C3CFE8 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v47 = v45 * (float)selectExp;
        v48 = vcvtps_s32_f32(v47);
        if ( ceilf(v47) == INFINITY )
          v48 = 0x80000000;
        this->fields.selectExp = v48;
        klass_high = HIDWORD(v43[1].klass);
      }
      if ( klass_high == 16 )
      {
        v49 = *(float *)&v43[3].monitor;
        v50 = *p_selectQp;
        if ( !byte_4C3CFE8 )
        {
          sub_1C37058(&System_Math_TypeInfo);
          byte_4C3CFE8 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v51 = v49 * (float)v50;
        v52 = vcvtps_s32_f32(v51);
        if ( ceilf(v51) == INFINITY )
          v52 = 0x80000000;
        *p_selectQp = v52;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v97,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v96.fields._list) = this->fields.selectQp;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96, v34, v35, v36, v37, v38, v39);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_25092/*"{0:N0}"*/, v54, 0);
  if ( !spendQpLabel )
LABEL_95:
    sub_1C372B4(itemList);
  UILabel__set_text(spendQpLabel, (System_String_o *)itemList, 0);
  if ( this->fields.itemType == 1 )
  {
    itemList = (__int64)this->fields.spendQpLabel;
    v61 = 0.0;
    if ( this->fields.userQP >= this->fields.selectQp )
      v61 = 1.0;
    if ( !itemList )
      goto LABEL_95;
    v62 = 1.0;
    v63 = 1.0;
    v64 = v61;
    UIWidget__set_color((UIWidget_o *)itemList, *(UnityEngine_Color_o *)(&v61 - 1), 0);
  }
  getBasicExpLabel = this->fields.getBasicExpLabel;
  LODWORD(v96.fields._list) = this->fields.selectExp;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96, v55, v56, v57, v58, v59, v60);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_25092/*"{0:N0}"*/, v66, 0);
  if ( !getBasicExpLabel )
    goto LABEL_95;
  UILabel__set_text(getBasicExpLabel, (System_String_o *)itemList, 0);
  getAccExpLabel = this->fields.getAccExpLabel;
  selectMax = this->fields.addTotalExp;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax, v68, v69, v70, v71, v72, v73);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_25092/*"{0:N0}"*/, v74, 0);
  if ( !getAccExpLabel )
    goto LABEL_95;
  UILabel__set_text(getAccExpLabel, (System_String_o *)itemList, 0);
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !itemList )
      goto LABEL_95;
    itemList = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)itemList,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
    v76 = this->fields.baseUsrSvtData;
    if ( !v76 )
      goto LABEL_95;
    v77 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemList;
    v79 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
    v78 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v99.fields.currentCryptoKey = v79;
    *(_QWORD *)&v99.fields.fakeValue = v78;
    itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v99, 0);
    if ( !v77 )
      goto LABEL_95;
    itemList = (__int64)DataMasterBase_object__object__int___GetEntity(
                          v77,
                          itemList,
                          (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !itemList )
      goto LABEL_95;
    v80 = *(_DWORD *)(itemList + 132);
    itemList = (__int64)this->fields.baseUsrSvtData;
    this->fields.expType = v80;
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
                     v81);
      while ( (itemList & 1) == 0 );
      v83 = this->fields.baseUsrSvtData;
      if ( !v83 )
        goto LABEL_95;
      itemList = (__int64)this->fields.levelUpInfoImg;
      if ( !itemList )
        goto LABEL_95;
      increLv = this->fields.increLv;
      lv = v83->fields.lv;
      itemList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0);
      if ( !itemList )
        goto LABEL_95;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, increLv - lv > 0, 0);
    }
    itemList = (__int64)this->fields.itemList;
    if ( !itemList )
      goto LABEL_95;
    v86 = this->fields.increLv >= LevelMax;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v96,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v98 = v96;
    while ( 1 )
    {
      v87 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v98,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v87 )
        break;
      v88 = v98.fields._current;
      if ( !v98.fields._current )
        sub_1C372B4(v87);
      v89 = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( v98.fields._current->klass->_2.naturalAligment < (unsigned int)v89
        || (SvtEqCombineListViewItem_c *)v98.fields._current->klass->_2.typeHierarchy[v89 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        v14 = (UserServantEntity_o *)sub_1C37574(v98.fields._current);
LABEL_97:
        sub_1C372B4(v14);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v98.fields._current, 0) )
        BYTE2(v88[15].monitor) = v86;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v98,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  if ( this->fields.selectSum >= 1 )
  {
    v90 = 1;
    v91 = this;
    goto LABEL_81;
  }
  tempMaterialUsrSvtIdList = this->fields.tempMaterialUsrSvtIdList;
  if ( !tempMaterialUsrSvtIdList )
    goto LABEL_95;
  if ( tempMaterialUsrSvtIdList->fields._size <= 0 )
  {
    v91 = this;
    v90 = 0;
LABEL_81:
    SvtEqCombineListViewManager__SetBtnEnable(v91, v90, v75);
    if ( !v5 )
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
  if ( !v5 )
    goto LABEL_95;
LABEL_87:
  size = v5->fields._size;
  if ( size >= 1 )
  {
    v94 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (__int64)System_Collections_Generic_List_object___get_Item(
                            v5,
                            v94,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__);
      if ( !itemList )
        break;
      (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)itemList + 456LL))(
        itemList,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)itemList + 464LL));
      if ( ++v94 >= v5->fields._size )
        return;
    }
    goto LABEL_95;
  }
}


void SvtEqCombineListViewManager__ReleaseAll(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v4; // x0
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x9
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C3D0CA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0CA = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( this->fields.selectSum >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      itemList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v9 = v8;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v9,
             (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( (v4 & 1) == 0 )
        break;
      current = v9.fields._current;
      if ( !v9.fields._current )
        goto LABEL_16;
      ListViewItem__set_IsSelect((ListViewItem_o *)v9.fields._current, 0, 0);
      naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewItem_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        v4 = sub_1C37574(current);
LABEL_16:
        sub_1C372B4(v4);
      }
      BYTE2(current[11].klass) = 0;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)itemList,
                                                                    0)) == 0 )
    {
LABEL_17:
      sub_1C372B4(itemList);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0);
    *(_QWORD *)&this->fields.totalExp = 0;
    this->fields.checkLv = 0;
    SvtEqCombineListViewManager__RefrashListDisp(this, v7);
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
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3D0BF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__);
    sub_1C37058(&Method_SvtEqCombineListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C3D0BF = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v11);
      SvtEqCombineListViewObject__Init_31541472((SvtEqCombineListViewObject_o *)current, mode, v10, delay, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewManager__RequestListObject_31540444(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3D0C0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__);
    sub_1C37058(&Method_SvtEqCombineListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C3D0C0 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v9);
      SvtEqCombineListViewObject__Init_31541556((SvtEqCombineListViewObject_o *)current, mode, v8, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


void SvtEqCombineListViewManager__ResetInit(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x8
  int32_t size; // w2
  int v5; // w9
  struct System_Collections_Generic_List_long__o *selectMaterialUsrSvtIdList; // x8
  int v7; // w9
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t v9; // w2
  int v10; // w9
  struct System_Collections_Generic_List_long__o *tempMaterialUsrSvtIdList; // x8
  int v12; // w9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  UnityEngine_Component_o *levelUpInfoImg; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3D0CB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4C3D0CB = 1;
  }
  memset(&v15, 0, sizeof(v15));
  this->fields.baseUsrSvtData = 0;
  sub_1C36FFC(&this->fields.baseUsrSvtData, 0);
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
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( tempMtSvtList )
  {
    v9 = tempMtSvtList->fields._size;
    v10 = tempMtSvtList->fields._version + 1;
    tempMtSvtList->fields._size = 0;
    tempMtSvtList->fields._version = v10;
    if ( v9 >= 1 )
      System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, v9, 0);
  }
  tempMaterialUsrSvtIdList = this->fields.tempMaterialUsrSvtIdList;
  if ( tempMaterialUsrSvtIdList )
  {
    v12 = tempMaterialUsrSvtIdList->fields._version + 1;
    tempMaterialUsrSvtIdList->fields._size = 0;
    tempMaterialUsrSvtIdList->fields._version = v12;
  }
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v15.fields._current )
        sub_1C372B4(0);
      ListViewItem__set_IsSelect((ListViewItem_o *)v15.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  this->fields.selectSum = 0;
  if ( !levelUpInfoImg
    || (levelUpInfoImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0)) == 0 )
  {
    sub_1C372B4(levelUpInfoImg);
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
  if ( (byte_4C3D0AF & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4C3D0AF = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = v5;
  if ( !decideBtnBg )
    goto LABEL_12;
  decideBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             decideBtnBg,
                                             (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1C372B4(decideBtnBg);
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

  if ( (byte_4C3D0AE & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C37058(&SvtEqCombineListViewManager_TypeInfo);
    byte_4C3D0AE = 1;
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton
    || (v19.fields.a = 1.0,
        v19.fields.r = v6,
        v19.fields.g = v6,
        v19.fields.b = v6,
        UIWidget__set_color((UIWidget_o *)allReleaseButton, v19, 0),
        (allReleaseButton = this->fields.nextExpLabel) == 0)
    || (allReleaseButton = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)allReleaseButton,
                             (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_40:
    sub_1C372B4(allReleaseButton);
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

  if ( (byte_4C3D0E5 & 1) == 0 )
  {
    sub_1C37058(&Method_SvtEqCombineListViewManager_SetDragEnd__);
    byte_4C3D0E5 = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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

  if ( (byte_4C3D0E3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewObject_TypeInfo);
    byte_4C3D0E3 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_31;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C372B4(itemSortList);
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
  v20 = (SvtEqCombineListViewObject_o *)sub_1C37574(itemSortList);
  SvtEqCombineListViewObject__SetupDisp(v20, v21);
  return result;
}


void SvtEqCombineListViewManager__SetDragSelectItem(
        SvtEqCombineListViewManager_o *this,
        int32_t startIndex,
        int32_t endIndex,
        const MethodInfo *method)
{
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

  if ( (byte_4C3D0E2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewObject_TypeInfo);
    byte_4C3D0E2 = 1;
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
  if ( startIndex <= endIndex )
    v11 = endIndex;
  else
    v11 = startIndex;
  if ( startIndex <= endIndex )
    v12 = startIndex;
  else
    v12 = endIndex;
  if ( startIndex < 0 )
    v13 = -1;
  else
    v13 = v11;
  if ( startIndex < 0 )
    v14 = -1;
  else
    v14 = v12;
  this->fields.dragStartIndex = startIndex;
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
  if ( (startIndex & 0x80000000) == 0 )
  {
    if ( startIndex <= endIndex )
    {
      do
      {
        if ( startIndex > v9 || v10 < 0 || startIndex < v10 )
          SvtEqCombineListViewManager__SetDragSelect(this, startIndex, 1, method);
        ++startIndex;
      }
      while ( startIndex <= endIndex );
    }
    else
    {
      do
      {
        if ( startIndex > v9 || v10 < 0 || startIndex < v10 )
          SvtEqCombineListViewManager__SetDragSelect(this, startIndex, 1, method);
        --startIndex;
      }
      while ( startIndex >= endIndex );
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
                               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0 )
        {
LABEL_62:
          sub_1C372B4(itemSortList);
        }
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
      v22 = (SvtEqCombineListViewManager_o *)sub_1C37574(itemSortList);
      SvtEqCombineListViewManager__SetDragSelect(v22, v23, v24, v25);
    }
  }
}


void SvtEqCombineListViewManager__SetDragStart(
        SvtEqCombineListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  bool v6; // w21
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v9; // w21
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *scrollView; // x20

  v6 = isDragSelect;
  if ( (byte_4C3D0E4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0E4 = 1;
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
                                                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemSortList )
        goto LABEL_19;
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
    itemSortList = (System_Collections_Generic_List_object__o *)sub_1C37574(itemSortList);
LABEL_19:
    sub_1C372B4(itemSortList);
  }
LABEL_12:
  SvtEqCombineListViewManager__SetDragSelectItem(this, startIndex, startIndex, method);
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

  if ( (byte_4C3D0D3 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17487/*"btn_filter_on"*/);
    sub_1C37058(&StringLiteral_17486/*"btn_filter"*/);
    byte_4C3D0D3 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C372B4(sort);
  }
  v5 = (System_String_o **)&StringLiteral_17486/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17487/*"btn_filter_on"*/;
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

  if ( (byte_4C3D0B1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_SvtEqCombineListViewItem__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_SvtEqCombineListViewItem___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_ListViewItem__SvtEqCombineListViewItem___);
    sub_1C37058(&System_Func_ListViewItem__SvtEqCombineListViewItem__TypeInfo);
    sub_1C37058(&Method_SvtEqCombineListViewManager__SetMaterialSvtInfo_b__118_1__);
    sub_1C37058(&Method_SvtEqCombineListViewManager___c__SetMaterialSvtInfo_b__118_0__);
    sub_1C37058(&SvtEqCombineListViewManager___c_TypeInfo);
    byte_4C3D0B1 = 1;
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
      _9__118_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_ListViewItem__SvtEqCombineListViewItem__TypeInfo);
      System_Func_object__object____ctor(
        _9__118_0,
        v6,
        Method_SvtEqCombineListViewManager___c__SetMaterialSvtInfo_b__118_0__,
        0);
      static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__118_0 = (struct System_Func_ListViewItem__SvtEqCombineListViewItem__o *)_9__118_0;
      sub_1C36FFC(&static_fields->__9__118_0, _9__118_0);
    }
    v8 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                                                          (System_Func_TSource__TResult__o *)_9__118_0,
                                                          (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_ListViewItem__SvtEqCombineListViewItem___);
    v9 = (System_Action_object__o *)sub_1C372A4(System_Action_SvtEqCombineListViewItem__TypeInfo);
    System_Action_object____ctor(
      v9,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager__SetMaterialSvtInfo_b__118_1__,
      0);
    BasicHelper__ForEach_object_(
      v8,
      (System_Action_T__o *)v9,
      (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_SvtEqCombineListViewItem___);
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
  sub_1C36FFC(&this->fields.callbackFunc, callback);
  SvtEqCombineListViewManager__SetMode_31539360(this, mode, v6);
}


void SvtEqCombineListViewManager__SetMode_31539360(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v6; // x2
  UnityEngine_Behaviour_o *itemList; // x0
  int32_t v8; // w1
  char v9; // w22
  __int64 v10; // x0
  ListViewItem_o *current; // x21
  __int64 naturalAligment; // x9
  const MethodInfo *v13; // x1
  int32_t selectNum; // w27
  struct System_Collections_Generic_List_ListViewItem__o *v15; // x0
  _BOOL8 v16; // x0
  int32_t klass; // w9
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4C3D0BE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0BE = 1;
  }
  memset(&v21, 0, sizeof(v21));
  memset(&v20, 0, sizeof(v20));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v19,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v21 = v19;
      v9 = 0;
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v21,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v10 & 1) == 0 )
          break;
        current = (ListViewItem_o *)v21.fields._current;
        if ( !v21.fields._current )
          goto LABEL_38;
        naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
        if ( v21.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (SvtEqCombineListViewItem_c *)v21.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
        {
          v10 = sub_1C37574(v21.fields._current);
LABEL_38:
          sub_1C372B4(v10);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v21.fields._current, 0)
          && SvtEqCombineListViewItem__get_IsCanNotSelect((SvtEqCombineListViewItem_o *)current, v13) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0);
          v15 = this->fields.itemList;
          --this->fields.selectSum;
          if ( !v15 )
            sub_1C372B4(0);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v19,
            (System_Collections_Generic_List_object__o *)v15,
            (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v20 = v19;
          while ( 1 )
          {
            v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v20,
                    (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v16 )
              break;
            if ( !v20.fields._current )
              sub_1C372B4(v16);
            klass = (int32_t)v20.fields._current[1].klass;
            if ( klass > selectNum )
              LODWORD(v20.fields._current[1].klass) = klass - 1;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v20,
            (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v9 = 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v21,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v9 & 1) != 0 )
        SvtEqCombineListViewManager__RefrashListDisp(this, v18);
      if ( mode == 2 )
        v8 = 4;
      else
        v8 = 2;
      goto LABEL_35;
    }
LABEL_39:
    sub_1C372B4(itemList);
  }
  if ( mode != 3 )
    return;
  v8 = 5;
LABEL_35:
  SvtEqCombineListViewManager__RequestListObject_31540444(this, v8, v6);
}


void SvtEqCombineListViewManager__SetMode_31540392(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C36FFC(&this->fields.callbackFunc2, callback);
  SvtEqCombineListViewManager__SetMode_31539360(this, mode, v6);
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
  if ( (byte_4C3D0BD & 1) == 0 )
  {
    this = (SvtEqCombineListViewManager_o *)sub_1C37058(&SvtEqCombineListViewObject_TypeInfo);
    byte_4C3D0BD = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1C372B4(this);
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    this = (SvtEqCombineListViewManager_o *)sub_1C37574(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 4;
  else
    v7 = 2;
  SvtEqCombineListViewObject__Init_31539236((SvtEqCombineListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void SvtEqCombineListViewManager__SetRecommendedSelectedMaterialList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array *recommendedUserSvtIdIdList,
        SetCombineData_o *recommendedCombineData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *v7; // x0
  void *tempMaterialUsrSvtIdList; // x0
  int v9; // w8
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x8
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t size; // w2
  int v13; // w9
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o **p_tempMtSvtList; // x20
  System_Collections_Generic_List_object__o *v15; // x21
  int32_t v16; // w2
  int v17; // w8

  if ( (byte_4C3D0C7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_1C37058(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    byte_4C3D0C7 = 1;
  }
  v7 = (struct System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)recommendedUserSvtIdIdList,
                                                           (const MethodInfo_312BE1C *)Method_System_Linq_Enumerable_ToList_long___);
  this->fields.selectMaterialUsrSvtIdList = v7;
  sub_1C36FFC(&this->fields.selectMaterialUsrSvtIdList, v7);
  tempMaterialUsrSvtIdList = this->fields.tempMaterialUsrSvtIdList;
  if ( !tempMaterialUsrSvtIdList )
    goto LABEL_13;
  v9 = *((_DWORD *)tempMaterialUsrSvtIdList + 7) + 1;
  *((_DWORD *)tempMaterialUsrSvtIdList + 6) = 0;
  *((_DWORD *)tempMaterialUsrSvtIdList + 7) = v9;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)tempMaterialUsrSvtIdList,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.selectMaterialUsrSvtIdList,
    (const MethodInfo_378B264 *)Method_System_Collections_Generic_List_long__AddRange__);
  this->fields.combineData = recommendedCombineData;
  sub_1C36FFC(&this->fields.combineData, recommendedCombineData);
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( !selectedMtSvtList_k__BackingField )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    this->fields._selectedMtSvtList_k__BackingField = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v11;
    tempMaterialUsrSvtIdList = (void *)sub_1C36FFC(&this->fields._selectedMtSvtList_k__BackingField, v11);
    selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
    if ( !selectedMtSvtList_k__BackingField )
      goto LABEL_13;
  }
  size = selectedMtSvtList_k__BackingField->fields._size;
  v13 = selectedMtSvtList_k__BackingField->fields._version + 1;
  selectedMtSvtList_k__BackingField->fields._size = 0;
  selectedMtSvtList_k__BackingField->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)selectedMtSvtList_k__BackingField->fields._items, 0, size, 0);
  tempMaterialUsrSvtIdList = this->fields.tempMtSvtList;
  p_tempMtSvtList = &this->fields.tempMtSvtList;
  if ( !tempMaterialUsrSvtIdList )
  {
    v15 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    *p_tempMtSvtList = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v15;
    sub_1C36FFC(&this->fields.tempMtSvtList, v15);
    tempMaterialUsrSvtIdList = *p_tempMtSvtList;
    if ( !*p_tempMtSvtList )
      goto LABEL_13;
  }
  v16 = *((_DWORD *)tempMaterialUsrSvtIdList + 6);
  v17 = *((_DWORD *)tempMaterialUsrSvtIdList + 7) + 1;
  *((_DWORD *)tempMaterialUsrSvtIdList + 6) = 0;
  *((_DWORD *)tempMaterialUsrSvtIdList + 7) = v17;
  if ( v16 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)tempMaterialUsrSvtIdList + 2), 0, v16, 0);
    tempMaterialUsrSvtIdList = *p_tempMtSvtList;
    if ( !*p_tempMtSvtList )
LABEL_13:
      sub_1C372B4(tempMaterialUsrSvtIdList);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)tempMaterialUsrSvtIdList,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields._selectedMtSvtList_k__BackingField,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
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
    sub_1C372B4(0);
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
  sub_1C36FFC(&this->fields.baseUsrSvtData, resData);
}


void SvtEqCombineListViewManager__SetSelectMaterialList(
        SvtEqCombineListViewManager_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedItems,
        const MethodInfo *method)
{
  SetCombineData_o *v5; // x22
  struct SetCombineData_o **p_combineData; // x19
  struct System_Int64_array *combineData; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x1
  struct SetCombineData_o *v9; // x8
  System_Collections_Generic_Dictionary_long__bool__o *v10; // x20
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  SvtEqCombineListViewItem_o *current; // x21
  const MethodInfo *v14; // x1
  int64_t UserSvtId; // x0
  int64_t v16; // x1
  int64_t v17; // x29
  int v18; // w8
  System_Collections_Generic_Dictionary_long__bool__o *v19; // x0
  struct SetCombineData_o *v20; // x21
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3D0C6 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
    sub_1C37058(&System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
    sub_1C37058(&SetCombineData_TypeInfo);
    byte_4C3D0C6 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v5 = (SetCombineData_o *)sub_1C372A4(SetCombineData_TypeInfo);
  SetCombineData___ctor(v5, 0);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v5;
  sub_1C36FFC(&this->fields.combineData, v5);
  combineData = (struct System_Int64_array *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_26;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  combineData->bounds = (Il2CppArrayBounds *)baseUsrSvtData;
  combineData = (struct System_Int64_array *)sub_1C36FFC(&combineData->bounds, baseUsrSvtData);
  v9 = *p_combineData;
  if ( !*p_combineData )
    goto LABEL_26;
  *(_OWORD *)&v9->fields.selectSum = *(_OWORD *)&this->fields.selectSum;
  *(_QWORD *)&v9->fields.getHpAdjustVal = *(_QWORD *)&this->fields.getHpUpVal;
  v9->fields.isAdjustMax = this->fields.isAllUpMax;
  v10 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_1C372A4(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
  System_Collections_Generic_Dictionary_long__bool____ctor(
    v10,
    (const MethodInfo_34329C0 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
  if ( !selectedItems )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)selectedItems,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    if ( !v11 )
      break;
    current = (SvtEqCombineListViewItem_o *)v23.fields._current;
    if ( !v23.fields._current )
      sub_1C372B4(v11);
    if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v23.fields._current, v12) >= 1 )
    {
      UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(current, v14);
      v16 = UserSvtId;
      if ( current->fields.isEquiped || (v17 = UserSvtId, current->fields.isUseSupportEquip) )
      {
        v18 = 1;
        v19 = v10;
        if ( !v10 )
          goto LABEL_18;
      }
      else
      {
        v18 = current->fields.isUseRecommendSupportEquip || current->fields.isUseGrandServantEquip;
        v19 = v10;
        v16 = v17;
        if ( !v10 )
LABEL_18:
          sub_1C372B4(v19);
      }
      System_Collections_Generic_Dictionary_long__bool___Add(
        v19,
        v16,
        v18 != 0,
        (const MethodInfo_34333A0 *)Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
  if ( !v10 )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_long__bool___get_Count(
         v10,
         (const MethodInfo_3433044 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__) <= 0 )
    return;
  v20 = *p_combineData;
  Keys = System_Collections_Generic_Dictionary_long__bool___get_Keys(
           v10,
           (const MethodInfo_3433054 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
  combineData = System_Linq_Enumerable__ToArray_long_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                  (const MethodInfo_312726C *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !v20
    || (v20->fields.materialUsrSvtIdList = combineData,
        sub_1C36FFC(&v20->fields.materialUsrSvtIdList, combineData),
        (combineData = (struct System_Int64_array *)*p_combineData) == 0) )
  {
LABEL_26:
    sub_1C372B4(combineData);
  }
  combineData->m_Items[4] = (int64_t)v10;
  sub_1C36FFC(&combineData->m_Items[4], v10);
}


void SvtEqCombineListViewManager__SetSelectedMaterialInfo(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o **p_selectedMtSvtList_k__BackingField; // x22
  __int64 tempMaterialUsrSvtIdList; // x0
  const MethodInfo *v6; // x1
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

  if ( (byte_4C3D0C5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_SvtEqCombineListViewItem__long___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1C37058(&System_Func_SvtEqCombineListViewItem__long__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C37058(&Method_SvtEqCombineListViewManager___c__SetSelectedMaterialInfo_b__142_0__);
    sub_1C37058(&SvtEqCombineListViewManager___c_TypeInfo);
    byte_4C3D0C5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  p_selectedMtSvtList_k__BackingField = &this->fields._selectedMtSvtList_k__BackingField;
  this->fields._selectedMtSvtList_k__BackingField = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v3;
  tempMaterialUsrSvtIdList = sub_1C36FFC(&this->fields._selectedMtSvtList_k__BackingField, v3);
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_32;
  size = tempMtSvtList->fields._size;
  v9 = tempMtSvtList->fields._version + 1;
  tempMtSvtList->fields._size = 0;
  tempMtSvtList->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, size, 0);
  SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, v6);
  v11 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
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
        (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
      tempMaterialUsrSvtIdList = (__int64)*p_selectedMtSvtList_k__BackingField;
      if ( *p_selectedMtSvtList_k__BackingField )
      {
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)tempMaterialUsrSvtIdList,
          (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
          (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
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
          _9__142_0 = (System_Func_object__long__o *)sub_1C372A4(System_Func_SvtEqCombineListViewItem__long__TypeInfo);
          System_Func_object__long____ctor(
            _9__142_0,
            v20,
            Method_SvtEqCombineListViewManager___c__SetSelectedMaterialInfo_b__142_0__,
            0);
          static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__142_0 = (struct System_Func_SvtEqCombineListViewItem__long__o *)_9__142_0;
          sub_1C36FFC(&static_fields->__9__142_0, _9__142_0);
        }
        v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)SelectedMaterialList,
                                                                     (System_Func_TSource__TResult__o *)_9__142_0,
                                                                     (const MethodInfo_311E030 *)Method_System_Linq_Enumerable_Select_SvtEqCombineListViewItem__long___);
        v23 = (struct System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                                  v22,
                                                                  (const MethodInfo_312BE1C *)Method_System_Linq_Enumerable_ToList_long___);
        this->fields.selectMaterialUsrSvtIdList = v23;
        sub_1C36FFC(&this->fields.selectMaterialUsrSvtIdList, v23);
        tempMaterialUsrSvtIdList = (__int64)this->fields.tempMaterialUsrSvtIdList;
        if ( tempMaterialUsrSvtIdList )
        {
          v24 = *(_DWORD *)(tempMaterialUsrSvtIdList + 28) + 1;
          *(_DWORD *)(tempMaterialUsrSvtIdList + 24) = 0;
          *(_DWORD *)(tempMaterialUsrSvtIdList + 28) = v24;
          System_Collections_Generic_List_long___AddRange(
            (System_Collections_Generic_List_long__o *)tempMaterialUsrSvtIdList,
            (System_Collections_Generic_IEnumerable_T__o *)this->fields.selectMaterialUsrSvtIdList,
            (const MethodInfo_378B264 *)Method_System_Collections_Generic_List_long__AddRange__);
          if ( v11 )
          {
            v25 = System_Collections_Generic_List_long___ToArray(
                    v11,
                    (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
            this->fields.highRarityList = v25;
            sub_1C36FFC(&this->fields.highRarityList, v25);
            v27 = this;
            v28 = SelectedMaterialList;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_32:
    sub_1C372B4(tempMaterialUsrSvtIdList);
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
                                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !tempMaterialUsrSvtIdList )
      goto LABEL_32;
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
      if ( (unsigned int)v17 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v11,
          tempMaterialUsrSvtIdList,
          *(const MethodInfo_378B058 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
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
  v27 = (SvtEqCombineListViewManager_o *)sub_1C37574(tempMaterialUsrSvtIdList);
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
    sub_1C36FFC(&this->fields._selectedMtSvtList_k__BackingField, tempMtSvtList);
  }
}


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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  int64_t qp; // x8
  UILabel_o *haveQpLabel; // x24
  Il2CppObject *v22; // x0
  UILabel_o *nextExpLabel; // x24
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  Il2CppObject *v30; // x0
  const MethodInfo *v31; // x1
  UserServantEntity_array *ServantEquipList; // x29
  const MethodInfo *v33; // x2
  int v34; // w20
  int32_t FriendShipSvtEquipNum; // w0
  System_Collections_Generic_List_object__o *v36; // x26
  System_Collections_Generic_List_object__o *v37; // x27
  int max_length; // w8
  __int64 v39; // x21
  UserServantEntity_o **m_Items; // x22
  UserServantEntity_o *v41; // x28
  __int128 v42; // q0
  UserServantEntity_array *v43; // x24
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v45; // q0
  __int64 v46; // x29
  bool v47; // zf
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  UILabel_o *v52; // x26
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  __int64 v56; // x5
  __int64 v57; // x6
  __int64 v58; // x7
  Il2CppObject *v59; // x0
  System_Collections_Generic_List_object__o *v60; // x25
  System_Collections_Generic_List_object__o *v61; // x0
  const MethodInfo *v62; // x2
  int32_t v63; // w24
  __int128 v64; // q0
  struct UserServantEntity_o *v65; // x8
  __int128 v66; // q0
  int v67; // w20
  int32_t v68; // w0
  int v69; // w20
  UILabel_o *v70; // x25
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  __int64 v74; // x5
  __int64 v75; // x6
  __int64 v76; // x7
  Il2CppObject *v77; // x0
  int v78; // w24
  int v79; // w8
  unsigned int v80; // w25
  Il2CppClass **v81; // x20
  Il2CppClass *v82; // x8
  UserServantEntity_o **v83; // x20
  Il2CppClass *v84; // t1
  Il2CppType byval_arg; // q0
  __int64 v86; // x26
  _BOOL4 v87; // w28
  int32_t v88; // w23
  int32_t v89; // w27
  int64_t Item; // x8
  UserServantEntity_array *v91; // x21
  UserServantEntity_o *v92; // x29
  UserServantEntity_o *v93; // x20
  int64_t favoriteUserSvtId; // x22
  SvtEqCombineListViewItem_o *v95; // x27
  struct System_Collections_Generic_List_long__o *selectMaterialUsrSvtIdList; // x8
  __int64 v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  __int64 v100; // x8
  UILabel_o *servantInfoLabel; // x20
  System_String_o *v102; // x21
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  __int64 v106; // x5
  __int64 v107; // x6
  __int64 v108; // x7
  Il2CppObject *v109; // x22
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  __int64 v113; // x5
  __int64 v114; // x6
  __int64 v115; // x7
  Il2CppObject *v116; // x0
  const MethodInfo *v117; // x1
  const MethodInfo *v118; // x1
  const MethodInfo *v119; // [xsp+8h] [xbp-168h]
  int v120; // [xsp+1Ch] [xbp-154h]
  UserGameEntity_o *v123; // [xsp+30h] [xbp-140h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+40h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+60h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+80h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v128; // [xsp+A0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+C0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v130; // [xsp+E0h] [xbp-90h] BYREF
  int32_t svtEquipKeep; // [xsp+100h] [xbp-70h] BYREF
  float barExp; // [xsp+104h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+108h] [xbp-68h] BYREF

  if ( (byte_4C3D0B0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity___ctor___78072824);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C37058(&StringLiteral_25092/*"{0:N0}"*/);
    sub_1C37058(&StringLiteral_12478/*"SUM_INFO"*/);
    byte_4C3D0B0 = 1;
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
    sub_1C36FFC(&this->fields.seed, normalSizeSeed);
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
  emptyListNoticeLabel = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_109;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)emptyListNoticeLabel,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1C36FFC(&this->fields.userServantMaster, MasterData_object);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !SelfUserGame )
    goto LABEL_109;
  qp = SelfUserGame->fields.qp;
  this->fields.userQP = qp;
  haveQpLabel = this->fields.haveQpLabel;
  v130.fields.currentCryptoKey = qp;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v130, v14, v15, v16, v17, v18, v19);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25092/*"{0:N0}"*/, v22, 0);
  if ( !haveQpLabel )
    goto LABEL_109;
  UILabel__set_text(haveQpLabel, (System_String_o *)emptyListNoticeLabel, 0);
  *(_QWORD *)&this->fields.getHpUpVal = 0;
  this->fields.isAllUpMax = 0;
  *(_OWORD *)&this->fields.selectSum = 0u;
  lateExp[0] = 0;
  nextExpLabel = this->fields.nextExpLabel;
  svtEquipKeep = 0;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v24, v25, v26, v27, v28, v29);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25092/*"{0:N0}"*/, v30, 0);
  if ( !nextExpLabel )
    goto LABEL_109;
  UILabel__set_text(nextExpLabel, (System_String_o *)emptyListNoticeLabel, 0);
  v123 = SelfUserGame;
  if ( type )
  {
    v120 = 0;
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
    v34 = *(_DWORD *)(emptyListNoticeLabel + 24);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    FriendShipSvtEquipNum = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
                              (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
                              (UserServantEntity_array *)emptyListNoticeLabel,
                              v33);
    v120 = v34 - FriendShipSvtEquipNum;
    if ( FriendShipSvtEquipNum <= 0 && v120 <= 0 )
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
    v36 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58337560(
      v36,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78072824);
    v37 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v37,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_76;
    max_length = ServantEquipList->max_length;
    if ( max_length >= 1 )
    {
      v39 = 0;
      m_Items = ServantEquipList->m_Items;
      while ( (unsigned int)v39 < max_length )
      {
        v41 = m_Items[v39];
        if ( !v41 )
          goto LABEL_109;
        v42 = *(_OWORD *)&v41->fields.id.fields.fakeValue;
        v43 = ServantEquipList;
        *(_OWORD *)&v130.fields.currentCryptoKey = *(_OWORD *)&v41->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v130.fields.fakeValue = v42;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v129 = v130;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v129, 0);
        baseUsrSvtData = this->fields.baseUsrSvtData;
        if ( !baseUsrSvtData )
          goto LABEL_109;
        v45 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        v46 = emptyListNoticeLabel;
        *(_OWORD *)&v128.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v128.fields.fakeValue = v45;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v128, 0);
        v47 = v46 == emptyListNoticeLabel;
        ServantEquipList = v43;
        if ( v47 )
        {
          if ( !v37 )
            goto LABEL_109;
          items = v37->fields._items;
          v49 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v37->fields._version;
          if ( !items )
            goto LABEL_109;
          size = v37->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v37,
              (Il2CppObject *)v41,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &items->obj.klass + size;
            v37->fields._size = size + 1;
            v51[4] = (Il2CppClass *)v41;
            emptyListNoticeLabel = sub_1C36FFC(v51 + 4, v41);
          }
          if ( !v36 )
            goto LABEL_109;
          emptyListNoticeLabel = System_Collections_Generic_List_object___Remove(
                                   v36,
                                   (Il2CppObject *)v41,
                                   (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        max_length = v43->max_length;
        if ( (int)++v39 >= max_length )
          goto LABEL_48;
      }
LABEL_110:
      sub_1C372BC(emptyListNoticeLabel);
    }
LABEL_48:
    if ( !v37 )
      goto LABEL_109;
    System_Collections_Generic_List_object___AddRange(
      v37,
      (System_Collections_Generic_IEnumerable_T__o *)v36,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___ToArray(
                                      v37,
                                      (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_109;
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    UserServantEntity__getExpInfo(this->fields.baseUsrSvtData, &lateExp[1], lateExp, &barExp, 0);
    v52 = this->fields.nextExpLabel;
    LODWORD(v130.fields.currentCryptoKey) = lateExp[0];
    v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v130, v53, v54, v55, v56, v57, v58);
    emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25092/*"{0:N0}"*/, v59, 0);
    if ( !v52 )
      goto LABEL_109;
    UILabel__set_text(v52, (System_String_o *)emptyListNoticeLabel, 0);
  }
  if ( type != 1 )
  {
    if ( !ServantEquipList )
      goto LABEL_109;
LABEL_76:
    v78 = 0;
    goto LABEL_77;
  }
  emptyListNoticeLabel = (__int64)*p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_109;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)emptyListNoticeLabel, 0);
  v60 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58337560(
    v60,
    (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
    (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78072824);
  v61 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v61,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( this->fields.baseUsrSvtData )
  {
    if ( !v60 )
      goto LABEL_109;
    if ( v60->fields._size >= 1 )
    {
      v63 = 0;
      while ( 1 )
      {
        emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                          v60,
                                          v63,
                                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !emptyListNoticeLabel )
          break;
        v64 = *(_OWORD *)(emptyListNoticeLabel + 32);
        *(_OWORD *)&v130.fields.currentCryptoKey = *(_OWORD *)(emptyListNoticeLabel + 16);
        *(_OWORD *)&v130.fields.fakeValue = v64;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v127 = v130;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v127, 0);
        v65 = this->fields.baseUsrSvtData;
        if ( !v65 )
          break;
        v66 = *(_OWORD *)&v65->fields.id.fields.fakeValue;
        *(_OWORD *)&v126.fields.currentCryptoKey = *(_OWORD *)&v65->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v126.fields.fakeValue = v66;
        if ( emptyListNoticeLabel == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v126, 0) )
          System_Collections_Generic_List_object___RemoveAt(
            v60,
            v63,
            (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
        if ( ++v63 >= v60->fields._size )
          goto LABEL_65;
      }
LABEL_109:
      sub_1C372B4(emptyListNoticeLabel);
    }
LABEL_65:
    emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___ToArray(
                                      v60,
                                      (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
  }
  if ( !ServantEquipList )
    goto LABEL_109;
  v67 = ServantEquipList->max_length;
  v68 = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
          (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
          ServantEquipList,
          v62);
  v69 = v67 - v68;
  if ( v68 <= 0 && v69 <= 0 )
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
  v120 = v69;
  if ( !emptyListNoticeLabel )
    goto LABEL_109;
  UserServantEntity__getExpInfo((UserServantEntity_o *)emptyListNoticeLabel, &lateExp[1], lateExp, &barExp, 0);
  v70 = this->fields.nextExpLabel;
  LODWORD(v130.fields.currentCryptoKey) = lateExp[0];
  v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v130, v71, v72, v73, v74, v75, v76);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25092/*"{0:N0}"*/, v77, 0);
  if ( !v70 )
    goto LABEL_109;
  UILabel__set_text(v70, (System_String_o *)emptyListNoticeLabel, 0);
  v78 = 1;
LABEL_77:
  v79 = ServantEquipList->max_length;
  if ( v79 >= 1 )
  {
    v80 = 0;
    while ( v80 < v79 )
    {
      v81 = &ServantEquipList->obj.klass + (int)v80;
      v84 = v81[4];
      v83 = (UserServantEntity_o **)(v81 + 4);
      v82 = v84;
      if ( !v84 )
        goto LABEL_109;
      byval_arg = v82->_1.byval_arg;
      *(_OWORD *)&v130.fields.currentCryptoKey = *(_OWORD *)&v82->_1.name;
      *(Il2CppType *)&v130.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v125 = v130;
      emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v125, 0);
      v86 = emptyListNoticeLabel;
      if ( v78
        && (emptyListNoticeLabel = BasicHelper__IsNullOrEmpty(
                                     (System_Collections_ICollection_o *)this->fields.selectMaterialUsrSvtIdList,
                                     0),
            (emptyListNoticeLabel & 1) == 0) )
      {
        emptyListNoticeLabel = (__int64)this->fields.selectMaterialUsrSvtIdList;
        if ( !emptyListNoticeLabel )
          goto LABEL_109;
        v88 = 0;
        v87 = 0;
        v89 = 0;
        while ( v89 < *(_DWORD *)(emptyListNoticeLabel + 24) )
        {
          Item = System_Collections_Generic_List_long___get_Item(
                   (System_Collections_Generic_List_long__o *)emptyListNoticeLabel,
                   v89,
                   (const MethodInfo_378AD68 *)Method_System_Collections_Generic_List_long__get_Item__);
          emptyListNoticeLabel = (__int64)this->fields.selectMaterialUsrSvtIdList;
          if ( Item == v86 )
          {
            v87 = 1;
            v88 = v89;
          }
          ++v89;
          if ( !emptyListNoticeLabel )
            goto LABEL_109;
        }
      }
      else
      {
        v87 = 0;
        v88 = 0;
      }
      if ( v80 >= LODWORD(ServantEquipList->max_length) )
        break;
      v91 = ServantEquipList;
      v92 = *v83;
      v93 = this->fields.baseUsrSvtData;
      favoriteUserSvtId = v123->fields.favoriteUserSvtId;
      v95 = (SvtEqCombineListViewItem_o *)sub_1C372A4(SvtEqCombineListViewItem_TypeInfo);
      SvtEqCombineListViewItem___ctor(
        v95,
        type,
        v80,
        v92,
        v86 == favoriteUserSvtId,
        v93,
        v87,
        setupInfo,
        finishSetupInfo,
        v119);
      if ( (v78 & v87) == 1 )
      {
        if ( !v95 )
          goto LABEL_109;
        v95->fields.selectNum = v88;
        selectMaterialUsrSvtIdList = this->fields.selectMaterialUsrSvtIdList;
        ++this->fields.selectSum;
        if ( !selectMaterialUsrSvtIdList )
          goto LABEL_109;
        if ( v88 == selectMaterialUsrSvtIdList->fields._size - 1 )
          v95->fields.isLastSelectMaterial = 1;
      }
      emptyListNoticeLabel = (__int64)this->fields.itemList;
      if ( !emptyListNoticeLabel )
        goto LABEL_109;
      v97 = *(_QWORD *)(emptyListNoticeLabel + 16);
      v98 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(emptyListNoticeLabel + 28);
      if ( !v97 )
        goto LABEL_109;
      ServantEquipList = v91;
      v99 = *(int *)(emptyListNoticeLabel + 24);
      if ( (unsigned int)v99 >= *(_DWORD *)(v97 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)emptyListNoticeLabel,
          (Il2CppObject *)v95,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
      }
      else
      {
        v100 = v97 + 8 * v99;
        *(_DWORD *)(emptyListNoticeLabel + 24) = v99 + 1;
        *(_QWORD *)(v100 + 32) = v95;
        emptyListNoticeLabel = sub_1C36FFC(v100 + 32, v95);
      }
      v79 = v91->max_length;
      if ( (int)++v80 >= v79 )
        goto LABEL_105;
    }
    goto LABEL_110;
  }
LABEL_105:
  SvtEqCombineListViewManager__RefrashListDisp(this, v31);
  servantInfoLabel = this->fields.servantInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v102 = LocalizationManager__Get((System_String_o *)StringLiteral_12478/*"SUM_INFO"*/, 0);
  LODWORD(v130.fields.currentCryptoKey) = v120;
  v109 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v130, v103, v104, v105, v106, v107, v108);
  svtEquipKeep = v123->fields.svtEquipKeep;
  v116 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v110, v111, v112, v113, v114, v115);
  emptyListNoticeLabel = (__int64)System_String__Format_63602948(v102, v109, v116, 0);
  if ( !servantInfoLabel )
    goto LABEL_109;
  UILabel__set_text(servantInfoLabel, (System_String_o *)emptyListNoticeLabel, 0);
  SvtEqCombineListViewManager__SetMaterialSvtInfo(this, v117);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  SvtEqCombineListViewManager__SetFilterButtonImage(this, v118);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
}


void SvtEqCombineListViewManager__SetSortButtonImage(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v5; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v7; // x8
  int32_t sortKind; // w9
  System_String_o **v9; // x8
  struct ListViewSort_o *v10; // x8
  System_String_o **v11; // x9
  System_String_o **v12; // x10
  System_String_o **v13; // x8
  System_String_o **v14; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v16; // x20

  if ( (byte_4C3D0D9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_17523/*"btn_sort_up"*/);
    sub_1C37058(&StringLiteral_17621/*"btn_txt_up"*/);
    sub_1C37058(&StringLiteral_17572/*"btn_txt_new"*/);
    sub_1C37058(&StringLiteral_17562/*"btn_txt_down"*/);
    sub_1C37058(&StringLiteral_17579/*"btn_txt_old"*/);
    sub_1C37058(&StringLiteral_17520/*"btn_sort_down"*/);
    byte_4C3D0D9 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_43;
    v5 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v5 )
      goto LABEL_43;
    UILabel__set_text(v5, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v7 = this->fields.sort;
    if ( !v7 )
      goto LABEL_43;
    sortKind = v7->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v9 = (System_String_o **)(v7->fields.isAscendingOrder ? &StringLiteral_17579/*"btn_txt_old"*/ : &StringLiteral_17572/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v9, 0);
      v10 = this->fields.sort;
      if ( !v10 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      v11 = (System_String_o **)&StringLiteral_17520/*"btn_sort_down"*/;
      v12 = (System_String_o **)&StringLiteral_17523/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v13 = (System_String_o **)(v7->fields.isAscendingOrder ? &StringLiteral_17621/*"btn_txt_up"*/ : &StringLiteral_17562/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
      v10 = this->fields.sort;
      if ( !v10 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      v11 = (System_String_o **)&StringLiteral_17523/*"btn_sort_up"*/;
      v12 = (System_String_o **)&StringLiteral_17520/*"btn_sort_down"*/;
    }
    if ( v10->fields.isAscendingOrder )
      v14 = v11;
    else
      v14 = v12;
    UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v16 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(sort, this->fields.alignedBonusFilterInfos, 0, 0);
      if ( v16 )
      {
        UILabel__set_text(v16, (System_String_o *)sort, 0);
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
    sub_1C372B4(sort);
  }
}


void SvtEqCombineListViewManager__SetStatusKind(
        SvtEqCombineListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
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
  int32_t v21; // w1

  if ( (byte_4C3D0AD & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_17640/*"button_allchoice_reg"*/);
    sub_1C37058(&StringLiteral_17643/*"button_alllock_unreg"*/);
    sub_1C37058(&StringLiteral_11656/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C37058(&StringLiteral_11657/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C37058(&StringLiteral_17656/*"button_select_reg"*/);
    sub_1C37058(&StringLiteral_7214/*"HEADER_MSG_SVTEQ_MATERIAL"*/);
    sub_1C37058(&StringLiteral_7213/*"HEADER_MSG_SVTEQ_BASE"*/);
    sub_1C37058(&StringLiteral_17657/*"button_select_unreg"*/);
    sub_1C37058(&StringLiteral_17642/*"button_alllock_reg"*/);
    sub_1C37058(&StringLiteral_17641/*"button_allchoice_unreg"*/);
    byte_4C3D0AD = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_51;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v6 = &StringLiteral_17656/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_17657/*"button_select_unreg"*/;
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
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v9 = &StringLiteral_17642/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v9 = &StringLiteral_17643/*"button_alllock_unreg"*/;
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
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v12 = &StringLiteral_17640/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v12 = &StringLiteral_17641/*"button_allchoice_unreg"*/;
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
    sub_1C372B4(statusTabButton);
  }
  v14 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
  UICommonButton__SetColliderEnable(choiceTabButton, v14, 0, 0);
  currentType = this->fields.currentType;
  if ( currentType == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = &StringLiteral_7214/*"HEADER_MSG_SVTEQ_MATERIAL"*/;
  }
  else
  {
    if ( currentType )
      goto LABEL_34;
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = &StringLiteral_7213/*"HEADER_MSG_SVTEQ_BASE"*/;
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
    v20 = &StringLiteral_11656/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
  }
  else
  {
    if ( v18 != 1 )
      goto LABEL_44;
    v19 = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = &StringLiteral_11657/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
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
      v21 = 12;
    else
      v21 = 20;
  }
  else
  {
    v21 = 14;
  }
  if ( !statusTabButton )
    goto LABEL_51;
  UILabel__set_fontSize((UILabel_o *)statusTabButton, v21, 0);
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
  System_Int64_array *v9; // x1
  System_Int64_array *v10; // x2
  bool v11; // w4
  bool v12; // w5
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int64_array *v14; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C3D0E1 & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SvtEqCombineListViewManager_EndStatusSync__);
    byte_4C3D0E1 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v14 = 0;
  choiceList = 0;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( SvtEqCombineListViewManager__GetSwapChoiceList(this, &choiceList, &v14, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1C36FFC(&this->fields.requestCallback, callback);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v13,
                         (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v10 = v14;
        v9 = choiceList;
        v12 = 1;
        v11 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1C372B4(Request_object);
    }
  }
  else if ( modeKind == 1 && SvtEqCombineListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1C36FFC(&this->fields.requestCallback, callback);
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndStatusSync__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v7,
                       (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v10 = unlockList;
      v9 = lockList;
      v11 = 1;
      v12 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v9, v10, 0, v11, v12, 0);
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
  if ( (byte_4C3D0EB & 1) == 0 )
  {
    this = (SvtEqCombineListViewManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_long__Contains__);
    byte_4C3D0EB = 1;
  }
  if ( !x
    || (selectMaterialUsrSvtIdList = v4->fields.selectMaterialUsrSvtIdList,
        this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewItem__get_UserSvtId(x, (const MethodInfo *)x),
        !selectMaterialUsrSvtIdList) )
  {
    sub_1C372B4(this);
  }
  if ( System_Collections_Generic_List_long___Contains(
         selectMaterialUsrSvtIdList,
         (int64_t)this,
         (const MethodInfo_378B3D0 *)Method_System_Collections_Generic_List_long__Contains__) )
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

  if ( (byte_4C3D0A3 & 1) == 0 )
  {
    sub_1C37058(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo);
    byte_4C3D0A3 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SvtEqCombineListViewManager_o *)sub_1C37574(v7);
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

  if ( (byte_4C3D0A5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3D0A5 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SvtEqCombineListViewManager_o *)sub_1C37574(v7);
  SvtEqCombineListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *SvtEqCombineListViewManager__get_ClippingObjectList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *v9; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v11; // x0
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C3D0AB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D0AB = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v9 = Component_object;
      if ( !Component_object )
        sub_1C372B4(0);
      Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem((SvtEqCombineListViewObject_o *)Component_object, v8);
      if ( !Item )
        sub_1C372B4(0);
      if ( Item->fields.isTermination )
      {
        v11 = ListViewManager__ClippingItem_43820548((ListViewManager_o *)this, Item, 0);
        if ( v11 )
        {
          if ( !v3 )
            sub_1C372B4(v11);
          items = v3->fields._items;
          v13 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C372B4(v11);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v9,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C372B4(Item);
        items = v3->fields._items;
        v13 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C372B4(Item);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v15 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v15[4] = (Il2CppClass *)v9;
        sub_1C36FFC(v15 + 4, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v3;
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *SvtEqCombineListViewManager__get_ObjectList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v8; // x1
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3D0AA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D0AA = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v15.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v8 = Component_object;
      if ( !v3 )
        sub_1C372B4(Component_object);
      items = v3->fields._items;
      v10 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C372B4(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        v12 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v12[4] = (Il2CppClass *)v8;
        sub_1C36FFC(v12 + 4, v8);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C3D0A4 & 1) == 0 )
  {
    sub_1C37058(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo);
    byte_4C3D0A4 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SvtEqCombineListViewManager_o *)sub_1C37574(v7);
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

  if ( (byte_4C3D0A6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3D0A6 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SvtEqCombineListViewManager_o *)sub_1C37574(v7);
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
  sub_1C36FFC(&this->fields._selectedMtSvtList_k__BackingField, value);
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
  sub_1C36FFC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A72BF0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A72B98;
}


System_IAsyncResult_o *SvtEqCombineListViewManager_CallbackFunc__BeginInvoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = kind;
  if ( (byte_4C3D0EC & 1) == 0 )
  {
    sub_1C37058(&SvtEqCombineListViewManager_ResultKind_TypeInfo);
    byte_4C3D0EC = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             SvtEqCombineListViewManager_ResultKind_TypeInfo,
             &v14,
             list,
             callback,
             object,
             method,
             v6,
             v7);
  v13[1] = list;
  return (System_IAsyncResult_o *)sub_1C3700C(this, v13, callback, object);
}


void SvtEqCombineListViewManager_CallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  sub_1C36FFC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A72C68;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A72C20;
}


System_IAsyncResult_o *SvtEqCombineListViewManager_RequestCallbackFunc__BeginInvoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isRequest;
  if ( (byte_4C3D0ED & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C3D0ED = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void SvtEqCombineListViewManager_RequestCallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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

  if ( (byte_4C3D0EE & 1) == 0 )
  {
    sub_1C37058(&SvtEqCombineListViewManager___c_TypeInfo);
    byte_4C3D0EE = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(SvtEqCombineListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SvtEqCombineListViewManager___c_TypeInfo->static_fields->__9 = (struct SvtEqCombineListViewManager___c_o *)v1;
  sub_1C36FFC(SvtEqCombineListViewManager___c_TypeInfo->static_fields, v1);
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
    sub_1C372B4(this);
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

  if ( (byte_4C3D0EF & 1) == 0 )
  {
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0EF = 1;
  }
  if ( !item )
    return (SvtEqCombineListViewItem_o *)item;
  naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (SvtEqCombineListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    return (SvtEqCombineListViewItem_o *)item;
  }
  v6 = (SvtEqCombineListViewManager___c_o *)sub_1C37574(item);
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
    sub_1C372B4(this);
  return SvtEqCombineListViewItem__get_UserSvtId(x, (const MethodInfo *)x);
}