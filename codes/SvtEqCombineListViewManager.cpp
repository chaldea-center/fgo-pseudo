void __fastcall SvtEqCombineListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  int32_t v6; // w1

  if ( (byte_49FFFAF & 1) == 0 )
  {
    sub_1B640C8(&SvtEqCombineListViewManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_13032/*"SvtEqCombine"*/, v4);
    byte_49FFFAF = 1;
  }
  static_fields = SvtEqCombineListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->COLOR_VAL = 0x13EC00000LL;
  v6 = StringLiteral_13032/*"SvtEqCombine"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_13032/*"SvtEqCombine"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->SORT_SAVE_KEY, v6, v2, v3);
  SvtEqCombineListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void __fastcall SvtEqCombineListViewManager___ctor(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FFFAE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v4);
    byte_49FFFAE = 1;
  }
  this->fields.selectMax = 20;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  this->fields.tempMtSvtList = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tempMtSvtList, (int32_t)v5, v6, v7);
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
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_49FFFAD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v5);
    byte_49FFFAD = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
  {
    sub_1B64324(itemSortList);
  }
  methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    SvtEqCombineListViewItem__set_IsDragSelect((SvtEqCombineListViewItem_o *)itemSortList, 0, 0LL);
  }
  else
  {
    sub_1B645E4(itemSortList);
    SvtEqCombineListViewManager___ctor(v8, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SvtEqCombineListViewManager__CheckCompareQp(
        SvtEqCombineListViewManager_o *this,
        int32_t nowCombineQp,
        const MethodInfo *method)
{
  int32_t CombineQp; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v9; // w21
  SvtEqCombineListViewItem_o *v10; // x22
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *v13; // x0
  int32_t *v14; // x1
  int32_t *v15; // x2
  int32_t v16; // w3
  const MethodInfo *v17; // x4

  CombineQp = nowCombineQp;
  if ( (byte_49FFF79 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&nowCombineQp);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v6);
    byte_49FFF79 = 1;
  }
  if ( !this->fields.selectSum )
    return CombineQp;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1B64324(itemList);
  size = itemList->fields._size;
  if ( size < 1 )
    return CombineQp;
  v9 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v9,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_16;
    v10 = (SvtEqCombineListViewItem_o *)itemList;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL)
      && v10->fields.isLimitCntTarget
      && CombineQp < SvtEqCombineListViewItem__get_CombineQp(v10, 0LL) )
    {
      CombineQp = SvtEqCombineListViewItem__get_CombineQp(v10, 0LL);
    }
    if ( size == ++v9 )
      return CombineQp;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  sub_1B645E4(itemList);
  return SvtEqCombineListViewManager__CheckIncrementLv(v13, v14, v15, v16, v17);
}


void __fastcall SvtEqCombineListViewManager__CheckDragMax(
        SvtEqCombineListViewManager_o *this,
        bool *isMaxLvSelected,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *itemList; // x0
  int v19; // w24
  int v20; // w25
  _BOOL8 v21; // x0
  SvtEqCombineListViewItem_o *current; // x21
  __int64 methodPtr_low; // x9
  UserServantEntity_o *baseUsrSvtData; // x0
  UserServantEntity_o *v25; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v28; // x0
  __int64 v29; // x1
  float v30; // s8
  float v31; // s0
  unsigned int v32; // w8
  struct UserServantEntity_o *v33; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x21
  __int64 v35; // x22
  __int64 v36; // x23
  int32_t v37; // w8
  int v38; // w23
  int v39; // w22
  const MethodInfo *v40; // x4
  int32_t LevelMax; // w21
  int32_t v42; // w8
  int32_t v43; // w22
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+40h] [xbp-80h] BYREF
  __int64 checkLv; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_49FFF7B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, isMaxLvSelected);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v17);
    byte_49FFF7B = 1;
  }
  memset(&v46, 0, sizeof(v46));
  checkLv = 0LL;
  memset(&v45, 0, sizeof(v45));
  *isMaxLvSelected = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v19 = 0;
  v20 = 0;
  v46 = v44;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v21 )
      break;
    current = (SvtEqCombineListViewItem_o *)v46.fields._current;
    if ( !v46.fields._current )
      goto LABEL_49;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v46.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)v46.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_1B645E4(v46.fields._current);
LABEL_49:
      sub_1B64324(v21);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v46.fields._current, 0LL) || current->fields.dragSelectNum >= 1 )
    {
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        sub_1B64324(0LL);
      if ( !UserServantEntity__isLevelMax(baseUsrSvtData, 0LL) )
        goto LABEL_16;
      v25 = this->fields.baseUsrSvtData;
      if ( !v25 )
        sub_1B64324(0LL);
      if ( UserServantEntity__isLevelMax(v25, 0LL) && current->fields.isLimitCntTarget )
      {
LABEL_16:
        v20 += current->fields.materialExp;
        v19 += SvtEqCombineListViewItem__get_GetAddTotalExp(current, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_53;
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v44,
      combineEventList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v45 = v44;
    while ( 1 )
    {
      v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v45,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v28 )
        break;
      if ( !v45.fields._current )
        sub_1B64324(v28);
      if ( HIDWORD(v45.fields._current[1].klass) == 17 )
      {
        v30 = *(float *)&v45.fields._current[3].monitor;
        if ( !byte_49F779D )
        {
          sub_1B640C8(&System_Math_TypeInfo, v29);
          byte_49F779D = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v31 = v30 * (float)v20;
        v32 = vcvtps_s32_f32(v31);
        if ( ceilf(v31) == INFINITY )
          v20 = 0x80000000;
        else
          v20 = v32;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v45,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( itemList )
    {
      itemList = DataManager__GetMasterData_object_(
                   (DataManager_o *)itemList,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      v33 = this->fields.baseUsrSvtData;
      if ( v33 )
      {
        v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemList;
        v36 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
        v35 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v48.fields.currentCryptoKey = v36;
        *(_QWORD *)&v48.fields.fakeValue = v35;
        itemList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v48, 0LL);
        if ( v34 )
        {
          itemList = DataMasterBase_object__object__int___GetEntity(
                       v34,
                       (int32_t)itemList,
                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( itemList )
          {
            v37 = *((_DWORD *)itemList + 33);
            itemList = this->fields.baseUsrSvtData;
            this->fields.expType = v37;
            if ( itemList )
            {
              v39 = *((_DWORD *)itemList + 65);
              LODWORD(checkLv) = *((_DWORD *)itemList + 64);
              v38 = checkLv;
              LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)itemList, 0LL);
              if ( v38 == LevelMax )
              {
                v42 = 0;
              }
              else
              {
                v43 = v20 + v19 + v39;
                while ( !SvtEqCombineListViewManager__CheckIncrementLv(
                           this,
                           (int32_t *)&checkLv,
                           (int32_t *)&checkLv + 1,
                           v43,
                           v40) )
                  ;
                v42 = HIDWORD(checkLv);
              }
              *isMaxLvSelected = v42 >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_53:
    sub_1B64324(itemList);
  }
}


bool __fastcall SvtEqCombineListViewManager__CheckIncrementLv(
        SvtEqCombineListViewManager_o *this,
        int32_t *checkLv,
        int32_t *increLv,
        int32_t totalExp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  void *baseUsrSvtData; // x0
  int32_t LevelMax; // w0
  int32_t v12; // w8
  int32_t v13; // w8
  bool result; // w0

  if ( (byte_49FFF7C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExpMaster___, checkLv);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FFF7C = 1;
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
  baseUsrSvtData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_object_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0LL)) == 0LL )
  {
LABEL_16:
    sub_1B64324(baseUsrSvtData);
  }
  v12 = *((_DWORD *)baseUsrSvtData + 6);
  if ( v12 <= totalExp )
  {
    if ( v12 != totalExp )
    {
      result = 0;
      ++*checkLv;
      return result;
    }
    v13 = *((_DWORD *)baseUsrSvtData + 5) + 1;
  }
  else
  {
    v13 = *((_DWORD *)baseUsrSvtData + 5);
  }
  *increLv = v13;
  return 1;
}


bool __fastcall SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(
        SvtEqCombineListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *selectedMtSvtList_k__BackingField; // x0
  bool v10; // w20
  int v11; // w19
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FFF96 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, usrSvtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v8);
    byte_49FFF96 = 1;
  }
  memset(&v13, 0, sizeof(v13));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v13,
        selectedMtSvtList_k__BackingField,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v13,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
        if ( !v10 )
          break;
        if ( !v13.fields._current )
          sub_1B64324(0LL);
        if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v13.fields._current, 0LL) == usrSvtId )
        {
          v11 = 5;
          goto LABEL_12;
        }
      }
      v11 = 2;
LABEL_12:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v13,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      LOBYTE(selectedMtSvtList_k__BackingField) = v10 && v11 == 5;
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w22
  int32_t v7; // w20
  System_Collections_Generic_List_object__o *v8; // x21
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49FFF8A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v4);
    byte_49FFF8A = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1B64324(itemList);
  size = itemList->fields._size;
  if ( size < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_15;
    v8 = itemList;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL)
      && (BYTE4(v8[5].klass) || BYTE4(v8[6].klass) || BYTE5(v8[6].klass)) )
    {
      return 1;
    }
    if ( size == ++v7 )
      return 0;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_15;
  }
  sub_1B645E4(itemList);
  return (unsigned __int8)SvtEqCombineListViewManager__GetSelectedMaterialList(v11, v12);
}


void __fastcall SvtEqCombineListViewManager__ClearSelectedSvtList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_49FFF8E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, method);
    byte_49FFF8E = 1;
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
    sub_1B64324(servantEquipCheckDialog);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__CreateList(
        SvtEqCombineListViewManager_o *this,
        int32_t type,
        int32_t modeKind,
        EventUpValSetupInfo_o *setupInfo,
        EventUpValSetupInfo_o *finishSetupInfo,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  SvtEqCombineListViewManager_c *v14; // x0
  ListViewSort_o *sort; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v20; // x1
  struct ListViewSort_o **p_sort; // x22
  UnityEngine_GameObject_o *gameObject; // x25
  System_Collections_ICollection_o **p_alignedBonusFilterInfos; // x25
  int32_t v24; // w2
  int32_t v25; // w3
  System_Int32_array *servantEquipFilterEventCampaignIds; // x2
  System_Int32_array *servantEquipFilterEventIds; // x3
  System_Int32_array *v28; // x4
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  struct ListViewSort_o *v32; // x26
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x4
  UILabel_o *spendQpInfoLabel; // x23
  UILabel_o *getExpInfoLabel; // x23
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x4
  const MethodInfo *v40; // x2

  if ( (byte_49FFF73 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&SvtEqCombineListViewManager_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_6872/*"GET_EXP_INFO"*/, v12);
    sub_1B640C8(&StringLiteral_9170/*"NEED_QP_INFO"*/, v13);
    byte_49FFF73 = 1;
  }
  this->fields.currentType = type;
  v14 = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v14);
  sortStatusList = SvtEqCombineListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_37;
  if ( sortStatusList->max_length <= type )
    sub_1B6432C(sort, v16);
  v20 = sortStatusList->m_Items[type];
  this->fields.sort = v20;
  p_sort = &this->fields.sort;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v20, v17, v18);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v24, v25);
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
    v28 = 0LL;
    goto LABEL_16;
  }
  servantEquipFilterEventCampaignIds = setupInfo->fields.servantEquipFilterEventCampaignIds;
  servantEquipFilterEventIds = setupInfo->fields.servantEquipFilterEventIds;
  if ( !finishSetupInfo )
    goto LABEL_15;
LABEL_13:
  v28 = finishSetupInfo->fields.servantEquipFilterEventIds;
LABEL_16:
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         sort,
                         0LL,
                         servantEquipFilterEventCampaignIds,
                         servantEquipFilterEventIds,
                         v28,
                         0LL,
                         0,
                         0LL);
  *p_alignedBonusFilterInfos = (System_Collections_ICollection_o *)AlignedBonusFilter;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos,
    (int32_t)AlignedBonusFilter,
    v30,
    v31);
  v32 = *p_sort;
  sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(*p_alignedBonusFilterInfos, 0LL);
  if ( !v32 )
    goto LABEL_37;
  v32->fields.isBonusKind = ((unsigned __int8)sort & 1) == 0;
  sort = (ListViewSort_o *)this->fields.scaleChangeButton;
  if ( !sort )
    goto LABEL_37;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
  if ( !type )
  {
    SvtEqCombineListViewManager__SetDispActive(this, 0, v33);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v38);
    SvtEqCombineListViewManager__SetServantList(this, 0, setupInfo, finishSetupInfo, v39);
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
    SvtEqCombineListViewManager__SetDispActive(this, 1, v33);
    SvtEqCombineListViewManager__SetBtnEnable(this, 0, v34);
    this->fields.selectMax = 20;
    SvtEqCombineListViewManager__SetServantList(this, 1, setupInfo, finishSetupInfo, v35);
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
          sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9170/*"NEED_QP_INFO"*/, 0LL);
          if ( spendQpInfoLabel )
          {
            UILabel__set_text(spendQpInfoLabel, (System_String_o *)sort, 0LL);
            getExpInfoLabel = this->fields.getExpInfoLabel;
            sort = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6872/*"GET_EXP_INFO"*/, 0LL);
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
    sub_1B64324(sort);
  }
LABEL_32:
  sort = (ListViewSort_o *)this->fields.bonusFilterKindButton;
  if ( !sort )
    goto LABEL_37;
  sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !*p_sort || !sort )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, (*p_sort)->fields.isBonusKind, 0LL);
  SvtEqCombineListViewManager__SetStatusKind(this, modeKind, v40);
  if ( !type )
    EventTutorialMaster__CheckTutorial(-1, 57, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall SvtEqCombineListViewManager__CreateSorteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  SvtEqCombineListViewManager_c *v4; // x0
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  SvtEqCombineListViewManager_c *v8; // x8
  __int64 v9; // x19
  struct SvtEqCombineListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v11; // x24
  __int64 i; // x22
  SvtEqCombineListViewManager_c *v13; // x0
  struct SvtEqCombineListViewManager_StaticFields *v14; // x8
  unsigned int *sortStatusList; // x26
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  ListViewSort_o *v21; // x19
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x0
  int v27; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FFF6E & 1) == 0 )
  {
    sub_1B640C8(&ListViewSort___TypeInfo, v1);
    sub_1B640C8(&ListViewSort_TypeInfo, v2);
    sub_1B640C8(&SvtEqCombineListViewManager_TypeInfo, v3);
    byte_49FFF6E = 1;
  }
  v4 = SvtEqCombineListViewManager_TypeInfo;
  v27 = 0;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v4 = SvtEqCombineListViewManager_TypeInfo;
  }
  if ( !v4->static_fields->isInitSystem )
  {
    v5 = sub_1B64170(ListViewSort___TypeInfo, 2LL);
    v8 = SvtEqCombineListViewManager_TypeInfo;
    v9 = v5;
    if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v8 = SvtEqCombineListViewManager_TypeInfo;
    }
    static_fields = v8->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v9;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->sortStatusList, v9, v6, v7);
    v11 = 0LL;
    for ( i = 8LL; ; i += 2LL )
    {
      v13 = SvtEqCombineListViewManager_TypeInfo;
      if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
        v13 = SvtEqCombineListViewManager_TypeInfo;
      }
      v14 = v13->static_fields;
      if ( i == 12 )
        break;
      sortStatusList = (unsigned int *)v14->sortStatusList;
      SORT_SAVE_KEY = v14->SORT_SAVE_KEY;
      v27 = v11 + 1;
      v17 = System_Int32__ToString((int32_t)&v27, 0LL);
      v18 = System_String__Concat_61375396(SORT_SAVE_KEY, v17, 0LL);
      v21 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v19, v20);
      ListViewSort___ctor_40426136(v21, v18, 3, 0, 0LL);
      if ( !sortStatusList )
        sub_1B64324(v22);
      if ( v21 )
      {
        v22 = sub_1B64204(v21, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v22 )
        {
          v26 = sub_1B64348(0LL);
          sub_1B641F0(v26, 0LL);
        }
      }
      if ( v11 >= sortStatusList[6] )
        sub_1B6432C(v22, v23);
      *(_QWORD *)&sortStatusList[i] = v21;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&sortStatusList[i], (int32_t)v21, v24, v25);
      ++v11;
    }
    v14->isInitSystem = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__DecideDragSelect(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 methodPtr_low; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  int32_t selectSum; // w8
  int items; // w21
  _BOOL8 v17; // x0
  int klass; // w9
  void *v19; // x0
  int v20; // w1
  __int64 v21; // x20
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FFFAC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v9);
    byte_49FFFAC = 1;
  }
  memset(&v22, 0, sizeof(v22));
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_22;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_22;
  v11 = itemSortList;
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
          LODWORD(v11->fields._items) = selectSum;
          this->fields.selectSum = selectSum + 1;
        }
      }
      goto LABEL_20;
    }
    if ( !IsSelect )
      goto LABEL_20;
    items = (int)v11->fields._items;
    ListViewItem__set_IsSelect((ListViewItem_o *)v11, 0, 0LL);
    BYTE2(v11[4].monitor) = 0;
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    --this->fields.selectSum;
    if ( itemSortList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        itemSortList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v22,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v17 )
          break;
        if ( !v22.fields._current )
          sub_1B64324(v17);
        klass = (int)v22.fields._current[1].klass;
        if ( klass > items )
          LODWORD(v22.fields._current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_20;
    }
LABEL_22:
    sub_1B64324(itemSortList);
  }
  sub_1B645E4(itemSortList);
  if ( v20 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C4EB58();
  }
  v21 = *(_QWORD *)__cxa_begin_catch(v19);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v21 )
    sub_1B6431C(v21);
LABEL_20:
  SvtEqCombineListViewItem__set_IsDragSelect((SvtEqCombineListViewItem_o *)v11, 0, 0LL);
}


void __fastcall SvtEqCombineListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  SvtEqCombineListViewManager_c *v2; // x0
  __int64 v3; // x1
  __int64 v4; // x20
  SvtEqCombineListViewManager_c *v5; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_49FFF6F & 1) == 0 )
  {
    sub_1B640C8(&SvtEqCombineListViewManager_TypeInfo, v1);
    byte_49FFF6F = 1;
  }
  v2 = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineListViewManager__CreateSorteData((const MethodInfo *)v2);
  v4 = 0LL;
  do
  {
    v5 = SvtEqCombineListViewManager_TypeInfo;
    if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
      v5 = SvtEqCombineListViewManager_TypeInfo;
    }
    sortStatusList = v5->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_13;
    if ( (unsigned int)v4 >= sortStatusList->max_length )
      sub_1B6432C(v5, v3);
    v5 = (SvtEqCombineListViewManager_c *)sortStatusList->m_Items[v4];
    if ( !v5 )
LABEL_13:
      sub_1B64324(v5);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v5, 0LL);
    ++v4;
  }
  while ( (_DWORD)v4 != 2 );
}


void __fastcall SvtEqCombineListViewManager__DestroyList(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B64324(0LL);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v4, v5);
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
  SvtEqCombineListViewManager__SetMode_45061424(this, 2, v6);
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
  SvtEqCombineListViewManager__SetMode_45061424(this, 2, v6);
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
  SvtEqCombineListViewManager__SetMode_45061424(this, 2, v5);
}


void __fastcall SvtEqCombineListViewManager__EndCloseSelectFilterKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__EndSelectFilterKind(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_49FFF98 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__, v6);
    byte_49FFF98 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SvtEqCombineListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1B64324(v12);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__EndSelectSortKind(
        SvtEqCombineListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FFF9D & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49FFF9D = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
    sub_1B6406C(p_requestCallback, 0, (int32_t)method, v3);
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v9; // w22
  int64_t v10; // x21
  __int64 methodPtr_low; // x9
  int64_t result; // x0
  SvtEqCombineListViewManager_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_49FFFA0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v6);
    byte_49FFFA0 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1B64324(itemList);
  size = itemList->fields._size;
  if ( size < 1 )
  {
    return 0LL;
  }
  else
  {
    v9 = 0;
    v10 = 0LL;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v9,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_13;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( LODWORD(itemList[3].fields._syncRoot) == svtId )
        ++v10;
      if ( size == v9 )
        return v10;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_13;
    }
    sub_1B645E4(itemList);
    SvtEqCombineListViewManager__OnClickScaleChange(v13, v14);
  }
  return result;
}


int32_t __fastcall SvtEqCombineListViewManager__GetBaseCollectionLv(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Instance; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v8; // q1
  UserServantCollectionMaster_o *v9; // x20
  struct UserServantEntity_o *v10; // x8
  int64_t v11; // x19
  __int64 v12; // x21
  __int64 v13; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FFF7E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFF7E = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v8 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v9 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v16 = v17;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v16, 0LL);
  v10 = this->fields.baseUsrSvtData;
  if ( !v10 )
    goto LABEL_14;
  v11 = Instance;
  v13 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
  if ( !v9 )
LABEL_14:
    sub_1B64324(Instance);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v11, Instance, 0LL);
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
        sub_1B6432C(this, list);
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
    sub_1B64324(this);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
SvtEqCombineListViewItem_o *__fastcall SvtEqCombineListViewManager__GetItem(
        SvtEqCombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SvtEqCombineListViewItem_o *result; // x0
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *v8; // x0
  int64_t v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_49FFF7F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v5);
    byte_49FFF7F = 1;
  }
  result = (SvtEqCombineListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SvtEqCombineListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1B645E4(result);
        SvtEqCombineListViewManager__ModifyItem(v8, v9, v10);
      }
    }
  }
  return result;
}


UserServantEntity_o *__fastcall SvtEqCombineListViewManager__GetSelectBaseSvtData(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  ServantStatusBattleListViewItem_o *p_baseUsrSvtData; // x19
  ServantStatusBattleListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  Il2CppObject *Entity; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-40h]

  if ( (byte_49FFF7D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFF7D = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  p_baseUsrSvtData = (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  klass = p_baseUsrSvtData->klass;
  if ( !p_baseUsrSvtData->klass )
    goto LABEL_12;
  byval_arg = klass->_1.byval_arg;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v16.fields.fakeValue = byval_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v15 = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v15, 0LL);
  if ( !v10 )
LABEL_12:
    sub_1B64324(Instance);
  Entity = DataMasterBase_object__object__long___GetEntity(
             v10,
             (int64_t)Instance,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUsrSvtData->klass = (ServantStatusBattleListViewItem_c *)Entity;
  sub_1B6406C(p_baseUsrSvtData, (int32_t)Entity, v12, v13);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  void *itemList; // x0
  int v19; // w23
  int32_t v20; // w21
  Il2CppObject *v21; // x22
  __int64 methodPtr_low; // x9
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x21
  Il2CppObject *v29; // x22
  struct SvtEqCombineListViewManager___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int v33; // w23
  int32_t v34; // w21
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *result; // x0
  SvtEqCombineListViewManager_o *v36; // x0
  const MethodInfo *v37; // x1

  if ( (byte_49FFF8B & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_SvtEqCombineListViewItem__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v10);
    sub_1B640C8(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v11);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v12);
    sub_1B640C8(&Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__138_0__, v13);
    sub_1B640C8(&SvtEqCombineListViewManager___c_TypeInfo, v14);
    byte_49FFF8B = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  v19 = *((_DWORD *)itemList + 6);
  if ( v19 < 1 )
  {
LABEL_18:
    itemList = SvtEqCombineListViewManager___c_TypeInfo;
    if ( !SvtEqCombineListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager___c_TypeInfo);
      itemList = SvtEqCombineListViewManager___c_TypeInfo;
    }
    v28 = *(System_Comparison_T__o **)(*((_QWORD *)itemList + 23) + 8LL);
    if ( !v28 )
    {
      if ( !*((_DWORD *)itemList + 56) )
      {
        j_il2cpp_runtime_class_init_0(itemList);
        itemList = SvtEqCombineListViewManager___c_TypeInfo;
      }
      v29 = (Il2CppObject *)**((_QWORD **)itemList + 23);
      v28 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_SvtEqCombineListViewItem__TypeInfo, v16, v17);
      System_Comparison_object____ctor(
        v28,
        v29,
        Method_SvtEqCombineListViewManager___c__GetSelectedMaterialList_b__138_0__,
        0LL);
      static_fields = SvtEqCombineListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__138_0 = (struct System_Comparison_SvtEqCombineListViewItem__o *)v28;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__138_0, (int32_t)v28, v31, v32);
    }
    if ( v15 )
    {
      System_Collections_Generic_List_object___Sort_55243320(
        v15,
        v28,
        (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Sort__);
      if ( v15->fields._size < 1 )
        return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v15;
      v33 = 0;
      v34 = 0;
      while ( 1 )
      {
        itemList = System_Collections_Generic_List_object___get_Item(
                     v15,
                     v34,
                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
        if ( !itemList )
          break;
        if ( *((_DWORD *)itemList + 39) > v33 )
        {
          itemList = System_Collections_Generic_List_object___get_Item(
                       v15,
                       v34,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
          if ( !itemList )
            break;
          v33 = *((_DWORD *)itemList + 39);
          itemList = System_Collections_Generic_List_object___get_Item(
                       v15,
                       v34,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
          if ( !itemList )
            break;
          this->fields.lastSelectIndex = *((_DWORD *)itemList + 6);
        }
        if ( ++v34 >= v15->fields._size )
          return (System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v15;
      }
    }
LABEL_34:
    sub_1B64324(itemList);
  }
  v20 = 0;
  while ( 1 )
  {
    itemList = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)itemList,
                 v20,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_34;
    v21 = (Il2CppObject *)itemList;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    itemList = (void *)ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL);
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      if ( !v15 )
        goto LABEL_34;
      items = v15->fields._items;
      v25 = Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Add__;
      ++v15->fields._version;
      if ( !items )
        goto LABEL_34;
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          v21,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v21;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v21, v17, v23);
      }
    }
    if ( v19 == ++v20 )
      goto LABEL_18;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_34;
  }
  sub_1B645E4(itemList);
  SvtEqCombineListViewManager__SetSelectedMaterialInfo(v36, v37);
  return result;
}


bool __fastcall SvtEqCombineListViewManager__GetSwapChoiceList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_long__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int64_t itemList; // x0
  int v22; // w25
  int32_t v23; // w24
  __int64 methodPtr_low; // x9
  __int64 v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x8
  __int128 v32; // q0
  struct System_Int64_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  System_Collections_Generic_List_long__o *v37; // x0
  int v38; // w21
  System_Int64_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Int64_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  System_Int64_array **v46; // x0
  bool result; // w0
  SvtEqCombineListViewManager_o *v48; // x0
  const MethodInfo *v49; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]

  if ( (byte_49FFFA3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v14);
    byte_49FFFA3 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v16, v17);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v22 = *(_DWORD *)(itemList + 24);
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v23,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1B645E4(itemList);
        SvtEqCombineListViewManager__OnClickNormalStatus(v48, v49);
        return result;
      }
      v25 = *(_QWORD *)(itemList + 120);
      if ( v25 && *(_BYTE *)(itemList + 247) )
      {
        if ( *(_BYTE *)(itemList + 165) )
        {
          v26 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v51, 0LL);
          if ( !v18 )
            goto LABEL_37;
          items = v18->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v18->fields._size;
          v30 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v36 = v28[4];
            v37 = v18;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v37,
              v30,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v36 + 192) + 112LL));
            goto LABEL_28;
          }
          v31 = &items->obj.klass + size;
          v18->fields._size = size + 1;
        }
        else
        {
          v32 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v50, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v33 = v15->fields._items;
          v34 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v33 )
            goto LABEL_37;
          v35 = v15->fields._size;
          v30 = itemList;
          if ( (unsigned int)v35 >= v33->max_length )
          {
            v36 = v34[4];
            v37 = v15;
            goto LABEL_27;
          }
          v31 = &v33->obj.klass + v35;
          v15->fields._size = v35 + 1;
        }
        v31[4] = (Il2CppClass *)v30;
      }
LABEL_28:
      if ( v22 == ++v23 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v18 )
LABEL_37:
    sub_1B64324(itemList);
  v38 = v18->fields._size + v15->fields._size;
  if ( v38 < 1 )
  {
    *choiceList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)choiceList, 0, v19, v20);
    v46 = unchoiceList;
    v45 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v39 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v18,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v45 = (int)v42;
    *unchoiceList = v42;
    v46 = unchoiceList;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v46, v45, v43, v44);
  return v38 > 0;
}


bool __fastcall SvtEqCombineListViewManager__GetSwapLockList(
        SvtEqCombineListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_long__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int64_t itemList; // x0
  int v22; // w25
  int32_t v23; // w24
  __int64 methodPtr_low; // x9
  __int64 v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x8
  __int128 v32; // q0
  struct System_Int64_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  System_Collections_Generic_List_long__o *v37; // x0
  int v38; // w21
  System_Int64_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Int64_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  System_Int64_array **v46; // x0
  SvtEqCombineListViewManager_o *v48; // x0
  System_Int64_array **v49; // x1
  System_Int64_array **v50; // x2
  const MethodInfo *v51; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+40h] [xbp-80h]

  if ( (byte_49FFFA2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v14);
    byte_49FFFA2 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v16, v17);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v22 = *(_DWORD *)(itemList + 24);
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v23,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1B645E4(itemList);
        return SvtEqCombineListViewManager__GetSwapChoiceList(v48, v49, v50, v51);
      }
      v25 = *(_QWORD *)(itemList + 120);
      if ( v25 && *(_BYTE *)(itemList + 246) )
      {
        if ( *(_BYTE *)(itemList + 160) )
        {
          v26 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v54.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v53 = v54;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v53, 0LL);
          if ( !v18 )
            goto LABEL_37;
          items = v18->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v18->fields._size;
          v30 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v36 = v28[4];
            v37 = v18;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v37,
              v30,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v36 + 192) + 112LL));
            goto LABEL_28;
          }
          v31 = &items->obj.klass + size;
          v18->fields._size = size + 1;
        }
        else
        {
          v32 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v54.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v52 = v54;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v52, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v33 = v15->fields._items;
          v34 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v33 )
            goto LABEL_37;
          v35 = v15->fields._size;
          v30 = itemList;
          if ( (unsigned int)v35 >= v33->max_length )
          {
            v36 = v34[4];
            v37 = v15;
            goto LABEL_27;
          }
          v31 = &v33->obj.klass + v35;
          v15->fields._size = v35 + 1;
        }
        v31[4] = (Il2CppClass *)v30;
      }
LABEL_28:
      if ( v22 == ++v23 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v18 )
LABEL_37:
    sub_1B64324(itemList);
  v38 = v18->fields._size + v15->fields._size;
  if ( v38 < 1 )
  {
    *lockList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lockList, 0, v19, v20);
    v46 = unlockList;
    v45 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v39 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v18,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v45 = (int)v42;
    *unlockList = v42;
    v46 = unlockList;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v46, v45, v43, v44);
  return v38 > 0;
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

  if ( (byte_49FFF70 & 1) == 0 )
  {
    sub_1B640C8(&SvtEqCombineListViewManager_TypeInfo, v1);
    byte_49FFF70 = 1;
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
        sub_1B6432C(v2, v1);
      v2 = (SvtEqCombineListViewManager_c *)sortStatusList->m_Items[i];
      if ( !v2 )
LABEL_15:
        sub_1B64324(v2);
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
    return !SvtEqCombineListViewItem__get_IsCanNotSelect(item, 0LL)
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x20
  _BOOL8 v17; // x0
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  _OWORD *monitor; // x8
  _QWORD *p_monitor; // x22
  __int128 v22; // q0
  int64_t v23; // x0
  Il2CppObject v24; // q0
  int32_t v25; // w2
  int32_t v26; // w3
  int64_t UserSvtId; // x0
  UnityEngine_Object_o *v28; // x22
  void *v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_49FFF80 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v13);
    byte_49FFF80 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_36:
      sub_1B64324(Instance);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_36;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v33.fields._list = *(_OWORD *)&v32.fields.currentCryptoKey;
  v33.fields._current = (Il2CppObject *)v32.fields.fakeValue;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v17 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      goto LABEL_30;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v33.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)v33.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_1B645E4(v33.fields._current);
LABEL_30:
      if ( !Entity )
        sub_1B64324(v17);
      sub_1B64324(v17);
    }
    if ( Entity )
    {
      p_monitor = &v33.fields._current[7].monitor;
      monitor = v33.fields._current[7].monitor;
      if ( !monitor )
        sub_1B64324(v17);
      v22 = monitor[2];
      *(_OWORD *)&v32.fields.currentCryptoKey = monitor[1];
      *(_OWORD *)&v32.fields.fakeValue = v22;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v31 = v32;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v31, 0LL);
      v24 = Entity[2];
      *(Il2CppObject *)&v30.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v30.fields.fakeValue = v24;
      if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v30, 0LL) )
      {
        *p_monitor = Entity;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&current[7].monitor, (int32_t)Entity, v25, v26);
      }
    }
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)current, 0LL);
    if ( !SelfUserGame )
      sub_1B64324(UserSvtId);
    SvtEqCombineListViewItem__ModifyItem(
      (SvtEqCombineListViewItem_o *)current,
      UserSvtId == SelfUserGame->fields.favoriteUserSvtId,
      0LL);
    v28 = (UnityEngine_Object_o *)current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
    {
      v29 = current[6].monitor;
      if ( !v29 )
        sub_1B64324(0LL);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v29 + 392LL))(
        v29,
        current,
        *(_QWORD *)(*(_QWORD *)v29 + 400LL));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__ModifyList(
        SvtEqCombineListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  int32_t currentType; // w8
  __int64 v21; // x1
  __int64 v22; // x2
  void *ServantEquipList; // x21
  System_Collections_Generic_List_object__o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x23
  SvtEqCombineListViewItem_c *v28; // x1
  int v29; // w8
  __int64 v30; // x20
  __int64 v31; // x24
  __int128 v32; // q0
  struct UserServantEntity_o *v33; // x8
  __int128 v34; // q0
  SvtEqCombineListViewManager_o *v35; // x25
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_List_object__o *v44; // x22
  __int64 v45; // x1
  __int64 v46; // x2
  System_Collections_Generic_List_object__o *v47; // x23
  int32_t v48; // w21
  __int128 v49; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v51; // q0
  int32_t v52; // w24
  SvtEqCombineListViewManager_o *v53; // x25
  unsigned int v54; // w20
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  __int128 v56; // q1
  __int64 v57; // x28
  __int128 v58; // q0
  SvtEqCombineListViewManager_o *v59; // x26
  int32_t v60; // w2
  int32_t v61; // w3
  Il2CppObject *v62; // x1
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v68; // x25
  int v69; // w28
  unsigned int v70; // w26
  __int64 v71; // x8
  __int128 v72; // q0
  SvtEqCombineListViewManager_o *v73; // x23
  int32_t v74; // w24
  SvtEqCombineListViewItem_o *v75; // x22
  __int64 methodPtr_low; // x9
  struct UnityEngine_GameObject_o *v77; // x8
  __int128 v78; // q0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v80; // q0
  int64_t v81; // x0
  const MethodInfo *v82; // x5
  SvtEqCombineListViewManager_o *v83; // x0
  ListViewObject_o *v84; // x1
  ListViewItem_o *v85; // x2
  const MethodInfo *v86; // x3
  bool isIconSizeChangea; // [xsp+Ch] [xbp-1A4h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-1A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+10h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+30h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+130h] [xbp-80h]

  v4 = this;
  if ( (byte_49FFF83 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, isIconSizeChange);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor___75673192, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v16);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v17);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    this = (SvtEqCombineListViewManager_o *)sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v19);
    byte_49FFF83 = 1;
  }
  currentType = v4->fields.currentType;
  isIconSizeChangea = isIconSizeChange;
  if ( currentType == 1 )
  {
    this = (SvtEqCombineListViewManager_o *)v4->fields.userServantMaster;
    if ( !this )
      goto LABEL_102;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0LL);
    v44 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         v42,
                                                         v43);
    System_Collections_Generic_List_object____ctor_55234504(
      v44,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___75673192);
    v47 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         v45,
                                                         v46);
    System_Collections_Generic_List_object____ctor(
      v47,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v4->fields.baseUsrSvtData )
    {
      if ( !v44 )
        goto LABEL_102;
      if ( v44->fields._size >= 1 )
      {
        v48 = 0;
        do
        {
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    v44,
                                                    v48,
                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !this )
            goto LABEL_102;
          v49 = *(_OWORD *)&this->fields.dropObjectList;
          *(UnityEngine_MonoBehaviour_Fields *)&v98.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
          *(_OWORD *)&v98.fields.fakeValue = v49;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v95 = v98;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                    &v95,
                                                    0LL);
          baseUsrSvtData = v4->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_102;
          v51 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v94.fields.fakeValue = v51;
          if ( this == (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                          &v94,
                                                          0LL) )
            System_Collections_Generic_List_object___RemoveAt(
              v44,
              v48,
              (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
          ++v48;
        }
        while ( v48 < v44->fields._size );
      }
      ServantEquipList = System_Collections_Generic_List_object___ToArray(
                           v44,
                           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    }
    this = (SvtEqCombineListViewManager_o *)v4->fields._selectedMtSvtList_k__BackingField;
    if ( this && SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
    {
      v52 = 0;
      while ( 1 )
      {
        this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v52,
                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
        if ( !v44 )
          goto LABEL_102;
        if ( v44->fields._size >= 1 )
          break;
LABEL_67:
        this = (SvtEqCombineListViewManager_o *)v4->fields._selectedMtSvtList_k__BackingField;
        if ( !this )
          goto LABEL_102;
        if ( ++v52 >= SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          if ( !v47 )
            goto LABEL_102;
          System_Collections_Generic_List_object___AddRange(
            v47,
            (System_Collections_Generic_IEnumerable_T__o *)v44,
            (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___ToArray(
                                                    v47,
                                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
          ServantEquipList = this;
          goto LABEL_71;
        }
      }
      v53 = this;
      v54 = 0;
      while ( 1 )
      {
        if ( !ServantEquipList )
          goto LABEL_102;
        if ( v54 >= *((_DWORD *)ServantEquipList + 6) )
          break;
        if ( !v53 )
          goto LABEL_102;
        dragParentObject = v53->fields.dragParentObject;
        if ( !dragParentObject )
          goto LABEL_102;
        v56 = *(_OWORD *)&dragParentObject[1].monitor;
        v57 = *((_QWORD *)ServantEquipList + (int)v54 + 4);
        *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&dragParentObject->fields.m_CachedPtr;
        *(_OWORD *)&v98.fields.fakeValue = v56;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v93 = v98;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                  &v93,
                                                  0LL);
        if ( !v57 )
          goto LABEL_102;
        v58 = *(_OWORD *)(v57 + 32);
        v59 = this;
        *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)(v57 + 16);
        *(_OWORD *)&v92.fields.fakeValue = v58;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                  &v92,
                                                  0LL);
        if ( v59 == this )
        {
          if ( !v47 )
            goto LABEL_102;
          v62 = (Il2CppObject *)v53->fields.dragParentObject;
          items = v47->fields._items;
          v64 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v47->fields._version;
          if ( !items )
            goto LABEL_102;
          size = v47->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v47,
              v62,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
          }
          else
          {
            v66 = &items->obj.klass + size;
            v47->fields._size = size + 1;
            v66[4] = (Il2CppClass *)v62;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v66 + 4), (int32_t)v62, v60, v61);
          }
          this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___Remove(
                                                    v44,
                                                    (Il2CppObject *)v53->fields.dragParentObject,
                                                    (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        if ( (signed int)++v54 >= v44->fields._size )
          goto LABEL_67;
      }
LABEL_100:
      sub_1B6432C(this, v28);
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
    v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         v21,
                                                         v22);
    System_Collections_Generic_List_object____ctor_55234504(
      v24,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___75673192);
    v27 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         v25,
                                                         v26);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v4->fields.baseUsrSvtData )
    {
      v29 = *((_DWORD *)ServantEquipList + 6);
      if ( v29 >= 1 )
      {
        v30 = 0LL;
        while ( (unsigned int)v30 < v29 )
        {
          v31 = *((_QWORD *)ServantEquipList + v30 + 4);
          if ( !v31 )
            goto LABEL_102;
          v32 = *(_OWORD *)(v31 + 32);
          *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)(v31 + 16);
          *(_OWORD *)&v98.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v97 = v98;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                    &v97,
                                                    0LL);
          v33 = v4->fields.baseUsrSvtData;
          if ( !v33 )
            goto LABEL_102;
          v34 = *(_OWORD *)&v33->fields.id.fields.fakeValue;
          v35 = this;
          *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)&v33->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v96.fields.fakeValue = v34;
          this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                    &v96,
                                                    0LL);
          if ( v35 == this )
          {
            if ( !v27 )
              goto LABEL_102;
            v38 = v27->fields._items;
            v39 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v27->fields._version;
            if ( !v38 )
              goto LABEL_102;
            v40 = v27->fields._size;
            if ( (unsigned int)v40 >= v38->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v27,
                (Il2CppObject *)v31,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = &v38->obj.klass + v40;
              v27->fields._size = v40 + 1;
              v41[4] = (Il2CppClass *)v31;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 4), v31, v36, v37);
            }
            if ( !v24 )
              goto LABEL_102;
            this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___Remove(
                                                      v24,
                                                      (Il2CppObject *)v31,
                                                      (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          v29 = *((_DWORD *)ServantEquipList + 6);
          if ( (int)++v30 >= v29 )
            goto LABEL_30;
        }
        goto LABEL_100;
      }
LABEL_30:
      if ( !v27 )
        goto LABEL_102;
      System_Collections_Generic_List_object___AddRange(
        v27,
        (System_Collections_Generic_IEnumerable_T__o *)v24,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___ToArray(
                                                v27,
                                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      ServantEquipList = this;
      if ( !this )
        goto LABEL_102;
    }
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_102;
  v68 = *((_QWORD *)ServantEquipList + 3);
  if ( (int)v68 >= 1 )
  {
    v69 = itemList->fields._size;
    v70 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v71 = *((_QWORD *)ServantEquipList + (int)v70 + 4);
      if ( !v71 )
        goto LABEL_102;
      v72 = *(_OWORD *)(v71 + 32);
      *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)(v71 + 16);
      *(_OWORD *)&v98.fields.fakeValue = v72;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v91 = v98;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                &v91,
                                                0LL);
      if ( v69 >= 1 )
        break;
LABEL_98:
      if ( ++v70 == (_DWORD)v68 )
        return;
      if ( v70 >= *((_DWORD *)ServantEquipList + 6) )
        goto LABEL_100;
    }
    v73 = this;
    v74 = 0;
    while ( 1 )
    {
      this = (SvtEqCombineListViewManager_o *)v4->fields.itemList;
      if ( !this )
        goto LABEL_102;
      this = (SvtEqCombineListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v74,
                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_102;
      v28 = SvtEqCombineListViewItem_TypeInfo;
      v75 = (SvtEqCombineListViewItem_o *)this;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      v77 = this->fields.dragParentObject;
      if ( v77 )
      {
        v78 = *(_OWORD *)&v77[1].monitor;
        *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&v77->fields.m_CachedPtr;
        *(_OWORD *)&v98.fields.fakeValue = v78;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v90 = v98;
        this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                  &v90,
                                                  0LL);
        if ( this == v73 )
        {
          userSvtEntity = v75->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v80 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v98.fields.fakeValue = v80;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v89 = v98;
            v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v89, 0LL);
            SvtEqCombineListViewManager__ModifyLockItem_45058720(v4, v75, v81, 1, isIconSizeChangeb, v82);
            goto LABEL_98;
          }
LABEL_102:
          sub_1B64324(this);
        }
      }
      if ( v69 == ++v74 )
        goto LABEL_98;
    }
    sub_1B645E4(this);
    SvtEqCombineListViewManager__SetObjectItem(v83, v84, v85, v86);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v20; // w29
  int64_t v21; // x0
  Il2CppObject *current; // x22
  __int64 methodPtr_low; // x9
  _OWORD *monitor; // x8
  _QWORD *p_monitor; // x23
  __int128 v26; // q0
  int64_t v27; // x0
  Il2CppObject v28; // q0
  int64_t v29; // x24
  int32_t v30; // w2
  int32_t v31; // w3
  UnityEngine_Object_o *v32; // x23
  void *v33; // x0
  ListViewObject_o *v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_49FFF81 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v17);
    byte_49FFF81 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_42:
      sub_1B64324(Instance);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v38.fields._list = *(_OWORD *)&v37.fields.currentCryptoKey;
  v38.fields._current = (Il2CppObject *)v37.fields.fakeValue;
  v20 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v21 & 1) == 0 )
      break;
    current = v38.fields._current;
    if ( v38.fields._current )
    {
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v38.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)v38.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1B645E4(v38.fields._current);
LABEL_36:
        sub_1B64324(v21);
      }
      if ( Entity )
      {
        p_monitor = &v38.fields._current[7].monitor;
        monitor = v38.fields._current[7].monitor;
        if ( !monitor )
          sub_1B64324(v21);
        v26 = monitor[2];
        *(_OWORD *)&v37.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v37.fields.fakeValue = v26;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v36 = v37;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v36, 0LL);
        v28 = Entity[2];
        v29 = v27;
        *(Il2CppObject *)&v35.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v35.fields.fakeValue = v28;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v35, 0LL);
        if ( v29 == v21 )
        {
          *p_monitor = Entity;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&current[7].monitor, (int32_t)Entity, v30, v31);
        }
      }
    }
    else if ( Entity )
    {
      sub_1B64324(v21);
    }
    if ( v20 )
    {
      if ( !current )
        goto LABEL_36;
      SvtEqCombineListViewItem__ModifyLockItem((SvtEqCombineListViewItem_o *)current, 0LL);
      SvtEqCombineListViewItem__ModifyChoiceItem((SvtEqCombineListViewItem_o *)current, 0LL);
    }
    else if ( !current )
    {
      sub_1B64324(v21);
    }
    v32 = (UnityEngine_Object_o *)current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
    {
      v33 = current[6].monitor;
      if ( !v33 )
        sub_1B64324(0LL);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v33 + 392LL))(
        v33,
        current,
        *(_QWORD *)(*(_QWORD *)v33 + 400LL));
      if ( isIconSizeChange )
      {
        v34 = (ListViewObject_o *)current[6].monitor;
        if ( !v34 )
          sub_1B64324(0LL);
        ListViewObject__SetItemSeed(v34, (ListViewItem_o *)current, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall SvtEqCombineListViewManager__ModifyLockItem_45058720(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewItem_o *servantItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v16; // q1
  SvtEqCombineListViewManager_o *v17; // x23
  int64_t v18; // x0
  __int128 v19; // q1
  SvtEqCombineListViewManager_o *v20; // x25
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_49FFF82 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, servantItem);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    this = (SvtEqCombineListViewManager_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49FFF82 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (SvtEqCombineListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (SvtEqCombineListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (SvtEqCombineListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              usrSvtId,
                                              (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_26;
      userSvtEntity = servantItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v16 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v17 = this;
      *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v26.fields.fakeValue = v16;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v25 = v26;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v25, 0LL);
      v19 = *(_OWORD *)&v17->fields.dropObjectList;
      v20 = (SvtEqCombineListViewManager_o *)v18;
      *(UnityEngine_MonoBehaviour_Fields *)&v24.fields.currentCryptoKey = v17->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v24.fields.fakeValue = v19;
      this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                &v24,
                                                0LL);
      if ( v20 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v17;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&servantItem->fields.userSvtEntity, (int32_t)v17, v21, v22);
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
    SvtEqCombineListViewItem__ModifyLockItem(servantItem, 0LL);
    SvtEqCombineListViewItem__ModifyChoiceItem(servantItem, 0LL);
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
        this->klass->vtable._6_GetDragRoot.methodPtr);
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
    sub_1B64324(this);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickBonusFilterKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ListViewSort_o *sort; // x0

  if ( (byte_49FFF9A & 1) == 0 )
  {
    sub_1B640C8(&Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__, method);
    byte_49FFF9A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_SvtEqCombineListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(0LL);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickChoiceTab(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( (byte_49FFFA6 & 1) == 0 )
  {
    sub_1B640C8(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_EndClickTabChoice__, v3);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_OnClickChoiceTab__, v4);
    byte_49FFFA6 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v5 = Method_SvtEqCombineListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_SvtEqCombineListViewManager_OnClickChoiceTab__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v9 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1B64314(
                                                                  SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo,
                                                                  v7,
                                                                  v8);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabChoice__,
        v10);
      SvtEqCombineListViewManager__StatusRequest(this, v9, v11);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 2, v8);
      SvtEqCombineListViewManager__ReleaseAll(this, v12);
      SvtEqCombineListViewManager__ModifyList(this, 0, v13);
      SvtEqCombineListViewManager__SetMode_45061424(this, 2, v14);
    }
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickCollectLock(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( (byte_49FFFA5 & 1) == 0 )
  {
    sub_1B640C8(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_EndClickTabLock__, v3);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_OnClickCollectLock__, v4);
    byte_49FFFA5 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v5 = Method_SvtEqCombineListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_SvtEqCombineListViewManager_OnClickCollectLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v9 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1B64314(
                                                                  SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo,
                                                                  v7,
                                                                  v8);
      SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndClickTabLock__,
        v10);
      SvtEqCombineListViewManager__StatusRequest(this, v9, v11);
    }
    else
    {
      SvtEqCombineListViewManager__SetStatusKind(this, 1, v8);
      SvtEqCombineListViewManager__ReleaseAll(this, v12);
      SvtEqCombineListViewManager__ModifyList(this, 0, v13);
      SvtEqCombineListViewManager__SetMode_45061424(this, 2, v14);
    }
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickDecide(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  _BOOL4 isDecideFlg; // w20
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  struct CombineRootComponent_o *v9; // x0
  CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v11; // x1
  ServantCheckEquipDialog_o *servantEquipCheckDialog; // x20
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  ServantCheckEquipDialog_ClickDelegate_o *v16; // x22

  if ( (byte_49FFF89 & 1) == 0 )
  {
    sub_1B640C8(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__, v3);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_OnClickDecide__, v4);
    byte_49FFF89 = 1;
  }
  v5 = Method_SvtEqCombineListViewManager_OnClickDecide__;
  isDecideFlg = this->fields.isDecideFlg;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_SvtEqCombineListViewManager_OnClickDecide__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  if ( isDecideFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    v9 = (struct CombineRootComponent_o *)SvtEqCombineListViewManager__CheckMaterialEquipped(this, v8);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._isOpenCheckEquipDialog_k__BackingField = (unsigned __int8)v9 & 1;
    if ( !combineRootComponent )
      goto LABEL_15;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0LL);
    if ( this->fields._isOpenCheckEquipDialog_k__BackingField )
    {
      servantEquipCheckDialog = this->fields.servantEquipCheckDialog;
      SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, v11);
      v16 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1B64314(
                                                         ServantCheckEquipDialog_ClickDelegate_TypeInfo,
                                                         v14,
                                                         v15);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v16,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_CloseServantCheckEquipDialog__,
        0LL);
      if ( servantEquipCheckDialog )
      {
        ServantCheckEquipDialog__Open(servantEquipCheckDialog, SelectedMaterialList, 0, v16, 0LL);
        return;
      }
LABEL_15:
      sub_1B64324(v9);
    }
    SvtEqCombineListViewManager__SetSelectedMaterialInfo(this, v11);
    v9 = this->fields.combineRootComponent;
    if ( !v9 )
      goto LABEL_15;
    if ( v9->fields.state == 4 )
      CombineRootComponent__SetSelectSvtEqMaterialList(v9, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickFilter2Kind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w21
  int32_t v9; // w9

  if ( (byte_49FFF9B & 1) == 0 )
  {
    sub_1B640C8(&Method_SvtEqCombineListViewManager_OnClickFilter2Kind__, method);
    sub_1B640C8(&SvtEqCombineListViewManager_TypeInfo, v3);
    byte_49FFF9B = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_SvtEqCombineListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B640E0(Method_SvtEqCombineListViewManager_OnClickFilter2Kind__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort
      || (filter2Kind = sort->fields.filter2Kind, !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished)
      && (j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo), (sort = this->fields.sort) == 0LL) )
    {
      sub_1B64324(v6);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22
  __int64 v14; // x0

  if ( (byte_49FFF97 & 1) == 0 )
  {
    sub_1B640C8(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_EndSelectFilterKind__, v4);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_OnClickFilterKind__, v5);
    byte_49FFF97 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_SvtEqCombineListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_SvtEqCombineListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B64314(ServantFilterSelectMenu_CallbackFunc_TypeInfo, v11, v12);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1B64324(v14);
    CommonUI__OpenServantFilterSelectMenu_30352028(v10, 5, sort, (ListViewManager_o *)this, v13, -1, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewItem_o *Item; // x0
  _QWORD *v9; // x8
  SvtEqCombineListViewItem_o *v10; // x20
  System_Reflection_MethodBase_o *v11; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v13; // q1
  int64_t v14; // x0
  const MethodInfo *v15; // x4
  const MethodInfo *v16; // x2
  SvtEqCombineListViewManager_o *v17; // x0
  SvtEqCombineListViewItem_o *v18; // x1
  const MethodInfo *v19; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_49FFF94 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_OnClickLockModeItem__, v5);
    this = (SvtEqCombineListViewManager_o *)sub_1B640C8(&SvtEqCombineListViewObject_TypeInfo, v6);
    byte_49FFF94 = 1;
  }
  if ( !obj )
    goto LABEL_13;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1B645E4(obj);
    SvtEqCombineListViewManager__IsDragEnable(v17, v18, v19);
    return;
  }
  Item = SvtEqCombineListViewObject__GetItem(
           (SvtEqCombineListViewObject_o *)obj,
           (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  v9 = Method_SvtEqCombineListViewManager_OnClickLockModeItem__;
  v10 = Item;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B640E0(Method_SvtEqCombineListViewManager_OnClickLockModeItem__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 11, 0LL);
  if ( !v10
    || (this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewItem__SwapLock(v10, 0LL),
        (userSvtEntity = v10->fields.userSvtEntity) == 0LL) )
  {
LABEL_13:
    sub_1B64324(this);
  }
  v13 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v20 = v21;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v20, 0LL);
  SvtEqCombineListViewManager__ModifyLockItem(v4, v14, 0, 0, v15);
  SvtEqCombineListViewManager__SetMode_45061424(v4, 3, v16);
}


void __fastcall SvtEqCombineListViewManager__OnClickNormalStatus(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  SvtEqCombineListViewManager_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49FFFA4 & 1) == 0 )
  {
    sub_1B640C8(&SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_EndClickTabStatus__, v3);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_OnClickNormalStatus__, v4);
    byte_49FFFA4 = 1;
  }
  if ( this->fields.modeKind )
  {
    v5 = Method_SvtEqCombineListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_SvtEqCombineListViewManager_OnClickNormalStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (SvtEqCombineListViewManager_RequestCallbackFunc_o *)sub_1B64314(
                                                                SvtEqCombineListViewManager_RequestCallbackFunc_TypeInfo,
                                                                v7,
                                                                v8);
    SvtEqCombineListViewManager_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndClickTabStatus__,
      v10);
    SvtEqCombineListViewManager__StatusRequest(this, v9, v11);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickReleaseAll(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49FFF8F & 1) == 0 )
  {
    sub_1B640C8(&Method_SvtEqCombineListViewManager_OnClickReleaseAll__, method);
    byte_49FFF8F = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_OnClickReleaseAll__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_SvtEqCombineListViewManager_OnClickReleaseAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  SvtEqCombineListViewManager__ReleaseAll(this, v5);
}


void __fastcall SvtEqCombineListViewManager__OnClickScaleChange(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  SvtEqCombineListViewManager_o *v9; // x0
  int v10; // w8
  ServantStatusBattleListViewItem_o *p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v13; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_49FFFA1 & 1) == 0 )
  {
    sub_1B640C8(&Method_SvtEqCombineListViewManager_OnClickScaleChange__, method);
    byte_49FFFA1 = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_SvtEqCombineListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v9 = this;
    v10 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v9 = this;
    v10 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v9 = this;
    v10 = 1;
LABEL_11:
    v9->fields.seed = smallSizeSeed;
    p_seed = (ServantStatusBattleListViewItem_o *)&v9->fields.seed;
    p_seed[3].fields.dispLimitCount.fields.hiddenValue = v10;
    sub_1B6406C(p_seed, (int32_t)smallSizeSeed, v5, v6);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v13 = this->fields.scaleType,
        sort->fields.iconScaleKind = v13,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v13, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1B64324(sort);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  SvtEqCombineListViewManager__ModifyList(this, 1, v15);
  SvtEqCombineListViewManager__SetMode_45061424(this, 2, v16);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall SvtEqCombineListViewManager__OnClickSelectBase(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 methodPtr_low; // x9
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtEqCombineListViewItem_o *v10; // x21
  __int128 v11; // q1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w2
  int v18; // w9
  bool CanNotBaseSelect; // w0
  _QWORD *v20; // x8
  bool v21; // w22
  System_Reflection_MethodBase_o *v22; // x0
  int32_t v23; // w1
  struct UserServantEntity_o *userSvtEntity; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  SvtEqCombineListViewManager_o *v27; // x0
  ListViewObject_o *v28; // x1
  const MethodInfo *v29; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_49FFF92 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, obj);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_OnClickSelectBase__, v6);
    this = (SvtEqCombineListViewManager_o *)sub_1B640C8(&SvtEqCombineListViewObject_TypeInfo, v7);
    byte_49FFF92 = 1;
  }
  if ( !obj )
    goto LABEL_28;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1B645E4(obj);
    SvtEqCombineListViewManager__OnClickListView(v27, v28, v29);
    return;
  }
  this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewObject__GetItem(
                                            (SvtEqCombineListViewObject_o *)obj,
                                            (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  v10 = (SvtEqCombineListViewItem_o *)this;
  if ( baseUsrSvtData )
  {
    v11 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v31.fields.fakeValue = v11;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v30 = v31;
    this = (SvtEqCombineListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                              &v30,
                                              0LL);
    if ( !v10 )
      goto LABEL_28;
    if ( this == (SvtEqCombineListViewManager_o *)SvtEqCombineListViewItem__get_UserSvtId(v10, 0LL) )
    {
      v12 = Method_SvtEqCombineListViewManager_OnClickSelectBase__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1B640E0(Method_SvtEqCombineListViewManager_OnClickSelectBase__);
      v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0LL);
      v4->fields.baseUsrSvtData = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.baseUsrSvtData, 0, v14, v15);
      tempMtSvtList = v4->fields.tempMtSvtList;
      if ( tempMtSvtList )
      {
        size = tempMtSvtList->fields._size;
        v18 = tempMtSvtList->fields._version + 1;
        tempMtSvtList->fields._size = 0;
        tempMtSvtList->fields._version = v18;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, size, 0LL);
        goto LABEL_23;
      }
LABEL_28:
      sub_1B64324(this);
    }
  }
  else if ( !this )
  {
    goto LABEL_28;
  }
  CanNotBaseSelect = SvtEqCombineListViewItem__get_IsCanNotBaseSelect(v10, 0LL);
  v20 = Method_SvtEqCombineListViewManager_OnClickSelectBase__;
  v21 = CanNotBaseSelect;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1B640E0(Method_SvtEqCombineListViewManager_OnClickSelectBase__);
  v22 = (System_Reflection_MethodBase_o *)sub_1B640AC(v20, v20[4]);
  if ( v21 )
    v23 = 2;
  else
    v23 = 0;
  OverwriteAssetSoundName__PlaySystemSe(v22, v23, 0LL);
  userSvtEntity = v10->fields.userSvtEntity;
  v4->fields.baseUsrSvtData = userSvtEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.baseUsrSvtData, (int32_t)userSvtEntity, v25, v26);
LABEL_23:
  this = (SvtEqCombineListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_28;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v4->fields.baseUsrSvtData != 0LL, 0LL);
  this = (SvtEqCombineListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_28;
  if ( HIDWORD(this->fields.getBasicExpLabel) == 4 )
    CombineRootComponent__ShowBaseSvtEq((CombineRootComponent_o *)this, 0LL);
}


void __fastcall SvtEqCombineListViewManager__OnClickSelectMaterial(
        SvtEqCombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 methodPtr_low; // x9
  ListViewItem_o *v10; // x20
  const MethodInfo *v11; // x1
  int32_t selectNum; // w21
  _BOOL8 v13; // x0
  int32_t klass; // w9
  int32_t selectSum; // w8
  void *v16; // x0
  int v17; // w1
  __int64 v18; // x20
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_49FFF93 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, obj);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    this = (SvtEqCombineListViewManager_o *)sub_1B640C8(&SvtEqCombineListViewObject_TypeInfo, v8);
    byte_49FFF93 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !obj )
    goto LABEL_21;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1B645E4(obj);
    if ( v17 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v19,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      sub_1C4EB58();
    }
    v18 = *(_QWORD *)__cxa_begin_catch(v16);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v18 )
      sub_1B6431C(v18);
    goto LABEL_18;
  }
  this = (SvtEqCombineListViewManager_o *)SvtEqCombineListViewObject__GetItem(
                                            (SvtEqCombineListViewObject_o *)obj,
                                            (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
  if ( !this )
    goto LABEL_21;
  v10 = (ListViewItem_o *)this;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
  {
    selectNum = v10->fields.selectNum;
    ListViewItem__set_IsSelect(v10, 0, 0LL);
    this = (SvtEqCombineListViewManager_o *)v4->fields.itemList;
    --v4->fields.selectSum;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v19,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v19,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v13 )
          break;
        if ( !v19.fields._current )
          sub_1B64324(v13);
        klass = (int32_t)v19.fields._current[1].klass;
        if ( klass > selectNum )
          LODWORD(v19.fields._current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v19,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_18;
    }
LABEL_21:
    sub_1B64324(this);
  }
  selectSum = v4->fields.selectSum;
  if ( v4->fields.modeKind || selectSum < v4->fields.selectMax )
  {
    v10->fields.selectNum = selectSum;
    v4->fields.selectSum = selectSum + 1;
LABEL_18:
    SvtEqCombineListViewManager__RefrashListDisp(v4, v11);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickSortAscendingOrder(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_49FFF9E & 1) == 0 )
  {
    sub_1B640C8(&Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__, method);
    byte_49FFF9E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_SvtEqCombineListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(v5);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnClickSortKind(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int32_t itemType; // w23
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  ServantSortSelectMenu_CallbackFunc_o *v14; // x22
  __int64 v15; // x0

  if ( (byte_49FFF9C & 1) == 0 )
  {
    sub_1B640C8(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_EndSelectSortKind__, v4);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_OnClickSortKind__, v5);
    byte_49FFF9C = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_SvtEqCombineListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_SvtEqCombineListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    itemType = this->fields.itemType;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v11 = (CommonUI_o *)Instance;
    v14 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B64314(ServantSortSelectMenu_CallbackFunc_TypeInfo, v12, v13);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v11 )
      sub_1B64324(v15);
    CommonUI__OpenServantSortSelectMenu(v11, 2, sort, itemType == 1, v14, 0LL);
  }
}


void __fastcall SvtEqCombineListViewManager__OnLongPushListView(
        SvtEqCombineListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_object__o *selectedMtSvtList_k__BackingField; // x0
  int64_t UserSvtId; // x0
  UnityEngine_Behaviour_o *scrollView; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct UserServantEntity_o *monitor; // x1
  void *v20; // x0
  int v21; // w1
  __int64 v22; // x22
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FFF95 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, item);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v8);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v9);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_OnLongPushListView__, v10);
    byte_49FFF95 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    v11 = Method_SvtEqCombineListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B640E0(Method_SvtEqCombineListViewManager_OnLongPushListView__);
    v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    if ( item
      && ((methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
       || (SvtEqCombineListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo) )
    {
      sub_1B645E4(item);
      if ( v21 != 1 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v24,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
        sub_1C4EB58();
      }
      v22 = *(_QWORD *)__cxa_begin_catch(v20);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      if ( v22 )
        sub_1B6431C(v22);
    }
    else
    {
      selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._selectedMtSvtList_k__BackingField;
      this->fields.isSelectMaterial = 0;
      if ( selectedMtSvtList_k__BackingField && selectedMtSvtList_k__BackingField->fields._size >= 1 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v23,
          selectedMtSvtList_k__BackingField,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
        v24 = v23;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v24,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__) )
        {
          if ( !v24.fields._current )
            sub_1B64324(0LL);
          UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v24.fields._current, 0LL);
          if ( !item )
            sub_1B64324(UserSvtId);
          if ( UserSvtId == SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)item, 0LL) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v24,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
      }
    }
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL), !item)
      || (monitor = (struct UserServantEntity_o *)item[1].monitor,
          this->fields.selectUsrSvtEntity = monitor,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectUsrSvtEntity, (int32_t)monitor, v17, v18),
          (scrollView = (UnityEngine_Behaviour_o *)this->fields.combineRootComponent) == 0LL) )
    {
      sub_1B64324(scrollView);
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
  int32_t v7; // w2
  int32_t v8; // w3
  UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_49FFF88 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFF88 = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
                v9,
                1LL,
                v9->klass->vtable._9_SetDragAmount.methodPtr),
              (v9 = this->fields.scrollView) == 0LL) )
        {
          sub_1B64324(v9);
        }
        UIScrollView__UpdatePosition(v9, 0LL);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x20
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t CombineQpSvtEq; // w0
  const MethodInfo *v26; // x2
  int32_t v27; // w21
  __int64 itemList; // x0
  _BOOL8 v29; // x0
  SvtEqCombineListViewItem_o *current; // x22
  __int64 methodPtr_low; // x9
  UserServantEntity_o *v32; // x0
  UserServantEntity_o *v33; // x0
  int32_t addTotalExp; // w24
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v36; // x22
  Il2CppObject *v37; // x23
  Il2CppObject *v38; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v41; // x0
  __int64 v42; // x1
  Il2CppObject *v43; // x24
  int klass_high; // w8
  float v45; // s8
  int32_t selectExp; // s9
  float v47; // s0
  int32_t v48; // w8
  float v49; // s8
  int32_t selectQp; // s9
  float v51; // s0
  int32_t v52; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v54; // x0
  float v55; // s1
  float v56; // s0
  float v57; // s3
  float v58; // s2
  UILabel_o *getBasicExpLabel; // x21
  Il2CppObject *v60; // x0
  UILabel_o *getAccExpLabel; // x21
  Il2CppObject *v62; // x0
  const MethodInfo *v63; // x2
  struct UserServantEntity_o *v64; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // x21
  __int64 v66; // x22
  __int64 v67; // x23
  int32_t v68; // w8
  const MethodInfo *v69; // x4
  int32_t LevelMax; // w21
  struct UserServantEntity_o *v71; // x8
  int32_t increLv; // w22
  int32_t lv; // w23
  bool v74; // w22
  _BOOL8 v75; // x0
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

  if ( (byte_49FFF7A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v9);
    sub_1B640C8(&int_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__, v16);
    sub_1B640C8(&LocalizationManager_TypeInfo, v17);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v20);
    sub_1B640C8(&StringLiteral_24871/*"{0:N0}"*/, v21);
    sub_1B640C8(&StringLiteral_12321/*"SUM_INFO"*/, v22);
    byte_49FFF7A = 1;
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
    v27 = SvtEqCombineListViewManager__CheckCompareQp(this, CombineQpSvtEq, v26);
  }
  else
  {
    v27 = 0;
  }
  itemList = (__int64)this->fields.itemList;
  if ( !itemList )
    goto LABEL_95;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v84,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v86 = v84;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v86,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v29 )
      break;
    current = (SvtEqCombineListViewItem_o *)v86.fields._current;
    if ( !v86.fields._current )
      goto LABEL_94;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v86.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SvtEqCombineListViewItem_c *)v86.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      sub_1B645E4(v86.fields._current);
LABEL_94:
      sub_1B64324(v29);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v86.fields._current, 0LL) )
    {
      v32 = this->fields.baseUsrSvtData;
      this->fields.selectQp += v27;
      if ( !v32 )
        goto LABEL_97;
      if ( !UserServantEntity__isLevelMax(v32, 0LL) )
        goto LABEL_19;
      v33 = this->fields.baseUsrSvtData;
      if ( !v33 )
        sub_1B64324(0LL);
      if ( UserServantEntity__isLevelMax(v33, 0LL) && current->fields.isLimitCntTarget )
      {
LABEL_19:
        addTotalExp = this->fields.addTotalExp;
        this->fields.selectExp += current->fields.materialExp;
        this->fields.addTotalExp = SvtEqCombineListViewItem__get_GetAddTotalExp(current, 0LL) + addTotalExp;
      }
    }
    else
    {
      current->fields.isMaxSelect = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v86,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
  LODWORD(v84.fields._list) = this->fields.selectSum;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84);
  selectMax = this->fields.selectMax;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax);
  itemList = (__int64)System_String__Format_61389768(v36, v37, v38, 0LL);
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
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v85 = v84;
    while ( 1 )
    {
      v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v85,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v41 )
        break;
      v43 = v85.fields._current;
      if ( !v85.fields._current )
        sub_1B64324(v41);
      klass_high = HIDWORD(v85.fields._current[1].klass);
      if ( klass_high == 17 )
      {
        v45 = *(float *)&v85.fields._current[3].monitor;
        selectExp = this->fields.selectExp;
        if ( !byte_49F779D )
        {
          sub_1B640C8(&System_Math_TypeInfo, v42);
          byte_49F779D = 1;
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
        selectQp = this->fields.selectQp;
        if ( !byte_49F779D )
        {
          sub_1B640C8(&System_Math_TypeInfo, v42);
          byte_49F779D = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v51 = v49 * (float)selectQp;
        v52 = vcvtps_s32_f32(v51);
        if ( ceilf(v51) == INFINITY )
          v52 = 0x80000000;
        this->fields.selectQp = v52;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v85,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v84.fields._list) = this->fields.selectQp;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v54, 0LL);
  if ( !spendQpLabel )
LABEL_95:
    sub_1B64324(itemList);
  UILabel__set_text(spendQpLabel, (System_String_o *)itemList, 0LL);
  if ( this->fields.itemType == 1 )
  {
    itemList = (__int64)this->fields.spendQpLabel;
    v55 = 0.0;
    if ( this->fields.selectQp <= this->fields.userQP )
      v55 = 1.0;
    if ( !itemList )
      goto LABEL_95;
    v56 = 1.0;
    v57 = 1.0;
    v58 = v55;
    UIWidget__set_color((UIWidget_o *)itemList, *(UnityEngine_Color_o *)(&v55 - 1), 0LL);
  }
  getBasicExpLabel = this->fields.getBasicExpLabel;
  LODWORD(v84.fields._list) = this->fields.selectExp;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v60, 0LL);
  if ( !getBasicExpLabel )
    goto LABEL_95;
  UILabel__set_text(getBasicExpLabel, (System_String_o *)itemList, 0LL);
  getAccExpLabel = this->fields.getAccExpLabel;
  selectMax = this->fields.addTotalExp;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax);
  itemList = (__int64)System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v62, 0LL);
  if ( !getAccExpLabel )
    goto LABEL_95;
  UILabel__set_text(getAccExpLabel, (System_String_o *)itemList, 0LL);
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    itemList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !itemList )
      goto LABEL_95;
    itemList = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)itemList,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    v64 = this->fields.baseUsrSvtData;
    if ( !v64 )
      goto LABEL_95;
    v65 = (DataMasterBase_TMaster__TEntity__PKType__o *)itemList;
    v67 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
    v66 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v87.fields.currentCryptoKey = v67;
    *(_QWORD *)&v87.fields.fakeValue = v66;
    itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v87, 0LL);
    if ( !v65 )
      goto LABEL_95;
    itemList = (__int64)DataMasterBase_object__object__int___GetEntity(
                          v65,
                          itemList,
                          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !itemList )
      goto LABEL_95;
    v68 = *(_DWORD *)(itemList + 132);
    itemList = (__int64)this->fields.baseUsrSvtData;
    this->fields.expType = v68;
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
                     v69);
      while ( (itemList & 1) == 0 );
      v71 = this->fields.baseUsrSvtData;
      if ( !v71 )
        goto LABEL_95;
      itemList = (__int64)this->fields.levelUpInfoImg;
      if ( !itemList )
        goto LABEL_95;
      increLv = this->fields.increLv;
      lv = v71->fields.lv;
      itemList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL);
      if ( !itemList )
        goto LABEL_95;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, increLv - lv > 0, 0LL);
    }
    itemList = (__int64)this->fields.itemList;
    if ( !itemList )
      goto LABEL_95;
    v74 = this->fields.increLv >= LevelMax;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v84,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v86 = v84;
    while ( 1 )
    {
      v75 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v86,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v75 )
        break;
      v76 = v86.fields._current;
      if ( !v86.fields._current )
        sub_1B64324(v75);
      v77 = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v86.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v77
        || (SvtEqCombineListViewItem_c *)v86.fields._current->klass->_2.typeHierarchy[v77 - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1B645E4(v86.fields._current);
LABEL_97:
        sub_1B64324(v32);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v86.fields._current, 0LL) )
        BYTE2(v76[15].klass) = v74;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v86,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
    SvtEqCombineListViewManager__SetBtnEnable(v79, v78, v63);
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
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Item__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v8; // x0
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x9
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FFF90 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v6);
    byte_49FFF90 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( this->fields.selectSum >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      itemList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v13 = v12;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v13,
             (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      current = v13.fields._current;
      if ( !v13.fields._current )
        goto LABEL_16;
      ListViewItem__set_IsSelect((ListViewItem_o *)v13.fields._current, 0, 0LL);
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        sub_1B645E4(current);
LABEL_16:
        sub_1B64324(v8);
      }
      BYTE2(current[10].monitor) = 0;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)itemList,
                                                                    0LL)) == 0LL )
    {
LABEL_17:
      sub_1B64324(itemList);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
    *(_QWORD *)&this->fields.totalExp = 0LL;
    this->fields.checkLv = 0;
    SvtEqCombineListViewManager__RefrashListDisp(this, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__RequestListObject(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FFF86 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v11);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_OnMoveEnd__, v12);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v13);
    byte_49FFF86 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v20);
      SvtEqCombineListViewObject__Init_45063544((SvtEqCombineListViewObject_o *)current, mode, v19, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__RequestListObject_45062516(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FFF87 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__get_Count__, v9);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_OnMoveEnd__, v10);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v11);
    byte_49FFF87 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)SvtEqCombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_SvtEqCombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v18);
      SvtEqCombineListViewObject__Init_45063628((SvtEqCombineListViewObject_o *)current, mode, v17, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewObject__Dispose__);
  }
}


void __fastcall SvtEqCombineListViewManager__ResetInit(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *levelUpInfoImg; // x0
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedMtSvtList_k__BackingField; // x8
  int32_t size; // w2
  int v12; // w9
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t v14; // w2
  int v15; // w9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FFF91 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    byte_49FFF91 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  this->fields.baseUsrSvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData, 0, v2, v3);
  selectedMtSvtList_k__BackingField = this->fields._selectedMtSvtList_k__BackingField;
  if ( selectedMtSvtList_k__BackingField )
  {
    size = selectedMtSvtList_k__BackingField->fields._size;
    v12 = selectedMtSvtList_k__BackingField->fields._version + 1;
    selectedMtSvtList_k__BackingField->fields._size = 0;
    selectedMtSvtList_k__BackingField->fields._version = v12;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)selectedMtSvtList_k__BackingField->fields._items, 0, size, 0LL);
  }
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_19;
  v14 = tempMtSvtList->fields._size;
  v15 = tempMtSvtList->fields._version + 1;
  tempMtSvtList->fields._size = 0;
  tempMtSvtList->fields._version = v15;
  if ( v14 >= 1 )
    System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, v14, 0LL);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v17.fields._current )
        sub_1B64324(0LL);
      ListViewItem__set_IsSelect((ListViewItem_o *)v17.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  this->fields.selectSum = 0;
  if ( !levelUpInfoImg
    || (levelUpInfoImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL)) == 0LL )
  {
LABEL_19:
    sub_1B64324(levelUpInfoImg);
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
  if ( (byte_49FFF76 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEnable);
    byte_49FFF76 = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = v5;
  if ( !decideBtnBg )
    goto LABEL_12;
  decideBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             decideBtnBg,
                                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1B64324(decideBtnBg);
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
  __int64 v5; // x1
  void *allReleaseButton; // x0
  float v7; // s8
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
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FFF75 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, isShow);
    sub_1B640C8(&SvtEqCombineListViewManager_TypeInfo, v5);
    byte_49FFF75 = 1;
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
  v7 = **((float **)allReleaseButton + 23);
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.spendQpBg,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( isShow )
    v7 = 1.0;
  if ( !allReleaseButton )
    goto LABEL_40;
  v8.fields.a = 1.0;
  v8.fields.r = v7;
  v8.fields.g = v7;
  v8.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v8, 0LL);
  allReleaseButton = this->fields.spendQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v9.fields.a = 1.0;
  v9.fields.r = v7;
  v9.fields.g = v7;
  v9.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v9, 0LL);
  allReleaseButton = this->fields.spendQpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v10.fields.a = 1.0;
  v10.fields.r = v7;
  v10.fields.g = v7;
  v10.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v10, 0LL);
  allReleaseButton = this->fields.getExpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v11.fields.a = 1.0;
  v11.fields.r = v7;
  v11.fields.g = v7;
  v11.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v11, 0LL);
  allReleaseButton = this->fields.getExpBgImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v12.fields.a = 1.0;
  v12.fields.r = v7;
  v12.fields.g = v7;
  v12.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v12, 0LL);
  allReleaseButton = this->fields.getExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v13.fields.a = 1.0;
  v13.fields.r = v7;
  v13.fields.g = v7;
  v13.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v13, 0LL);
  allReleaseButton = this->fields.getBasicExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v14.fields.a = 1.0;
  v14.fields.r = v7;
  v14.fields.g = v7;
  v14.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v14, 0LL);
  allReleaseButton = this->fields.getAccExpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v15.fields.a = 1.0;
  v15.fields.r = v7;
  v15.fields.g = v7;
  v15.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v15, 0LL);
  allReleaseButton = this->fields.haveQpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v16.fields.a = 1.0;
  v16.fields.r = v7;
  v16.fields.g = v7;
  v16.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v16, 0LL);
  allReleaseButton = this->fields.haveQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v17.fields.a = 1.0;
  v17.fields.r = v7;
  v17.fields.g = v7;
  v17.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v17, 0LL);
  allReleaseButton = this->fields.haveQpLabel;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v18.fields.a = 1.0;
  v18.fields.r = v7;
  v18.fields.g = v7;
  v18.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v18, 0LL);
  allReleaseButton = this->fields.nextExpBg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_40;
  v19.fields.a = 1.0;
  v19.fields.r = v7;
  v19.fields.g = v7;
  v19.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v19, 0LL);
  allReleaseButton = this->fields.nextExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_40;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton
    || (v20.fields.a = 1.0,
        v20.fields.r = v7,
        v20.fields.g = v7,
        v20.fields.b = v7,
        UIWidget__set_color((UIWidget_o *)allReleaseButton, v20, 0LL),
        (allReleaseButton = this->fields.nextExpLabel) == 0LL)
    || (allReleaseButton = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)allReleaseButton,
                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_40:
    sub_1B64324(allReleaseButton);
  }
  v21.fields.a = 1.0;
  v21.fields.r = v7;
  v21.fields.g = v7;
  v21.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v21, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetDragEnd(SvtEqCombineListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_49FFFAB & 1) == 0 )
  {
    sub_1B640C8(&Method_SvtEqCombineListViewManager_SetDragEnd__, method);
    byte_49FFFAB = 1;
  }
  v3 = Method_SvtEqCombineListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_SvtEqCombineListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_SvtEqCombineListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  ListViewItem_o *v11; // x19
  __int64 methodPtr_low; // x9
  bool v13; // w0
  bool v14; // w21
  _BOOL4 v15; // w21
  bool IsSelect; // w0
  const MethodInfo *v17; // x4
  UnityEngine_Object_o *viewObject; // x20
  __int64 v19; // x9
  bool result; // w0
  SvtEqCombineListViewObject_o *v21; // x0
  const MethodInfo *v22; // x1

  if ( (byte_49FFFA9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v8);
    sub_1B640C8(&SvtEqCombineListViewObject_TypeInfo, v9);
    byte_49FFFA9 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_30;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_30;
  v11 = (ListViewItem_o *)itemSortList;
  methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    goto LABEL_31;
  }
  v13 = SvtEqCombineListViewItem__get_IsDragSelect((SvtEqCombineListViewItem_o *)itemSortList, 0LL);
  if ( !isDragSelect )
  {
    if ( v13 )
    {
      if ( !ListViewItem__get_IsSelect(v11, 0LL) && v11[2].fields.sortIndex >= 1 )
        --this->fields.dragSelectSum;
      SvtEqCombineListViewItem__set_IsDragSelect((SvtEqCombineListViewItem_o *)v11, 0, 0LL);
    }
    goto LABEL_19;
  }
  if ( v13 )
    goto LABEL_19;
  v11[2].fields.sortIndex = 0;
  v14 = 0;
  if ( SvtEqCombineListViewItem__get_IsCanNotSelect((SvtEqCombineListViewItem_o *)v11, 0LL) )
    goto LABEL_20;
  v15 = this->fields.isDragSelect;
  IsSelect = ListViewItem__get_IsSelect(v11, 0LL);
  if ( v15 )
  {
    if ( !IsSelect )
    {
      v14 = 1;
      if ( !SvtEqCombineListViewManager__IsSelectEnable(
              this,
              (SvtEqCombineListViewItem_o *)v11,
              this->fields.dragSelectSum,
              1,
              v17) )
        goto LABEL_20;
      ++this->fields.dragSelectSum;
      v11[2].fields.sortIndex = 1;
    }
    goto LABEL_19;
  }
  if ( !IsSelect )
  {
LABEL_19:
    v14 = 0;
    goto LABEL_20;
  }
  v14 = 0;
  v11[2].fields.sortIndex = 1;
LABEL_20:
  viewObject = (UnityEngine_Object_o *)v11->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    return v14;
  itemSortList = (System_Collections_Generic_List_object__o *)v11->fields.viewObject;
  if ( !itemSortList )
LABEL_30:
    sub_1B64324(itemSortList);
  v19 = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v19
    && (SvtEqCombineListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v19 - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    SvtEqCombineListViewObject__SetupDisp(
      (SvtEqCombineListViewObject_o *)itemSortList,
      (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
    return v14;
  }
LABEL_31:
  sub_1B645E4(itemSortList);
  SvtEqCombineListViewObject__SetupDisp(v21, v22);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v12; // w25
  int32_t v13; // w26
  int32_t v14; // w8
  int32_t v15; // w9
  int v16; // w24
  int32_t v17; // w20
  int32_t v18; // w23
  int v19; // w27
  void *itemSortList; // x0
  _QWORD *v21; // x21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *v23; // x22
  __int64 v24; // x9
  SvtEqCombineListViewManager_o *v25; // x0
  int32_t v26; // w1
  bool v27; // w2
  const MethodInfo *v28; // x3

  v5 = startIndex;
  if ( (byte_49FFFA8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&startIndex);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v8);
    sub_1B640C8(&SvtEqCombineListViewObject_TypeInfo, v9);
    byte_49FFFA8 = 1;
  }
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
  {
    v12 = -1;
    v13 = -1;
  }
  else
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v12 = this->fields.dragEndIndex;
    else
      v12 = this->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v13 = this->fields.dragStartIndex;
    else
      v13 = this->fields.dragEndIndex;
  }
  if ( v5 <= endIndex )
    v14 = endIndex;
  else
    v14 = v5;
  if ( v5 <= endIndex )
    v15 = v5;
  else
    v15 = endIndex;
  if ( v5 < 0 )
    v16 = -1;
  else
    v16 = v14;
  if ( v5 < 0 )
    v17 = -1;
  else
    v17 = v15;
  this->fields.dragStartIndex = v5;
  this->fields.dragEndIndex = endIndex;
  if ( (v13 & 0x80000000) == 0 && v13 <= v12 )
  {
    v18 = v13;
    do
    {
      if ( v18 > v16 || (v17 & 0x80000000) != 0 || v18 < v17 )
        SvtEqCombineListViewManager__SetDragSelect(this, v18, 0, method);
      ++v18;
    }
    while ( v18 <= v12 );
  }
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 <= endIndex )
    {
      do
      {
        if ( v5 > v12 || (v13 & 0x80000000) != 0 || v5 < v13 )
          SvtEqCombineListViewManager__SetDragSelect(this, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v12 || (v13 & 0x80000000) != 0 || v5 < v13 )
          SvtEqCombineListViewManager__SetDragSelect(this, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( (v17 & 0x80000000) == 0 && this->fields.isDragSelect && v17 <= v16 )
    {
      v19 = this->fields.selectSum + 1;
      while ( 1 )
      {
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList
          || (itemSortList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)itemSortList,
                               v17,
                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
        {
LABEL_62:
          sub_1B64324(itemSortList);
        }
        v21 = itemSortList;
        methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)methodPtr_low
          || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
        {
          break;
        }
        if ( *((int *)itemSortList + 62) >= 1 )
        {
          *((_DWORD *)itemSortList + 62) = v19;
          v23 = (UnityEngine_Object_o *)*((_QWORD *)itemSortList + 13);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          ++v19;
          if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
          {
            itemSortList = (void *)v21[13];
            if ( !itemSortList )
              goto LABEL_62;
            v24 = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)v24
              || *(SvtEqCombineListViewObject_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * v24 - 8) != SvtEqCombineListViewObject_TypeInfo )
            {
              break;
            }
            SvtEqCombineListViewObject__SetupDisp(
              (SvtEqCombineListViewObject_o *)itemSortList,
              (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo);
          }
        }
        if ( ++v17 > v16 )
          return;
      }
      sub_1B645E4(itemSortList);
      SvtEqCombineListViewManager__SetDragSelect(v25, v26, v27, v28);
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
  bool v6; // w21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v12; // w21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *scrollView; // x20

  v6 = isDragSelect;
  if ( (byte_49FFFAA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&startIndex);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v9);
    byte_49FFFAA = 1;
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
    v12 = 0;
    while ( 1 )
    {
      itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemSortList,
                                                                    v12,
                                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemSortList )
        goto LABEL_19;
      methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
      {
        break;
      }
      SvtEqCombineListViewItem__set_IsDragSelect((SvtEqCombineListViewItem_o *)itemSortList, 0, 0LL);
      if ( size == ++v12 )
        goto LABEL_12;
      itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_19;
    }
    sub_1B645E4(itemSortList);
LABEL_19:
    sub_1B64324(itemSortList);
  }
LABEL_12:
  SvtEqCombineListViewManager__SetDragSelectItem(this, startIndex, startIndex, method);
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
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_49FFF99 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17441/*"btn_filter_on"*/, method);
    sub_1B640C8(&StringLiteral_17440/*"btn_filter"*/, v3);
    byte_49FFF99 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B64324(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17440/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17441/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetMaterialSvtInfo(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  System_Collections_Generic_List_object__o *selectedMtSvtList_k__BackingField; // x0
  int64_t v12; // x0
  System_Collections_Generic_List_object__o *v13; // x8
  Il2CppObject *current; // x20
  int32_t v15; // w21
  Il2CppObject *Item; // x0
  Il2CppObject *v17; // x22
  __int64 methodPtr_low; // x9
  int64_t UserSvtId; // x0
  int64_t v20; // x23
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_49FFF78 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    this = (SvtEqCombineListViewManager_o *)sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v9);
    byte_49FFF78 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  itemList = v2->fields.itemList;
  if ( !itemList )
    sub_1B64324(this);
  if ( itemList->fields._size >= 1 )
  {
    selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)v2->fields._selectedMtSvtList_k__BackingField;
    if ( selectedMtSvtList_k__BackingField )
    {
      if ( selectedMtSvtList_k__BackingField->fields._size >= 1 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v21,
          selectedMtSvtList_k__BackingField,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
        v22 = v21;
LABEL_8:
        while ( 1 )
        {
          v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v22,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
          if ( (v12 & 1) == 0 )
            break;
          v13 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
          if ( !v13 )
            goto LABEL_23;
          current = v22.fields._current;
          v15 = 0;
          while ( 1 )
          {
            if ( v15 >= v13->fields._size )
              goto LABEL_8;
            Item = System_Collections_Generic_List_object___get_Item(
                     v13,
                     v15,
                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            v17 = Item;
            if ( !Item )
              sub_1B64324(0LL);
            methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
              || (SvtEqCombineListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
            {
              sub_1B645E4(Item);
LABEL_23:
              sub_1B64324(v12);
            }
            UserSvtId = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)Item, 0LL);
            if ( !current )
              sub_1B64324(UserSvtId);
            v20 = UserSvtId;
            v12 = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)current, 0LL);
            if ( v20 == v12 )
              break;
            v13 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
            ++v15;
            if ( !v13 )
              goto LABEL_23;
          }
          BYTE4(v17[15].monitor) = 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v22,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  SvtEqCombineListViewManager__SetMode_45061424(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetMode_45061424(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v11; // x2
  UnityEngine_Behaviour_o *itemList; // x0
  int32_t v13; // w1
  char v14; // w22
  _BOOL8 v15; // x0
  ListViewItem_o *current; // x21
  __int64 methodPtr_low; // x9
  int32_t selectNum; // w27
  struct System_Collections_Generic_List_ListViewItem__o *v19; // x0
  _BOOL8 v20; // x0
  int32_t klass; // w9
  const MethodInfo *v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_49FFF85 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v9);
    byte_49FFF85 = 1;
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
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v25 = v23;
      v14 = 0;
      while ( 1 )
      {
        v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v25,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v15 )
          break;
        current = (ListViewItem_o *)v25.fields._current;
        if ( !v25.fields._current )
          goto LABEL_38;
        methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v25.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (SvtEqCombineListViewItem_c *)v25.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
        {
          sub_1B645E4(v25.fields._current);
LABEL_38:
          sub_1B64324(v15);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v25.fields._current, 0LL)
          && SvtEqCombineListViewItem__get_IsCanNotSelect((SvtEqCombineListViewItem_o *)current, 0LL) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0LL);
          v19 = this->fields.itemList;
          --this->fields.selectSum;
          if ( !v19 )
            sub_1B64324(0LL);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v23,
            (System_Collections_Generic_List_object__o *)v19,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v24 = v23;
          while ( 1 )
          {
            v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v24,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v20 )
              break;
            if ( !v24.fields._current )
              sub_1B64324(v20);
            klass = (int32_t)v24.fields._current[1].klass;
            if ( klass > selectNum )
              LODWORD(v24.fields._current[1].klass) = klass - 1;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v24,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v14 = 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v25,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v14 & 1) != 0 )
        SvtEqCombineListViewManager__RefrashListDisp(this, v22);
      if ( mode == 2 )
        v13 = 4;
      else
        v13 = 2;
      goto LABEL_35;
    }
LABEL_39:
    sub_1B64324(itemList);
  }
  if ( mode != 3 )
    return;
  v13 = 5;
LABEL_35:
  SvtEqCombineListViewManager__RequestListObject_45062516(this, v13, v11);
}


void __fastcall SvtEqCombineListViewManager__SetMode_45062464(
        SvtEqCombineListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  SvtEqCombineListViewManager__SetMode_45061424(this, mode, v6);
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
  if ( (byte_49FFF84 & 1) == 0 )
  {
    this = (SvtEqCombineListViewManager_o *)sub_1B640C8(&SvtEqCombineListViewObject_TypeInfo, obj);
    byte_49FFF84 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1B64324(this);
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1B645E4(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 4;
  else
    v7 = 2;
  SvtEqCombineListViewObject__Init_45061300((SvtEqCombineListViewObject_o *)obj, v7, (const MethodInfo *)item);
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
    sub_1B64324(0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData, (int32_t)resData, (int32_t)method, v3);
}


void __fastcall SvtEqCombineListViewManager__SetSelectMaterialList(
        SvtEqCombineListViewManager_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *selectedItems,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  SetCombineData_o *v15; // x22
  struct SetCombineData_o **p_combineData; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  char *combineData; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  struct SetCombineData_o *v25; // x8
  System_Collections_Generic_Dictionary_long__bool__o *v26; // x20
  _BOOL8 v27; // x0
  SvtEqCombineListViewItem_o *current; // x21
  int64_t UserSvtId; // x0
  int isUseRecommendSupportEquip; // w8
  struct SetCombineData_o *v31; // x21
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FFF8D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__bool__Add__, selectedItems);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__, v7);
    sub_1B640C8(&System_Collections_Generic_Dictionary_long__bool__TypeInfo, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_long___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__get_Current__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__, v13);
    sub_1B640C8(&SetCombineData_TypeInfo, v14);
    byte_49FFF8D = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v15 = (SetCombineData_o *)sub_1B64314(SetCombineData_TypeInfo, selectedItems, method);
  SetCombineData___ctor(v15, 0LL);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.combineData, (int32_t)v15, v17, v18);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_23;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(combineData + 16), (int32_t)baseUsrSvtData, v19, v20);
  v25 = *p_combineData;
  if ( !*p_combineData )
    goto LABEL_23;
  *(_OWORD *)&v25->fields.selectSum = *(_OWORD *)&this->fields.selectSum;
  *(_QWORD *)&v25->fields.getHpAdjustVal = *(_QWORD *)&this->fields.getHpUpVal;
  v25->fields.isAdjustMax = this->fields.isAllUpMax;
  v26 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_long__bool__TypeInfo,
                                                                 v23,
                                                                 v24);
  System_Collections_Generic_Dictionary_long__bool____ctor(
    v26,
    (const MethodInfo_3154D50 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
  if ( !selectedItems )
    goto LABEL_23;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)selectedItems,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__MoveNext__);
    if ( !v27 )
      break;
    current = (SvtEqCombineListViewItem_o *)v38.fields._current;
    if ( !v38.fields._current )
      sub_1B64324(v27);
    if ( SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)v38.fields._current, 0LL) >= 1 )
    {
      UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(current, 0LL);
      if ( current->fields.isEquiped || current->fields.isUseSupportEquip )
      {
        isUseRecommendSupportEquip = 1;
        if ( !v26 )
          goto LABEL_15;
      }
      else
      {
        isUseRecommendSupportEquip = current->fields.isUseRecommendSupportEquip;
        if ( !v26 )
LABEL_15:
          sub_1B64324(UserSvtId);
      }
      System_Collections_Generic_Dictionary_long__bool___Add(
        v26,
        UserSvtId,
        isUseRecommendSupportEquip != 0,
        (const MethodInfo_3155730 *)Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtEqCombineListViewItem__Dispose__);
  if ( !v26 )
    goto LABEL_23;
  if ( System_Collections_Generic_Dictionary_long__bool___get_Count(
         v26,
         (const MethodInfo_31553D4 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__) <= 0 )
    return;
  v31 = *p_combineData;
  Keys = System_Collections_Generic_Dictionary_long__bool___get_Keys(
           v26,
           (const MethodInfo_31553E4 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
  combineData = (char *)System_Linq_Enumerable__ToArray_long_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                          (const MethodInfo_2E7133C *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !v31
    || (v31->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v31->fields.materialUsrSvtIdList,
          (int32_t)combineData,
          v33,
          v34),
        (combineData = (char *)*p_combineData) == 0LL) )
  {
LABEL_23:
    sub_1B64324(combineData);
  }
  *((_QWORD *)combineData + 8) = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(combineData + 64), (int32_t)v26, v35, v36);
}


void __fastcall SvtEqCombineListViewManager__SetSelectedMaterialInfo(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x21
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o **p_selectedMtSvtList_k__BackingField; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  int64_t itemList; // x0
  const MethodInfo *v19; // x1
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *tempMtSvtList; // x8
  int32_t size; // w2
  int v22; // w9
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *SelectedMaterialList; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_long__o *v26; // x22
  int v27; // w24
  int32_t v28; // w23
  __int64 methodPtr_low; // x9
  struct System_Int64_array *items; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  struct System_Int64_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  const MethodInfo *v36; // x2
  SvtEqCombineListViewManager_o *v37; // x0
  System_Collections_Generic_List_SvtEqCombineListViewItem__o *v38; // x1

  if ( (byte_49FFF8C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_1B640C8(&System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo, v11);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v13);
    byte_49FFF8C = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SvtEqCombineListViewItem__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem___ctor__);
  p_selectedMtSvtList_k__BackingField = &this->fields._selectedMtSvtList_k__BackingField;
  this->fields._selectedMtSvtList_k__BackingField = (struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *)v14;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._selectedMtSvtList_k__BackingField,
    (int32_t)v14,
    v16,
    v17);
  tempMtSvtList = this->fields.tempMtSvtList;
  if ( !tempMtSvtList )
    goto LABEL_25;
  size = tempMtSvtList->fields._size;
  v22 = tempMtSvtList->fields._version + 1;
  tempMtSvtList->fields._size = 0;
  tempMtSvtList->fields._version = v22;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)tempMtSvtList->fields._items, 0, size, 0LL);
  SelectedMaterialList = SvtEqCombineListViewManager__GetSelectedMaterialList(this, v19);
  v26 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v24, v25);
  System_Collections_Generic_List_long____ctor(
    v26,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !SelectedMaterialList )
    goto LABEL_25;
  v27 = SelectedMaterialList->fields._size;
  if ( v27 < 1 )
  {
LABEL_20:
    itemList = (int64_t)this->fields.tempMtSvtList;
    if ( itemList )
    {
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)itemList,
        (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
      itemList = (int64_t)*p_selectedMtSvtList_k__BackingField;
      if ( *p_selectedMtSvtList_k__BackingField )
      {
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)itemList,
          (System_Collections_Generic_IEnumerable_T__o *)SelectedMaterialList,
          (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__AddRange__);
        if ( v26 )
        {
          v33 = System_Collections_Generic_List_long___ToArray(
                  v26,
                  (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
          this->fields.highRarityList = v33;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.highRarityList, (int32_t)v33, v34, v35);
          v37 = this;
          v38 = SelectedMaterialList;
          goto LABEL_24;
        }
      }
    }
LABEL_25:
    sub_1B64324(itemList);
  }
  v28 = 0;
  while ( 1 )
  {
    itemList = (int64_t)this->fields.itemList;
    if ( !itemList )
      goto LABEL_25;
    itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)itemList,
                          v28,
                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_25;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
      || *(SvtEqCombineListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewItem_TypeInfo )
    {
      break;
    }
    if ( *(int *)(itemList + 156) >= 3 )
    {
      itemList = SvtEqCombineListViewItem__get_UserSvtId((SvtEqCombineListViewItem_o *)itemList, 0LL);
      if ( !v26 )
        goto LABEL_25;
      items = v26->fields._items;
      v31 = Method_System_Collections_Generic_List_long__Add__;
      ++v26->fields._version;
      if ( !items )
        goto LABEL_25;
      v32 = v26->fields._size;
      if ( (unsigned int)v32 >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v26,
          itemList,
          *(const MethodInfo_3495074 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v26->fields._size = v32 + 1;
        items->m_Items[v32] = itemList;
      }
    }
    if ( v27 == ++v28 )
      goto LABEL_20;
  }
  sub_1B645E4(itemList);
LABEL_24:
  SvtEqCombineListViewManager__SetSelectMaterialList(v37, v38, v36);
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
    sub_1B6406C(
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
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
  int64_t emptyListNoticeLabel; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x23
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x25
  int32_t v35; // w2
  int32_t v36; // w3
  UserGameEntity_o *SelfUserGame; // x22
  int32_t qp; // w8
  UILabel_o *haveQpLabel; // x24
  Il2CppObject *v40; // x0
  UILabel_o *nextExpLabel; // x24
  Il2CppObject *v42; // x0
  const MethodInfo *v43; // x1
  UserServantEntity_array *ServantEquipList; // x29
  const MethodInfo *v45; // x2
  int v46; // w20
  int32_t FriendShipSvtEquipNum; // w0
  __int64 v48; // x1
  __int64 v49; // x2
  System_Collections_Generic_List_object__o *v50; // x26
  __int64 v51; // x1
  __int64 v52; // x2
  System_Collections_Generic_List_object__o *v53; // x27
  int max_length; // w8
  __int64 v55; // x21
  UserServantEntity_o **m_Items; // x22
  UserServantEntity_o *v57; // x28
  __int128 v58; // q0
  UserServantEntity_array *v59; // x24
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v61; // q0
  int64_t v62; // x29
  int32_t v63; // w2
  int32_t v64; // w3
  bool v65; // zf
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x0
  UILabel_o *v70; // x26
  Il2CppObject *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  System_Collections_Generic_List_object__o *v74; // x25
  __int64 v75; // x1
  __int64 v76; // x2
  System_Collections_Generic_List_object__o *v77; // x0
  const MethodInfo *v78; // x2
  int32_t v79; // w24
  __int128 v80; // q0
  struct UserServantEntity_o *v81; // x8
  __int128 v82; // q0
  il2cpp_array_size_t v83; // w20
  int32_t v84; // w0
  int v85; // w20
  UILabel_o *v86; // x25
  Il2CppObject *v87; // x0
  int v88; // w24
  int v89; // w8
  unsigned int v90; // w25
  Il2CppClass **v91; // x20
  Il2CppClass *v92; // x8
  UserServantEntity_o **v93; // x20
  Il2CppClass *v94; // t1
  Il2CppType byval_arg; // q0
  __int64 v96; // x2
  int64_t v97; // x26
  System_Collections_Generic_List_object__o *selectedMtSvtList_k__BackingField; // x8
  int32_t v99; // w27
  _BOOL4 v100; // w28
  int32_t v101; // w23
  UserServantEntity_array *v102; // x21
  UserServantEntity_o *v103; // x29
  UserServantEntity_o *v104; // x20
  int64_t favoriteUserSvtId; // x22
  SvtEqCombineListViewItem_o *v106; // x27
  int32_t v107; // w2
  int32_t v108; // w3
  struct System_Collections_Generic_List_SvtEqCombineListViewItem__o *v109; // x8
  __int64 v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  __int64 v113; // x8
  UILabel_o *servantInfoLabel; // x20
  System_String_o *v115; // x21
  Il2CppObject *v116; // x22
  Il2CppObject *v117; // x0
  const MethodInfo *v118; // x1
  const MethodInfo *v119; // x1
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

  if ( (byte_49FFF77 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&type);
    sub_1B640C8(&int_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor___75673192, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v18);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v19);
    sub_1B640C8(&LocalizationManager_TypeInfo, v20);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B640C8(&SvtEqCombineListViewItem_TypeInfo, v23);
    sub_1B640C8(&StringLiteral_24871/*"{0:N0}"*/, v24);
    sub_1B640C8(&StringLiteral_12321/*"SUM_INFO"*/, v25);
    byte_49FFF77 = 1;
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v27, v28);
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
  emptyListNoticeLabel = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_112;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)emptyListNoticeLabel,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantMaster,
    (int32_t)MasterData_object,
    v35,
    v36);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !SelfUserGame )
    goto LABEL_112;
  qp = SelfUserGame->fields.qp;
  this->fields.userQP = qp;
  haveQpLabel = this->fields.haveQpLabel;
  LODWORD(v130.fields.currentCryptoKey) = qp;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v130);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v40, 0LL);
  if ( !haveQpLabel )
    goto LABEL_112;
  UILabel__set_text(haveQpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  *(_OWORD *)&this->fields.selectSum = 0u;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  this->fields.isAllUpMax = 0;
  lateExp[0] = 0;
  nextExpLabel = this->fields.nextExpLabel;
  svtEquipKeep = 0;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v42, 0LL);
  if ( !nextExpLabel )
    goto LABEL_112;
  UILabel__set_text(nextExpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  v123 = SelfUserGame;
  if ( type )
  {
    v120 = 0;
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
    v46 = *(_DWORD *)(emptyListNoticeLabel + 24);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    FriendShipSvtEquipNum = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
                              (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
                              (UserServantEntity_array *)emptyListNoticeLabel,
                              v45);
    v120 = v46 - FriendShipSvtEquipNum;
    if ( FriendShipSvtEquipNum <= 0 && v120 <= 0 )
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
    v50 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         v48,
                                                         v49);
    System_Collections_Generic_List_object____ctor_55234504(
      v50,
      (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___75673192);
    v53 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         v51,
                                                         v52);
    System_Collections_Generic_List_object____ctor(
      v53,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_76;
    max_length = ServantEquipList->max_length;
    if ( max_length >= 1 )
    {
      v55 = 0LL;
      m_Items = ServantEquipList->m_Items;
      while ( 1 )
      {
        if ( (unsigned int)v55 >= max_length )
LABEL_113:
          sub_1B6432C(emptyListNoticeLabel, v43);
        v57 = m_Items[v55];
        if ( !v57 )
          break;
        v58 = *(_OWORD *)&v57->fields.id.fields.fakeValue;
        v59 = ServantEquipList;
        *(_OWORD *)&v130.fields.currentCryptoKey = *(_OWORD *)&v57->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v130.fields.fakeValue = v58;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v129 = v130;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v129, 0LL);
        baseUsrSvtData = this->fields.baseUsrSvtData;
        if ( !baseUsrSvtData )
          break;
        v61 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
        v62 = emptyListNoticeLabel;
        *(_OWORD *)&v128.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v128.fields.fakeValue = v61;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v128, 0LL);
        v65 = v62 == emptyListNoticeLabel;
        ServantEquipList = v59;
        if ( v65 )
        {
          if ( !v53 )
            break;
          items = v53->fields._items;
          v67 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v53->fields._version;
          if ( !items )
            break;
          size = v53->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v53,
              (Il2CppObject *)v57,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v69 = &items->obj.klass + size;
            v53->fields._size = size + 1;
            v69[4] = (Il2CppClass *)v57;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v69 + 4), (int32_t)v57, v63, v64);
          }
          if ( !v50 )
            break;
          emptyListNoticeLabel = System_Collections_Generic_List_object___Remove(
                                   v50,
                                   (Il2CppObject *)v57,
                                   (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        max_length = v59->max_length;
        if ( (int)++v55 >= max_length )
          goto LABEL_48;
      }
LABEL_112:
      sub_1B64324(emptyListNoticeLabel);
    }
LABEL_48:
    if ( !v53 )
      goto LABEL_112;
    System_Collections_Generic_List_object___AddRange(
      v53,
      (System_Collections_Generic_IEnumerable_T__o *)v50,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___ToArray(
                                      v53,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_112;
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
    UserServantEntity__getExpInfo(this->fields.baseUsrSvtData, &lateExp[1], lateExp, &barExp, 0LL);
    v70 = this->fields.nextExpLabel;
    LODWORD(v130.fields.currentCryptoKey) = lateExp[0];
    v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v130);
    emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v71, 0LL);
    if ( !v70 )
      goto LABEL_112;
    UILabel__set_text(v70, (System_String_o *)emptyListNoticeLabel, 0LL);
  }
  if ( type != 1 )
  {
    if ( !ServantEquipList )
      goto LABEL_112;
LABEL_76:
    v88 = 0;
    goto LABEL_77;
  }
  emptyListNoticeLabel = (int64_t)*p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_112;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)emptyListNoticeLabel, 0LL);
  v74 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v72,
                                                       v73);
  System_Collections_Generic_List_object____ctor_55234504(
    v74,
    (System_Collections_Generic_IEnumerable_T__o *)ServantEquipList,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___75673192);
  v77 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v75,
                                                       v76);
  System_Collections_Generic_List_object____ctor(
    v77,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( this->fields.baseUsrSvtData )
  {
    if ( !v74 )
      goto LABEL_112;
    if ( v74->fields._size >= 1 )
    {
      v79 = 0;
      do
      {
        emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___get_Item(
                                          v74,
                                          v79,
                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !emptyListNoticeLabel )
          goto LABEL_112;
        v80 = *(_OWORD *)(emptyListNoticeLabel + 32);
        *(_OWORD *)&v130.fields.currentCryptoKey = *(_OWORD *)(emptyListNoticeLabel + 16);
        *(_OWORD *)&v130.fields.fakeValue = v80;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v127 = v130;
        emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v127, 0LL);
        v81 = this->fields.baseUsrSvtData;
        if ( !v81 )
          goto LABEL_112;
        v82 = *(_OWORD *)&v81->fields.id.fields.fakeValue;
        *(_OWORD *)&v126.fields.currentCryptoKey = *(_OWORD *)&v81->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v126.fields.fakeValue = v82;
        if ( emptyListNoticeLabel == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v126, 0LL) )
          System_Collections_Generic_List_object___RemoveAt(
            v74,
            v79,
            (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
      }
      while ( ++v79 < v74->fields._size );
    }
    emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___ToArray(
                                      v74,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    ServantEquipList = (UserServantEntity_array *)emptyListNoticeLabel;
  }
  if ( !ServantEquipList )
    goto LABEL_112;
  v83 = ServantEquipList->max_length;
  v84 = SvtEqCombineListViewManager__GetFriendShipSvtEquipNum(
          (SvtEqCombineListViewManager_o *)emptyListNoticeLabel,
          ServantEquipList,
          v78);
  v85 = v83 - v84;
  if ( v84 <= 0 && v85 <= 0 )
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
  v120 = v85;
  if ( !emptyListNoticeLabel )
    goto LABEL_112;
  UserServantEntity__getExpInfo((UserServantEntity_o *)emptyListNoticeLabel, &lateExp[1], lateExp, &barExp, 0LL);
  v86 = this->fields.nextExpLabel;
  LODWORD(v130.fields.currentCryptoKey) = lateExp[0];
  v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v130);
  emptyListNoticeLabel = (int64_t)System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v87, 0LL);
  if ( !v86 )
    goto LABEL_112;
  UILabel__set_text(v86, (System_String_o *)emptyListNoticeLabel, 0LL);
  v88 = 1;
LABEL_77:
  v89 = ServantEquipList->max_length;
  if ( v89 >= 1 )
  {
    v90 = 0;
    while ( 1 )
    {
      if ( v90 >= v89 )
        goto LABEL_113;
      v91 = &ServantEquipList->obj.klass + (int)v90;
      v94 = v91[4];
      v93 = (UserServantEntity_o **)(v91 + 4);
      v92 = v94;
      if ( !v94 )
        goto LABEL_112;
      byval_arg = v92->_1.byval_arg;
      *(_OWORD *)&v130.fields.currentCryptoKey = *(_OWORD *)&v92->_1.name;
      *(Il2CppType *)&v130.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v125 = v130;
      emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v125, 0LL);
      v97 = emptyListNoticeLabel;
      if ( v88 )
      {
        selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._selectedMtSvtList_k__BackingField;
        if ( selectedMtSvtList_k__BackingField )
        {
          if ( selectedMtSvtList_k__BackingField->fields._size >= 1 )
            break;
        }
      }
      v100 = 0;
      v101 = 0;
LABEL_96:
      if ( v90 >= ServantEquipList->max_length )
        goto LABEL_113;
      v102 = ServantEquipList;
      v103 = *v93;
      v104 = this->fields.baseUsrSvtData;
      favoriteUserSvtId = v123->fields.favoriteUserSvtId;
      v106 = (SvtEqCombineListViewItem_o *)sub_1B64314(SvtEqCombineListViewItem_TypeInfo, v43, v96);
      SvtEqCombineListViewItem___ctor(
        v106,
        type,
        v90,
        v103,
        v97 == favoriteUserSvtId,
        v104,
        v100,
        setupInfo,
        finishSetupInfo,
        0LL);
      if ( (v88 & v100) == 1 )
      {
        if ( !v106 )
          goto LABEL_112;
        v106->fields.selectNum = v101;
        v109 = this->fields._selectedMtSvtList_k__BackingField;
        ++this->fields.selectSum;
        if ( !v109 )
          goto LABEL_112;
        if ( v101 == v109->fields._size - 1 )
          v106->fields.isLastSelectMaterial = 1;
      }
      emptyListNoticeLabel = (int64_t)this->fields.itemList;
      if ( !emptyListNoticeLabel )
        goto LABEL_112;
      v110 = *(_QWORD *)(emptyListNoticeLabel + 16);
      v111 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(emptyListNoticeLabel + 28);
      if ( !v110 )
        goto LABEL_112;
      ServantEquipList = v102;
      v112 = *(int *)(emptyListNoticeLabel + 24);
      if ( (unsigned int)v112 >= *(_DWORD *)(v110 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)emptyListNoticeLabel,
          (Il2CppObject *)v106,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
      }
      else
      {
        v113 = v110 + 8 * v112;
        *(_DWORD *)(emptyListNoticeLabel + 24) = v112 + 1;
        *(_QWORD *)(v113 + 32) = v106;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v113 + 32), (int32_t)v106, v107, v108);
      }
      v89 = v102->max_length;
      if ( (int)++v90 >= v89 )
        goto LABEL_108;
    }
    v99 = 0;
    v100 = 0;
    v101 = 0;
    while ( 1 )
    {
      emptyListNoticeLabel = (int64_t)System_Collections_Generic_List_object___get_Item(
                                        selectedMtSvtList_k__BackingField,
                                        v99,
                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
      if ( !emptyListNoticeLabel )
        goto LABEL_112;
      emptyListNoticeLabel = SvtEqCombineListViewItem__get_UserSvtId(
                               (SvtEqCombineListViewItem_o *)emptyListNoticeLabel,
                               0LL);
      selectedMtSvtList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._selectedMtSvtList_k__BackingField;
      if ( !selectedMtSvtList_k__BackingField )
        goto LABEL_112;
      if ( emptyListNoticeLabel == v97 )
        v101 = v99;
      ++v99;
      if ( emptyListNoticeLabel == v97 )
        v100 = 1;
      if ( v99 >= selectedMtSvtList_k__BackingField->fields._size )
        goto LABEL_96;
    }
  }
LABEL_108:
  SvtEqCombineListViewManager__RefrashListDisp(this, v43);
  servantInfoLabel = this->fields.servantInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v115 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
  LODWORD(v130.fields.currentCryptoKey) = v120;
  v116 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v130);
  svtEquipKeep = v123->fields.svtEquipKeep;
  v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  emptyListNoticeLabel = (int64_t)System_String__Format_61389768(v115, v116, v117, 0LL);
  if ( !servantInfoLabel )
    goto LABEL_112;
  UILabel__set_text(servantInfoLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  SvtEqCombineListViewManager__SetMaterialSvtInfo(this, v118);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  SvtEqCombineListViewManager__SetFilterButtonImage(this, v119);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall SvtEqCombineListViewManager__SetSortButtonImage(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v13; // x8
  int32_t sortKind; // w9
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x9
  System_String_o **v18; // x10
  System_String_o **v19; // x8
  System_String_o **v20; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v22; // x20

  if ( (byte_49FFF9F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17471/*"btn_sort_up"*/, v3);
    sub_1B640C8(&StringLiteral_17558/*"btn_txt_up"*/, v4);
    sub_1B640C8(&StringLiteral_17514/*"btn_txt_new"*/, v5);
    sub_1B640C8(&StringLiteral_17504/*"btn_txt_down"*/, v6);
    sub_1B640C8(&StringLiteral_17521/*"btn_txt_old"*/, v7);
    sub_1B640C8(&StringLiteral_17468/*"btn_sort_down"*/, v8);
    byte_49FFF9F = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_43;
    v11 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v11 )
      goto LABEL_43;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v13 = this->fields.sort;
    if ( !v13 )
      goto LABEL_43;
    sortKind = v13->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17521/*"btn_txt_old"*/ : &StringLiteral_17514/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      v17 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
      v18 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v19 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17558/*"btn_txt_up"*/ : &StringLiteral_17504/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v19, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      v17 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
      v18 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
    }
    if ( v16->fields.isAscendingOrder )
      v20 = v17;
    else
      v20 = v18;
    UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v22 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v22 )
      {
        UILabel__set_text(v22, (System_String_o *)sort, 0LL);
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
    sub_1B64324(sort);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewManager__SetStatusKind(
        SvtEqCombineListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v16; // x8
  UICommonButton_o *v17; // x21
  bool enabled; // w0
  __int64 *v19; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v21; // w0
  __int64 *v22; // x8
  UICommonButton_o *choiceTabButton; // x20
  bool v24; // w0
  int32_t currentType; // w8
  UILabel_o *combineInfoMsgLb; // x20
  __int64 *v27; // x8
  int32_t v28; // w8
  UILabel_o *v29; // x20
  __int64 *v30; // x8
  int32_t v31; // w1

  if ( (byte_49FFF74 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B640C8(&StringLiteral_17577/*"button_allchoice_reg"*/, v5);
    sub_1B640C8(&StringLiteral_17580/*"button_alllock_unreg"*/, v6);
    sub_1B640C8(&StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v7);
    sub_1B640C8(&StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v8);
    sub_1B640C8(&StringLiteral_17593/*"button_select_reg"*/, v9);
    sub_1B640C8(&StringLiteral_7086/*"HEADER_MSG_SVTEQ_MATERIAL"*/, v10);
    sub_1B640C8(&StringLiteral_7085/*"HEADER_MSG_SVTEQ_BASE"*/, v11);
    sub_1B640C8(&StringLiteral_17594/*"button_select_unreg"*/, v12);
    sub_1B640C8(&StringLiteral_17579/*"button_alllock_reg"*/, v13);
    sub_1B640C8(&StringLiteral_17578/*"button_allchoice_unreg"*/, v14);
    byte_49FFF74 = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_51;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v16 = &StringLiteral_17593/*"button_select_reg"*/;
  if ( modeKind )
    v16 = &StringLiteral_17594/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v16, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_51;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  v17 = this->fields.statusTabButton;
  if ( !v17 )
    goto LABEL_51;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(v17, enabled, 0, 0LL);
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
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v19 = &StringLiteral_17579/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v19 = &StringLiteral_17580/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v19, 0LL);
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
  v21 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v21, 0, 0LL);
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
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
  if ( !statusTabButton )
    goto LABEL_51;
  v22 = &StringLiteral_17577/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v22 = &StringLiteral_17578/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v22, 0LL);
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
    sub_1B64324(statusTabButton);
  }
  v24 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v24, 0, 0LL);
  currentType = this->fields.currentType;
  if ( currentType == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = &StringLiteral_7086/*"HEADER_MSG_SVTEQ_MATERIAL"*/;
  }
  else
  {
    if ( currentType )
      goto LABEL_34;
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = &StringLiteral_7085/*"HEADER_MSG_SVTEQ_BASE"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v27, 0LL);
  if ( !combineInfoMsgLb )
    goto LABEL_51;
  UILabel__set_text(combineInfoMsgLb, (System_String_o *)statusTabButton, 0LL);
LABEL_34:
  v28 = this->fields.modeKind;
  if ( v28 == 2 )
  {
    v29 = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v30 = &StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
  }
  else
  {
    if ( v28 != 1 )
      goto LABEL_44;
    v29 = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v30 = &StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v30, 0LL);
  if ( !v29 )
    goto LABEL_51;
  UILabel__set_text(v29, (System_String_o *)statusTabButton, 0LL);
LABEL_44:
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.combineInfoMsgLb;
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    if ( this->fields.currentType )
      v31 = 12;
    else
      v31 = 20;
  }
  else
  {
    v31 = 14;
  }
  if ( !statusTabButton )
    goto LABEL_51;
  UILabel__set_fontSize((UILabel_o *)statusTabButton, v31, 0LL);
}


void __fastcall SvtEqCombineListViewManager__StatusRequest(
        SvtEqCombineListViewManager_o *this,
        SvtEqCombineListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t modeKind; // w8
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  Il2CppObject *Request_object; // x0
  System_Int64_array *v16; // x1
  System_Int64_array *v17; // x2
  bool v18; // w4
  bool v19; // w5
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  System_Int64_array *v25; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FFFA7 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B640C8(&Method_SvtEqCombineListViewManager_EndStatusSync__, v8);
    byte_49FFFA7 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v25 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( SvtEqCombineListViewManager__GetSwapChoiceList(this, &choiceList, &v25, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v20, v21);
      v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v22, v23);
      NetworkManager_ResultCallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_SvtEqCombineListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v24,
                         (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v17 = v25;
        v16 = choiceList;
        v19 = 1;
        v18 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1B64324(Request_object);
    }
  }
  else if ( modeKind == 1 && SvtEqCombineListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v10, v11);
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_SvtEqCombineListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v14,
                       (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v17 = unlockList;
      v16 = lockList;
      v18 = 1;
      v19 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v16, v17, 0, v18, v19, 0LL);
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

  if ( (byte_49FFF6A & 1) == 0 )
  {
    sub_1B640C8(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo, value);
    byte_49FFF6A = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49FFF6C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49FFF6C = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
  SvtEqCombineListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *__fastcall SvtEqCombineListViewManager__get_ClippingObjectList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  ListViewItem_o *Item; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  _BOOL8 v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FFF72 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49FFF72 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(
                                 (SvtEqCombineListViewObject_o *)Component_object,
                                 v17);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v12 )
            sub_1B64324(v22);
          items = v12->fields._items;
          v24 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v22);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v12;
}


System_Collections_Generic_List_SvtEqCombineListViewObject__o *__fastcall SvtEqCombineListViewManager__get_ObjectList(
        SvtEqCombineListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FFF71 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49FFF71 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SvtEqCombineListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SvtEqCombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
      v19 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v21 = Method_System_Collections_Generic_List_SvtEqCombineListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SvtEqCombineListViewObject__o *)v12;
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

  if ( (byte_49FFF6B & 1) == 0 )
  {
    sub_1B640C8(&SvtEqCombineListViewManager_CallbackFunc_TypeInfo, value);
    byte_49FFF6B = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49FFF6D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49FFF6D = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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
  sub_1B6406C(
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B0D24;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B0CCC;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_49FFFB0 & 1) == 0 )
  {
    sub_1B640C8(&SvtEqCombineListViewManager_ResultKind_TypeInfo, *(_QWORD *)&kind);
    byte_49FFFB0 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(SvtEqCombineListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)list;
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall SvtEqCombineListViewManager_CallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B0D9C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B0D54;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_49FFFB1 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isRequest);
    byte_49FFFB1 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall SvtEqCombineListViewManager_RequestCallbackFunc__EndInvoke(
        SvtEqCombineListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FFFB2 & 1) == 0 )
  {
    sub_1B640C8(&SvtEqCombineListViewManager___c_TypeInfo, v1);
    byte_49FFFB2 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SvtEqCombineListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SvtEqCombineListViewManager___c_TypeInfo->static_fields->__9 = (struct SvtEqCombineListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)SvtEqCombineListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return a->fields.selectNum - b->fields.selectNum;
}