void ServantCombineControl___cctor(const MethodInfo *method)
{
  if ( (byte_4D26615 & 1) == 0 )
  {
    sub_1C94098(&ServantCombineControl_TypeInfo);
    byte_4D26615 = 1;
  }
  *ServantCombineControl_TypeInfo->static_fields = (struct ServantCombineControl_StaticFields)0x14447A0000LL;
}


void ServantCombineControl___ctor(ServantCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4D26614 & 1) == 0 )
  {
    sub_1C94098(&CombineMenuControl_TypeInfo);
    byte_4D26614 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


void ServantCombineControl__CheckConductionWire(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  int v4; // w20
  _BOOL4 isLimitCountMax; // w0
  UILabel_o *conductionWireLabel; // x20
  UILabel_o *conductionWireButtonLabel; // x20
  UILabel_o *v8; // x20
  UILabel_o *v9; // x20

  if ( (byte_4D265FC & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_3721/*"CONDUCTION_LIMITUP"*/);
    sub_1C94098(&StringLiteral_3724/*"CONDUCTION_LVEXCEED_MSG"*/);
    sub_1C94098(&StringLiteral_3723/*"CONDUCTION_LVEXCEED"*/);
    sub_1C94098(&StringLiteral_3722/*"CONDUCTION_LIMITUP_MSG"*/);
    byte_4D265FC = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0);
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields._selectMaterialUsrSvtIdList_k__BackingField,
         0) )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
    if ( !conductionWireInfo )
      goto LABEL_33;
    if ( UserServantEntity__isLevelMax((UserServantEntity_o *)conductionWireInfo, 0) )
    {
      conductionWireInfo = this->fields.resAdjustInfo;
      if ( !conductionWireInfo )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0);
      conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
      if ( !conductionWireInfo )
        goto LABEL_33;
      CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)conductionWireInfo, this->fields.baseData, 0);
      conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
      if ( !conductionWireInfo )
        goto LABEL_33;
      conductionWireInfo = (UnityEngine_GameObject_o *)UserServantEntity__IsHeroine(
                                                         (UserServantEntity_o *)conductionWireInfo,
                                                         0);
      if ( !this->fields.baseData )
        goto LABEL_33;
      v4 = (int)conductionWireInfo;
      isLimitCountMax = UserServantEntity__isLimitCountMax(this->fields.baseData, 0);
      if ( ((v4 | isLimitCountMax) & 1) != 0 )
      {
        if ( isLimitCountMax )
        {
          conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
          if ( !conductionWireInfo )
            goto LABEL_33;
          if ( !UserServantEntity__isExceedLvMax((UserServantEntity_o *)conductionWireInfo, 0) )
          {
            conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
            if ( !conductionWireInfo )
              goto LABEL_33;
            if ( !UserServantEntity__IsEventJoin((UserServantEntity_o *)conductionWireInfo, 0) )
            {
              if ( (v4 & 1) == 0 )
                goto LABEL_20;
              conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
              if ( !conductionWireInfo )
                goto LABEL_33;
              if ( UserServantEntity__IsUseLevelExceedItemHeroine((UserServantEntity_o *)conductionWireInfo, 0) )
              {
LABEL_20:
                conductionWireLabel = this->fields.conductionWireLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_3724/*"CONDUCTION_LVEXCEED_MSG"*/,
                                                                   0);
                if ( conductionWireLabel )
                {
                  UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0);
                  conductionWireButtonLabel = this->fields.conductionWireButtonLabel;
                  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3723/*"CONDUCTION_LVEXCEED"*/,
                                                                     0);
                  if ( conductionWireButtonLabel )
                  {
                    UILabel__set_text(conductionWireButtonLabel, (System_String_o *)conductionWireInfo, 0);
                    conductionWireInfo = this->fields.conductionWireInfo;
                    if ( conductionWireInfo )
                    {
                      UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0);
                      this->fields.conductionType = 2;
                      return;
                    }
                  }
                }
LABEL_33:
                sub_1C942F0(conductionWireInfo, method);
              }
            }
          }
        }
      }
      else
      {
        v8 = this->fields.conductionWireLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3722/*"CONDUCTION_LIMITUP_MSG"*/,
                                                           0);
        if ( !v8 )
          goto LABEL_33;
        UILabel__set_text(v8, (System_String_o *)conductionWireInfo, 0);
        v9 = this->fields.conductionWireButtonLabel;
        conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3721/*"CONDUCTION_LIMITUP"*/,
                                                           0);
        if ( !v9 )
          goto LABEL_33;
        UILabel__set_text(v9, (System_String_o *)conductionWireInfo, 0);
        conductionWireInfo = this->fields.conductionWireInfo;
        if ( !conductionWireInfo )
          goto LABEL_33;
        UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0);
        this->fields.conductionType = 1;
      }
    }
  }
}


void ServantCombineControl__CheckExceededSvt(ServantCombineControl_o *this, const MethodInfo *method)
{
  struct System_Int64_array *exceededCheckList; // x8

  exceededCheckList = this->fields.exceededCheckList;
  if ( !exceededCheckList )
    sub_1C942F0(this, method);
  if ( exceededCheckList->max_length )
    ServantCombineControl__ShowExceededSvtDlg(this, method);
  else
    ServantCombineControl__CheckRareSvt(this, method);
}


// local variable allocation has failed, the output may be wrong!
bool ServantCombineControl__CheckIncrementLv(ServantCombineControl_o *this, int32_t lv, const MethodInfo *method)
{
  void *baseData; // x0
  int32_t LevelMax; // w0
  int32_t v7; // w8
  int32_t totalExp; // w9
  int32_t v9; // w8
  bool result; // w0

  if ( (byte_4D265FF & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D265FF = 1;
  }
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_16;
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)baseData, 0);
  if ( LevelMax <= lv )
  {
    this->fields.increLv = LevelMax;
    return 1;
  }
  baseData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseData
    || (baseData = DataManager__GetMasterData_object_(
                     (DataManager_o *)baseData,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0
    || (baseData = ServantExpMaster__GetEntity((ServantExpMaster_o *)baseData, this->fields.expType, lv, 0)) == 0 )
  {
LABEL_16:
    sub_1C942F0(baseData, *(_QWORD *)&lv);
  }
  v7 = *((_DWORD *)baseData + 6);
  totalExp = this->fields.totalExp;
  if ( v7 <= totalExp )
  {
    if ( v7 != totalExp )
    {
      result = 0;
      ++this->fields.checkLv;
      return result;
    }
    v9 = *((_DWORD *)baseData + 5) + 1;
  }
  else
  {
    v9 = *((_DWORD *)baseData + 5);
  }
  this->fields.increLv = v9;
  return 1;
}


void ServantCombineControl__CheckIsSelectBaseSvt(
        ServantCombineControl_o *this,
        UserServantEntity_o *selectBase,
        const MethodInfo *method)
{
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v6; // q1
  int64_t v7; // x0
  __int128 v8; // q1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+40h] [xbp-40h]

  if ( (byte_4D265F8 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D265F8 = 1;
  }
  if ( selectBase )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v6 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v13.fields.fakeValue = v6;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v12 = v13;
      v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v12, 0);
      v8 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v11.fields.fakeValue = v8;
      if ( v7 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v11, 0) )
        ServantCombineControl__InitMaterialSvtInfo(this, v9);
    }
    this->fields.isSelectBase = 1;
  }
  else
  {
    ServantCombineControl__InitMaterialSvtInfo(this, (const MethodInfo *)selectBase);
    this->fields.isSelectBase = 0;
    ServantCombineControl__ResetCampaign(this, v10);
  }
  this->fields.baseUserServantEntity = selectBase;
  sub_1C9403C(&this->fields.baseUserServantEntity, selectBase);
}


void ServantCombineControl__CheckRareSvt(ServantCombineControl_o *this, const MethodInfo *method)
{
  struct System_Int64_array *highRarityList; // x8

  highRarityList = this->fields.highRarityList;
  if ( !highRarityList )
    sub_1C942F0(this, method);
  if ( highRarityList->max_length )
    ServantCombineControl__ShowRareSvtDlg(this, method);
  else
    ServantCombineControl__OnClickExeCombine(this, method);
}


void ServantCombineControl__DestroyGrid(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *selectGrid; // x0
  __int64 v4; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x20
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0

  if ( (byte_4D26604 & 1) == 0 )
  {
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UnityEngine_Transform_TypeInfo);
    byte_4D26604 = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid || (selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0)) == 0 )
    sub_1C942F0(selectGrid, method);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)selectGrid, 0);
  if ( !Enumerator )
    sub_1C942F0(0, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v9 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(Enumerator, *(_QWORD *)(v9 + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
    }
    else
    {
LABEL_17:
      v13 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       Enumerator,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      goto LABEL_35;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v14->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      v14 = (UnityEngine_Component_o *)sub_1C9468C(v14);
LABEL_35:
      sub_1C942F0(v14, v15);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(gameObject, 0);
  }
  v18 = sub_1C941D4(Enumerator, System_IDisposable_TypeInfo);
  if ( v18 )
  {
    v19 = *(_QWORD *)v18;
    v20 = v18;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_30;
      }
      v23 = v19 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_30:
      v23 = sub_1C6A420(v18, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  }
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0;
  sub_1C9403C(&this->fields._selectMaterialUsrSvtIdList_k__BackingField, 0);
}


System_Collections_IEnumerator_o *ServantCombineControl__FadeAutoSetAnnounceLabel(
        ServantCombineControl_o *this,
        System_String_o *localizationKey,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4D26612 & 1) == 0 )
  {
    sub_1C94098(&ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_TypeInfo);
    byte_4D26612 = 1;
  }
  v5 = sub_1C942E4(ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = localizationKey;
  sub_1C9403C(v5 + 40, localizationKey);
  return (System_Collections_IEnumerator_o *)v5;
}


SetCombineData_o *ServantCombineControl__GetRecommendedCombineData(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x25
  Il2CppObject *Master_object; // x21
  __int64 baseData; // x0
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x22
  UserServantEntity_array *CombineMaterialList; // x23
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t SvtClassId; // w24
  bool IsExtraClass; // w26
  __int64 v11; // x27
  System_Collections_Generic_List_int__o *v12; // x24
  System_Collections_Generic_List_T__o *v13; // x25
  int v14; // w19
  int32_t v15; // w28
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  il2cpp_array_size_t max_length; // x8
  int v20; // w20
  int v21; // w19
  bool v22; // w26
  UserServantEntity_o *v23; // x27
  __int64 v24; // x28
  __int64 v25; // x29
  Il2CppObject *Entity; // x0
  const MethodInfo *v27; // x4
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  ServantCombineControl___c_c *v32; // x0
  System_Func_object__int__o *_9__117_0; // x22
  Il2CppObject *v34; // x23
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v36; // x21
  System_Func_object__bool__o *v37; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v38; // x0
  ServantCombineControl___c_c *v39; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v40; // x20
  System_Func_object__bool__o *_9__117_2; // x21
  Il2CppObject *v42; // x22
  struct ServantCombineControl___c_StaticFields *v43; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v44; // x0
  ServantCombineControl___c_c *v45; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v46; // x20
  System_Func_object__int__o *_9__117_3; // x21
  Il2CppObject *v48; // x22
  struct ServantCombineControl___c_StaticFields *v49; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Collections_Generic_List_UserServantEntity__o *v51; // x0
  const MethodInfo *v52; // x2
  Il2CppObject *v54; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4D2660C & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_OrderBy_UserServantEntity__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ThenByDescending_UserServantEntity__bool___);
    sub_1C94098(&Method_System_Linq_Enumerable_ThenBy_UserServantEntity__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_1C94098(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C94098(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_Rarity_TYPE__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&RecommendedConfigSaveData_TypeInfo);
    sub_1C94098(&SvtClassAttri_TypeInfo);
    sub_1C94098(&Method_ServantCombineControl___c__GetRecommendedCombineData_b__117_0__);
    sub_1C94098(&Method_ServantCombineControl___c__GetRecommendedCombineData_b__117_2__);
    sub_1C94098(&Method_ServantCombineControl___c__GetRecommendedCombineData_b__117_3__);
    sub_1C94098(&Method_ServantCombineControl___c__DisplayClass117_0__GetRecommendedCombineData_b__1__);
    sub_1C94098(&ServantCombineControl___c__DisplayClass117_0_TypeInfo);
    sub_1C94098(&ServantCombineControl___c_TypeInfo);
    byte_4D2660C = 1;
  }
  v2 = (Il2CppObject *)sub_1C942E4(ServantCombineControl___c__DisplayClass117_0_TypeInfo);
  System_Object___ctor(v2, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
  baseData = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_22;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)baseData;
  CombineMaterialList = UserServantMaster__GetCombineMaterialList((UserServantMaster_o *)Master_object, 0);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  baseData = (__int64)this->fields.baseData;
  if ( !baseData )
    goto LABEL_22;
  SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)baseData, 0, 0, 0);
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  v54 = v2;
  IsExtraClass = SvtClassAttri__IsExtraClass(SvtClassId, 0);
  if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
  baseData = (__int64)RecommendedConfigSaveData__LoadConfigSaveData(0);
  if ( !baseData )
    goto LABEL_22;
  v11 = baseData;
  v12 = *(System_Collections_Generic_List_int__o **)(baseData + 16);
  v13 = (System_Collections_Generic_List_T__o *)sub_1C942E4(System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v13,
    (const MethodInfo_384FDE8 *)Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
  baseData = *(_QWORD *)(v11 + 24);
  if ( !baseData )
    goto LABEL_22;
  v14 = *(_DWORD *)(baseData + 24);
  if ( v14 >= 1 )
  {
    v15 = 0;
    do
    {
      baseData = System_Collections_Generic_List_int___get_Item(
                   (System_Collections_Generic_List_int__o *)baseData,
                   v15,
                   (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v13 )
        break;
      items = v13->fields._items;
      v17 = Method_System_Collections_Generic_List_Rarity_TYPE__Add__;
      ++v13->fields._version;
      if ( !items )
        break;
      size = v13->fields._size;
      v5 = (unsigned int)baseData;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          v13,
          baseData,
          *(const MethodInfo_385063C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v13->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = baseData;
      }
      if ( v14 == ++v15 )
        goto LABEL_23;
      baseData = *(_QWORD *)(v11 + 24);
    }
    while ( baseData );
LABEL_22:
    sub_1C942F0(baseData, v5);
  }
LABEL_23:
  if ( !CombineMaterialList )
    goto LABEL_22;
  max_length = CombineMaterialList->max_length;
  v20 = max_length - 1;
  if ( (int)max_length >= 1 )
  {
    v21 = 0;
    v22 = IsExtraClass;
    while ( 1 )
    {
      v23 = CombineMaterialList->m_Items[v21];
      if ( !v23 )
        goto LABEL_22;
      v25 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
      v24 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v56.fields.currentCryptoKey = v25;
      *(_QWORD *)&v56.fields.fakeValue = v24;
      baseData = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v56, 0);
      if ( !v6 )
        goto LABEL_22;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v6,
                 baseData,
                 (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      baseData = ServantCombineControl__IsMatchServantClassType(this, (ServantEntity_o *)Entity, v12, v22, v27);
      if ( (baseData & 1) != 0 )
      {
        baseData = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v13, 0);
        if ( (baseData & 1) != 0 )
          goto LABEL_68;
        baseData = UserServantEntity__getRarity(v23, 0);
        if ( !v13 )
          goto LABEL_22;
        baseData = System_Collections_Generic_List_Int32Enum___Contains(
                     v13,
                     baseData,
                     (const MethodInfo_38509B4 *)Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
        if ( (baseData & 1) != 0 )
        {
LABEL_68:
          if ( !v8 )
            goto LABEL_22;
          v28 = v8->fields._items;
          v29 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v8->fields._version;
          if ( !v28 )
            goto LABEL_22;
          v30 = v8->fields._size;
          if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v23,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &v28->obj.klass + v30;
            v8->fields._size = v30 + 1;
            v31[4] = (Il2CppClass *)v23;
            baseData = sub_1C9403C(v31 + 4, v23);
          }
        }
      }
      if ( v20 == v21 )
        break;
      if ( (unsigned int)++v21 >= LODWORD(CombineMaterialList->max_length) )
        sub_1C942F8(baseData);
    }
  }
  if ( !v8 )
    goto LABEL_22;
  if ( !v8->fields._size )
    return 0;
  baseData = (__int64)this->fields.baseData;
  if ( !baseData )
    goto LABEL_22;
  baseData = UserServantEntity__getSvtClassId((UserServantEntity_o *)baseData, 0, 0, 0);
  if ( !v54 )
    goto LABEL_22;
  LODWORD(v54[1].klass) = baseData;
  v32 = ServantCombineControl___c_TypeInfo;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v32 = ServantCombineControl___c_TypeInfo;
  }
  _9__117_0 = (System_Func_object__int__o *)v32->static_fields->__9__117_0;
  if ( !_9__117_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = ServantCombineControl___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v32->static_fields->__9;
    _9__117_0 = (System_Func_object__int__o *)sub_1C942E4(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__117_0,
      v34,
      Method_ServantCombineControl___c__GetRecommendedCombineData_b__117_0__,
      0);
    static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    static_fields->__9__117_0 = (struct System_Func_UserServantEntity__int__o *)_9__117_0;
    sub_1C9403C(&static_fields->__9__117_0, _9__117_0);
  }
  v36 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (System_Func_TSource__TKey__o *)_9__117_0,
          (const MethodInfo_31CC104 *)Method_System_Linq_Enumerable_OrderBy_UserServantEntity__int___);
  v37 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v37,
    v54,
    Method_ServantCombineControl___c__DisplayClass117_0__GetRecommendedCombineData_b__1__,
    0);
  v38 = System_Linq_Enumerable__ThenByDescending_object__bool_(
          v36,
          (System_Func_TSource__TKey__o *)v37,
          (const MethodInfo_31DC070 *)Method_System_Linq_Enumerable_ThenByDescending_UserServantEntity__bool___);
  v39 = ServantCombineControl___c_TypeInfo;
  v40 = v38;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v39 = ServantCombineControl___c_TypeInfo;
  }
  _9__117_2 = (System_Func_object__bool__o *)v39->static_fields->__9__117_2;
  if ( !_9__117_2 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = ServantCombineControl___c_TypeInfo;
    }
    v42 = (Il2CppObject *)v39->static_fields->__9;
    _9__117_2 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__117_2,
      v42,
      Method_ServantCombineControl___c__GetRecommendedCombineData_b__117_2__,
      0);
    v43 = ServantCombineControl___c_TypeInfo->static_fields;
    v43->__9__117_2 = (struct System_Func_UserServantEntity__bool__o *)_9__117_2;
    sub_1C9403C(&v43->__9__117_2, _9__117_2);
  }
  v44 = System_Linq_Enumerable__ThenByDescending_object__bool_(
          v40,
          (System_Func_TSource__TKey__o *)_9__117_2,
          (const MethodInfo_31DC070 *)Method_System_Linq_Enumerable_ThenByDescending_UserServantEntity__bool___);
  v45 = ServantCombineControl___c_TypeInfo;
  v46 = v44;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v45 = ServantCombineControl___c_TypeInfo;
  }
  _9__117_3 = (System_Func_object__int__o *)v45->static_fields->__9__117_3;
  if ( !_9__117_3 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = ServantCombineControl___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v45->static_fields->__9;
    _9__117_3 = (System_Func_object__int__o *)sub_1C942E4(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__117_3,
      v48,
      Method_ServantCombineControl___c__GetRecommendedCombineData_b__117_3__,
      0);
    v49 = ServantCombineControl___c_TypeInfo->static_fields;
    v49->__9__117_3 = (struct System_Func_UserServantEntity__int__o *)_9__117_3;
    sub_1C9403C(&v49->__9__117_3, _9__117_3);
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v46,
                                                               (System_Func_TSource__TKey__o *)_9__117_3,
                                                               (const MethodInfo_31DBA10 *)Method_System_Linq_Enumerable_ThenBy_UserServantEntity__int___);
  v51 = (System_Collections_Generic_List_UserServantEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v50,
                                                                  (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
  return ServantCombineControl__SetCombineData_31841552(this, v51, v52);
}


int32_t ServantCombineControl__GetTutorialOpenType(ServantCombineControl_o *this, const MethodInfo *method)
{
  return 35;
}


void ServantCombineControl__InitInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentLvObj; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UILabel_o *qpLb; // x20
  UILabel_o *expLb; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  int v11; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D265F6 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9253/*"N0"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D265F6 = 1;
  }
  currentLvObj = this->fields.currentLvObj;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0);
  currentLvObj = this->fields.increLvObj;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.increValLb;
  if ( !currentLvObj )
    goto LABEL_22;
  currentLvObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentLvObj, 0);
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0);
  currentLvObj = this->fields.resAdjustInfo;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0);
  currentLvObj = this->fields.conductionWireInfo;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0);
  ServantCombineControl__SetIsRecommendedAndClearButtonEnabled(this, 0, v4);
  ServantCombineControl__ResetCampaign(this, v5);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentLvLb;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.increLvLb;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.increValLb;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.getSkillLb;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentAdjustHpIconLabel;
  if ( !currentLvObj )
    goto LABEL_22;
  UIIconLabel__Clear((UIIconLabel_o *)currentLvObj, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentAdjustHpMaxLabel;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentAdjustAtkIconLabel;
  if ( !currentLvObj )
    goto LABEL_22;
  UIIconLabel__Clear((UIIconLabel_o *)currentLvObj, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentAdjustAtkMaxLabel;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0);
  ServantCombineControl__SetHaveQpInfo(this, v6);
  this->fields._spendQpVal_k__BackingField = 0;
  qpLb = this->fields.qpLb;
  v11 = 0;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_65926240(
                                               (int32_t)&v11,
                                               (System_String_o *)StringLiteral_9253/*"N0"*/,
                                               0);
  if ( !qpLb )
    goto LABEL_22;
  UILabel__set_text(qpLb, (System_String_o *)currentLvObj, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.qpLb;
  if ( !currentLvObj )
    goto LABEL_22;
  v12.fields.r = 1.0;
  v12.fields.g = 1.0;
  v12.fields.b = 1.0;
  v12.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentLvObj, v12, 0);
  expLb = this->fields.expLb;
  this->fields._getExpVal_k__BackingField = 0;
  v11 = 0;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v11, 0);
  if ( !expLb
    || (UILabel__set_text(expLb, (System_String_o *)currentLvObj, 0),
        ServantCombineControl__DestroyGrid(this, v9),
        this->fields._isExchangeSvtInList_k__BackingField = 0,
        this->fields._IsExeCombine_k__BackingField = 0,
        ServantCombineControl__SetExeBtnState(this, v10),
        (currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp) == 0) )
  {
LABEL_22:
    sub_1C942F0(currentLvObj, method);
  }
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 0, 0);
}


void ServantCombineControl__InitMaterialSvtInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4D265F4 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D265F4 = 1;
  }
  ServantCombineControl__InitInfo(this, method);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1C942F0(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(gameObject, 0);
    *p_charaGraph = 0;
    sub_1C9403C(p_charaGraph, 0);
  }
}


void ServantCombineControl__InitSvtCombine(ServantCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *selectMaterialSvtBtn; // x0
  __int64 v4; // x1
  __int64 naturalAligment; // x9
  ServantCombineControl___c_c *v6; // x0
  System_Action_o *_9__86_0; // x20
  Il2CppObject *v8; // x21
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  UILabel_o *needQpLb; // x20
  UILabel_o *getExpLb; // x20
  const MethodInfo *v12; // x1
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v14; // x1
  RecommendedConfigSaveData_o *ConfigSaveData; // x0
  __int64 *v16; // x8
  System_String_o *v17; // x21
  UILabel_o *autoRecommendedButtonLabel; // x20
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  unsigned int klass_high; // w9
  MenuListControl_o *v24; // x0
  void *v25; // x0
  void *v26; // x20
  int v27; // w1
  __int64 v28; // x21
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4D265F3 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&CombineRootComponent_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&RecommendedConfigSaveData_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C94098(&TutorialFlag_TypeInfo);
    sub_1C94098(&Method_ServantCombineControl___c__InitSvtCombine_b__86_0__);
    sub_1C94098(&ServantCombineControl___c_TypeInfo);
    sub_1C94098(&StringLiteral_8826/*"MSG_PRESELECT_BASE_SVT"*/);
    sub_1C94098(&StringLiteral_2089/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/);
    sub_1C94098(&StringLiteral_2088/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/);
    sub_1C94098(&StringLiteral_6950/*"GET_EXP_INFO"*/);
    sub_1C94098(&StringLiteral_9259/*"NEED_QP_INFO"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D265F3 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_41176064(102, 0) )
  {
LABEL_18:
    needQpLb = this->fields.needQpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9259/*"NEED_QP_INFO"*/, 0);
    if ( needQpLb )
    {
      UILabel__set_text(needQpLb, selectMaterialSvtBtn, 0);
      getExpLb = this->fields.getExpLb;
      selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_6950/*"GET_EXP_INFO"*/, 0);
      if ( getExpLb )
      {
        UILabel__set_text(getExpLb, selectMaterialSvtBtn, 0);
        this->fields.isSelectBase = 0;
        CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
        this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0;
        sub_1C9403C(&this->fields._selectMaterialUsrSvtIdList_k__BackingField, 0);
        ServantCombineControl__InitMaterialSvtInfo(this, v12);
        selectMaterialSvtBtn = (System_String_o *)this->fields.selectMaterialSvtBtn;
        if ( selectMaterialSvtBtn )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectMaterialSvtBtn, 0, 0);
          preSelectBaseLb = this->fields.preSelectBaseLb;
          selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_8826/*"MSG_PRESELECT_BASE_SVT"*/, 0);
          if ( preSelectBaseLb )
          {
            UILabel__set_text(preSelectBaseLb, selectMaterialSvtBtn, 0);
            selectMaterialSvtBtn = (System_String_o *)this->fields.preSelectBaseLb;
            if ( selectMaterialSvtBtn )
            {
              selectMaterialSvtBtn = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)selectMaterialSvtBtn,
                                                          0);
              if ( selectMaterialSvtBtn )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectMaterialSvtBtn, 1, 0);
                selectMaterialSvtBtn = (System_String_o *)this->fields.baseSelectInfoLb;
                if ( selectMaterialSvtBtn )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectMaterialSvtBtn, 1, 0);
                  this->fields._IsExeCombine_k__BackingField = 0;
                  ServantCombineControl__SetExeBtnState(this, v14);
                  selectMaterialSvtBtn = (System_String_o *)this->fields.eventNoticeImg;
                  this->fields._targetType_k__BackingField = 0;
                  this->fields.conductionType = 0;
                  if ( selectMaterialSvtBtn )
                  {
                    selectMaterialSvtBtn = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)selectMaterialSvtBtn,
                                                                0);
                    if ( selectMaterialSvtBtn )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectMaterialSvtBtn, 0, 0);
                      if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
                      ConfigSaveData = RecommendedConfigSaveData__LoadConfigSaveData(0);
                      if ( ConfigSaveData && RecommendedConfigSaveData__IsAutoSetOn(ConfigSaveData, 0) )
                        v16 = &StringLiteral_2089/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/;
                      else
                        v16 = &StringLiteral_2088/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/;
                      v17 = (System_String_o *)*v16;
                      autoRecommendedButtonLabel = this->fields.autoRecommendedButtonLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      selectMaterialSvtBtn = LocalizationManager__Get(v17, 0);
                      if ( autoRecommendedButtonLabel )
                      {
                        UILabel__set_text(autoRecommendedButtonLabel, selectMaterialSvtBtn, 0);
                        selectMaterialSvtBtn = (System_String_o *)this->fields.autoSetAnnounceObj;
                        if ( selectMaterialSvtBtn )
                        {
                          ((void (__fastcall *)(System_String_o *, const MethodInfo *, float))selectMaterialSvtBtn->klass->vtable._8_Equals.methodPtr)(
                            selectMaterialSvtBtn,
                            selectMaterialSvtBtn->klass->vtable._8_Equals.method,
                            1.0);
                          selectMaterialSvtBtn = (System_String_o *)this->fields.autoSetAnnounceObj;
                          if ( selectMaterialSvtBtn )
                          {
                            selectMaterialSvtBtn = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)selectMaterialSvtBtn,
                                                                        0);
                            if ( selectMaterialSvtBtn )
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectMaterialSvtBtn, 0, 0);
                              this->fields.autoSetAnnounceCoroutine = 0;
                              selectMaterialSvtBtn = (System_String_o *)sub_1C9403C(
                                                                          &this->fields.autoSetAnnounceCoroutine,
                                                                          0);
                              menuListCtr = this->fields.menuListCtr;
                              if ( menuListCtr )
                              {
                                combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
                                if ( combineEventList && combineEventList->fields._size >= 1 )
                                {
                                  System_Collections_Generic_List_object___GetEnumerator(
                                    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
                                    combineEventList,
                                    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                                  v30 = v29;
                                  while ( 1 )
                                  {
                                    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                            &v30,
                                            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
                                    if ( !v21 )
                                      break;
                                    if ( !v30.fields._current )
                                      sub_1C942F0(v21, v22);
                                    klass_high = HIDWORD(v30.fields._current[1].klass);
                                    if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000036LL) != 0 )
                                    {
                                      v24 = this->fields.menuListCtr;
                                      if ( !v24 )
                                        sub_1C942F0(0, v22);
                                      MenuListControl__setBannerIcon(
                                        v24,
                                        this->fields.eventNoticeImg,
                                        (EventEntity_o *)v30.fields._current[5].klass,
                                        0);
                                    }
                                  }
                                  System_Collections_Generic_List_Enumerator_object___Dispose(
                                    &v30,
                                    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
                                }
                                goto LABEL_52;
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
        }
      }
    }
LABEL_58:
    sub_1C942F0(selectMaterialSvtBtn, v4);
  }
  selectMaterialSvtBtn = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !selectMaterialSvtBtn )
    goto LABEL_58;
  selectMaterialSvtBtn = (System_String_o *)selectMaterialSvtBtn[1].monitor;
  if ( !selectMaterialSvtBtn )
    goto LABEL_58;
  naturalAligment = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( selectMaterialSvtBtn->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (CombineRootComponent_c *)selectMaterialSvtBtn->klass->_2.typeHierarchy[naturalAligment - 1] == CombineRootComponent_TypeInfo )
  {
    if ( HIDWORD(selectMaterialSvtBtn[28].monitor) == 1 )
    {
      v6 = ServantCombineControl___c_TypeInfo;
      if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
        v6 = ServantCombineControl___c_TypeInfo;
      }
      _9__86_0 = v6->static_fields->__9__86_0;
      if ( !_9__86_0 )
      {
        if ( !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
          v6 = ServantCombineControl___c_TypeInfo;
        }
        v8 = (Il2CppObject *)v6->static_fields->__9;
        _9__86_0 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
        System_Action___ctor(_9__86_0, v8, Method_ServantCombineControl___c__InitSvtCombine_b__86_0__, 0);
        static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        static_fields->__9__86_0 = _9__86_0;
        sub_1C9403C(&static_fields->__9__86_0, _9__86_0);
      }
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 35, _9__86_0, 0, 0);
    }
    goto LABEL_18;
  }
  v25 = (void *)sub_1C9468C(selectMaterialSvtBtn);
  v26 = v25;
  if ( v27 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1D78274(v26);
  }
  v28 = *(_QWORD *)__cxa_begin_catch(v25);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  if ( v28 )
    sub_1C942E8(v28);
LABEL_52:
  selectMaterialSvtBtn = (System_String_o *)this->fields.currentAdjustHpIconLabel;
  if ( !selectMaterialSvtBtn )
    goto LABEL_58;
  UIIconLabel__Clear((UIIconLabel_o *)selectMaterialSvtBtn, 0);
  selectMaterialSvtBtn = (System_String_o *)this->fields.currentAdjustHpMaxLabel;
  if ( !selectMaterialSvtBtn )
    goto LABEL_58;
  UILabel__set_text((UILabel_o *)selectMaterialSvtBtn, (System_String_o *)StringLiteral_1/*""*/, 0);
  selectMaterialSvtBtn = (System_String_o *)this->fields.currentAdjustAtkIconLabel;
  if ( !selectMaterialSvtBtn )
    goto LABEL_58;
  UIIconLabel__Clear((UIIconLabel_o *)selectMaterialSvtBtn, 0);
  selectMaterialSvtBtn = (System_String_o *)this->fields.currentAdjustAtkMaxLabel;
  if ( !selectMaterialSvtBtn )
    goto LABEL_58;
  UILabel__set_text((UILabel_o *)selectMaterialSvtBtn, (System_String_o *)StringLiteral_1/*""*/, 0);
  selectMaterialSvtBtn = (System_String_o *)this->fields.resAdjustInfo;
  if ( !selectMaterialSvtBtn )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectMaterialSvtBtn, 0, 0);
}


bool ServantCombineControl__IsBaseSelect(ServantCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isSelectBase;
}


bool ServantCombineControl__IsLevelMax(
        ServantCombineControl_o *this,
        int32_t totalExp,
        int32_t expType,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w22
  int32_t LevelMax; // w0
  int32_t v15; // w21
  int v16; // w8
  int32_t v17; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4D2660E & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2660E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_22;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v12 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v19, 0);
  if ( !v10
    || (DataMasterBase_object__object__int___GetEntity(
          v10,
          (int32_t)Instance,
          (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = this->fields.baseData) == 0) )
  {
LABEL_22:
    sub_1C942F0(Instance, v8);
  }
  v13 = *((_DWORD *)Instance + 64);
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0);
  v15 = LevelMax;
  if ( v13 == LevelMax )
  {
    v16 = 0;
  }
  else if ( v13 >= LevelMax )
  {
LABEL_18:
    v16 = v15;
  }
  else
  {
    while ( 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantExpMaster___);
      if ( !Instance )
        goto LABEL_22;
      Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, expType, v13, 0);
      if ( !Instance )
        goto LABEL_22;
      v17 = *((_DWORD *)Instance + 6);
      if ( v17 > totalExp )
      {
        v16 = *((_DWORD *)Instance + 5);
        return v16 >= v15;
      }
      if ( v17 == totalExp )
        break;
      if ( v15 == ++v13 )
        goto LABEL_18;
    }
    v16 = *((_DWORD *)Instance + 5) + 1;
  }
  return v16 >= v15;
}


bool ServantCombineControl__IsMatchServantClassType(
        ServantCombineControl_o *this,
        ServantEntity_o *svtEntity,
        System_Collections_Generic_List_int__o *selectClassList,
        bool isExtraClass,
        const MethodInfo *method)
{
  UserServantEntity_o *IsNullOrEmpty; // x0
  __int64 v10; // x1
  bool v11; // w20
  int32_t classId; // w22
  const MethodInfo_384E188 *v13; // x2

  if ( (byte_4D2660D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4D2660D = 1;
  }
  IsNullOrEmpty = (UserServantEntity_o *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)selectClassList,
                                           0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return 1;
  if ( !svtEntity )
    goto LABEL_19;
  classId = svtEntity->fields.classId;
  if ( classId == 1001 )
  {
    if ( selectClassList )
    {
      if ( !System_Collections_Generic_List_int___Contains(
              selectClassList,
              0,
              (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        if ( isExtraClass )
        {
          v13 = (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__;
          goto LABEL_14;
        }
        return 0;
      }
      return 1;
    }
LABEL_19:
    sub_1C942F0(IsNullOrEmpty, v10);
  }
  IsNullOrEmpty = this->fields.baseData;
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  IsNullOrEmpty = (UserServantEntity_o *)UserServantEntity__getSvtClassId(IsNullOrEmpty, 0, 0, 0);
  if ( !selectClassList )
    goto LABEL_19;
  v13 = (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__;
  if ( classId == (_DWORD)IsNullOrEmpty )
  {
LABEL_14:
    v11 = 1;
    if ( System_Collections_Generic_List_int___Contains(selectClassList, 1, v13) )
      return v11;
    return 0;
  }
  return System_Collections_Generic_List_int___Contains(
           selectClassList,
           2,
           (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
}


void ServantCombineControl__OnClickClearMaterialButton(ServantCombineControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  CombineServantListViewManager_o *combineSvtManager; // x0
  __int64 v7; // x1
  struct CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4D26608 & 1) == 0 )
  {
    sub_1C94098(&Method_ServantCombineControl_OnClickClearMaterialButton__);
    byte_4D26608 = 1;
  }
  v3 = Method_ServantCombineControl_OnClickClearMaterialButton__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickClearMaterialButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_ServantCombineControl_OnClickClearMaterialButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ServantCombineControl__SetCombineNullData(this, v5);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (combineSvtManager = combineRootComponent->fields.combineSvtManager) == 0 )
    sub_1C942F0(combineSvtManager, v7);
  CombineServantListViewManager__clearSelectedSvtList(combineSvtManager, 0);
  ServantCombineControl__StopAutoSetAnnounceLabelCoroutine(this, v9);
  ServantCombineControl__SetStateInfoMsg(this, 1, v10);
}


void ServantCombineControl__OnClickCombineConductionWire(ServantCombineControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  int32_t conductionType; // w8
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4D26603 & 1) == 0 )
  {
    sub_1C94098(&Method_ServantCombineControl_OnClickCombineConductionWire__);
    byte_4D26603 = 1;
  }
  v3 = Method_ServantCombineControl_OnClickCombineConductionWire__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickCombineConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_ServantCombineControl_OnClickCombineConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  conductionType = this->fields.conductionType;
  if ( conductionType == 2 )
  {
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      goto LABEL_12;
    CombineRootComponent__ConductionWireLvExceed(combineRootComponent, 0);
  }
  else if ( conductionType == 1 )
  {
    combineRootComponent = this->fields.combineRootComponent;
    if ( combineRootComponent )
    {
      CombineRootComponent__ConductionWireLimitUp(combineRootComponent, 0);
      return;
    }
LABEL_12:
    sub_1C942F0(combineRootComponent, v5);
  }
}


void ServantCombineControl__OnClickExeCombine(ServantCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  int64_t klass; // x20
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  System_String_o *v7; // x21
  signed __int64 v8; // x23
  unsigned __int64 max_length_low; // x27
  int64_t v10; // x22

  if ( (byte_4D26602 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_3780/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_4D26602 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_15;
  klass = (int64_t)SelfUserGame[4].klass;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3780/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_15;
  v7 = SelfUserGame;
  v8 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(selectMaterialUsrSvtIdList_k__BackingField->max_length);
    if ( v8 >= (int)max_length_low )
      break;
    if ( v8 >= max_length_low )
      sub_1C942F8(SelfUserGame);
    v10 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v8];
    SelfUserGame = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SelfUserGame )
    {
      SelfUserGame = (System_String_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)SelfUserGame,
                                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( SelfUserGame )
      {
        SelfUserGame = (System_String_o *)DataMasterBase_object__object__long___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                            v10,
                                            (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( SelfUserGame )
        {
          SelfUserGame = (System_String_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0);
          if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
            break;
          selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
          ++v8;
          if ( selectMaterialUsrSvtIdList_k__BackingField )
            continue;
        }
      }
    }
    goto LABEL_15;
  }
  SelfUserGame = (System_String_o *)this->fields.exeCombineDlg;
  if ( !SelfUserGame )
LABEL_15:
    sub_1C942F0(SelfUserGame, v4);
  SetRarityDialogControl__SetConfirmCombine(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    v7,
    this->fields._spendQpVal_k__BackingField,
    klass,
    v8 < (int)max_length_low,
    this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0);
}


void ServantCombineControl__OnClickHelp(ServantCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CombineMenuControl__OnClickHelp((CombineMenuControl_o *)this, 0);
  ServantCombineControl__StopAutoSetAnnounceLabelCoroutine(this, v3);
}


void ServantCombineControl__OnClickMaterialSelectList(ServantCombineControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4D26607 & 1) == 0 )
  {
    sub_1C94098(&Method_ServantCombineControl_OnClickMaterialSelectList__);
    byte_4D26607 = 1;
  }
  v3 = Method_ServantCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_ServantCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C942F0(0, v5);
  CombineRootComponent__ShowMaterialSvtList(combineRootComponent, 0);
}


void ServantCombineControl__OnClickRecommendedButton(ServantCombineControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  RecommenededConfigDialog_o *recommendedConfigDialog; // x20
  RecommenededConfigDialog_ClickDelegate_o *v7; // x21
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4D26609 & 1) == 0 )
  {
    sub_1C94098(&RecommenededConfigDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_ServantCombineControl_OnClickRecommendedButton__);
    sub_1C94098(&Method_ServantCombineControl__OnClickRecommendedButton_b__114_0__);
    byte_4D26609 = 1;
  }
  v3 = Method_ServantCombineControl_OnClickRecommendedButton__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickRecommendedButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_ServantCombineControl_OnClickRecommendedButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ServantCombineControl__StopAutoSetAnnounceLabelCoroutine(this, v5);
  recommendedConfigDialog = this->fields.recommendedConfigDialog;
  v7 = (RecommenededConfigDialog_ClickDelegate_o *)sub_1C942E4(RecommenededConfigDialog_ClickDelegate_TypeInfo);
  RecommenededConfigDialog_ClickDelegate___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantCombineControl__OnClickRecommendedButton_b__114_0__,
    v8);
  if ( !recommendedConfigDialog )
    sub_1C942F0(v9, v10);
  RecommenededConfigDialog__OpenRecommendedConfig(recommendedConfigDialog, v7, v11);
}


// local variable allocation has failed, the output may be wrong!
void ServantCombineControl__OnRecommendedAndClearButtonCollider(
        ServantCombineControl_o *this,
        int32_t tutorialProgress,
        const MethodInfo *method)
{
  UICommonButton_o *clearMaterialButton; // x0

  if ( tutorialProgress == 6 )
  {
    clearMaterialButton = this->fields.clearMaterialButton;
    if ( !clearMaterialButton )
      goto LABEL_9;
    UICommonButton__SetColliderEnable(clearMaterialButton, 0, 1, 0);
  }
  else if ( tutorialProgress == 3 )
  {
    clearMaterialButton = this->fields.recommendedButton;
    if ( clearMaterialButton )
    {
      UICommonButton__SetColliderEnable(clearMaterialButton, 0, 1, 0);
      clearMaterialButton = this->fields.clearMaterialButton;
      if ( clearMaterialButton )
      {
        UICommonButton__SetButtonEnableWithCollider(clearMaterialButton, 0, 0);
        return;
      }
    }
LABEL_9:
    sub_1C942F0(clearMaterialButton, *(_QWORD *)&tutorialProgress);
  }
}


void ServantCombineControl__ResetCampaign(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *campaign; // x0
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *campaignAlphaCalculator; // x0

  if ( (byte_4D265F5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D265F5 = 1;
  }
  campaign = (UnityEngine_Component_o *)this->fields.campaign;
  if ( !campaign
    || (campaign = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(campaign, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, 0, 0),
        (campaign = (UnityEngine_Component_o *)this->fields.campaignLabel) == 0) )
  {
    sub_1C942F0(campaign, method);
  }
  UILabel__set_text((UILabel_o *)campaign, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.campaignListPerSelectSvt = 0;
  sub_1C9403C(&this->fields.campaignListPerSelectSvt, 0);
  *(_QWORD *)&this->fields.campaiginPerSelectSvtListIndex = 0x3F80000000000000LL;
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
  campaignAlphaCalculator = this->fields.campaignAlphaCalculator;
  this->fields.campaignAlphaAnimTimeOld = realtimeSinceStartup;
  if ( campaignAlphaCalculator )
    AlphaTransitionCalculator__MakeFadeInFinished(campaignAlphaCalculator, 0);
}


void ServantCombineControl__SetBaseSvtCardImg(
        ServantCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  UserServantEntity_o **p_baseData; // x21
  struct UICharaGraphTexture_o *v6; // x0
  __int64 v7; // x1
  struct CombineInfoComponent_o *combineInfoComp; // x0
  int32_t adjustHp; // w24
  UIIconLabel_o *currentAdjustHpIconLabel; // x22
  int32_t v11; // w25
  int32_t adjustAtk; // w24
  UIIconLabel_o *currentAdjustAtkIconLabel; // x21
  int32_t v14; // w25
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  char v17; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v19; // x2
  MenuListControl_c *v20; // x0
  float v21; // s8
  System_Func_float__float__float__float__o *v22; // x20
  AlphaTransitionCalculator_o *v23; // x21
  int32_t secondMaxAdjustAtk[2]; // [xsp+18h] [xbp-58h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4D265F9 & 1) == 0 )
  {
    sub_1C94098(&AlphaTransitionCalculator_TypeInfo);
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1C94098(&MenuListControl_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D265F9 = 1;
  }
  p_baseData = &this->fields.baseData;
  this->fields.baseData = usrSvtData;
  sub_1C9403C(&this->fields.baseData, usrSvtData);
  v6 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(ServantCombineControl_o *, struct UICharaGraphTexture_o *, struct UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         this->fields.baseData,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v6;
  sub_1C9403C(&this->fields.charaGraph, v6);
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_31;
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, *p_baseData, 0);
  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  combineInfoComp = (struct CombineInfoComponent_o *)*p_baseData;
  if ( !*p_baseData )
    goto LABEL_31;
  combineInfoComp = (struct CombineInfoComponent_o *)UserServantEntity__GetAdjustMax(
                                                       (UserServantEntity_o *)combineInfoComp,
                                                       &maxAjustAtk[1],
                                                       maxAjustAtk,
                                                       &secondMaxAdjustAtk[1],
                                                       secondMaxAdjustAtk,
                                                       0);
  if ( !*p_baseData )
    goto LABEL_31;
  adjustHp = (*p_baseData)->fields.adjustHp;
  combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  currentAdjustHpIconLabel = this->fields.currentAdjustHpIconLabel;
  if ( adjustHp >= maxAjustAtk[1] )
    v11 = secondMaxAdjustAtk[1];
  else
    v11 = maxAjustAtk[1];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustHpIconLabel )
    goto LABEL_31;
  UIIconLabel__Set_41867060(
    currentAdjustHpIconLabel,
    44,
    LODWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[38]) * adjustHp,
    LODWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[38]) * v11,
    0,
    0,
    0,
    0,
    0,
    0,
    0);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.currentAdjustHpMaxLabel;
  if ( !combineInfoComp )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)combineInfoComp, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !*p_baseData )
    goto LABEL_31;
  combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  adjustAtk = (*p_baseData)->fields.adjustAtk;
  currentAdjustAtkIconLabel = this->fields.currentAdjustAtkIconLabel;
  if ( adjustAtk >= maxAjustAtk[0] )
    v14 = secondMaxAdjustAtk[0];
  else
    v14 = maxAjustAtk[0];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustAtkIconLabel )
    goto LABEL_31;
  UIIconLabel__Set_41867060(
    currentAdjustAtkIconLabel,
    45,
    HIDWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[37]) * adjustAtk,
    HIDWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[37]) * v14,
    0,
    0,
    0,
    0,
    0,
    0,
    0);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.currentAdjustAtkMaxLabel;
  if ( !combineInfoComp )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)combineInfoComp, (System_String_o *)StringLiteral_1/*""*/, 0);
  ServantCombineControl__CheckConductionWire(this, v15);
  combineInfoComp = (struct CombineInfoComponent_o *)ServantCombineControl__SetCampaignListPerSelectSvt(
                                                       this,
                                                       usrSvtData,
                                                       v16);
  if ( !this->fields.campaign )
    goto LABEL_31;
  v17 = (char)combineInfoComp;
  combineInfoComp = (struct CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this->fields.campaign,
                                                       0);
  if ( !combineInfoComp )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)combineInfoComp, v17 & 1, 0);
  if ( (v17 & 1) == 0 )
    return;
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaignListPerSelectSvt;
  this->fields.campaiginPerSelectSvtListIndex = 0;
  if ( !combineInfoComp )
    goto LABEL_31;
  combineInfoComp = (struct CombineInfoComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)combineInfoComp,
                                                       0,
                                                       (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
  if ( !combineInfoComp )
    goto LABEL_31;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)combineInfoComp,
           0,
           (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
  ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)Item, v19);
  this->fields.campaignAlphaAnimNow = 0.0;
  this->fields.campaignAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
  v20 = MenuListControl_TypeInfo;
  if ( !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
    v20 = MenuListControl_TypeInfo;
  }
  v21 = ChangedFPSUtil__CovertFrameNumToSecond(v20->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0);
  v22 = ExtraEasing__AsymptoticSeriesFloat(
          MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
          (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
          0);
  v23 = (AlphaTransitionCalculator_o *)sub_1C942E4(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v23, v21, v22, 0);
  this->fields.campaignAlphaCalculator = v23;
  sub_1C9403C(&this->fields.campaignAlphaCalculator, v23);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaignAlphaCalculator;
  if ( !combineInfoComp )
LABEL_31:
    sub_1C942F0(combineInfoComp, v7);
  AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)combineInfoComp, 0);
}


bool ServantCombineControl__SetCampaignListPerSelectSvt(
        ServantCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_Collections_Generic_List_object__o *v8; // x22
  System_Collections_Generic_List_object__o *v9; // x20
  const MethodInfo *v10; // x1
  Il2CppObject *current; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *EventMaster; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  __int64 v15; // x1
  Il2CppClass *klass; // x23
  int64_t Time; // x0
  __int64 v18; // x1
  int klass_high; // w8
  System_Int32_array *monitor; // x23
  __int64 v21; // x24
  __int64 v22; // x25
  int32_t v23; // w1
  System_Int32_array *v24; // x23
  int32_t SvtClassId; // w1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Func_object__int__o *v30; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  System_Func_object__object__o *v32; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  ServantCombineControl___c_c *v34; // x8
  System_Func_object__int__o *_9__94_1; // x21
  Il2CppObject *v36; // x22
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4D265FA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_IndexOf_int___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_OrderBy_List_EventCampaignEntity___int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity____);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_List_EventCampaignEntity____);
    sub_1C94098(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C94098(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_1C94098(&System_Func_List_EventCampaignEntity___int__TypeInfo);
    sub_1C94098(&System_Func_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__94_0__);
    sub_1C94098(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_g__GetEquivalentTarget_94_2__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__94_1__);
    sub_1C94098(&ServantCombineControl___c_TypeInfo);
    byte_4D265FA = 1;
  }
  memset(&v41, 0, sizeof(v41));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_54;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0);
  if ( !CombineEventCampaigns )
    return (char)CombineEventCampaigns;
  v8 = (System_Collections_Generic_List_object__o *)CombineEventCampaigns;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    v8,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
  {
    current = v41.fields._current;
    EventMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantCombineControl__get_EventMaster(this, v10);
    if ( !current )
      sub_1C942F0(EventMaster, v13);
    if ( !EventMaster )
      sub_1C942F0(0, v13);
    Entity = DataMasterBase_object__object__int___GetEntity(
               EventMaster,
               (int32_t)current[1].klass,
               (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !Entity )
      sub_1C942F0(0, v15);
    klass = Entity[6].klass;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    if ( (__int64)klass >= Time )
    {
      klass_high = HIDWORD(current[1].klass);
      if ( klass_high <= 5 )
      {
        if ( (unsigned int)klass_high <= 5 && ((1 << klass_high) & 0x34) != 0 )
        {
          monitor = (System_Int32_array *)current[2].monitor;
          if ( !monitor )
            sub_1C942F0(Time, v18);
          if ( monitor->max_length )
          {
            if ( !usrSvtData )
              sub_1C942F0(Time, v18);
            v22 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
            v21 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v42.fields.currentCryptoKey = v22;
            *(_QWORD *)&v42.fields.fakeValue = v21;
            v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v42, 0);
            Time = System_Array__IndexOf_int_(
                     monitor,
                     v23,
                     (const MethodInfo_32A4AE8 *)Method_System_Array_IndexOf_int___);
            goto LABEL_30;
          }
LABEL_31:
          if ( !v9 )
            sub_1C942F0(Time, v18);
          items = v9->fields._items;
          v27 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            sub_1C942F0(Time, v18);
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              current,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v29[4] = (Il2CppClass *)current;
            sub_1C9403C(v29 + 4, current);
          }
        }
      }
      else if ( klass_high == 27 )
      {
        if ( !usrSvtData )
          sub_1C942F0(Time, v18);
        Time = UserServantEntity__IsExchangeSvt(usrSvtData, 0);
        if ( (Time & 1) != 0 )
          goto LABEL_31;
      }
      else if ( (klass_high & 0xFFFFFFFE) == 0x20 )
      {
        if ( !usrSvtData )
          sub_1C942F0(Time, v18);
        v24 = (System_Int32_array *)current[2].monitor;
        SvtClassId = UserServantEntity__getSvtClassId(usrSvtData, 0, 0, 0);
        Time = System_Array__IndexOf_int_(
                 v24,
                 SvtClassId,
                 (const MethodInfo_32A4AE8 *)Method_System_Array_IndexOf_int___);
LABEL_30:
        if ( (Time & 0x80000000) == 0 )
          goto LABEL_31;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( !v9 )
    goto LABEL_54;
  if ( !v9->fields._size )
  {
    LOBYTE(CombineEventCampaigns) = 0;
    return (char)CombineEventCampaigns;
  }
  v30 = (System_Func_object__int__o *)sub_1C942E4(System_Func_EventCampaignEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v30,
    0,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_g__GetEquivalentTarget_94_2__,
    0);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToLookup_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v9,
                                                               (System_Func_TSource__TKey__o *)v30,
                                                               (const MethodInfo_31E18B0 *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int___);
  v32 = (System_Func_object__object__o *)sub_1C942E4(System_Func_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity___TypeInfo);
  System_Func_object__object____ctor(
    v32,
    (Il2CppObject *)this,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__94_0__,
    0);
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v31,
                                                               (System_Func_TSource__TResult__o *)v32,
                                                               (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity____);
  v34 = ServantCombineControl___c_TypeInfo;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v34 = ServantCombineControl___c_TypeInfo;
  }
  _9__94_1 = (System_Func_object__int__o *)v34->static_fields->__9__94_1;
  if ( !_9__94_1 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = ServantCombineControl___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v34->static_fields->__9;
    _9__94_1 = (System_Func_object__int__o *)sub_1C942E4(System_Func_List_EventCampaignEntity___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__94_1,
      v36,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__94_1__,
      0);
    static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    static_fields->__9__94_1 = (struct System_Func_List_EventCampaignEntity___int__o *)_9__94_1;
    sub_1C9403C(&static_fields->__9__94_1, _9__94_1);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v33,
                                                               (System_Func_TSource__TKey__o *)_9__94_1,
                                                               (const MethodInfo_31CC104 *)Method_System_Linq_Enumerable_OrderBy_List_EventCampaignEntity___int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_object_(
                                v38,
                                (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_List_EventCampaignEntity____);
  if ( !this )
LABEL_54:
    sub_1C942F0(Instance, v6);
  this->fields.campaignListPerSelectSvt = (struct System_Collections_Generic_List_List_EventCampaignEntity___o *)Instance;
  sub_1C9403C(&this->fields.campaignListPerSelectSvt, Instance);
  LOBYTE(CombineEventCampaigns) = 1;
  return (char)CombineEventCampaigns;
}


// local variable allocation has failed, the output may be wrong!
void ServantCombineControl__SetCombineData(
        ServantCombineControl_o *this,
        SetCombineData_o *data,
        bool isUpdateMaterialGrid,
        const MethodInfo *method)
{
  SetCombineData_o *v5; // x20
  ServantCombineControl_o *v6; // x19
  struct System_Int64_array *materialUsrSvtIdList; // x1
  struct System_Int64_array *v8; // x8
  _BOOL4 v9; // w25
  struct UserServantEntity_o *baseSvtData; // x1
  UserServantEntity_o **p_baseData; // x21
  struct UserServantEntity_o *baseData; // x8
  __int64 v13; // x22
  __int64 v14; // x24
  int32_t v15; // w0
  int32_t v16; // w22
  const MethodInfo *v17; // x2
  int32_t spendQp; // w8
  UILabel_o *qpLb; // x23
  int32_t getExp; // w8
  UILabel_o *expLb; // x23
  UserServantEntity_o *v22; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x23
  __int64 v24; // x24
  __int64 v25; // x25
  int32_t assetList_high; // w8
  int32_t LevelMax; // w0
  const MethodInfo *v28; // x2
  int32_t v29; // w23
  struct UserServantEntity_o *v30; // x8
  UILabel_o *currentLvLb; // x24
  UILabel_o *increLvLb; // x25
  int32_t *p_increLv; // x24
  UILabel_o *increValLb; // x25
  System_String_o *v35; // x26
  Il2CppObject *v36; // x0
  UserServantEntity_o *v37; // x8
  __int64 v38; // x22
  __int64 v39; // x24
  int32_t v40; // w24
  __int64 v41; // x22
  UserServantEntity_o *v42; // x1
  int32_t increLv; // w8
  struct UserServantEntity_o *v44; // x8
  int32_t v45; // w8
  int32_t v46; // w8
  int32_t adjustHp; // w22
  BalanceConfig_c *v48; // x0
  uint32_t cctor_finished; // w9
  int32_t StatusUpAdjustHp; // w8
  int v51; // w23
  int getHpAdjustVal; // w25
  int32_t v53; // w22
  int32_t v54; // w22
  int32_t v55; // w22
  int32_t v56; // w23
  int32_t v57; // w1
  BalanceConfig_c *v58; // x0
  int32_t adjustAtk; // w21
  uint32_t v60; // w9
  int32_t StatusUpAdjustAtk; // w8
  int v62; // w21
  int getAtkAdjustVal; // w23
  int32_t v64; // w20
  int32_t v65; // w20
  int32_t v66; // w20
  int32_t v67; // w21
  int32_t v68; // w1
  char v69; // w20
  float v70; // s0 OVERLAPPED
  float v71; // s1
  float v72; // s2
  float v73; // s3
  const MethodInfo *v74; // x1
  int32_t increAmount; // [xsp+18h] [xbp-98h] BYREF
  int32_t v76; // [xsp+1Ch] [xbp-94h] BYREF
  __int64 v77; // [xsp+20h] [xbp-90h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+28h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+30h] [xbp-80h] BYREF
  int32_t lateExp[2]; // [xsp+38h] [xbp-78h] BYREF
  System_String_array *skillNameList; // [xsp+40h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+48h] [xbp-68h] BYREF
  int32_t afterAtk[2]; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = data;
  v6 = this;
  if ( (byte_4D265FD & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&CombineSvtData_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_9253/*"N0"*/);
    sub_1C94098(&StringLiteral_7451/*"INCREMENT_SVTLEVEL"*/);
    this = (ServantCombineControl_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D265FD = 1;
  }
  *(_QWORD *)afterAtk = 0;
  skillNameList = 0;
  idList = 0;
  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)lateExp = 0;
  v77 = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  v76 = 0;
  if ( isUpdateMaterialGrid )
    ServantCombineControl__DestroyGrid(v6, (const MethodInfo *)data);
  if ( !v5 )
    goto LABEL_103;
  materialUsrSvtIdList = v5->fields.materialUsrSvtIdList;
  v6->fields._selectMaterialUsrSvtIdList_k__BackingField = materialUsrSvtIdList;
  sub_1C9403C(&v6->fields._selectMaterialUsrSvtIdList_k__BackingField, materialUsrSvtIdList);
  v8 = v5->fields.materialUsrSvtIdList;
  v9 = v8 && LODWORD(v8->max_length) != 0;
  baseSvtData = v5->fields.baseSvtData;
  p_baseData = &v6->fields.baseData;
  v6->fields.baseData = baseSvtData;
  this = (ServantCombineControl_o *)sub_1C9403C(&v6->fields.baseData, baseSvtData);
  baseData = v6->fields.baseData;
  if ( !baseData )
    goto LABEL_103;
  v14 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v84.fields.currentCryptoKey = v14;
  *(_QWORD *)&v84.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v84, 0);
  if ( v9 )
  {
    v16 = v15;
    this = (ServantCombineControl_o *)v6->fields.conductionWireInfo;
    if ( !this )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    if ( isUpdateMaterialGrid )
      ServantCombineControl__SetCombineMaterialGrid(v6, v5->fields.materialUsrSvtIdList, v17);
    spendQp = v5->fields.spendQp;
    qpLb = v6->fields.qpLb;
    v6->fields._spendQpVal_k__BackingField = spendQp;
    v76 = spendQp;
    this = (ServantCombineControl_o *)System_Int32__ToString_65926240(
                                        (int32_t)&v76,
                                        (System_String_o *)StringLiteral_9253/*"N0"*/,
                                        0);
    if ( !qpLb )
      goto LABEL_103;
    UILabel__set_text(qpLb, (System_String_o *)this, 0);
    getExp = v5->fields.getExp;
    expLb = v6->fields.expLb;
    v6->fields._getExpVal_k__BackingField = getExp;
    v76 = getExp;
    this = (ServantCombineControl_o *)System_Int32__ToString((int32_t)&v76, 0);
    if ( !expLb )
      goto LABEL_103;
    UILabel__set_text(expLb, (System_String_o *)this, 0);
    this = (ServantCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_103;
    this = (ServantCombineControl_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
    v22 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_103;
    v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    v25 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v85.fields.currentCryptoKey = v25;
    *(_QWORD *)&v85.fields.fakeValue = v24;
    this = (ServantCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v85, 0);
    if ( !v23 )
      goto LABEL_103;
    this = (ServantCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                        v23,
                                        (int32_t)this,
                                        (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_103;
    assetList_high = HIDWORD(this->fields.assetList);
    this = (ServantCombineControl_o *)v6->fields.baseData;
    v6->fields.expType = assetList_high;
    if ( !this )
      goto LABEL_103;
    v6->fields.totalExp = HIDWORD(this->fields.increValLb) + v6->fields._getExpVal_k__BackingField;
    v6->fields.checkLv = (int32_t)this->fields.increValLb;
    LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
    data = (SetCombineData_o *)(unsigned int)v6->fields.checkLv;
    v29 = LevelMax;
    if ( (_DWORD)data == LevelMax )
    {
      v6->fields.increLv = LevelMax;
    }
    else
    {
      while ( !ServantCombineControl__CheckIncrementLv(v6, (int32_t)data, v28) )
        LODWORD(data) = v6->fields.checkLv;
    }
    this = (ServantCombineControl_o *)v6->fields.currentLvObj;
    if ( !this )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (ServantCombineControl_o *)v6->fields.increLvObj;
    if ( !this )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (ServantCombineControl_o *)v6->fields.increValLb;
    if ( !this )
      goto LABEL_103;
    this = (ServantCombineControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v30 = v6->fields.baseData;
    if ( !v30 )
      goto LABEL_103;
    currentLvLb = v6->fields.currentLvLb;
    this = (ServantCombineControl_o *)System_Int32__ToString((int)v30 + 256, 0);
    if ( !currentLvLb )
      goto LABEL_103;
    UILabel__set_text(currentLvLb, (System_String_o *)this, 0);
    increLvLb = v6->fields.increLvLb;
    p_increLv = &v6->fields.increLv;
    this = (ServantCombineControl_o *)System_Int32__ToString((int)v6 + 560, 0);
    if ( !increLvLb )
      goto LABEL_103;
    UILabel__set_text(increLvLb, (System_String_o *)this, 0);
    if ( !*p_baseData )
      goto LABEL_103;
    v6->fields.increAmount = v6->fields.increLv - (*p_baseData)->fields.lv;
    increValLb = v6->fields.increValLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_7451/*"INCREMENT_SVTLEVEL"*/, 0);
    increAmount = v6->fields.increAmount;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
    this = (ServantCombineControl_o *)System_String__Format(v35, v36, 0);
    if ( !increValLb )
      goto LABEL_103;
    UILabel__set_text(increValLb, (System_String_o *)this, 0);
    this = (ServantCombineControl_o *)v6->fields.combineResStatus;
    if ( !this )
      goto LABEL_103;
    CheckCombineResStatus__getCombineResStatus(
      (CheckCombineResStatus_o *)this,
      &afterAtk[1],
      afterAtk,
      *p_baseData,
      *p_increLv,
      0);
    afterAtk[1] += v5->fields.getHpAdjustVal;
    afterAtk[0] += v5->fields.getAtkAdjustVal;
    this = (ServantCombineControl_o *)*p_baseData;
    if ( !*p_baseData )
      goto LABEL_103;
    UserServantEntity__getNextUseSkillInfo((UserServantEntity_o *)this, &idList, &skillNameList, *p_increLv, v16, 1, 0);
    if ( skillNameList )
    {
      if ( !LODWORD(skillNameList->max_length) )
        sub_1C942F8(this);
      data = (SetCombineData_o *)skillNameList->m_Items[0];
      if ( data )
      {
        this = (ServantCombineControl_o *)v6->fields.getSkillLb;
        if ( !this )
          goto LABEL_103;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)data, 0);
      }
    }
    v37 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_103;
    v39 = *(_QWORD *)&v37->fields.limitCount.fields.currentCryptoKey;
    v38 = *(_QWORD *)&v37->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v86.fields.currentCryptoKey = v39;
    *(_QWORD *)&v86.fields.fakeValue = v38;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v86, 0);
    v41 = sub_1C942E4(CombineSvtData_TypeInfo);
    CombineSvtData___ctor((CombineSvtData_o *)v41, 0);
    if ( !v41 )
      goto LABEL_103;
    v42 = *p_baseData;
    *(_QWORD *)(v41 + 16) = *p_baseData;
    this = (ServantCombineControl_o *)sub_1C9403C(v41 + 16, v42);
    increLv = v6->fields.increLv;
    *(_DWORD *)(v41 + 32) = v29;
    *(_DWORD *)(v41 + 24) = increLv;
    *(_DWORD *)(v41 + 28) = v40;
    v44 = v6->fields.baseData;
    if ( !v44 )
      goto LABEL_103;
    this = (ServantCombineControl_o *)v6->fields.combineResStatus;
    if ( !this )
      goto LABEL_103;
    CheckCombineResStatus__setSvtExp(
      (CheckCombineResStatus_o *)this,
      (float *)&lateExp[1],
      lateExp,
      v6->fields.totalExp,
      v44->fields.lv,
      v29,
      v6->fields.expType,
      0);
    *(_DWORD *)(v41 + 36) = lateExp[1];
    v45 = afterAtk[1];
    *(_DWORD *)(v41 + 40) = lateExp[0];
    *(_DWORD *)(v41 + 44) = v45;
    v46 = afterAtk[0];
    *(_DWORD *)(v41 + 48) = v5->fields.getHpAdjustVal;
    *(_DWORD *)(v41 + 52) = v46;
    *(_DWORD *)(v41 + 56) = v5->fields.getAtkAdjustVal;
    this = (ServantCombineControl_o *)v6->fields.combineInfoComp;
    if ( !this )
      goto LABEL_103;
    CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v41, 0);
    *(_QWORD *)secondMaxAdjustAtk = 0;
    *(_QWORD *)maxAjustAtk = 0;
    this = (ServantCombineControl_o *)*p_baseData;
    if ( !*p_baseData )
      goto LABEL_103;
    UserServantEntity__GetAdjustMax(
      (UserServantEntity_o *)this,
      &maxAjustAtk[1],
      maxAjustAtk,
      &secondMaxAdjustAtk[1],
      secondMaxAdjustAtk,
      0);
    this = (ServantCombineControl_o *)v6->fields.resAdjustInfo;
    if ( !this )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (ServantCombineControl_o *)v6->fields.resAdjustHpIconLabel;
    if ( !this )
      goto LABEL_103;
    this = (ServantCombineControl_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !this )
      goto LABEL_103;
    v87.fields.r = 1.0;
    v87.fields.g = 1.0;
    v87.fields.b = 1.0;
    v87.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v87, 0);
    this = (ServantCombineControl_o *)v6->fields.resAdjustAtkIconLabel;
    if ( !this )
      goto LABEL_103;
    this = (ServantCombineControl_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !this )
      goto LABEL_103;
    v88.fields.r = 1.0;
    v88.fields.g = 1.0;
    v88.fields.b = 1.0;
    v88.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v88, 0);
    if ( !*p_baseData )
      goto LABEL_103;
    adjustHp = (*p_baseData)->fields.adjustHp;
    v48 = BalanceConfig_TypeInfo;
    cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v48 = BalanceConfig_TypeInfo;
      cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
    }
    StatusUpAdjustHp = v48->static_fields->StatusUpAdjustHp;
    v51 = StatusUpAdjustHp * adjustHp;
    HIDWORD(v77) = StatusUpAdjustHp * adjustHp;
    getHpAdjustVal = v5->fields.getHpAdjustVal;
    v53 = maxAjustAtk[1];
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = BalanceConfig_TypeInfo;
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
    if ( v51 >= StatusUpAdjustHp * v53 )
    {
      v54 = secondMaxAdjustAtk[1];
      if ( v48->_2.cctor_finished )
      {
LABEL_66:
        this = (ServantCombineControl_o *)v6->fields.resAdjustHpIconLabel;
        v55 = StatusUpAdjustHp * v54;
        if ( !this )
          goto LABEL_103;
        v56 = (getHpAdjustVal & ~(getHpAdjustVal >> 31)) + v51;
        UIIconLabel__Set_41867060((UIIconLabel_o *)this, 44, v56, v55, 0, 0, 0, 0, 0, 0, 0);
        if ( !System_Int32__Equals_65926068((int32_t)&v77 + 4, v56, 0) )
        {
          this = (ServantCombineControl_o *)v6->fields.resAdjustHpIconLabel;
          if ( !this )
            goto LABEL_103;
          if ( v56 >= v55 )
            v57 = v55;
          else
            v57 = v56;
          UIIconLabel__SetCombineResTxt((UIIconLabel_o *)this, v57, v55, v56 >= v55, 0);
        }
        this = (ServantCombineControl_o *)v6->fields.resAdjustHpMaxLabel;
        if ( !this )
          goto LABEL_103;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( !*p_baseData )
          goto LABEL_103;
        v58 = BalanceConfig_TypeInfo;
        adjustAtk = (*p_baseData)->fields.adjustAtk;
        v60 = BalanceConfig_TypeInfo->_2.cctor_finished;
        if ( !v60 )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v58 = BalanceConfig_TypeInfo;
          v60 = BalanceConfig_TypeInfo->_2.cctor_finished;
        }
        StatusUpAdjustAtk = v58->static_fields->StatusUpAdjustAtk;
        v62 = StatusUpAdjustAtk * adjustAtk;
        LODWORD(v77) = v62;
        getAtkAdjustVal = v5->fields.getAtkAdjustVal;
        v64 = maxAjustAtk[0];
        if ( !v60 )
        {
          j_il2cpp_runtime_class_init_0(v58);
          v58 = BalanceConfig_TypeInfo;
          StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
        }
        if ( v62 >= StatusUpAdjustAtk * v64 )
        {
          v65 = secondMaxAdjustAtk[0];
          if ( v58->_2.cctor_finished )
            goto LABEL_82;
        }
        else
        {
          v65 = maxAjustAtk[0];
          if ( v58->_2.cctor_finished )
          {
LABEL_82:
            this = (ServantCombineControl_o *)v6->fields.resAdjustAtkIconLabel;
            v66 = StatusUpAdjustAtk * v65;
            if ( !this )
              goto LABEL_103;
            v67 = (getAtkAdjustVal & ~(getAtkAdjustVal >> 31)) + v62;
            UIIconLabel__Set_41867060((UIIconLabel_o *)this, 45, v67, v66, 0, 0, 0, 0, 0, 0, 0);
            if ( !System_Int32__Equals_65926068((int32_t)&v77, v67, 0) )
            {
              this = (ServantCombineControl_o *)v6->fields.resAdjustAtkIconLabel;
              if ( !this )
                goto LABEL_103;
              if ( v67 >= v66 )
                v68 = v66;
              else
                v68 = v67;
              UIIconLabel__SetCombineResTxt((UIIconLabel_o *)this, v68, v66, v67 >= v66, 0);
            }
            this = (ServantCombineControl_o *)v6->fields.resAdjustAtkMaxLabel;
            if ( this )
            {
              UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
              this = (ServantCombineControl_o *)v6->fields.qpLb;
              if ( v6->fields.haveQpVal >= v6->fields._spendQpVal_k__BackingField )
              {
                if ( this )
                {
                  v70 = 1.0;
                  v69 = 1;
                  v71 = 1.0;
                  goto LABEL_101;
                }
              }
              else if ( this )
              {
                v69 = 0;
                v70 = 1.0;
                v71 = 0.0;
LABEL_101:
                v72 = v71;
                v73 = v70;
                UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v70, 0);
                v6->fields._IsExeCombine_k__BackingField = v69;
                ServantCombineControl__SetExeBtnState(v6, v74);
                return;
              }
            }
LABEL_103:
            sub_1C942F0(this, data);
          }
        }
        j_il2cpp_runtime_class_init_0(v58);
        StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
        goto LABEL_82;
      }
    }
    else
    {
      v54 = maxAjustAtk[1];
      if ( v48->_2.cctor_finished )
        goto LABEL_66;
    }
    j_il2cpp_runtime_class_init_0(v48);
    StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    goto LABEL_66;
  }
}


SetCombineData_o *ServantCombineControl__SetCombineData_31841552(
        ServantCombineControl_o *this,
        System_Collections_Generic_List_UserServantEntity__o *targetMaterialList,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v8; // x23
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v11; // s0
  float v12; // s8
  float v13; // s0
  struct UserServantEntity_o *baseData; // x8
  __int64 v15; // x21
  __int64 v16; // x25
  float v17; // s9
  Il2CppObject *Entity; // x26
  UserServantEntity_o *v19; // x21
  int32_t SvtClassId; // w0
  int32_t size; // w8
  const MethodInfo_386AB64 **v22; // x29
  System_Collections_Generic_List_object__o *v23; // x21
  BalanceConfig_c **v24; // x25
  int v25; // w23
  int32_t v26; // w22
  int32_t v27; // w28
  ServantCombineControl_o *v28; // x19
  __int64 v29; // x27
  __int64 v30; // x21
  __int64 v31; // x26
  int32_t v32; // w0
  __int64 v33; // x21
  CombineMaterialEntity_o *v34; // x26
  int v35; // w8
  int value; // w26
  int v37; // w21
  BalanceConfig_c *v38; // x0
  ServantCombineControl_c *v39; // x8
  int SameClassExp; // w21
  float FIXED_VAL; // s10
  double v42; // d0
  unsigned int v43; // w8
  BalanceConfig_c **v44; // x20
  const MethodInfo_386AB64 **v45; // x25
  System_Collections_Generic_List_UserServantEntity__o *v46; // x29
  float v47; // s0
  unsigned int v48; // w8
  unsigned int v49; // w24
  int32_t CombineQp; // w21
  float v51; // s0
  unsigned int v52; // w8
  int32_t v53; // w26
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  const MethodInfo *v58; // x3
  struct UserServantEntity_o *v59; // x8
  ServantCombineControl_c *v60; // x0
  struct UserServantEntity_o *v62; // x1
  int32_t v63; // w8
  bool isAdjustAtkMax; // w0
  bool isSecondAdjustAtkMax; // w0
  System_Collections_Generic_List_long__o *v66; // x20
  int32_t v67; // w23
  int32_t v68; // w22
  __int128 v69; // q0
  struct System_Int64_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  System_Int64_array *v73; // x0
  int v75; // [xsp+0h] [xbp-F0h]
  int v76; // [xsp+4h] [xbp-ECh]
  DataMasterBase_TMaster__TEntity__PKType__o *v77; // [xsp+8h] [xbp-E8h]
  int32_t expType; // [xsp+14h] [xbp-DCh]
  __int64 v79; // [xsp+18h] [xbp-D8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v80; // [xsp+20h] [xbp-D0h]
  CombineMaterialMaster_o *v81; // [xsp+28h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+50h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v84; // [xsp+78h] [xbp-78h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_4D2660F & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C94098(&System_Math_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&ServantCombineControl_TypeInfo);
    sub_1C94098(&SetCombineData_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2660F = 1;
  }
  v84 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v84,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_101;
  v80 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_101;
  combineEventList = menuListCtr->fields.combineEventList;
  v11 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0);
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_101;
  v12 = v11;
  v13 = CheckCombineResStatus__GetQpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_101;
  v16 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v17 = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v85.fields.currentCryptoKey = v16;
  *(_QWORD *)&v85.fields.fakeValue = v15;
  v81 = (CombineMaterialMaster_o *)v8;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v85, 0);
  if ( !MasterData_object )
    goto LABEL_101;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             Instance,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !Entity )
    goto LABEL_101;
  v19 = this->fields.baseData;
  v79 = Instance;
  if ( !v19 )
    goto LABEL_101;
  expType = HIDWORD(Entity[8].klass);
  SvtClassId = UserServantEntity__getSvtClassId(v19, 0, 0, 0);
  Instance = UserServantEntity__getSvtClassGroupType(v19, SvtClassId, 0);
  v75 = Instance;
  if ( !targetMaterialList )
    goto LABEL_101;
  size = targetMaterialList->fields._size;
  v76 = size - 1;
  v22 = (const MethodInfo_386AB64 **)&Method_System_Collections_Generic_List_UserServantEntity__get_Item__;
  v23 = v84;
  if ( size < 1 )
  {
    v26 = 0;
    v25 = 0;
LABEL_70:
    v53 = v26;
    if ( v23 )
      goto LABEL_73;
  }
  else
  {
    v77 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    v24 = &BalanceConfig_TypeInfo;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    while ( 1 )
    {
      v28 = this;
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)targetMaterialList,
                            v27,
                            *v22);
      if ( !Instance )
        goto LABEL_101;
      v29 = Instance;
      v31 = *(_QWORD *)(Instance + 80);
      v30 = *(_QWORD *)(Instance + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v86.fields.currentCryptoKey = v31;
      *(_QWORD *)&v86.fields.fakeValue = v30;
      v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v86, 0);
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v77,
                            v32,
                            (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_101;
      v33 = Instance;
      Instance = (__int64)v81;
      if ( !v81 )
        goto LABEL_101;
      v34 = CombineMaterialMaster__GetEntity(v81, *(_DWORD *)(v33 + 136), *(_DWORD *)(v29 + 256), 0);
      Instance = (__int64)v80;
      if ( !v80 )
        goto LABEL_101;
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v80,
                            *(_DWORD *)(v33 + 80),
                            (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !v34 || !Instance )
        goto LABEL_101;
      v35 = *(_DWORD *)(Instance + 56);
      value = v34->fields.value;
      if ( v35 == 3 )
        goto LABEL_30;
      if ( v35 == v75 )
      {
        Instance = (__int64)v28->fields.baseData;
        if ( !Instance )
          goto LABEL_101;
        v37 = *(_DWORD *)(v33 + 80);
        if ( v37 == UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0, 0) )
        {
LABEL_30:
          v38 = *v24;
          if ( !(*v24)->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v38);
            v38 = *v24;
          }
          v39 = ServantCombineControl_TypeInfo;
          SameClassExp = v38->static_fields->SameClassExp;
          if ( !ServantCombineControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
            v39 = ServantCombineControl_TypeInfo;
          }
          FIXED_VAL = v39->static_fields->FIXED_VAL;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v42 = (double)value * (double)SameClassExp / FIXED_VAL;
          v43 = vcvtpd_s64_f64(v42);
          if ( ceil(v42) == INFINITY )
            value = 0x80000000;
          else
            value = v43;
        }
      }
      v44 = v24;
      v45 = v22;
      if ( !byte_4D265B8 )
      {
        sub_1C94098(&System_Math_TypeInfo);
        byte_4D265B8 = 1;
      }
      v46 = targetMaterialList;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      Instance = (__int64)v28->fields.baseData;
      v47 = v12 * (float)value;
      v48 = vcvtps_s32_f32(v47);
      v49 = ceilf(v47) == INFINITY ? 0x80000000 : v48;
      if ( !Instance )
        goto LABEL_101;
      CombineQp = UserServantEntity__getCombineQp((UserServantEntity_o *)Instance, 0);
      if ( !byte_4D265B8 )
      {
        sub_1C94098(&System_Math_TypeInfo);
        byte_4D265B8 = 1;
      }
      Instance = (__int64)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v51 = v17 * (float)CombineQp;
      v52 = vcvtps_s32_f32(v51);
      if ( ceilf(v51) == INFINITY )
        v52 = 0x80000000;
      if ( !v79 )
        goto LABEL_101;
      v23 = v84;
      v53 = v52 + v26;
      if ( *(_QWORD *)(v79 + 96) < (int)(v52 + v26) )
      {
        this = v28;
        v22 = v45;
        v28->fields.isQpCondClear = 0;
        goto LABEL_70;
      }
      if ( !v84 )
        goto LABEL_101;
      items = v84->fields._items;
      v55 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v84->fields._version;
      if ( !items )
        goto LABEL_101;
      v56 = v23->fields._size;
      if ( (unsigned int)v56 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v29,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &items->obj.klass + v56;
        v23->fields._size = v56 + 1;
        v57[4] = (Il2CppClass *)v29;
        Instance = sub_1C9403C(v57 + 4, v29);
      }
      v59 = v28->fields.baseData;
      if ( !v59 )
        goto LABEL_101;
      v25 += v49;
      this = v28;
      if ( ServantCombineControl__IsLevelMax(v28, v59->fields.exp + v25, expType, v58) )
        break;
      v60 = ServantCombineControl_TypeInfo;
      if ( !ServantCombineControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
        v60 = ServantCombineControl_TypeInfo;
      }
      targetMaterialList = v46;
      v22 = v45;
      if ( v27 != v60->static_fields->MAX_SELECT_NUM - 1 )
      {
        v26 = v53;
        v24 = v44;
        if ( v76 != v27++ )
          continue;
      }
      goto LABEL_73;
    }
    v22 = v45;
LABEL_73:
    if ( v23->fields._size < 1 )
    {
      return 0;
    }
    else
    {
      v23 = (System_Collections_Generic_List_object__o *)sub_1C942E4(SetCombineData_TypeInfo);
      SetCombineData___ctor((SetCombineData_o *)v23, 0);
      if ( !v23 )
        goto LABEL_101;
      v62 = this->fields.baseData;
      v23->fields._items = (struct System_Object_array *)v62;
      sub_1C9403C(&v23->fields, v62);
      v63 = v84->fields._size;
      v23->fields._version = v53;
      LODWORD(v23->fields._syncRoot) = v25;
      v23[1].monitor = 0;
      v23->fields._size = v63;
      Instance = (__int64)this->fields.baseData;
      if ( !Instance )
        goto LABEL_101;
      if ( UserServantEntity__isAdjustHpMax((UserServantEntity_o *)Instance, 0) )
      {
        Instance = (__int64)this->fields.baseData;
        if ( Instance )
        {
          isAdjustAtkMax = UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)Instance, 0);
          goto LABEL_81;
        }
        goto LABEL_101;
      }
      isAdjustAtkMax = 0;
LABEL_81:
      BYTE4(v23[1].klass) = isAdjustAtkMax;
      Instance = (__int64)this->fields.baseData;
      if ( !Instance )
LABEL_101:
        sub_1C942F0(Instance, v6);
      if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)Instance, 0) )
      {
        Instance = (__int64)this->fields.baseData;
        if ( !Instance )
          goto LABEL_101;
        isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)Instance, 0);
      }
      else
      {
        isSecondAdjustAtkMax = 0;
      }
      BYTE5(v23[1].klass) = isSecondAdjustAtkMax;
      v66 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v66,
        (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
      v67 = v84->fields._size;
      if ( v67 >= 1 )
      {
        v68 = 0;
        while ( 1 )
        {
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(v84, v68, *v22);
          if ( !Instance )
            goto LABEL_101;
          v69 = *(_OWORD *)(Instance + 32);
          *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)(Instance + 16);
          *(_OWORD *)&v83.fields.fakeValue = v69;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v82 = v83;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v82, 0);
          if ( !v66 )
            goto LABEL_101;
          v70 = v66->fields._items;
          v71 = Method_System_Collections_Generic_List_long__Add__;
          ++v66->fields._version;
          if ( !v70 )
            goto LABEL_101;
          v72 = v66->fields._size;
          if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v66,
              Instance,
              *(const MethodInfo_3852E68 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v66->fields._size = v72 + 1;
            v70->m_Items[v72] = Instance;
          }
          if ( v67 == ++v68 )
            goto LABEL_99;
        }
      }
      if ( !v66 )
        goto LABEL_101;
LABEL_99:
      v73 = System_Collections_Generic_List_long___ToArray(
              v66,
              (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
      v23[1].fields._items = (struct System_Object_array *)v73;
      sub_1C9403C(&v23[1].fields, v73);
    }
  }
  return (SetCombineData_o *)v23;
}


void ServantCombineControl__SetCombineMaterialGrid(
        ServantCombineControl_o *this,
        System_Int64_array *materialUsrSvtIdList,
        const MethodInfo *method)
{
  ServantCombineControl_o *v4; // x19
  il2cpp_array_size_t max_length; // x20
  System_Collections_Generic_List_long__o *v6; // x22
  System_Collections_Generic_List_long__o *v7; // x21
  unsigned __int64 v8; // x23
  int64_t v9; // x25
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x0
  ServantCombineControl_o *v12; // x26
  ServantCombineControl_o *v13; // x27
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *baseData; // x26
  MaterialSvtInfo_o *v16; // x27
  MaterialSvtInfo_ClickDelegate_o *v17; // x28
  Il2CppObject *Entity; // x26
  ServantLimitMaster_o *v19; // x27
  void *monitor; // x28
  Il2CppClass *klass; // x29
  int32_t v22; // w28
  struct System_Int64_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  struct System_Int64_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  System_Int64_array *v29; // x0
  System_Int64_array *v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4D265FE & 1) == 0 )
  {
    sub_1C94098(&MaterialSvtInfo_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_CombineMenuControl_OnClickMaterial__);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1C94098(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C94098(&System_Collections_Generic_List_long__TypeInfo);
    this = (ServantCombineControl_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D265FE = 1;
  }
  if ( !materialUsrSvtIdList )
    goto LABEL_41;
  max_length = materialUsrSvtIdList->max_length;
  v6 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
  v4->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= LODWORD(materialUsrSvtIdList->max_length) )
        sub_1C942F8(this);
      this = (ServantCombineControl_o *)v4->fields.selectGrid;
      if ( !this )
        break;
      v9 = materialUsrSvtIdList->m_Items[v8];
      svtFaceInfo = v4->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      this = (ServantCombineControl_o *)BaseMonoBehaviour__createObject(
                                          (BaseMonoBehaviour_o *)v4,
                                          svtFaceInfo,
                                          transform,
                                          0,
                                          0);
      if ( !this )
        break;
      v12 = this;
      this = (ServantCombineControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      v13 = this;
      if ( !byte_4D25F19 )
      {
        this = (ServantCombineControl_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
        byte_4D25F19 = 1;
      }
      if ( !v13 )
        break;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)v13,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0);
      this = (ServantCombineControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0);
      if ( !this )
        break;
      v32.fields.x = 0.5;
      v32.fields.y = 0.5;
      v32.fields.z = 0.5;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v32, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v12,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      baseData = v4->fields.baseData;
      v16 = (MaterialSvtInfo_o *)Component_object;
      v17 = (MaterialSvtInfo_ClickDelegate_o *)sub_1C942E4(MaterialSvtInfo_ClickDelegate_TypeInfo);
      MaterialSvtInfo_ClickDelegate___ctor(
        v17,
        (Il2CppObject *)v4,
        (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
        0);
      if ( !v16 )
        break;
      MaterialSvtInfo__setMaterialSvtInfo(v16, v8, baseData, v9, 1, 0, v17, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ServantCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !this )
        break;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v9,
                 (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this = (ServantCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitMaster___);
      if ( !Entity )
        break;
      v19 = (ServantLimitMaster_o *)this;
      klass = Entity[5].klass;
      monitor = Entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v31.fields.currentCryptoKey = klass;
      *(_QWORD *)&v31.fields.fakeValue = monitor;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v31, 0);
      this = (ServantCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                          0);
      if ( !v19 )
        break;
      this = (ServantCombineControl_o *)ServantLimitMaster__GetEntity(v19, v22, (int32_t)this, 0);
      if ( !this )
        break;
      if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 4 )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v24 = Method_System_Collections_Generic_List_long__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v6,
            v9,
            *(const MethodInfo_3852E68 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size] = v9;
        }
      }
      this = (ServantCombineControl_o *)UserServantEntity__isExceeded((UserServantEntity_o *)Entity, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7 )
          break;
        v26 = v7->fields._items;
        v27 = Method_System_Collections_Generic_List_long__Add__;
        ++v7->fields._version;
        if ( !v26 )
          break;
        v28 = v7->fields._size;
        if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v7,
            v9,
            *(const MethodInfo_3852E68 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = v28 + 1;
          v26->m_Items[v28] = v9;
        }
      }
      this = (ServantCombineControl_o *)UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        v4->fields._isExchangeSvtInList_k__BackingField = 1;
      if ( (unsigned int)max_length == ++v8 )
        goto LABEL_37;
    }
LABEL_41:
    sub_1C942F0(this, materialUsrSvtIdList);
  }
LABEL_37:
  if ( !v6 )
    goto LABEL_41;
  v29 = System_Collections_Generic_List_long___ToArray(
          v6,
          (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
  v4->fields.highRarityList = v29;
  this = (ServantCombineControl_o *)sub_1C9403C(&v4->fields.highRarityList, v29);
  if ( !v7 )
    goto LABEL_41;
  v30 = System_Collections_Generic_List_long___ToArray(
          v7,
          (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
  v4->fields.exceededCheckList = v30;
  sub_1C9403C(&v4->fields.exceededCheckList, v30);
  this = (ServantCombineControl_o *)v4->fields.selectGrid;
  if ( !this )
    goto LABEL_41;
  UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0);
}


void ServantCombineControl__SetCombineNullData(ServantCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  ServantCombineControl__DestroyGrid(this, method);
  ServantCombineControl__InitInfo(this, v3);
  ServantCombineControl__SetBaseSvtCardImg(this, this->fields.baseData, v4);
  ServantCombineControl__SetIsRecommendedAndClearButtonEnabled(this, 1, v5);
}


void ServantCombineControl__SetDispCardImg(
        ServantCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  struct UICharaGraphTexture_o *v5; // x1

  p_charaGraph = &this->fields.charaGraph;
  v5 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(ServantCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         usrSvtData,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v5;
  sub_1C9403C(p_charaGraph, v5);
}


void ServantCombineControl__SetExeBtnState(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v7; // x19
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D26605 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4D26605 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v7 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( combineBtnTxt )
    {
      v8.fields.r = 1.0;
      v8.fields.g = 1.0;
      v8.fields.b = 1.0;
      v8.fields.a = 1.0;
      UIWidget__set_color(combineBtnTxt, v8, 0);
      if ( v4 )
      {
        v9.fields.r = 1.0;
        v9.fields.g = 1.0;
        v9.fields.b = 1.0;
        v9.fields.a = 1.0;
        UIWidget__set_color(v4, v9, 0);
        if ( v7 )
        {
          UnityEngine_Behaviour__set_enabled(v7, 1, 0);
          UITweener__PlayForward((UITweener_o *)v7, 0);
          return;
        }
      }
    }
LABEL_14:
    sub_1C942F0(combineBtnBg, method);
  }
  if ( !combineBtnTxt )
    goto LABEL_14;
  v10.fields.r = 0.5;
  v10.fields.g = 0.5;
  v10.fields.b = 0.5;
  v10.fields.a = 1.0;
  UIWidget__set_color(combineBtnTxt, v10, 0);
  if ( !v4 )
    goto LABEL_14;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color(v4, v11, 0);
  if ( !v7 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v7, 0, 0);
}


void ServantCombineControl__SetHaveQpInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4D265F7 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9253/*"N0"*/);
    byte_4D265F7 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_65931416(
                         (int64_t)&this->fields.haveQpVal,
                         (System_String_o *)StringLiteral_9253/*"N0"*/,
                         0),
        !haveQpLb) )
  {
    sub_1C942F0(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)SelfUserGame, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantCombineControl__SetIsRecommendedAndClearButtonEnabled(
        ServantCombineControl_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UICommonButton_o *recommendedButton; // x0
  UICommonButton_o *v6; // x21
  bool isSelectBase; // w8
  UserServantEntity_o *baseData; // x0
  UICommonButton_o *clearMaterialButton; // x21
  char v10; // w8

  recommendedButton = this->fields.recommendedButton;
  if ( isEnabled )
    v6 = recommendedButton;
  else
    v6 = 0;
  if ( !isEnabled )
  {
    isSelectBase = 0;
LABEL_9:
    if ( !recommendedButton )
      goto LABEL_18;
    goto LABEL_13;
  }
  isSelectBase = this->fields.isSelectBase;
  if ( !isSelectBase )
    goto LABEL_9;
  baseData = this->fields.baseData;
  if ( baseData )
    isSelectBase = !UserServantEntity__isLevelMax(baseData, 0);
  else
    isSelectBase = 0;
  recommendedButton = v6;
  if ( !v6 )
LABEL_18:
    sub_1C942F0(recommendedButton, isEnabled);
LABEL_13:
  UICommonButton__SetButtonEnable(recommendedButton, isSelectBase, 1, 0);
  clearMaterialButton = this->fields.clearMaterialButton;
  if ( isEnabled )
  {
    recommendedButton = (UICommonButton_o *)BasicHelper__IsNullOrEmpty(
                                              (System_Collections_ICollection_o *)this->fields._selectMaterialUsrSvtIdList_k__BackingField,
                                              0);
    v10 = (unsigned __int8)recommendedButton ^ 1;
  }
  else
  {
    v10 = 0;
  }
  if ( !clearMaterialButton )
    goto LABEL_18;
  UICommonButton__SetButtonEnable(clearMaterialButton, v10 & 1, 1, 0);
}


void ServantCombineControl__SetMaterialToCombineData(
        ServantCombineControl_o *this,
        SetCombineData_o *recommendedCombineData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_long__o *v7; // x0
  __int64 v8; // x1
  struct CombineRootComponent_o *combineRootComponent; // x8
  CombineServantListViewManager_o *combineSvtManager; // x21
  const MethodInfo *v11; // x2

  if ( (byte_4D2660B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_long___);
    byte_4D2660B = 1;
  }
  ServantCombineControl__SetCombineData(this, recommendedCombineData, 1, v3);
  ServantCombineControl__SetStateInfoMsg(this, 2, v6);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent
    || (combineSvtManager = combineRootComponent->fields.combineSvtManager,
        v7 = (System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._selectMaterialUsrSvtIdList_k__BackingField,
                                                          (const MethodInfo_31E13D4 *)Method_System_Linq_Enumerable_ToList_long___),
        !combineSvtManager) )
  {
    sub_1C942F0(v7, v8);
  }
  CombineServantListViewManager__SetRecomendedSelectedMaterialList(combineSvtManager, v7, recommendedCombineData, 0);
  ServantCombineControl__SetIsRecommendedAndClearButtonEnabled(this, 1, v11);
}


void ServantCombineControl__SetRecommendedMaterial(
        ServantCombineControl_o *this,
        bool isAutoSet,
        const MethodInfo *method)
{
  __int64 v5; // x21
  RecommenededConfigDialog_o *recommendedConfigDialog; // x0
  SetCombineData_o *v7; // x1
  const MethodInfo *v8; // x1
  SetCombineData_o *RecommendedCombineData; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  __int64 *v12; // x8
  System_Collections_IEnumerator_o *v13; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  Il2CppObject *v15; // x19
  System_String_o *v16; // x20
  ServantCombineControl___c_c *v17; // x8
  System_Action_o *_9__115_1; // x22
  __int64 v19; // x21
  Il2CppObject *v20; // x23
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int32_t v22; // w8
  CommonUI_o *v23; // x0
  System_String_o *v24; // x1
  Il2CppObject *Instance; // x19
  System_String_o *v26; // x20
  System_String_o *v27; // x22
  System_String_o *v28; // x23
  CommonConfirmDialog_ClickDelegate_o *v29; // x24
  Il2CppObject *v30; // x19

  if ( (byte_4D2660A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_ServantCombineControl___c__SetRecommendedMaterial_b__115_1__);
    sub_1C94098(&Method_ServantCombineControl___c__DisplayClass115_0__SetRecommendedMaterial_b__0__);
    sub_1C94098(&Method_ServantCombineControl___c__DisplayClass115_0__SetRecommendedMaterial_b__2__);
    sub_1C94098(&ServantCombineControl___c__DisplayClass115_0_TypeInfo);
    sub_1C94098(&ServantCombineControl___c_TypeInfo);
    sub_1C94098(&StringLiteral_11052/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/);
    sub_1C94098(&StringLiteral_11051/*"RECOMMENDED_NOT_HAVE_QP"*/);
    sub_1C94098(&StringLiteral_11041/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP_CONFIRM"*/);
    sub_1C94098(&StringLiteral_11050/*"RECOMMENDED_NOT_EXIST_MSG"*/);
    sub_1C94098(&StringLiteral_3691/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C94098(&StringLiteral_3689/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C94098(&StringLiteral_11039/*"RECOMMENDED_AUTO_SET_NOT_EXIST_MSG"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_11040/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP"*/);
    byte_4D2660A = 1;
  }
  v5 = sub_1C942E4(ServantCombineControl___c__DisplayClass115_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C(v5 + 16, this);
  this->fields.isQpCondClear = 1;
  RecommendedCombineData = ServantCombineControl__GetRecommendedCombineData(this, v8);
  *(_QWORD *)(v5 + 24) = RecommendedCombineData;
  sub_1C9403C(v5 + 24, RecommendedCombineData);
  v7 = *(SetCombineData_o **)(v5 + 24);
  if ( v7 )
  {
    if ( this->fields.isQpCondClear )
    {
      recommendedConfigDialog = this->fields.recommendedConfigDialog;
      if ( recommendedConfigDialog )
      {
        RecommenededConfigDialog__Close(recommendedConfigDialog, 0, v10);
        ServantCombineControl__SetMaterialToCombineData(this, *(SetCombineData_o **)(v5 + 24), v11);
        return;
      }
LABEL_35:
      sub_1C942F0(recommendedConfigDialog, v7);
    }
    if ( isAutoSet )
    {
      ServantCombineControl__SetMaterialToCombineData(this, v7, v10);
      v12 = &StringLiteral_11041/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP_CONFIRM"*/;
      goto LABEL_15;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11052/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/, 0);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3691/*"COMMON_CONFIRM_DECIDE"*/, 0);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3689/*"COMMON_CONFIRM_CANCEL"*/, 0);
    v29 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C942E4(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v29,
      (Il2CppObject *)v5,
      Method_ServantCombineControl___c__DisplayClass115_0__SetRecommendedMaterial_b__0__,
      0);
    if ( !Instance )
      goto LABEL_35;
    CommonUI__OpenConfirmDialog_31583024(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v26,
      v27,
      v28,
      v29,
      0,
      0,
      0,
      0);
  }
  else
  {
    if ( this->fields.isQpCondClear )
    {
      if ( isAutoSet )
      {
        v12 = &StringLiteral_11039/*"RECOMMENDED_AUTO_SET_NOT_EXIST_MSG"*/;
LABEL_15:
        v13 = ServantCombineControl__FadeAutoSetAnnounceLabel(this, (System_String_o *)*v12, v10);
        started = UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, v13, 0);
        this->fields.autoSetAnnounceCoroutine = started;
        sub_1C9403C(&this->fields.autoSetAnnounceCoroutine, started);
        return;
      }
      v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      recommendedConfigDialog = (RecommenededConfigDialog_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_11050/*"RECOMMENDED_NOT_EXIST_MSG"*/,
                                                                0);
      v16 = (System_String_o *)recommendedConfigDialog;
      v17 = ServantCombineControl___c_TypeInfo;
      if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
        v17 = ServantCombineControl___c_TypeInfo;
      }
      _9__115_1 = v17->static_fields->__9__115_1;
      v19 = StringLiteral_1/*""*/;
      if ( !_9__115_1 )
      {
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          v17 = ServantCombineControl___c_TypeInfo;
        }
        v20 = (Il2CppObject *)v17->static_fields->__9;
        _9__115_1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
        System_Action___ctor(_9__115_1, v20, Method_ServantCombineControl___c__SetRecommendedMaterial_b__115_1__, 0);
        static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        static_fields->__9__115_1 = _9__115_1;
        recommendedConfigDialog = (RecommenededConfigDialog_o *)sub_1C9403C(&static_fields->__9__115_1, _9__115_1);
      }
      if ( !v15 )
        goto LABEL_35;
      v22 = 26;
      v23 = (CommonUI_o *)v15;
      v24 = (System_String_o *)v19;
    }
    else
    {
      if ( isAutoSet )
      {
        v12 = &StringLiteral_11040/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP"*/;
        goto LABEL_15;
      }
      v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11051/*"RECOMMENDED_NOT_HAVE_QP"*/, 0);
      _9__115_1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__115_1,
        (Il2CppObject *)v5,
        Method_ServantCombineControl___c__DisplayClass115_0__SetRecommendedMaterial_b__2__,
        0);
      if ( !v30 )
        goto LABEL_35;
      v23 = (CommonUI_o *)v30;
      v24 = (System_String_o *)StringLiteral_1/*""*/;
      v22 = 28;
    }
    CommonUI__OpenNotificationDialog(v23, v24, v16, _9__115_1, -1, 0, 0, 0, 0, v22, 0, 0, 0, 0.0, 0, 0);
  }
}


void ServantCombineControl__SetSelectMaterialEnable(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *preSelectBaseLb; // x0

  preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
  if ( !preSelectBaseLb
    || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0),
        (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.selectMaterialSvtBtn) == 0)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)preSelectBaseLb, this->fields.isSelectBase, 0),
        (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0) )
  {
    sub_1C942F0(preSelectBaseLb, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantCombineControl__SetStateInfoMsg(ServantCombineControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v6; // x21
  __int64 *v7; // x8
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4D26606 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_7459/*"INFO_MSG_COMBINE_MATERIAL"*/);
    sub_1C94098(&StringLiteral_7468/*"INFO_MSG_SVTCOMBINE_BASE"*/);
    sub_1C94098(&StringLiteral_5794/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1C94098(&StringLiteral_12237/*"SHORT_QP_INFO_MSG"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D26606 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_25:
    sub_1C942F0(detailInfoLb, *(_QWORD *)&state);
  }
  v8.fields.r = 0.0;
  v8.fields.a = 1.0;
  v8.fields.g = 0.87891;
  v8.fields.b = 0.98828;
  v6 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v8, 0);
  if ( v3 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_5794/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v9.fields.r = 1.0;
      v9.fields.g = 1.0;
      v9.fields.b = 1.0;
      v9.fields.a = 1.0;
      UIWidget__set_color(v6, v9, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_12237/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_7459/*"INFO_MSG_COMBINE_MATERIAL"*/;
  }
  else
  {
    if ( v3 )
    {
      *(_QWORD *)&state = StringLiteral_1/*""*/;
      goto LABEL_23;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_7468/*"INFO_MSG_SVTCOMBINE_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v7, 0);
LABEL_23:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0);
}


void ServantCombineControl__SetupCampaign(
        ServantCombineControl_o *this,
        EventCampaignEntity_o *eventInfoData,
        const MethodInfo *method)
{
  ServantCombineControl_o *v4; // x19
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  int32_t target; // w8
  float y; // s9
  float x; // s10
  float z; // s8
  int v10; // w8
  int v11; // w9
  UISprite_o *campaign; // x21
  System_String_o *v13; // x0
  UILabel_o *campaignLabel; // x20
  __int64 v15; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4D265FB & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ServantCombineControl_o *)sub_1C94098(&StringLiteral_20807/*"img_txt_campaign_"*/);
    byte_4D265FB = 1;
  }
  v15 = 0;
  if ( !byte_4D25F19 )
  {
    this = (ServantCombineControl_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  if ( !eventInfoData )
LABEL_24:
    sub_1C942F0(this, eventInfoData);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  target = eventInfoData->fields.target;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( target > 5 )
  {
    if ( target != 27 )
    {
      if ( (target & 0xFFFFFFFE) != 0x20 )
        goto LABEL_15;
      goto LABEL_13;
    }
LABEL_11:
    v10 = 1;
    z = 0.0;
    v11 = 1113849856;
LABEL_14:
    y = 4.0;
    x = *(float *)&v11;
    HIDWORD(v15) = v10;
    goto LABEL_15;
  }
  if ( target == 2 )
    goto LABEL_11;
  if ( (target & 0xFFFFFFFE) == 4 )
  {
LABEL_13:
    v10 = 2;
    z = 0.0;
    v11 = 1119748096;
    goto LABEL_14;
  }
LABEL_15:
  campaign = v4->fields.campaign;
  v13 = System_Int32__ToString((int32_t)&v15 + 4, 0);
  this = (ServantCombineControl_o *)System_String__Concat_64417744((System_String_o *)StringLiteral_20807/*"img_txt_campaign_"*/, v13, 0);
  if ( !campaign )
    goto LABEL_24;
  UISprite__set_spriteName(campaign, (System_String_o *)this, 0);
  this = (ServantCombineControl_o *)v4->fields.campaign;
  if ( !this )
    goto LABEL_24;
  ((void (__fastcall *)(ServantCombineControl_o *, Il2CppMethodPointer))this->klass[1].vtable._5_OnClickHelp.method)(
    this,
    this->klass[1].vtable._6_GetTutorialOpenType.methodPtr);
  this = (ServantCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)EventCampaignMaster__getData(
                                      (EventCampaignMaster_o *)this,
                                      eventInfoData->fields.eventId,
                                      0);
  if ( !this )
    goto LABEL_24;
  LODWORD(v15) = SLODWORD(this->fields.baseUserServantEntity) / 1000;
  campaignLabel = v4->fields.campaignLabel;
  this = (ServantCombineControl_o *)System_Int32__ToString((int32_t)&v15, 0);
  if ( !campaignLabel )
    goto LABEL_24;
  UILabel__set_text(campaignLabel, (System_String_o *)this, 0);
  this = (ServantCombineControl_o *)v4->fields.campaignLabel;
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_24;
  v16.fields.x = x;
  v16.fields.y = y;
  v16.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v16, 0);
}


void ServantCombineControl__ShowExceededSvtDlg(ServantCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4D26601 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_3780/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_4D26601 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3780/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || (exeCombineDlg = this->fields.exeCombineDlg) == 0 )
    sub_1C942F0(SelfUserGame, v5);
  SetRarityDialogControl__SetExceedMaterialInfo(
    exeCombineDlg,
    this->fields.baseData,
    this->fields.exceededCheckList,
    v3,
    this->fields._spendQpVal_k__BackingField,
    SelfUserGame->fields.qp,
    0);
}


void ServantCombineControl__ShowRareSvtDlg(ServantCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x20
  DataManager_o *SelfUserGame; // x0
  __int64 v5; // x1
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  int64_t lockCountObj; // x21
  signed __int64 v8; // x23
  unsigned __int64 max_length_low; // x27
  int64_t v10; // x22

  if ( (byte_4D26600 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_3780/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_4D26600 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3780/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0);
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_15;
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_15;
  lockCountObj = (int64_t)SelfUserGame->fields.lockCountObj;
  v8 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(selectMaterialUsrSvtIdList_k__BackingField->max_length);
    if ( v8 >= (int)max_length_low )
      break;
    if ( v8 >= max_length_low )
      sub_1C942F8(SelfUserGame);
    v10 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v8];
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                        SelfUserGame,
                                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( SelfUserGame )
      {
        SelfUserGame = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                          v10,
                                          (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( SelfUserGame )
        {
          SelfUserGame = (DataManager_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0);
          if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
            break;
          selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
          ++v8;
          if ( selectMaterialUsrSvtIdList_k__BackingField )
            continue;
        }
      }
    }
    goto LABEL_15;
  }
  SelfUserGame = (DataManager_o *)this->fields.exeCombineDlg;
  if ( !SelfUserGame )
LABEL_15:
    sub_1C942F0(SelfUserGame, v5);
  SetRarityDialogControl__SetConfirmInfo(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    this->fields.highRarityList,
    v3,
    this->fields._spendQpVal_k__BackingField,
    lockCountObj,
    v8 < (int)max_length_low,
    this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0,
    0);
}


void ServantCombineControl__StopAutoSetAnnounceLabelCoroutine(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *autoSetAnnounceCoroutine; // x1
  UnityEngine_Component_o *autoSetAnnounceObj; // x0
  Il2CppObject *component; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D26613 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_TryGetComponent_TweenAlpha___);
    byte_4D26613 = 1;
  }
  component = 0;
  autoSetAnnounceCoroutine = this->fields.autoSetAnnounceCoroutine;
  if ( autoSetAnnounceCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_72096784((UnityEngine_MonoBehaviour_o *)this, autoSetAnnounceCoroutine, 0);
    this->fields.autoSetAnnounceCoroutine = 0;
    sub_1C9403C(&this->fields.autoSetAnnounceCoroutine, 0);
  }
  autoSetAnnounceObj = (UnityEngine_Component_o *)this->fields.autoSetAnnounceObj;
  if ( !autoSetAnnounceObj )
    goto LABEL_12;
  if ( UnityEngine_Component__TryGetComponent_object_(
         autoSetAnnounceObj,
         &component,
         (const MethodInfo_3193A00 *)Method_UnityEngine_Component_TryGetComponent_TweenAlpha___) )
  {
    autoSetAnnounceObj = (UnityEngine_Component_o *)component;
    if ( !component )
      goto LABEL_12;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)component, 0, 0);
  }
  autoSetAnnounceObj = (UnityEngine_Component_o *)this->fields.autoSetAnnounceObj;
  if ( !autoSetAnnounceObj
    || (autoSetAnnounceObj = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(autoSetAnnounceObj, 0)) == 0 )
  {
LABEL_12:
    sub_1C942F0(autoSetAnnounceObj, autoSetAnnounceCoroutine);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)autoSetAnnounceObj, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantCombineControl__TutorialBlock(ServantCombineControl_o *this, int32_t progress, const MethodInfo *method)
{
  UnityEngine_GameObject_o *helpBtn; // x0
  __int64 v6; // x1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x1
  __int64 naturalAligment; // x9
  Il2CppObject *Component_object; // x0
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x21
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v29; // x0

  if ( (byte_4D26611 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C94098(&Method_GameObjectExtensions_SafeGetComponent_Collider___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&UnityEngine_Transform_TypeInfo);
    byte_4D26611 = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_65;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 0, 1, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_65;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectGrid;
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_65;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)helpBtn, 0);
  if ( !Enumerator )
    sub_1C942F0(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_14;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v11 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v11)(Enumerator, *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_21;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1];
    }
    else
    {
LABEL_21:
      v15 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_63;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v16->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      v16 = (UnityEngine_Component_o *)sub_1C9468C(v16);
LABEL_63:
      sub_1C942F0(v16, v17);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v16,
                         (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_object )
      sub_1C942F0(0, v20);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 0, 0);
  }
  v21 = sub_1C941D4(Enumerator, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v22 = *(_QWORD *)v21;
    v23 = v21;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_33;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_33:
      v26 = sub_1C6A420(v21, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
  helpBtn = this->fields.charaGraphBase;
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_65;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)exeCombineDlg->fields.cancelBtnLb;
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_65;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0);
  if ( progress == 1 )
  {
    helpBtn = this->fields.charaGraphBase;
    if ( !helpBtn )
      goto LABEL_65;
    helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(helpBtn, 0);
    if ( !helpBtn )
      goto LABEL_65;
    helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0);
    if ( !helpBtn )
      goto LABEL_65;
    helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)helpBtn,
                                            (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !helpBtn )
      goto LABEL_65;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0);
    helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
    if ( !helpBtn )
      goto LABEL_65;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
    helpBtn = (UnityEngine_GameObject_o *)GameObjectExtensions__SafeGetComponent_object_(
                                            gameObject,
                                            (const MethodInfo_31F6278 *)Method_GameObjectExtensions_SafeGetComponent_Collider___);
    if ( !helpBtn )
      goto LABEL_65;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0);
    helpBtn = (UnityEngine_GameObject_o *)this->fields.clearMaterialButton;
    if ( !helpBtn )
      goto LABEL_65;
    v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
    helpBtn = (UnityEngine_GameObject_o *)GameObjectExtensions__SafeGetComponent_object_(
                                            v29,
                                            (const MethodInfo_31F6278 *)Method_GameObjectExtensions_SafeGetComponent_Collider___);
    if ( !helpBtn )
      goto LABEL_65;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0);
  }
  else if ( progress == 3 )
  {
    helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
    if ( helpBtn )
    {
      helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)helpBtn,
                                              (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( helpBtn )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0);
        helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
        if ( helpBtn )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))helpBtn->klass[1]._1.nestedTypes)(
            helpBtn,
            0,
            1,
            helpBtn->klass[1]._1.implementedInterfaces);
          return;
        }
      }
    }
LABEL_65:
    sub_1C942F0(helpBtn, *(_QWORD *)&progress);
  }
}


void ServantCombineControl__UnBlockTutorial(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *helpBtn; // x0
  __int64 v4; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 naturalAligment; // x9
  Il2CppObject *Component_object; // x0
  __int64 v18; // x1
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x20
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8
  struct SetRarityDialogControl_o *v26; // x8
  struct SetRarityDialogControl_o *v27; // x8

  if ( (byte_4D26610 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&UnityEngine_Transform_TypeInfo);
    byte_4D26610 = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_63;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectGrid;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_63;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)helpBtn, 0);
  if ( !Enumerator )
    sub_1C942F0(0, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_14;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v9 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(Enumerator, *(_QWORD *)(v9 + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_21;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
    }
    else
    {
LABEL_21:
      v13 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       Enumerator,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_1C942F0(0, v15);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v14->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      helpBtn = (UnityEngine_GameObject_o *)sub_1C9468C(v14);
      goto LABEL_63;
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v14,
                         (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_object )
      sub_1C942F0(0, v18);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 1, 0);
  }
  v19 = sub_1C941D4(Enumerator, System_IDisposable_TypeInfo);
  if ( v19 )
  {
    v20 = *(_QWORD *)v19;
    v21 = v19;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_33;
      }
      v24 = v20 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_33:
      v24 = sub_1C6A420(v19, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
  }
  helpBtn = this->fields.charaGraphBase;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_63;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)exeCombineDlg->fields.cancelBtnLb;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0);
  v26 = this->fields.exeCombineDlg;
  if ( !v26 )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)v26->fields.cancelBtnLb;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, const char *))helpBtn->klass[1]._1.name)(
                                          helpBtn,
                                          1,
                                          helpBtn->klass[1]._1.namespaze);
  v27 = this->fields.exeCombineDlg;
  if ( !v27
    || (helpBtn = (UnityEngine_GameObject_o *)v27->fields.cancelBtnLb) == 0
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)helpBtn,
                                                0)) == 0
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0)) == 0
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0)) == 0
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                helpBtn,
                                                (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIButton___)) == 0
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))helpBtn->klass[1]._1.nestedTypes)(
          helpBtn,
          0,
          1,
          helpBtn->klass[1]._1.implementedInterfaces),
        (helpBtn = (UnityEngine_GameObject_o *)this->fields.clearMaterialButton) == 0) )
  {
LABEL_63:
    sub_1C942F0(helpBtn, method);
  }
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0);
}


void ServantCombineControl__Update(ServantCombineControl_o *this, const MethodInfo *method)
{
  void *campaign; // x0
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaignListPerSelectSvt; // x8
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v5; // x8
  int size; // w8
  const MethodInfo *v7; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  int64_t v9; // x20
  int *v10; // x8
  Il2CppObject *Item; // x1
  const MethodInfo *v12; // x2
  TransitionCalculator_float__o *campaignAlphaCalculator; // x0
  float realtimeSinceStartup; // s0
  float campaignAlphaAnimTimeOld; // s9
  float v16; // s8
  MenuListControl_c *v17; // x0
  const MethodInfo *v18; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x20
  int64_t v20; // x20
  int *v21; // x8
  int32_t campaiginPerSelectSvtListIndex; // w1
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x2
  Il2CppObject *v25; // x0
  const MethodInfo *v26; // x2
  struct AlphaTransitionCalculator_o *v27; // x8

  if ( (byte_4D265F2 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1C94098(&MenuListControl_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_TransitionCalculator_float__Update__);
    sub_1C94098(&Method_TransitionCalculator_float__get_Current__);
    byte_4D265F2 = 1;
  }
  if ( this->fields.isSelectBase )
  {
    campaign = this->fields.campaign;
    if ( !campaign )
      goto LABEL_67;
    campaign = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)campaign, 0);
    campaignListPerSelectSvt = this->fields.campaignListPerSelectSvt;
    if ( campaignListPerSelectSvt )
    {
      method = (const MethodInfo *)(campaignListPerSelectSvt->fields._size > 0);
      if ( !campaign )
        goto LABEL_67;
    }
    else
    {
      method = 0;
      if ( !campaign )
        goto LABEL_67;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, (bool)method, 0);
    v5 = this->fields.campaignListPerSelectSvt;
    if ( v5 )
    {
      size = v5->fields._size;
      if ( size >= 1 )
      {
        if ( size == 1 )
        {
          campaign = this->fields.campaign;
          if ( campaign )
          {
            (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)campaign + 440LL))(
              campaign,
              *(_QWORD *)(*(_QWORD *)campaign + 448LL),
              1.0);
            campaign = ServantCombineControl__get_EventMaster(this, v7);
            if ( this->fields.campaignListPerSelectSvt )
            {
              v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)campaign;
              campaign = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)this->fields.campaignListPerSelectSvt,
                           0,
                           (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
              if ( campaign )
              {
                campaign = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)campaign,
                             0,
                             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
                if ( campaign )
                {
                  if ( v8 )
                  {
                    campaign = DataMasterBase_object__object__int___GetEntity(
                                 v8,
                                 *((_DWORD *)campaign + 4),
                                 (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                    if ( campaign )
                    {
                      v9 = *((_QWORD *)campaign + 12);
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                      if ( v9 >= NetworkManager__getTime(0) )
                        return;
                      campaign = this->fields.campaignListPerSelectSvt;
                      if ( campaign )
                      {
                        campaign = System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)campaign,
                                     0,
                                     (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                        if ( campaign )
                        {
                          System_Collections_Generic_List_object___RemoveAt(
                            (System_Collections_Generic_List_object__o *)campaign,
                            0,
                            (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
                          campaign = this->fields.campaignListPerSelectSvt;
                          if ( campaign )
                          {
                            campaign = System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)campaign,
                                         0,
                                         (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                            if ( campaign )
                            {
                              v10 = (int *)campaign;
                              campaign = this->fields.campaignListPerSelectSvt;
                              if ( campaign )
                              {
                                if ( v10[6] <= 0 )
                                {
                                  System_Collections_Generic_List_object___RemoveAt(
                                    (System_Collections_Generic_List_object__o *)campaign,
                                    0,
                                    (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                                }
                                else
                                {
                                  campaign = System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)campaign,
                                               0,
                                               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                                  if ( !campaign )
                                    goto LABEL_67;
                                  Item = System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)campaign,
                                           0,
                                           (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
                                  ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)Item, v12);
                                }
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
          goto LABEL_67;
        }
        campaignAlphaCalculator = (TransitionCalculator_float__o *)this->fields.campaignAlphaCalculator;
        if ( !campaignAlphaCalculator )
          return;
        TransitionCalculator_float___Update(
          campaignAlphaCalculator,
          (const MethodInfo_3B5CEA4 *)Method_TransitionCalculator_float__Update__);
        campaign = this->fields.campaignAlphaCalculator;
        if ( !campaign )
          goto LABEL_67;
        if ( AlphaTransitionCalculator__IsFadeInFinished((AlphaTransitionCalculator_o *)campaign, 0) )
        {
          realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
          campaignAlphaAnimTimeOld = this->fields.campaignAlphaAnimTimeOld;
          v16 = realtimeSinceStartup;
          v17 = MenuListControl_TypeInfo;
          if ( !MenuListControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
            v17 = MenuListControl_TypeInfo;
          }
          if ( (float)(v16 - campaignAlphaAnimTimeOld) >= v17->static_fields->ALPHA_ANIMATION_INTERVAL )
          {
            campaign = this->fields.campaignAlphaCalculator;
            if ( !campaign )
              goto LABEL_67;
            AlphaTransitionCalculator__StartFadeOut((AlphaTransitionCalculator_o *)campaign, 0);
          }
        }
        campaign = this->fields.campaignAlphaCalculator;
        if ( !campaign )
          goto LABEL_67;
        campaign = (void *)AlphaTransitionCalculator__IsFadeOutFinished((AlphaTransitionCalculator_o *)campaign, 0);
        if ( ((unsigned __int8)campaign & 1) != 0 )
        {
          campaign = this->fields.campaignAlphaCalculator;
          if ( !campaign )
            goto LABEL_67;
          AlphaTransitionCalculator__StartFadeIn((AlphaTransitionCalculator_o *)campaign, 0);
          this->fields.campaignAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
          campaign = ServantCombineControl__get_EventMaster(this, v18);
          if ( !this->fields.campaignListPerSelectSvt )
            goto LABEL_67;
          v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)campaign;
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.campaignListPerSelectSvt,
                       this->fields.campaiginPerSelectSvtListIndex,
                       (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
          if ( !campaign )
            goto LABEL_67;
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)campaign,
                       0,
                       (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          if ( !campaign )
            goto LABEL_67;
          if ( !v19 )
            goto LABEL_67;
          campaign = DataMasterBase_object__object__int___GetEntity(
                       v19,
                       *((_DWORD *)campaign + 4),
                       (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !campaign )
            goto LABEL_67;
          v20 = *((_QWORD *)campaign + 12);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( v20 < NetworkManager__getTime(0) )
          {
            campaign = this->fields.campaignListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaign = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)campaign,
                         this->fields.campaiginPerSelectSvtListIndex,
                         (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
            if ( !campaign )
              goto LABEL_67;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)campaign,
              0,
              (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
            campaign = this->fields.campaignListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaign = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)campaign,
                         this->fields.campaiginPerSelectSvtListIndex,
                         (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
            if ( !campaign )
              goto LABEL_67;
            v21 = (int *)campaign;
            campaign = this->fields.campaignListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaiginPerSelectSvtListIndex = this->fields.campaiginPerSelectSvtListIndex;
            if ( v21[6] <= 0 )
            {
              System_Collections_Generic_List_object___RemoveAt(
                (System_Collections_Generic_List_object__o *)campaign,
                campaiginPerSelectSvtListIndex,
                (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
            }
            else
            {
              campaign = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)campaign,
                           campaiginPerSelectSvtListIndex,
                           (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
              if ( !campaign )
                goto LABEL_67;
              v23 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)campaign,
                      0,
                      (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
              ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)v23, v24);
            }
          }
          campaign = this->fields.campaignListPerSelectSvt;
          method = (const MethodInfo *)(unsigned int)(this->fields.campaiginPerSelectSvtListIndex + 1);
          this->fields.campaiginPerSelectSvtListIndex = (int)method;
          if ( !campaign )
            goto LABEL_67;
          if ( *((_DWORD *)campaign + 6) <= (int)method )
          {
            LODWORD(method) = 0;
            this->fields.campaiginPerSelectSvtListIndex = 0;
          }
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)campaign,
                       (int32_t)method,
                       (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
          if ( !campaign )
LABEL_67:
            sub_1C942F0(campaign, method);
          v25 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)campaign,
                  0,
                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)v25, v26);
        }
        v27 = this->fields.campaignAlphaCalculator;
        if ( v27 )
        {
          campaign = this->fields.campaign;
          this->fields.campaignAlphaAnimNow = v27->fields._Current_k__BackingField;
          if ( campaign )
          {
            (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)campaign + 440LL))(
              campaign,
              *(_QWORD *)(*(_QWORD *)campaign + 448LL));
            return;
          }
        }
        goto LABEL_67;
      }
    }
  }
}


void ServantCombineControl___FadeAutoSetAnnounceLabel_b__124_0(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *autoSetAnnounceObj; // x0

  autoSetAnnounceObj = (UnityEngine_Component_o *)this->fields.autoSetAnnounceObj;
  if ( !autoSetAnnounceObj
    || (autoSetAnnounceObj = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(autoSetAnnounceObj, 0)) == 0 )
  {
    sub_1C942F0(autoSetAnnounceObj, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)autoSetAnnounceObj, 0, 0);
}


void ServantCombineControl___OnClickRecommendedButton_b__114_0(
        ServantCombineControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  RecommendedConfigSaveData_o *ConfigSaveData; // x0
  __int64 *v6; // x8
  System_String_o *v7; // x22
  UILabel_o *autoRecommendedButtonLabel; // x21
  System_String_o *recommendedConfigDialog; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4D26618 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&RecommendedConfigSaveData_TypeInfo);
    sub_1C94098(&StringLiteral_2089/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/);
    sub_1C94098(&StringLiteral_2088/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/);
    byte_4D26618 = 1;
  }
  if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
  ConfigSaveData = RecommendedConfigSaveData__LoadConfigSaveData(0);
  if ( ConfigSaveData && RecommendedConfigSaveData__IsAutoSetOn(ConfigSaveData, 0) )
    v6 = &StringLiteral_2089/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/;
  else
    v6 = &StringLiteral_2088/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/;
  v7 = (System_String_o *)*v6;
  autoRecommendedButtonLabel = this->fields.autoRecommendedButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  recommendedConfigDialog = LocalizationManager__Get(v7, 0);
  if ( !autoRecommendedButtonLabel )
    goto LABEL_16;
  UILabel__set_text(autoRecommendedButtonLabel, recommendedConfigDialog, 0);
  if ( isDecide )
  {
    ServantCombineControl__SetRecommendedMaterial(this, 0, v11);
    return;
  }
  recommendedConfigDialog = (System_String_o *)this->fields.recommendedConfigDialog;
  if ( !recommendedConfigDialog )
LABEL_16:
    sub_1C942F0(recommendedConfigDialog, v10);
  RecommenededConfigDialog__Close((RecommenededConfigDialog_o *)recommendedConfigDialog, 0, v11);
}


System_Collections_Generic_List_EventCampaignEntity__o *ServantCombineControl___SetCampaignListPerSelectSvt_b__94_0(
        ServantCombineControl_o *this,
        System_Linq_IGrouping_int__EventCampaignEntity__o *g,
        const MethodInfo *method)
{
  ServantCombineControl___c_c *v5; // x0
  System_Func_object__object__o *_9__94_3; // x21
  Il2CppObject *v7; // x22
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v9; // x0
  ServantCombineControl___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20
  System_Func_object__int__o *_9__94_4; // x21
  Il2CppObject *v13; // x22
  struct ServantCombineControl___c_StaticFields *v14; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v15; // x20
  System_Func_object__long__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4D26616 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_EventCampaignEntity__EventCampaignEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_ThenBy_EventCampaignEntity__long___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
    sub_1C94098(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_1C94098(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    sub_1C94098(&System_Func_EventCampaignEntity__long__TypeInfo);
    sub_1C94098(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__94_5__);
    sub_1C94098(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__94_3__);
    sub_1C94098(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__94_4__);
    sub_1C94098(&ServantCombineControl___c_TypeInfo);
    byte_4D26616 = 1;
  }
  v5 = ServantCombineControl___c_TypeInfo;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v5 = ServantCombineControl___c_TypeInfo;
  }
  _9__94_3 = (System_Func_object__object__o *)v5->static_fields->__9__94_3;
  if ( !_9__94_3 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ServantCombineControl___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__94_3 = (System_Func_object__object__o *)sub_1C942E4(System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__94_3,
      v7,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__94_3__,
      0);
    static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    static_fields->__9__94_3 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__94_3;
    sub_1C9403C(&static_fields->__9__94_3, _9__94_3);
  }
  v9 = System_Linq_Enumerable__Select_object__object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)g,
         (System_Func_TSource__TResult__o *)_9__94_3,
         (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_EventCampaignEntity__EventCampaignEntity___);
  v10 = ServantCombineControl___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)v9;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v10 = ServantCombineControl___c_TypeInfo;
  }
  _9__94_4 = (System_Func_object__int__o *)v10->static_fields->__9__94_4;
  if ( !_9__94_4 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = ServantCombineControl___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__94_4 = (System_Func_object__int__o *)sub_1C942E4(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__94_4,
      v13,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__94_4__,
      0);
    v14 = ServantCombineControl___c_TypeInfo->static_fields;
    v14->__9__94_4 = (struct System_Func_EventCampaignEntity__int__o *)_9__94_4;
    sub_1C9403C(&v14->__9__94_4, _9__94_4);
  }
  v15 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v11,
          (System_Func_TSource__TKey__o *)_9__94_4,
          (const MethodInfo_31CC684 *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  v16 = (System_Func_object__long__o *)sub_1C942E4(System_Func_EventCampaignEntity__long__TypeInfo);
  System_Func_object__long____ctor(
    v16,
    (Il2CppObject *)this,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__94_5__,
    0);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__long_(
                                                               v15,
                                                               (System_Func_TSource__TKey__o *)v16,
                                                               (const MethodInfo_31DBADC *)Method_System_Linq_Enumerable_ThenBy_EventCampaignEntity__long___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v17,
                                                                     (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
}


int64_t ServantCombineControl___SetCampaignListPerSelectSvt_b__94_5(
        ServantCombineControl_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  void *EventMaster; // x0
  __int64 v6; // x1

  if ( (byte_4D26617 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_4D26617 = 1;
  }
  EventMaster = ServantCombineControl__get_EventMaster(this, (const MethodInfo *)x);
  if ( !x
    || !EventMaster
    || (EventMaster = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)EventMaster,
                        x->fields.eventId,
                        (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0 )
  {
    sub_1C942F0(EventMaster, v6);
  }
  return *((_QWORD *)EventMaster + 12);
}


int32_t ServantCombineControl___SetCampaignListPerSelectSvt_g__GetEquivalentTarget_94_2(
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  int32_t target; // w8

  if ( !entity )
    sub_1C942F0(0, method);
  target = entity->fields.target;
  switch ( target )
  {
    case 27:
      return 2;
    case 32:
      return 4;
    case 33:
      return 5;
  }
  return entity->fields.target;
}


EventMaster_o *ServantCombineControl__get_EventMaster(ServantCombineControl_o *this, const MethodInfo *method)
{
  EventMaster_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  EventMaster_o **p_eventMaster; // x19
  Il2CppObject *MasterData_object; // x0

  if ( (byte_4D265F1 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D265F1 = 1;
  }
  result = this->fields.eventMaster;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C942F0(0, v5);
    p_eventMaster = &this->fields.eventMaster;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMaster___);
    *p_eventMaster = (EventMaster_o *)MasterData_object;
    sub_1C9403C(p_eventMaster, MasterData_object);
    return *p_eventMaster;
  }
  return result;
}


int32_t ServantCombineControl__get_getExpVal(ServantCombineControl_o *this, const MethodInfo *method)
{
  return this->fields._getExpVal_k__BackingField;
}


bool ServantCombineControl__get_isExchangeSvtInList(ServantCombineControl_o *this, const MethodInfo *method)
{
  return this->fields._isExchangeSvtInList_k__BackingField;
}


System_Int64_array *ServantCombineControl__get_selectMaterialUsrSvtIdList(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  return this->fields._selectMaterialUsrSvtIdList_k__BackingField;
}


int32_t ServantCombineControl__get_spendQpVal(ServantCombineControl_o *this, const MethodInfo *method)
{
  return this->fields._spendQpVal_k__BackingField;
}


void ServantCombineControl__set_getExpVal(ServantCombineControl_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._getExpVal_k__BackingField = value;
}


void ServantCombineControl__set_isExchangeSvtInList(
        ServantCombineControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isExchangeSvtInList_k__BackingField = value;
}


void ServantCombineControl__set_selectMaterialUsrSvtIdList(
        ServantCombineControl_o *this,
        System_Int64_array *value,
        const MethodInfo *method)
{
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = value;
  sub_1C9403C(&this->fields._selectMaterialUsrSvtIdList_k__BackingField, value);
}


void ServantCombineControl__set_spendQpVal(ServantCombineControl_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._spendQpVal_k__BackingField = value;
}


void ServantCombineControl__FadeAutoSetAnnounceLabel_d__124___ctor(
        ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ServantCombineControl__FadeAutoSetAnnounceLabel_d__124__MoveNext(
        ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *this,
        const MethodInfo *method)
{
  ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *v2; // x19
  int32_t _1__state; // w8
  struct ServantCombineControl_o *_4__this; // x20
  UILabel_o *autoSetAnnounceLabel; // x21
  System_String_o *localizationKey; // x22
  struct CombineRootComponent_o *v7; // x8
  float autoSetAnnounceWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct CombineRootComponent_o *combineRootComponent; // x8
  UITweener_o *v13; // x19
  EventDelegate_Callback_o *v14; // x21

  v2 = this;
  if ( (byte_4D2661F & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_Callback_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_ServantCombineControl__FadeAutoSetAnnounceLabel_b__124_0__);
    this = (ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *)sub_1C94098(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4D2661F = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_20;
    this = (ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *)_4__this->fields.autoSetAnnounceObj;
    if ( !this )
      goto LABEL_20;
    this = (ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0);
    combineRootComponent = _4__this->fields.combineRootComponent;
    if ( !combineRootComponent )
      goto LABEL_20;
    v13 = (UITweener_o *)TweenAlpha__Begin(
                           (UnityEngine_GameObject_o *)this,
                           combineRootComponent->fields.autoSetAnnounceFadeTime,
                           0.0,
                           0);
    v14 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v14,
      (Il2CppObject *)_4__this,
      Method_ServantCombineControl__FadeAutoSetAnnounceLabel_b__124_0__,
      0);
    if ( !v13 )
      goto LABEL_20;
    UITweener__SetOnFinished(v13, v14, 0);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      autoSetAnnounceLabel = _4__this->fields.autoSetAnnounceLabel;
      localizationKey = v2->fields.localizationKey;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *)LocalizationManager__Get(localizationKey, 0);
      if ( autoSetAnnounceLabel )
      {
        UILabel__set_text(autoSetAnnounceLabel, (System_String_o *)this, 0);
        this = (ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *)_4__this->fields.autoSetAnnounceObj;
        if ( this )
        {
          this = (ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            this = (ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *)_4__this->fields.autoSetAnnounceObj;
            if ( this )
            {
              this = (ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *)((__int64 (__fastcall *)(ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *, const MethodInfo *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
                                                                                   this,
                                                                                   this->klass->vtable._8_System_Collections_IEnumerator_Reset.method,
                                                                                   1.0);
              v7 = _4__this->fields.combineRootComponent;
              if ( v7 )
              {
                autoSetAnnounceWaitTime = v7->fields.autoSetAnnounceWaitTime;
                v9 = (UnityEngine_WaitForSeconds_o *)sub_1C942E4(UnityEngine_WaitForSeconds_TypeInfo);
                UnityEngine_WaitForSeconds___ctor(v9, autoSetAnnounceWaitTime, 0);
                v2->fields.__2__current = (Il2CppObject *)v9;
                p__2__current = &v2->fields.__2__current;
                sub_1C9403C(p__2__current, v9);
                result = 1;
                *((_DWORD *)p__2__current - 2) = 1;
                return result;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1C942F0(this, method);
  }
  return 0;
}


Il2CppObject *ServantCombineControl__FadeAutoSetAnnounceLabel_d__124__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ServantCombineControl__FadeAutoSetAnnounceLabel_d__124__System_Collections_IEnumerator_Reset(
        ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *ServantCombineControl__FadeAutoSetAnnounceLabel_d__124__System_Collections_IEnumerator_get_Current(
        ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ServantCombineControl__FadeAutoSetAnnounceLabel_d__124__System_IDisposable_Dispose(
        ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantCombineControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4D26619 & 1) == 0 )
  {
    sub_1C94098(&ServantCombineControl___c_TypeInfo);
    byte_4D26619 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(ServantCombineControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantCombineControl___c_TypeInfo->static_fields->__9 = (struct ServantCombineControl___c_o *)v1;
  sub_1C9403C(ServantCombineControl___c_TypeInfo->static_fields, v1);
}


void ServantCombineControl___c___ctor(ServantCombineControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantCombineControl___c___GetRecommendedCombineData_b__117_0(
        ServantCombineControl___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return UserServantEntity__GetRarity(x, 0, 0);
}


bool ServantCombineControl___c___GetRecommendedCombineData_b__117_2(
        ServantCombineControl___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return UserServantEntity__getSvtClassId(x, 0, 0, 0) == 1001;
}


int32_t ServantCombineControl___c___GetRecommendedCombineData_b__117_3(
        ServantCombineControl___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return UserServantEntity__getSvtClassId(x, 0, 0, 0);
}


void ServantCombineControl___c___InitSvtCombine_b__86_0(ServantCombineControl___c_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *Instance; // x0
  __int64 v3; // x1
  __int64 naturalAligment; // x9
  ServantCombineControl___c_o *v5; // x0
  EventCampaignEntity_o *v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4D2661A & 1) == 0 )
  {
    sub_1C94098(&CombineRootComponent_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2661A = 1;
  }
  Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (CombineRootComponent_o *)Instance->fields.myFSM) == 0 )
    sub_1C942F0(Instance, v3);
  naturalAligment = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] == CombineRootComponent_TypeInfo )
  {
    CombineRootComponent__ShowTutorial(Instance, 0);
  }
  else
  {
    v5 = (ServantCombineControl___c_o *)sub_1C9468C(Instance);
    ServantCombineControl___c___SetCampaignListPerSelectSvt_b__94_3(v5, v6, v7);
  }
}


int32_t ServantCombineControl___c___SetCampaignListPerSelectSvt_b__94_1(
        ServantCombineControl___c_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *x,
        const MethodInfo *method)
{
  ServantCombineControl___c_o *v4; // x19
  int klass_high; // w8

  if ( (byte_4D2661B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    this = (ServantCombineControl___c_o *)sub_1C94098(&ServantCombineControl_TypeInfo);
    byte_4D2661B = 1;
  }
  if ( !x )
    goto LABEL_14;
  this = (ServantCombineControl___c_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)x,
                                          0,
                                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
  v4 = this;
  if ( !ServantCombineControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
  if ( !v4 )
LABEL_14:
    sub_1C942F0(this, x);
  klass_high = HIDWORD(v4[1].klass);
  switch ( klass_high )
  {
    case 27:
      return 2;
    case 32:
      return 4;
    case 33:
      return 5;
  }
  return HIDWORD(v4[1].klass);
}


EventCampaignEntity_o *ServantCombineControl___c___SetCampaignListPerSelectSvt_b__94_3(
        ServantCombineControl___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  return x;
}


int32_t ServantCombineControl___c___SetCampaignListPerSelectSvt_b__94_4(
        ServantCombineControl___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.value;
}


void ServantCombineControl___c___SetRecommendedMaterial_b__115_1(
        ServantCombineControl___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2661C & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2661C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void ServantCombineControl___c__DisplayClass115_0___ctor(
        ServantCombineControl___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantCombineControl___c__DisplayClass115_0___SetRecommendedMaterial_b__0(
        ServantCombineControl___c__DisplayClass115_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct ServantCombineControl_o *_4__this; // x8
  const MethodInfo *v9; // x2

  if ( (byte_4D2661D & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2661D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      Instance = (CommonUI_o *)_4__this->fields.recommendedConfigDialog;
      if ( Instance )
      {
        RecommenededConfigDialog__Close((RecommenededConfigDialog_o *)Instance, 0, v7);
        Instance = (CommonUI_o *)this->fields.__4__this;
        if ( Instance )
        {
          ServantCombineControl__SetMaterialToCombineData(
            (ServantCombineControl_o *)Instance,
            this->fields.recommendedCombineData,
            v9);
          return;
        }
      }
    }
LABEL_10:
    sub_1C942F0(Instance, v6);
  }
}


void ServantCombineControl___c__DisplayClass115_0___SetRecommendedMaterial_b__2(
        ServantCombineControl___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct ServantCombineControl_o *_4__this; // x8

  if ( (byte_4D2661E & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2661E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0), (_4__this = this->fields.__4__this) == 0)
    || (Instance = (Il2CppObject *)_4__this->fields.recommendedConfigDialog) == 0 )
  {
    sub_1C942F0(Instance, v4);
  }
  RecommenededConfigDialog__Close((RecommenededConfigDialog_o *)Instance, 0, v5);
}


void ServantCombineControl___c__DisplayClass117_0___ctor(
        ServantCombineControl___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantCombineControl___c__DisplayClass117_0___GetRecommendedCombineData_b__1(
        ServantCombineControl___c__DisplayClass117_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return UserServantEntity__getSvtClassId(x, 0, 0, 0) == this->fields.baseServantClass;
}