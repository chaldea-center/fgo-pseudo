void ResultItemComponent___ctor(ResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ResultItemComponent__Clear(ResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  baseObject = this->fields.baseObject;
  if ( !baseObject
    || (UnityEngine_GameObject__SetActive(baseObject, 0, 0),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.bonusSprite) == 0)
    || (baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive(baseObject, 0, 0),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon) == 0) )
  {
    sub_1C6BC60(baseObject, method);
  }
  ItemIconComponent__Clear((ItemIconComponent_o *)baseObject, 0);
}


void ResultItemComponent__Set(
        ResultItemComponent_o *this,
        GiftEntity_o *giftEnt,
        int32_t count,
        int32_t overwriteItemId,
        const MethodInfo *method)
{
  GiftEntity_o *v5; // x19
  ResultItemComponent_o *v6; // x22
  int32_t v7; // w20
  int32_t num; // w3
  int64_t v10; // x3

  if ( !giftEnt )
    goto LABEL_19;
  v5 = giftEnt;
  v6 = this;
  if ( giftEnt->fields.objectId < 1 )
  {
    ResultItemComponent__Clear(this, (const MethodInfo *)giftEnt);
    return;
  }
  this = (ResultItemComponent_o *)this->fields.baseObject;
  v7 = overwriteItemId <= 0 ? giftEnt->fields.objectId : overwriteItemId;
  if ( !this )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  giftEnt = (GiftEntity_o *)(unsigned int)v5->fields.prioredIconId;
  this = (ResultItemComponent_o *)v6->fields.itemIcon;
  if ( (int)giftEnt >= 1 )
  {
    if ( this )
    {
      if ( v5->fields.num <= 1 )
        num = -1;
      else
        num = v5->fields.num;
      ItemIconComponent__SetItemImage_41157324(
        (ItemIconComponent_o *)this,
        (int32_t)giftEnt,
        v5->fields.objectId,
        num,
        0);
      return;
    }
LABEL_19:
    sub_1C6BC60(this, giftEnt);
  }
  if ( !this )
    goto LABEL_19;
  if ( count < 1 )
    v10 = -1;
  else
    v10 = (unsigned int)count;
  ItemIconComponent__SetGift_41153640((ItemIconComponent_o *)this, v5->fields.type, v7, v10, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ResultItemComponent__SetExtra(ResultItemComponent_o *this, int32_t imgId, int32_t bgId, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  if ( imgId < 1 )
  {
    ResultItemComponent__Clear(this, *(const MethodInfo **)&imgId);
  }
  else
  {
    baseObject = this->fields.baseObject;
    if ( !baseObject
      || (UnityEngine_GameObject__SetActive(baseObject, 1, 0),
          (baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon) == 0) )
    {
      sub_1C6BC60(baseObject, *(_QWORD *)&imgId);
    }
    ItemIconComponent__SetItemImage_41151304((ItemIconComponent_o *)baseObject, imgId, bgId, -1, -1, 1, 0);
  }
}


void ResultItemComponent__SetItemIconScale(
        ResultItemComponent_o *this,
        UnityEngine_Vector3_o vec,
        const MethodInfo *method)
{
  UnityEngine_Component_o *itemIcon; // x0
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
  if ( !itemIcon )
    sub_1C6BC60(0, method);
  z = vec.fields.z;
  y = vec.fields.y;
  x = vec.fields.x;
  gameObject = UnityEngine_Component__get_gameObject(itemIcon, 0);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  GameObjectExtensions__SetLocalScale(gameObject, v8, 0);
}


void ResultItemComponent__SetRareItem(ResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bonusSprite; // x0

  bonusSprite = (UnityEngine_Component_o *)this->fields.bonusSprite;
  if ( !bonusSprite
    || (bonusSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bonusSprite, 0)) == 0 )
  {
    sub_1C6BC60(bonusSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bonusSprite, 1, 0);
}