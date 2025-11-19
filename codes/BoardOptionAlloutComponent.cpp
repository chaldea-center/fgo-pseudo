void BoardOptionAlloutComponent___ctor(BoardOptionAlloutComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BoardOptionAlloutComponent__SetIcon(BoardOptionAlloutComponent_o *this, int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_Collections_Generic_List_object__o *ClearDeckInfo; // x0
  __int64 v7; // x1
  System_Object_array *v8; // x20
  System_Collections_Generic_List_object__o *servantFaceIconList; // x8
  signed __int64 v10; // x22
  ServantFaceIconComponent_o *v11; // x23
  unsigned __int64 max_length_low; // x8
  int32_t *v13; // x21
  IconLabelInfo_o *v14; // x24
  int32_t v15; // w25
  int ServantLimitCountSealAfter; // w26
  int32_t CardImageLimitCount; // w25
  int32_t v18; // w25
  int32_t LimitCountByImageLimit_40661544; // w2
  int32_t v20; // w28
  int32_t v21; // w29
  ServantOverwriteStatus_o *v22; // x27
  ServantLimitImageMaster_o *v23; // [xsp+60h] [xbp-70h]

  if ( (byte_4CB2B14 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&IconLabelInfo_TypeInfo);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
    sub_1C6BA08(&ServantOverwriteStatus_TypeInfo);
    byte_4CB2B14 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_object )
  {
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)UserEventAlloutBattleMaster__GetClearDeckInfo(
                                                                   (UserEventAlloutBattleMaster_o *)Master_object,
                                                                   questId,
                                                                   0);
    if ( !ClearDeckInfo )
      goto LABEL_31;
    v8 = System_Collections_Generic_List_object___ToArray(
           ClearDeckInfo,
           (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
    v23 = (ServantLimitImageMaster_o *)ClearDeckInfo;
    if ( !servantFaceIconList )
LABEL_31:
      sub_1C6BC60(ClearDeckInfo, v7);
    v10 = 0;
    while ( v10 < servantFaceIconList->fields._size )
    {
      ClearDeckInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     servantFaceIconList,
                                                                     v10,
                                                                     (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
      v11 = (ServantFaceIconComponent_o *)ClearDeckInfo;
      if ( v8 && (max_length_low = LODWORD(v8->max_length), v10 < (int)max_length_low) )
      {
        if ( v10 >= max_length_low )
          sub_1C6BC68(ClearDeckInfo);
        v13 = (int32_t *)v8->m_Items[v10];
        v14 = (IconLabelInfo_o *)sub_1C6BC54(IconLabelInfo_TypeInfo);
        IconLabelInfo___ctor(v14, 0);
        if ( !v13 || !v14 )
          goto LABEL_31;
        IconLabelInfo__Set_41149608(v14, 2, v13[6], v13[6], 0, 0, 1, 0, 0, 0);
        v15 = v13[8];
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        ServantLimitCountSealAfter = ImageLimitCount__ConvertDispLimitCountForClient(v15, 0);
        if ( ServantLimitCountSealAfter <= 10 )
        {
          v18 = v13[7];
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          LimitCountByImageLimit_40661544 = ImageLimitCount__GetLimitCountByImageLimit_40661544(
                                              ServantLimitCountSealAfter,
                                              v18,
                                              0);
          ClearDeckInfo = (System_Collections_Generic_List_object__o *)v23;
          if ( !v23 )
            goto LABEL_31;
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         v23,
                                         v13[5],
                                         LimitCountByImageLimit_40661544,
                                         0);
          CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v13[5], ServantLimitCountSealAfter, 1, 0, 0);
        }
        else
        {
          CardImageLimitCount = v13[8];
        }
        v20 = v13[5];
        v21 = v13[7];
        v22 = (ServantOverwriteStatus_o *)sub_1C6BC54(ServantOverwriteStatus_TypeInfo);
        ServantOverwriteStatus___ctor_33625480(v22, v20, v21, ServantLimitCountSealAfter, 0);
        if ( !v22 || !v11 )
          goto LABEL_31;
        ServantFaceIconComponent__SetIcon(
          v11,
          v13[5],
          v22->fields._Rarity_k__BackingField,
          v13[7],
          CardImageLimitCount,
          v13[9],
          v14,
          0,
          2,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          v22->fields._ActualRarity_k__BackingField,
          0,
          0);
      }
      else
      {
        if ( !ClearDeckInfo )
          goto LABEL_31;
        ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)ClearDeckInfo, 0);
      }
      servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
      ++v10;
      if ( !servantFaceIconList )
        goto LABEL_31;
    }
  }
}