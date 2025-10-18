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
    sub_1C372B4(baseObject);
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
  ResultItemComponent_o *v6; // x22
  int32_t v7; // w20
  int prioredIconId; // w1
  int32_t num; // w3
  int64_t v11; // x3

  if ( !giftEnt )
    goto LABEL_19;
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
  prioredIconId = giftEnt->fields.prioredIconId;
  this = (ResultItemComponent_o *)v6->fields.itemIcon;
  if ( prioredIconId >= 1 )
  {
    if ( this )
    {
      if ( giftEnt->fields.num <= 1 )
        num = -1;
      else
        num = giftEnt->fields.num;
      ItemIconComponent__SetItemImage_40925584(
        (ItemIconComponent_o *)this,
        prioredIconId,
        giftEnt->fields.objectId,
        num,
        0);
      return;
    }
LABEL_19:
    sub_1C372B4(this);
  }
  if ( !this )
    goto LABEL_19;
  if ( count < 1 )
    v11 = -1;
  else
    v11 = (unsigned int)count;
  ItemIconComponent__SetGift_40921900((ItemIconComponent_o *)this, giftEnt->fields.type, v7, v11, 0, 0);
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
      sub_1C372B4(baseObject);
    }
    ItemIconComponent__SetItemImage_40919564((ItemIconComponent_o *)baseObject, imgId, bgId, -1, -1, 1, 0);
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
    sub_1C372B4(0);
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
    sub_1C372B4(bonusSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bonusSprite, 1, 0);
}