void BoardOptionAlloutComponent___ctor(BoardOptionAlloutComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BoardOptionAlloutComponent__SetIcon(BoardOptionAlloutComponent_o *this, int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_Collections_Generic_List_object__o *ClearDeckInfo; // x0
  System_Object_array *v7; // x20
  System_Collections_Generic_List_object__o *servantFaceIconList; // x8
  signed __int64 v9; // x22
  ServantFaceIconComponent_o *v10; // x23
  unsigned __int64 max_length_low; // x8
  int32_t *v12; // x21
  IconLabelInfo_o *v13; // x24
  int32_t v14; // w25
  int ServantLimitCountSealAfter; // w26
  int32_t CardImageLimitCount; // w25
  int32_t v17; // w25
  int32_t LimitCountByImageLimit_40431920; // w2
  int32_t v19; // w28
  int32_t v20; // w29
  ServantOverwriteStatus_o *v21; // x27
  ServantLimitImageMaster_o *v22; // [xsp+60h] [xbp-70h]

  if ( (byte_4C3F829 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&IconLabelInfo_TypeInfo);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
    sub_1C37058(&ServantOverwriteStatus_TypeInfo);
    byte_4C3F829 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_object )
  {
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)UserEventAlloutBattleMaster__GetClearDeckInfo(
                                                                   (UserEventAlloutBattleMaster_o *)Master_object,
                                                                   questId,
                                                                   0);
    if ( !ClearDeckInfo )
      goto LABEL_31;
    v7 = System_Collections_Generic_List_object___ToArray(
           ClearDeckInfo,
           (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
    v22 = (ServantLimitImageMaster_o *)ClearDeckInfo;
    if ( !servantFaceIconList )
LABEL_31:
      sub_1C372B4(ClearDeckInfo);
    v9 = 0;
    while ( v9 < servantFaceIconList->fields._size )
    {
      ClearDeckInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     servantFaceIconList,
                                                                     v9,
                                                                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
      v10 = (ServantFaceIconComponent_o *)ClearDeckInfo;
      if ( v7 && (max_length_low = LODWORD(v7->max_length), v9 < (int)max_length_low) )
      {
        if ( v9 >= max_length_low )
          sub_1C372BC(ClearDeckInfo);
        v12 = (int32_t *)v7->m_Items[v9];
        v13 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
        IconLabelInfo___ctor(v13, 0);
        if ( !v12 || !v13 )
          goto LABEL_31;
        IconLabelInfo__Set_40917868(v13, 2, v12[6], v12[6], 0, 0, 1, 0, 0, 0);
        v14 = v12[8];
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        ServantLimitCountSealAfter = ImageLimitCount__ConvertDispLimitCountForClient(v14, 0);
        if ( ServantLimitCountSealAfter <= 10 )
        {
          v17 = v12[7];
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          LimitCountByImageLimit_40431920 = ImageLimitCount__GetLimitCountByImageLimit_40431920(
                                              ServantLimitCountSealAfter,
                                              v17,
                                              0);
          ClearDeckInfo = (System_Collections_Generic_List_object__o *)v22;
          if ( !v22 )
            goto LABEL_31;
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         v22,
                                         v12[5],
                                         LimitCountByImageLimit_40431920,
                                         0);
          CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v12[5], ServantLimitCountSealAfter, 1, 0, 0);
        }
        else
        {
          CardImageLimitCount = v12[8];
        }
        v19 = v12[5];
        v20 = v12[7];
        v21 = (ServantOverwriteStatus_o *)sub_1C372A4(ServantOverwriteStatus_TypeInfo);
        ServantOverwriteStatus___ctor_33410912(v21, v19, v20, ServantLimitCountSealAfter, 0);
        if ( !v21 || !v10 )
          goto LABEL_31;
        ServantFaceIconComponent__SetIcon(
          v10,
          v12[5],
          v21->fields._Rarity_k__BackingField,
          v12[7],
          CardImageLimitCount,
          v12[9],
          v13,
          0,
          2,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          v21->fields._ActualRarity_k__BackingField,
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
      ++v9;
      if ( !servantFaceIconList )
        goto LABEL_31;
    }
  }
}