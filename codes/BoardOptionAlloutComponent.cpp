void __fastcall BoardOptionAlloutComponent___ctor(BoardOptionAlloutComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionAlloutComponent__SetIcon(
        BoardOptionAlloutComponent_o *this,
        int32_t questId,
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
  Il2CppObject *Master_object; // x0
  System_Collections_Generic_List_object__o *ClearDeckInfo; // x0
  __int64 v15; // x1
  System_Object_array *v16; // x20
  System_Collections_Generic_List_object__o *servantFaceIconList; // x8
  signed __int64 v18; // x22
  __int64 v19; // x2
  ServantFaceIconComponent_o *v20; // x23
  unsigned __int64 max_length; // x8
  int32_t *v22; // x21
  IconLabelInfo_o *v23; // x24
  int32_t v24; // w25
  int ServantLimitCountSealAfter; // w26
  int32_t CardImageLimitCount; // w25
  int32_t v27; // w25
  int32_t LimitCountByImageLimit_39470800; // w2
  int32_t v29; // w28
  int32_t v30; // w29
  ServantOverwriteStatus_o *v31; // x27
  ServantLimitImageMaster_o *v32; // [xsp+60h] [xbp-70h]

  if ( (byte_4AFE922 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitImageMaster___, *(_QWORD *)&questId);
    sub_1BC3008(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&IconLabelInfo_TypeInfo, v7);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__, v11);
    sub_1BC3008(&ServantOverwriteStatus_TypeInfo, v12);
    byte_4AFE922 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_object )
  {
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)UserEventAlloutBattleMaster__GetClearDeckInfo(
                                                                   (UserEventAlloutBattleMaster_o *)Master_object,
                                                                   questId,
                                                                   0LL);
    if ( !ClearDeckInfo )
      goto LABEL_31;
    v16 = System_Collections_Generic_List_object___ToArray(
            ClearDeckInfo,
            (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
    v32 = (ServantLimitImageMaster_o *)ClearDeckInfo;
    if ( !servantFaceIconList )
LABEL_31:
      sub_1BC3264(ClearDeckInfo, v15);
    v18 = 0LL;
    while ( v18 < servantFaceIconList->fields._size )
    {
      ClearDeckInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     servantFaceIconList,
                                                                     v18,
                                                                     (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
      v20 = (ServantFaceIconComponent_o *)ClearDeckInfo;
      if ( v16 && (max_length = v16->max_length, v18 < (int)max_length) )
      {
        if ( v18 >= max_length )
          sub_1BC326C(ClearDeckInfo, v15, v19);
        v22 = (int32_t *)v16->m_Items[v18];
        v23 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
        IconLabelInfo___ctor(v23, 0LL);
        if ( !v22 || !v23 )
          goto LABEL_31;
        IconLabelInfo__Set_39947860(v23, 2, v22[6], v22[6], 0, 0, 1, 0, 0, 0LL);
        v24 = v22[8];
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        ServantLimitCountSealAfter = ImageLimitCount__ConvertDispLimitCountForClient(v24, 0LL);
        if ( ServantLimitCountSealAfter <= 10 )
        {
          v27 = v22[7];
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          LimitCountByImageLimit_39470800 = ImageLimitCount__GetLimitCountByImageLimit_39470800(
                                              ServantLimitCountSealAfter,
                                              v27,
                                              0LL);
          ClearDeckInfo = (System_Collections_Generic_List_object__o *)v32;
          if ( !v32 )
            goto LABEL_31;
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         v32,
                                         v22[5],
                                         LimitCountByImageLimit_39470800,
                                         0LL);
          CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v22[5], ServantLimitCountSealAfter, 1, 0, 0LL);
        }
        else
        {
          CardImageLimitCount = v22[8];
        }
        v29 = v22[5];
        v30 = v22[7];
        v31 = (ServantOverwriteStatus_o *)sub_1BC3254(ServantOverwriteStatus_TypeInfo);
        ServantOverwriteStatus___ctor_32954528(v31, v29, v30, ServantLimitCountSealAfter, 0LL);
        if ( !v31 || !v20 )
          goto LABEL_31;
        ServantFaceIconComponent__SetIcon(
          v20,
          v22[5],
          v31->fields._Rarity_k__BackingField,
          v22[7],
          CardImageLimitCount,
          v22[9],
          v23,
          0LL,
          2,
          0,
          0,
          0LL,
          0,
          0,
          0,
          0LL,
          v31->fields._ActualRarity_k__BackingField,
          0,
          0LL);
      }
      else
      {
        if ( !ClearDeckInfo )
          goto LABEL_31;
        ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)ClearDeckInfo, 0LL);
      }
      servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
      ++v18;
      if ( !servantFaceIconList )
        goto LABEL_31;
    }
  }
}