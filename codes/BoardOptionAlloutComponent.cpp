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
  __int64 v11; // x2
  ServantFaceIconComponent_o *v12; // x23
  unsigned __int64 max_length_low; // x8
  int32_t *v14; // x21
  IconLabelInfo_o *v15; // x24
  int32_t v16; // w25
  int ServantLimitCountSealAfter; // w26
  int32_t CardImageLimitCount; // w25
  int32_t v19; // w25
  int32_t LimitCountByImageLimit_40210308; // w2
  int32_t v21; // w28
  int32_t v22; // w29
  ServantOverwriteStatus_o *v23; // x27
  ServantLimitImageMaster_o *v24; // [xsp+60h] [xbp-70h]

  if ( (byte_4C23B6E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&IconLabelInfo_TypeInfo);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
    sub_1C2D490(&ServantOverwriteStatus_TypeInfo);
    byte_4C23B6E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
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
           (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
    v24 = (ServantLimitImageMaster_o *)ClearDeckInfo;
    if ( !servantFaceIconList )
LABEL_31:
      sub_1C2D6EC(ClearDeckInfo, v7);
    v10 = 0;
    while ( v10 < servantFaceIconList->fields._size )
    {
      ClearDeckInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     servantFaceIconList,
                                                                     v10,
                                                                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
      v12 = (ServantFaceIconComponent_o *)ClearDeckInfo;
      if ( v8 && (max_length_low = LODWORD(v8->max_length), v10 < (int)max_length_low) )
      {
        if ( v10 >= max_length_low )
          sub_1C2D6F4(ClearDeckInfo, v7, v11);
        v14 = (int32_t *)v8->m_Items[v10];
        v15 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
        IconLabelInfo___ctor(v15, 0);
        if ( !v14 || !v15 )
          goto LABEL_31;
        IconLabelInfo__Set_40696284(v15, 2, v14[6], v14[6], 0, 0, 1, 0, 0, 0);
        v16 = v14[8];
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        ServantLimitCountSealAfter = ImageLimitCount__ConvertDispLimitCountForClient(v16, 0);
        if ( ServantLimitCountSealAfter <= 10 )
        {
          v19 = v14[7];
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          LimitCountByImageLimit_40210308 = ImageLimitCount__GetLimitCountByImageLimit_40210308(
                                              ServantLimitCountSealAfter,
                                              v19,
                                              0);
          ClearDeckInfo = (System_Collections_Generic_List_object__o *)v24;
          if ( !v24 )
            goto LABEL_31;
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         v24,
                                         v14[5],
                                         LimitCountByImageLimit_40210308,
                                         0);
          CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v14[5], ServantLimitCountSealAfter, 1, 0, 0);
        }
        else
        {
          CardImageLimitCount = v14[8];
        }
        v21 = v14[5];
        v22 = v14[7];
        v23 = (ServantOverwriteStatus_o *)sub_1C2D6DC(ServantOverwriteStatus_TypeInfo);
        ServantOverwriteStatus___ctor_33445788(v23, v21, v22, ServantLimitCountSealAfter, 0);
        if ( !v23 || !v12 )
          goto LABEL_31;
        ServantFaceIconComponent__SetIcon(
          v12,
          v14[5],
          v23->fields._Rarity_k__BackingField,
          v14[7],
          CardImageLimitCount,
          v14[9],
          v15,
          0,
          2,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          v23->fields._ActualRarity_k__BackingField,
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