void ServantStatusCharaGraphListViewItem___ctor(
        ServantStatusCharaGraphListViewItem_o *this,
        int32_t index,
        ServantStatusListViewItem_o *mainInfo,
        int32_t limitCountStage,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewItem_o *v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v7 = this;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  v7->fields.mainInfo = mainInfo;
  v7 = (ServantStatusCharaGraphListViewItem_o *)((char *)v7 + 120);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v7, (int32_t)mainInfo, v8, v9, v10, v11, v12, v13);
  LODWORD(v7->monitor) = limitCountStage;
}


bool ServantStatusCharaGraphListViewItem__get_IsSealed(
        ServantStatusCharaGraphListViewItem_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v4; // w20
  int32_t LimitCount; // w1

  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_7;
  if ( ServantStatusListViewItem__get_IsServant(mainInfo, 0) )
  {
    mainInfo = this->fields.mainInfo;
    if ( mainInfo )
    {
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(mainInfo, 0, 0);
      if ( this->fields.mainInfo )
      {
        v4 = (int)mainInfo;
        LimitCount = ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0);
        return LimitCountUtility__IsSealed(v4, LimitCount, this->fields.limitCountStage, 1, 0);
      }
    }
LABEL_7:
    sub_2213CDC(mainInfo, method);
  }
  return 0;
}


int32_t ServantStatusCharaGraphListViewItem__get_LimitCountStage(
        ServantStatusCharaGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.limitCountStage;
}


int32_t ServantStatusCharaGraphListViewItem__get_LimitCountStageIndexZero(
        ServantStatusCharaGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return LimitCountUtility__ConvertLimitCountStageIndexOneToZero(this->fields.limitCountStage, 0);
}


int32_t ServantStatusCharaGraphListViewItem__get_LimitCountStageSealAfterIndexZero(
        ServantStatusCharaGraphListViewItem_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v4; // w20
  int32_t LimitCount; // w0
  int32_t limitCountStage; // w0

  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_8;
  if ( !ServantStatusListViewItem__get_IsServant(mainInfo, 0) )
  {
    limitCountStage = this->fields.limitCountStage;
    return LimitCountUtility__ConvertLimitCountStageIndexOneToZero(limitCountStage, 0);
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(mainInfo, 0, 0),
        !this->fields.mainInfo) )
  {
LABEL_8:
    sub_2213CDC(mainInfo, method);
  }
  v4 = (int)mainInfo;
  LimitCount = ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0);
  limitCountStage = LimitCountUtility__GetSealAfter(v4, LimitCount, this->fields.limitCountStage, 1, 0);
  return LimitCountUtility__ConvertLimitCountStageIndexOneToZero(limitCountStage, 0);
}


ServantStatusListViewItem_o *ServantStatusCharaGraphListViewItem__get_MainInfo(
        ServantStatusCharaGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.mainInfo;
}